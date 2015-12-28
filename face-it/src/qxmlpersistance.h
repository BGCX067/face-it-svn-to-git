/***************************************************************************
 *   Copyright (C) 2008 by Ivan Dilchovski   *
 *   root.darkstar@gmail.com   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef QXMLPERSISTANCE_H
#define QXMLPERSISTANCE_H

#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QString>
#include <QFile>

#include "network.h"
#include "layer.h"
#include "NullParamEx.h"

/**
Manages XML import/export via QT XML classes

	@author Ivan Dilchovski <root.darkstar@gmail.com>
*/
class QXmlPersistance{
public:
	void exportToXml(QString filename);
	Network* importFromXml(QString filename);
	
	void loadNetwork(Network* _network);
private:
	Network* network;
	void exportLayer(QXmlStreamWriter &writer,
		    	 Layer* layer);

	Layer* importLayer(QXmlStreamReader &reader);

};

#endif
