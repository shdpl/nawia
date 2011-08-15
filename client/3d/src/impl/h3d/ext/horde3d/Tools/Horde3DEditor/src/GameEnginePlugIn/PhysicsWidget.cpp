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
#include "PhysicsWidget.h"

#include <Qt/qdom.h>
#include <Qt/qmessagebox.h>
#include <Qt/qtextstream.h>

#include <QXmlTree/QXmlTreeNode.h>
#include <Horde3D/Horde3D.h>
#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEngine_BulletPhysics.h>
#include <QSceneNode.h>


PhysicsWidget::PhysicsWidget(QWidget* parent /*= 0*/, Qt::WFlags flags /*= 0*/) : QWidget(parent, flags)
{
	setupUi(this);
	connect(m_mass, SIGNAL(valueChanged(double)), this, SLOT(massChanged(double)));
	connect(m_mass, SIGNAL(valueChanged(double)), this, SLOT(updatePhysics()));
	connect(m_kinematic, SIGNAL(toggled(bool)), this, SLOT(kinematicChanged(bool)));
	connect(m_kinematic, SIGNAL(toggled(bool)), this, SLOT(updatePhysics()));
	connect(m_shape, SIGNAL(currentIndexChanged(int)), this, SLOT(shapeChanged(int)));
	connect(m_shape, SIGNAL(currentIndexChanged(int)), this, SLOT(updatePhysics()));
	connect(m_width, SIGNAL(valueChanged(double)), this, SLOT(updateBox()));
	connect(m_width, SIGNAL(valueChanged(double)), this, SLOT(updatePhysics()));
	connect(m_height, SIGNAL(valueChanged(double)), this, SLOT(updateBox()));
	connect(m_height, SIGNAL(valueChanged(double)), this, SLOT(updatePhysics()));
	connect(m_depth, SIGNAL(valueChanged(double)), this, SLOT(updateBox()));
	connect(m_depth, SIGNAL(valueChanged(double)), this, SLOT(updatePhysics()));
	connect(m_radius, SIGNAL(valueChanged(double)), this, SLOT(updateSphere(double)));
	connect(m_radius, SIGNAL(valueChanged(double)), this, SLOT(updatePhysics()));
	connect(m_cylRadius, SIGNAL(valueChanged(double)), this, SLOT(updateCylinder()));
	connect(m_cylRadius, SIGNAL(valueChanged(double)), this, SLOT(updatePhysics()));
	connect(m_cylHeight, SIGNAL(valueChanged(double)), this, SLOT(updateCylinder()));
	connect(m_cylHeight, SIGNAL(valueChanged(double)), this, SLOT(updatePhysics()));
	connect(m_restitution, SIGNAL(valueChanged(double)), this, SLOT(updateRestitution(double)));
	connect(m_restitution, SIGNAL(valueChanged(double)), this, SLOT(updatePhysics()));
	connect(m_staticFriction, SIGNAL(valueChanged(double)), this, SLOT(updateFriction(double)));
	connect(m_staticFriction, SIGNAL(valueChanged(double)), this, SLOT(updatePhysics()));
	connect(m_resetWorld, SIGNAL(clicked()), this, SLOT(resetPhysics()));	
	connect(m_debug, SIGNAL(toggled(bool)), this, SLOT(toggleDebugRendering(bool)));
	connect(m_enabled, SIGNAL(toggled(bool)), this, SLOT(togglePhysics(bool)));
	m_debug->setChecked(GameEngine::physicsShapeRenderingEnabled());
	m_enabled->setChecked(GameEngine::physicsEnabled());
}


PhysicsWidget::~PhysicsWidget()
{
}

bool PhysicsWidget::setCurrentNode(QXmlTreeNode *node)
{		
	if (node && (node->xmlNode().tagName() == "BulletPhysics" || node->xmlNode().tagName() == "Physics"))
	{				
		m_currentNode = 0;
		m_mass->setValue(node->xmlNode().attribute("mass","0.0").toFloat());
		m_width->setValue(node->xmlNode().attribute("x", "1").toFloat());
		m_height->setValue(node->xmlNode().attribute("y","1").toFloat());
		m_depth->setValue(node->xmlNode().attribute("z", "1").toFloat());
		m_radius->setValue(node->xmlNode().attribute("radius", "1").toFloat());
		m_cylRadius->setValue(node->xmlNode().attribute("radius", "1").toFloat());
		m_cylHeight->setValue(node->xmlNode().attribute("height", "1").toFloat());
		//int meshIndex = m_shape->findText("Mesh");
		//int nodeType = node->parent()->parent()->property("Type").toInt();
		//if(  nodeType != QSceneNode::MESHNODE && meshIndex != -1) 
		//	m_shape->removeItem( meshIndex );
		//else if( meshIndex == -1 && nodeType == QSceneNode::MESHNODE )
		//	m_shape->addItem("Mesh");

		int index = m_shape->findText(node->xmlNode().attribute("shape"));
		if ( index == m_shape->currentIndex() ) shapeChanged(index);
		else m_shape->setCurrentIndex(index);		
		m_restitution->setValue(node->xmlNode().attribute("restitution", "0").toFloat());
		m_staticFriction->setValue(node->xmlNode().attribute("static_friction").toFloat());
		m_kinematic->setChecked(
			node->xmlNode().attribute("kinematic", "false").compare("true",Qt::CaseInsensitive) == 0 ||
			node->xmlNode().attribute("kinematic", "0").compare("1",Qt::CaseInsensitive) == 0);		
		m_currentNode = node;
		return true;
	}
	else
		return false;
}

void PhysicsWidget::shapeChanged(int index)
{
	m_shapeWidget->setCurrentIndex(index);	
	if (m_currentNode == 0)
		return;

	switch(index)
	{
	case 0:
		m_currentNode->xmlNode().removeAttribute("radius");
		m_currentNode->xmlNode().removeAttribute("height");
		break;
	case 1:
		m_currentNode->xmlNode().removeAttribute("x");
		m_currentNode->xmlNode().removeAttribute("y");
		m_currentNode->xmlNode().removeAttribute("z");
		m_currentNode->xmlNode().removeAttribute("height");
		break;
	case 2:
		m_currentNode->xmlNode().removeAttribute("x");
		m_currentNode->xmlNode().removeAttribute("y");
		m_currentNode->xmlNode().removeAttribute("z");
	case 3:
		m_currentNode->xmlNode().removeAttribute("radius");
		m_currentNode->xmlNode().removeAttribute("x");
		m_currentNode->xmlNode().removeAttribute("y");
		m_currentNode->xmlNode().removeAttribute("z");
		m_currentNode->xmlNode().removeAttribute("height");
		break;
	}
	m_currentNode->xmlNode().setAttribute("shape", m_shape->currentText());
}

void PhysicsWidget::massChanged(double value)
{	
	m_kinematic->setEnabled(value == 0.0);
	if (m_currentNode == 0)
		return;
	m_currentNode->xmlNode().setAttribute("mass", value);
}

void PhysicsWidget::kinematicChanged(bool enabled)
{
	m_mass->setDisabled(enabled);
	if (m_currentNode == 0)	return;
	if (enabled)
		m_currentNode->xmlNode().setAttribute("kinematic", enabled);
	else
		m_currentNode->xmlNode().removeAttribute("kinematic");
}

void PhysicsWidget::updateBox()
{
	if (m_currentNode == 0)
		return;
	m_currentNode->xmlNode().setAttribute("x", m_width->value());
	m_currentNode->xmlNode().setAttribute("y", m_height->value());
	m_currentNode->xmlNode().setAttribute("z", m_depth->value());	
}

void PhysicsWidget::updateSphere(double value)
{	
	if (m_currentNode == 0)	return;
	m_currentNode->xmlNode().setAttribute("radius", value);	
}


void PhysicsWidget::updateCylinder()
{	
	if (m_currentNode == 0) return;
	m_currentNode->xmlNode().setAttribute("radius", m_cylRadius->value());	
	m_currentNode->xmlNode().setAttribute("height", m_cylHeight->value());	

}

void PhysicsWidget::updateRestitution(double value)
{
	if (m_currentNode == 0)
		return;
	m_currentNode->xmlNode().setAttribute("restitution", value);	

}

void PhysicsWidget::updateFriction(double value)
{
	if (m_currentNode == 0)
		return;
	m_currentNode->xmlNode().setAttribute("static_friction", value);	
}

void PhysicsWidget::updatePhysics()
{
	if (m_currentNode == 0) return;
	QString entityName = m_currentNode->xmlNode().parentNode().toElement().attribute("name");
	QString xmlData;
	QTextStream stream(&xmlData);
	m_currentNode->xmlNode().save(stream, 4);	
	unsigned int entityID = GameEngine::entityWorldID(qPrintable(entityName));
	GameEngine::setComponentData(entityID, "BulletPhysics", qPrintable(xmlData));	
	emit modified(true);
}

void PhysicsWidget::resetPhysics()
{
	GameEngine::resetPhysics();
}

void PhysicsWidget::toggleDebugRendering(bool enabled)
{
	GameEngine::setPhysicsShapeRenderingEnabled( enabled );
}

void PhysicsWidget::togglePhysics(bool enabled)
{
	GameEngine::setPhysicsEnabled(enabled);
}