// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// The GameEngine is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation version 3 of the License 
//
// The GameEngine is distributed in the hope that it will be useful,
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
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "DynamidWidget.h"

#include <QXmlTree/QXmlTreeNode.h>
#include <GameEngine/GameEngine.h>
#include <Qt/qtextstream.h>

DynamidWidget::DynamidWidget(QWidget* parent /*= 0*/, Qt::WFlags flags /*= 0*/) : QWidget(parent, flags), m_currentNode(0)
{
	setupUi(this);

	connect(m_active, SIGNAL(toggled(bool)), this, SLOT(setActive(bool)));

}


DynamidWidget::~DynamidWidget()
{
}

bool DynamidWidget::setCurrentNode(QXmlTreeNode *node)
{		
	if (node && node->xmlNode().tagName() == "Dynamid")
	{				
		m_currentNode = 0;		
		m_active->setChecked(
			node->xmlNode().attribute("active", "false").compare("true",Qt::CaseInsensitive) == 0 ||
			node->xmlNode().attribute("active", "0").compare("1",Qt::CaseInsensitive) == 0);
		m_currentNode = node;
		return true;
	}
	else
		return false;
}

void DynamidWidget::setActive(bool active)
{
	if( m_currentNode )
	{
		m_currentNode->xmlNode().setAttribute("active", active);
		updateCollision();
	}
}

void DynamidWidget::updateCollision()
{
	if (m_currentNode == 0)	return;
	QString entityName = m_currentNode->xmlNode().parentNode().toElement().attribute("name");
	QString xmlData;
	QTextStream stream(&xmlData);
	m_currentNode->xmlNode().save(stream, 4);	
	unsigned int entityID = GameEngine::entityWorldID(qPrintable(entityName));	
	GameEngine::setComponentData(entityID, "Dynamid", qPrintable(xmlData));	
	emit modified(true);
}

