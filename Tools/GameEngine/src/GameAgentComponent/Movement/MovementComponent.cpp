
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
    
#include "MovementComponent.h"

#include "../AgentManager.h"

#include <GameEngine/GameLog.h>
#include <GameEngine/GameEntity.h>
#include <GameEngine/GameEvent.h>
#include <GameEngine/utmath.h>

#include <GameEngine/GameEngine_Scenegraph.h>

#include "../utils.h"

#include <XMLParser/utXMLParser.h>

using namespace Horde3D;

GameComponent* MovementComponent::createComponent( GameEntity* owner )
{
	return new MovementComponent( owner );
}

MovementComponent::MovementComponent(GameEntity* owner) : GameComponent(owner, "MovementComponent")
{
	AgentManager::instance()->addComponent(this);
	
	owner->addListener(GameEvent::AG_MOVEMENT, this);
	owner->addListener(GameEvent::AG_MOVEMENT_GET_STATUS, this);

	m_idle = 0;
	m_walkAnimName[0] = '\0';
	m_idleAnimName[0] = '\0';
	m_orientAnimName[0] = '\0';
	
	m_eID = owner->worldId();
	m_hID = GameEngine::entitySceneGraphID(m_eID);
}

MovementComponent::~MovementComponent()
{
	AgentManager::instance()->removeComponent(this);
}

void MovementComponent::executeEvent(GameEvent *event)
{
	switch(event->id())
	{
		case GameEvent::AG_MOVEMENT:
		{
			// Get event data
			AgentMovementData* data = static_cast<AgentMovementData*>(event->data());
			
			switch( data->m_type )
			{
				case AgentMovementData::GoTo_Entity:
				{
					data->m_return = goTo(data->m_targetI, data->m_speed, data->m_putInQueue, data->m_orientAnimName, data->m_walkAnimName);
					break;
				}
				case AgentMovementData::GoTo_Location:
				{
					data->m_return = goTo(data->m_targetV.x, data->m_targetV.y, data->m_targetV.z, data->m_speed, data->m_putInQueue, data->m_orientAnimName, data->m_walkAnimName);
					break;
				}
				case AgentMovementData::Locomotion:
				{
					data->m_return = move(data->m_targetV.x, data->m_targetV.y, data->m_targetV.z, data->m_speed, data->m_putInQueue, data->m_walkAnimName);
					break;
				}
				case AgentMovementData::Orientation:
				{
					data->m_return = turnTowards(data->m_targetV.x, data->m_targetV.y, data->m_targetV.z, data->m_speed, data->m_putInQueue, data->m_orientAnimName);
					break;
				}
				case AgentMovementData::Rotation:
				{
					data->m_return = rotate(data->m_targetV.x, data->m_targetV.y, data->m_targetV.z, data->m_speed, data->m_putInQueue, data->m_orientAnimName);
					break;
				}
			}
			break;
		}
		case GameEvent::AG_MOVEMENT_GET_STATUS:
		{
			// Get event data
			AgentMovementData* data = static_cast<AgentMovementData*>(event->data());
			data->m_return = getStatus(data->m_movementID);
			break;
		}
	}
}

void MovementComponent::loadFromXml(const XMLNode* node)
{
	bool ok = true;

	/*
	 * Animation parameters
	 */
	XMLNode* animation = &node->getChildNode( "Animation", 0 );
	if(!animation->isEmpty())
	{
		if( (animation->getAttribute("idleAnimName") != 0) && (strcmp(animation->getAttribute("idleAnimName"), "") != 0) )
		{
			utils::strcpy((char *)animation->getAttribute("idleAnimName"), m_idleAnimName, c_MaxAnimFileSize);
			m_idle = new Idle(m_eID);
			m_idle->setAnimation(m_idleAnimName);
		}
		else
			ok = false;

		if( (animation->getAttribute("walkAnimName") != 0) && (strcmp(animation->getAttribute("walkAnimName"), "") != 0) )
			utils::strcpy((char *)animation->getAttribute("walkAnimName"), m_walkAnimName, c_MaxAnimFileSize);
		else
			ok = false;

		if( (animation->getAttribute("orientAnimName") != 0) && (strcmp(animation->getAttribute("orientAnimName"), "") != 0) )
			utils::strcpy((char *)animation->getAttribute("orientAnimName"), m_orientAnimName, c_MaxAnimFileSize);
		else
		{
			//we use the walk anim
			utils::strcpy(m_walkAnimName, m_orientAnimName, c_MaxAnimFileSize);
		}
	}

	if(!ok)
		GameLog::errorMessage( "AgentComponent/Movement: error parsing xml, incomplete or missing data for entity %d", m_eID );
}

void MovementComponent::update()
{
	if(m_movementNodes.size() == 0)
	{
		if(m_idle != 0 && !m_idle->isActive())
			m_idle->activate();
		return;
	}

	if(m_idle != 0 && m_idle->isActive())
		m_idle->deactivate();

	std::list<Movement*>::iterator first = m_movementNodes.begin();
	std::list<Movement*>::iterator second = ++m_movementNodes.begin();

	//update first
	if(!(*first)->isActive()) (*first)->activate();
	(*first)->update();

	//update second to do a small blend between orientation and locomotion
	if(second != m_movementNodes.end() && (*first)->getType()==MovementType::ORIENTATION && (*second)->getType()==MovementType::LOCOMOTION )
	{		
		if(!(*second)->isActive()) (*second)->activate();
		(*second)->update();
	}
	
	//check for termination
	if((*first)->hasFinished())
	{
		delete (*first);
		*first = 0;
		m_movementNodes.erase(first);
	}
	if(second != m_movementNodes.end() && (*second)->hasFinished())
	{
		delete (*second);
		*second = 0;
		m_movementNodes.erase(second);
	}
}

int MovementComponent::goTo(int target_eID, float speed, bool putInQueue, const char* orientAnimName, const char* walkAnimName)
{
	Vec3f target = utils::getEntityPosition(target_eID);

	//if we don't want a queue, we must erase all existent movement nodes
	if(!putInQueue)
	{
		clear();
	}

	//orient towards the target
	Orientation* o = new Orientation( m_eID, target, speed );
	o->setAnimation( (orientAnimName == 0) ? m_orientAnimName : orientAnimName );		
	m_movementNodes.push_back( o );
	//move to the target position
	Locomotion* l =  new Locomotion( m_eID, target, speed );
	l->setAnimation( (walkAnimName == 0) ? m_walkAnimName : walkAnimName );
	m_movementNodes.push_back( l );

	return l->getID();
}

int MovementComponent::goTo(float targetX, float targetY, float targetZ, float speed, bool putInQueue, const char* orientAnimName, const char* walkAnimName)
{	
	Vec3f target(targetX, targetY, targetZ);

	//if we don't want a queue, we must erase all existent movement nodes
	if(!putInQueue)
	{
		clear();
	}

	//orient towards the target
	Orientation* o = new Orientation( m_eID, target, speed );
	o->setAnimation( (orientAnimName == 0) ? m_orientAnimName : orientAnimName );
	m_movementNodes.push_back( o );
	//move to the target position
	Locomotion* l =  new Locomotion( m_eID, target, speed );
	l->setAnimation( (walkAnimName == 0) ? m_walkAnimName : walkAnimName );
	m_movementNodes.push_back( l );

	return l->getID();
}

int MovementComponent::move(float targetX, float targetY, float targetZ, float speed, bool putInQueue, const char* animName)
{	
	Vec3f target(targetX, targetY, targetZ);

	//if we don't want a queue, we must erase all existent movement nodes
	if(!putInQueue)
	{
		clear();
	}

	//move to the target position
	Locomotion* l =  new Locomotion( m_eID, target, speed );
	l->setAnimation( (animName == 0) ? m_walkAnimName : animName );
	m_movementNodes.push_back( l );

	return l->getID();
}

int MovementComponent::turnTowards(float targetPosX, float targetPosY, float targetPosZ, float speed, bool putInQueue, const char* animName)
{	
	Vec3f target(targetPosX, targetPosY, targetPosZ);

	//if we don't want a queue, we must erase all existent movement nodes
	if(!putInQueue)
	{
		clear();
	}

	//orient towards the target
	Orientation* o = new Orientation( m_eID, target, speed, false );
	o->setAnimation( (animName == 0) ? m_orientAnimName : animName );
	m_movementNodes.push_back( o );

	return o->getID();
}

int MovementComponent::rotate(float targetRotX, float targetRotY, float targetRotZ, float speed, bool putInQueue, const char* animName)
{	
	Vec3f target(targetRotX, targetRotY, targetRotZ);

	//if we don't want a queue, we must erase all existent movement nodes
	if(!putInQueue)
	{
		clear();
	}

	//rotate until we reach the target rotation
	Orientation* o = new Orientation( m_eID, target, speed, true );
	o->setAnimation( (animName == 0) ? m_orientAnimName : animName );
	m_movementNodes.push_back( o );

	return o->getID();
}

void MovementComponent::clear()
{
	std::list<Movement*>::iterator iter = m_movementNodes.begin();
	while(iter != m_movementNodes.end())
	{
		delete *iter;
		iter = m_movementNodes.erase(iter);
	}
}


int MovementComponent::getStatus(int movementID)
{
	std::list<Movement*>::iterator iter = m_movementNodes.begin();
	while(iter != m_movementNodes.end())
	{
		if((*iter)->getID() == movementID)
			return ((*iter)->isActive()) ? 1 : -2;

		++iter;
	}

	//node not found
	return -3;
}

int MovementComponent::getEntityID()
{
	return m_eID;
}

int MovementComponent::getHordeID()
{
	return m_hID;
}