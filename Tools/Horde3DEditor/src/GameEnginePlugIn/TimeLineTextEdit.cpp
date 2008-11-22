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


// ****************************************************************************************
//
// GameEngine Horde3D Editor Plugin of the University of Augsburg
// Phoneme Editor
// ---------------------------------------------------------
// Copyright (C) 2008 Felix Kistler
// 
// ****************************************************************************************

#include "TimeLineTextEdit.h"

TimeLineTextEdit::TimeLineTextEdit(const QDomElement &xmlNode, int maxTime, 
	QWidget * parent /*=0*/) : QTextEdit(parent), m_xmlNode(xmlNode), m_maxTime(maxTime)
{
	m_value = QString(m_xmlNode.attribute("value"));
	m_start = m_xmlNode.attribute("start", "0").toInt();
	m_end = m_xmlNode.attribute("end", "0").toInt();
	setPlainText(m_value);
	if( m_maxTime != 0 && parent )
	{
		setGeometry( (int)( ((float)m_start/m_maxTime) * (parent->width()-2) + 1.5f ), 1,
		(int)( ((float)(m_end-m_start)/m_maxTime) * (parent->width()-2) + 0.5f ), parent->height()-2 );
	}

	connect(this, SIGNAL(textChanged()), this, SLOT(currentTextChanged()) );
}

TimeLineTextEdit::~TimeLineTextEdit()
{
}

void TimeLineTextEdit::setValue(const QString& value)
{
	m_xmlNode.setAttribute("value", value);
	m_value = QString(value);
	emit xmlNodeChanged();
}

void TimeLineTextEdit::currentTextChanged()
{	
	m_xmlNode.setAttribute("value", toPlainText() );
	m_value = QString( toPlainText() );
	emit xmlNodeChanged();
}

