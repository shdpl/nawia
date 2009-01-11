// ****************************************************************************************
//
// Horde3D Scene Editor 
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the Horde3D Scene Editor.
//
// The Horde3D Scene Editor is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation version 3 of the License 
//
// The Horde3D Scene Editor is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// ****************************************************************************************
#include "QTexUnit.h"

#include <Horde3D.h>

QTexUnit::QTexUnit(const QDomElement& texUnitNode, QObject* parent /*= 0*/) : QObject(parent), m_texUnitNode(texUnitNode)
{
	
}


QTexUnit::~QTexUnit()
{
}

int QTexUnit::unit() const
{
	return m_texUnitNode.attribute("unit").toInt();

}

void QTexUnit::setUnit(const int unit)
{
	m_texUnitNode.setAttribute("unit", unit);
}


Texture QTexUnit::map() const
{
	return Texture(m_texUnitNode.attribute("map"), m_texUnitNode.attribute("type", "2D").compare("CUBE") == 0 ? ResourceTypes::TextureCube : ResourceTypes::Texture2D);

}

void QTexUnit::setMap(const Texture& map)
{
	m_texUnitNode.setAttribute("map", map.FileName);
}

bool QTexUnit::compressed() const
{
	return m_texUnitNode.attribute("allowCompression", "true").compare("true", Qt::CaseInsensitive)==0 ||
		   m_texUnitNode.attribute("allowCompression", "1").compare("1", Qt::CaseInsensitive)==0;
}

void QTexUnit::setCompressed(bool compressionAllowed)
{
	m_texUnitNode.setAttribute("allowCompression", compressionAllowed);
}

bool QTexUnit::cube() const
{
	return m_texUnitNode.attribute("type", "2D").compare("CUBE") == 0;
}

void QTexUnit::setCube(bool cube)
{
	m_texUnitNode.setAttribute("type", cube ? "CUBE" : "2D");
}



