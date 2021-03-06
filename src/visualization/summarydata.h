/**************************************************************************
 *  This file is part of QXmlEdit                                         *
 *  Copyright (C) 2012-2018 by Luca Bellonda and individual contributors  *
 *    as indicated in the AUTHORS file                                    *
 *  lbellonda _at_ gmail.com                                              *
 *                                                                        *
 * This library is free software; you can redistribute it and/or          *
 * modify it under the terms of the GNU Library General Public            *
 * License as published by the Free Software Foundation; either           *
 * version 2 of the License, or (at your option) any later version.       *
 *                                                                        *
 * This library is distributed in the hope that it will be useful,        *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU      *
 * Library General Public License for more details.                       *
 *                                                                        *
 * You should have received a copy of the GNU Library General Public      *
 * License along with this library; if not, write to the                  *
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,       *
 * Boston, MA  02110-1301  USA                                            *
 **************************************************************************/


#ifndef SUMMARYDATA_H
#define SUMMARYDATA_H

#include "xmlEdit.h"

class SummaryData
{
public:
    int totalFragments;
    int totalAttributes;
    int totalElements;
    qint64 totalSize;
    qint64 totalText; // the nodes text content.
    quint64 totalAttributesSize;

    int maxAttributes;
    int maxChildren;
    int maxSize;
    int maxText;
    int maxAttributeSizePerElement;

    /*
    float attributesPerFragmentMean;
    float attributesPerFragmentMedian;
    float sizePerFragmentMean;
    float sizePerFragmentMedian;
    float elementsPerFragmentMean;
    float elementsPerFragmentMedian;
    */
    int levels;

    SummaryData();
    ~SummaryData();

    void reset();
    double meanAttributesSize();
};

#endif // SUMMARYDATA_H
