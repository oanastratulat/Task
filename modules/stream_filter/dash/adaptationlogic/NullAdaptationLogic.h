/*
 * NullAdaptationLogic.h
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

#ifndef NULLADAPTATIONLOGIC_H_
#define NULLADAPTATIONLOGIC_H_

#include "adaptationlogic/AbstractAdaptationLogic.h"
#include "http/Chunk.h"
#include "xml/Node.h"
#include "mpd/IMPDManager.h"
#include "exceptions/EOFException.h"

namespace dash
{
    namespace logic
    {
        class NullAdaptationLogic : public AbstractAdaptationLogic
        {
            public:
                NullAdaptationLogic         (dash::mpd::IMPDManager *mpdManager) : AbstractAdaptationLogic(mpdManager)  {}
                virtual ~NullAdaptationLogic()                                                                          {}

                dash::http::Chunk* getNextChunk () throw(dash::exception::EOFException) { throw dash::exception::EOFException(); }
        };
    }
}

#endif /* NULLADAPTATIONLOGIC_H_ */
