/*
 * HTTPConnection.h
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

#ifndef HTTPCONNECTION_H_
#define HTTPCONNECTION_H_

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <vlc_common.h>
#include <vlc_plugin.h>
#include <vlc_stream.h>
#include <vlc_network.h>

#include <string>
#include <stdint.h>
#include <iostream>
#include <sstream>

#include "http/IHTTPConnection.h"

namespace dash
{
    namespace http
    {
        class HTTPConnection : public IHTTPConnection
        {
            public:
                HTTPConnection          ( const std::string& url, stream_t *stream );
                virtual ~HTTPConnection ();

                bool        init            ();
                void        closeSocket     ();

                virtual int     read        (void *p_buffer, size_t len);
                virtual int     peek        (const uint8_t **pp_peek, size_t i_peek);

            private:
                int                     httpSocket;
                std::string             url;
                std::string             hostname;
                std::string             path;
                std::string             request;
                stream_t                *stream;
                stream_t                *urlStream;

                void            parseURL        ();
                bool            sendData        (const std::string& data);
                bool            parseHeader     ();
                std::string     readLine        ();
        };
    }
}

#endif /* HTTPCONNECTION_H_ */
