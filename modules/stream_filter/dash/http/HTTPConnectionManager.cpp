/*
 * HTTPConnectionManager.cpp
 *****************************************************************************
 * Copyright (C) 2010 - 2011 Klagenfurt University
 *
 * Created on: Aug 10, 2010
 * Authors: Christopher Mueller <christopher.mueller@itec.uni-klu.ac.at>
 *          Christian Timmerer  <christian.timmerer@itec.uni-klu.ac.at>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/
#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "HTTPConnectionManager.h"

using namespace dash::http;
using namespace dash::logic;

HTTPConnectionManager::HTTPConnectionManager    (stream_t *stream)
{
    this->timeSecSession    = 0;
    this->bytesReadSession  = 0;
    this->timeSecChunk      = 0;
    this->bytesReadChunk    = 0;
    this->bpsAvg            = 0;
    this->bpsLastChunk      = 0;
    this->chunkCount        = 0;
    this->stream            = stream;
}
HTTPConnectionManager::~HTTPConnectionManager   ()
{
    this->closeAllConnections();
}

IHTTPConnection*    HTTPConnectionManager::getConnection            (std::string url)
{
    HTTPConnection *con = new HTTPConnection(url, this->stream);
    con->init();
    this->connections.push_back(con);
    return con;
}
bool                HTTPConnectionManager::closeConnection          (IHTTPConnection *con)
{
    for(std::vector<HTTPConnection *>::iterator it = this->connections.begin(); it != this->connections.end(); ++it)
    {
        if(*it == con)
        {
            (*it)->closeSocket();
            delete(*it);
            this->connections.erase(it);
            return true;
        }
    }
    return false;
}
bool                HTTPConnectionManager::closeConnection          (Chunk *chunk)
{
    HTTPConnection *con = this->chunkMap[chunk];
    bool ret = this->closeConnection(con);
    this->chunkMap.erase(chunk);
    delete(chunk);
    return ret;
}
void                HTTPConnectionManager::closeAllConnections      ()
{
    for(std::vector<HTTPConnection *>::iterator it = this->connections.begin(); it != this->connections.end(); ++it)
    {
        (*it)->closeSocket();
        delete(*it);
    }
    this->connections.clear();
    this->urlMap.clear();

    std::map<Chunk *, HTTPConnection *>::iterator it;

    for(it = this->chunkMap.begin(); it != this->chunkMap.end(); ++it)
    {
        delete(it->first);
    }

    this->chunkMap.clear();
}
int                 HTTPConnectionManager::read                     (Chunk *chunk, void *p_buffer, size_t len)
{
    if(this->chunkMap.find(chunk) != this->chunkMap.end())
    {
        mtime_t start = mdate();
        int ret = this->chunkMap[chunk]->read(p_buffer, len);
        mtime_t end = mdate();

        double time = ((double)(end - start)) / 1000000;

        this->bytesReadSession += ret;
        this->bytesReadChunk   += ret;
        this->timeSecSession   += time;
        this->timeSecChunk     += time;


        if(this->timeSecSession > 0)
            this->bpsAvg = (this->bytesReadSession / this->timeSecSession) * 8;

        if(this->timeSecChunk > 0)
            this->bpsLastChunk = (this->bytesReadChunk / this->timeSecChunk) * 8;

        if(this->bpsAvg < 0 || this->chunkCount < 2)
            this->bpsAvg = 0;

        if(this->bpsLastChunk < 0 || this->chunkCount < 2)
            this->bpsLastChunk = 0;

        this->notify();

        if(ret <= 0)
            this->closeConnection(chunk);

        return ret;
    }
    else
    {
        this->bytesReadChunk    = 0;
        this->timeSecChunk      = 0;

        this->initConnection(chunk);
        return this->read(chunk, p_buffer, len);
    }
}
int                 HTTPConnectionManager::peek                     (Chunk *chunk, const uint8_t **pp_peek, size_t i_peek)
{
    if(this->chunkMap.find(chunk) != this->chunkMap.end())
        return this->chunkMap[chunk]->peek(pp_peek, i_peek);

    this->initConnection(chunk);
    return this->peek(chunk, pp_peek, i_peek);
}
HTTPConnection*     HTTPConnectionManager::initConnection           (Chunk *chunk)
{
    HTTPConnection *con = new HTTPConnection(chunk->getUrl(), this->stream);
    con->init();
    this->connections.push_back(con);
    this->chunkMap[chunk] = con;
    this->chunkCount++;
    return con;
}
void                HTTPConnectionManager::attach                   (IDownloadRateObserver *observer)
{
    this->rateObservers.push_back(observer);
}
void                HTTPConnectionManager::notify                   ()
{
    for(size_t i = 0; i < this->rateObservers.size(); i++)
        this->rateObservers.at(i)->downloadRateChanged(this->bpsAvg, this->bpsLastChunk);
}
