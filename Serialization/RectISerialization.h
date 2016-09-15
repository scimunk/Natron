/* ***** BEGIN LICENSE BLOCK *****
 * This file is part of Natron <http://www.natron.fr/>,
 * Copyright (C) 2016 INRIA and Alexandre Gauthier-Foichat
 *
 * Natron is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Natron is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Natron.  If not, see <http://www.gnu.org/licenses/gpl-2.0.html>
 * ***** END LICENSE BLOCK ***** */

#ifndef Engine_RectISerialization_h
#define Engine_RectISerialization_h

#include "Serialization/SerializationBase.h"
#include "Serialization/SerializationFwd.h"

SERIALIZATION_NAMESPACE_ENTER

class RectISerialization
: public SerializationObjectBase
{
public:

    int x1,y1,x2,y2;

    RectISerialization()
    : SerializationObjectBase()
    , x1(0)
    , y1(0)
    , x2(0)
    , y2(0)
    {

    }

    virtual void encode(YAML::Emitter& em) const OVERRIDE;

    virtual void decode(const YAML::Node& node) OVERRIDE;
    
};


SERIALIZATION_NAMESPACE_EXIT


#endif // Engine_RectISerialization_h
