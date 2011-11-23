
// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
//
// This file is part of the GameEngine of the University of Augsburg
//
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************

// ****************************************************************************************
//
// GameEngine Agent Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2011 Ionut Damian
// 
// ****************************************************************************************
    
#include "AgentComponent.h"

#include "AgentManager.h"

#include <GameEngine/GameLog.h>
#include <GameEngine/GameEntity.h>
#include <GameEngine/GameEvent.h>
#include <XMLParser/utXMLParser.h>

#include "GameEngine/GameEngine_Scenegraph.h"
#include "Horde3D/Horde3D.h"

GameComponent* AgentComponent::createComponent( GameEntity* owner )
{
	return new AgentComponent( owner );
}

AgentComponent::AgentComponent(GameEntity* owner) : GameComponent(owner, "AgentComponent")
{	
	owner->addListener(GameEvent::AG_SET_ICON, this);
	owner->addListener(GameEvent::AG_SET_ICONVISIBLE, this);
	owner->addListener(GameEvent::AG_SET_VISIBLE, this);
	owner->addListener(GameEvent::AG_SET_PARAM, this);
	owner->addListener(GameEvent::AG_GET_PARAM, this);

	m_eID = owner->worldId();
	m_hID = GameEngine::entitySceneGraphID(m_eID);

	//create and store the sub-components
	comp_movement = new MovementComponent(owner);
	comp_animation = new AnimationComponent(owner);
	comp_gaze = new GazeComponent(owner);
	comp_formation = new FormationComponent(owner);
	
	//we need only one instance of the communicaiton component
	if(AgentManager::instance()->getCommComponent() == 0)
		comp_comm = new CommComponent(owner);
	else
		comp_comm = 0;

	AgentManager::instance()->addComponent(this);

	m_isVisible = true;
	m_icon = 0;
}

AgentComponent::~AgentComponent()
{
	//destruct sub-components
	comp_movement->~MovementComponent();
	comp_animation->~AnimationComponent();
	comp_gaze->~GazeComponent();
	comp_formation->~FormationComponent();
	if(comp_comm != 0)
		comp_comm->~CommComponent();

	AgentManager::instance()->removeComponent(this);
}

void AgentComponent::executeEvent(GameEvent *event)
{
	switch(event->id())
	{
		case GameEvent::AG_SET_ICON:
		{
			// Get event data
			const char* data = static_cast<const char*>(event->data());
			setIcon(data);
			break;
		}
		case GameEvent::AG_SET_ICONVISIBLE:
		{
			// Get event data
			bool* data = static_cast<bool*>(event->data());
			setIconVisible(*data);
			break;
		}
		case GameEvent::AG_SET_VISIBLE:
		{
			// Get event data
			bool* data = static_cast<bool*>(event->data());
			setVisible(*data);
			break;
		}
		case GameEvent::AG_SET_PARAM:
		{
			// Get event data
			AgentConfigData* data = static_cast<AgentConfigData*>(event->data());
			switch(data->m_type)
			{
			case AgentConfigData::INT:
				Config::setParamI((Agent_Param::List)data->m_param, data->m_valueI);
				break;
			case AgentConfigData::FLOAT:
				Config::setParamF((Agent_Param::List)data->m_param, data->m_valueF);
				break;
			case AgentConfigData::STRING:
				Config::setParamS((Agent_Param::List)data->m_param, data->m_valueS);
				break;
			}
			break;
		}
		case GameEvent::AG_GET_PARAM:
		{
			// Get event data
			AgentConfigData* data = static_cast<AgentConfigData*>(event->data());
			switch(data->m_type)
			{
			case AgentConfigData::INT:
				data->m_returnI = Config::getParamI((Agent_Param::List)data->m_param);
				break;
			case AgentConfigData::FLOAT:
				data->m_returnF = Config::getParamF((Agent_Param::List)data->m_param);
				break;
			case AgentConfigData::STRING:
				data->m_returnS = Config::getParamS((Agent_Param::List)data->m_param);
				break;
			}
			break;
		}
	}
}

void AgentComponent::loadFromXml(const XMLNode* node)
{
	//broadcast to sub-components
	comp_movement->loadFromXml(node);
	comp_animation->loadFromXml(node);
	comp_gaze->loadFromXml(node);
	comp_formation->loadFromXml(node);
	if(comp_comm != 0)
		comp_comm->loadFromXml(node);

	/*
	 * Icon parameters
	 */
	Icon* icon;
	XMLNode* icon_xml = &node->getChildNode("Icon");
	if(!icon_xml->isEmpty())
	{	
		if( (icon_xml->getAttribute("name") != 0) && (strcmp(icon_xml->getAttribute("name"), "") != 0) )
		{
			icon = Icon::getInstance( (char*)icon_xml->getAttribute("name") );

			const char* dist = icon_xml->getAttribute("distance");
			if( dist != 0 && strcmp(dist, "") != 0 )
				icon->setDistanceFromAgent( (float)atof(dist) );

			setIcon(icon);
		}
	}
}

void AgentComponent::update()
{
}

AnimationComponent* AgentComponent::getAnimationComponent()
{
	return comp_animation;
}

MovementComponent* AgentComponent::getMovementComponent()
{
	return comp_movement;
}

GazeComponent* AgentComponent::getGazeComponent()
{
	return comp_gaze;
}

FormationComponent* AgentComponent::getFormationComponent()
{
	return comp_formation;
}

CommComponent* AgentComponent::getCommComponent()
{
	return comp_comm;
}

void AgentComponent::setVisible(bool value)
{
	m_isVisible = value;
	GameEngine::setVisible(m_eID, m_isVisible);
}

void AgentComponent::setIconVisible(bool value)
{
	if(m_icon != 0)
		m_icon->setVisible(value);
}

void AgentComponent::setIcon(Icon* s)
{
	if(m_icon != 0)
		delete m_icon;

	m_icon = s;
	m_icon->setVisible(m_isVisible);
	m_icon->setParent(m_hID);
}

void AgentComponent::setIcon(const char* iconName)
{
	setIcon( Icon::getInstance(iconName) );
}

bool AgentComponent::getVisible()
{
	return m_isVisible;
}

int AgentComponent::getEntityID()
{
	return m_eID;
}

int AgentComponent::getHordeID()
{
	return m_hID;
}