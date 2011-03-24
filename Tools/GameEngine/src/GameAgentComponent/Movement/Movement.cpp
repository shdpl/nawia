
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

#include "Movement.h"
#include "../utils.h"
#include "GameEngine/GameEngine.h"

#include <stdio.h>

unsigned int Movement::s_nextMovementID = 0;

Movement::Movement(int agent_eID) : m_agent_eID(agent_eID), m_morph(0), m_blend(0),
m_animationPID(-1), m_status(MovementStatus::UNDEFINED), m_type(MovementType::UNKNOWN) 
{
	m_animationName[0] = '\0';
	m_ID = s_nextMovementID++;
}

Movement::~Movement()
{}

void Movement::activate()
{}

void Movement::deactivate()
{}

bool Movement::isActive()
{
	if((m_status == MovementStatus::ACCELERATION) || (m_status == MovementStatus::MAIN) || (m_status == MovementStatus::DECELERATION))
		return true;
	else
		return false;
}

bool Movement::hasFinished()
{
	//if(m_morph != 0 && m_morph->hasFinished())
	if((m_status == MovementStatus::FINISHED) || (m_status == MovementStatus::UNDEFINED))
		return true;
	else
		return false;
}

void Movement::setStatus(MovementStatus::List s)
{
	m_status = s;
}

void Movement::startMovement(float movementSpeedMult)
{
	if(m_morph != 0)
	{
		delete m_morph;
		m_morph = 0;
	}

	//load animation
	m_animationPID = GameEngine::Agent_playAnimationN( m_agent_eID, m_animationName, 1, 1, 0, 0, 0);
	if(m_animationPID < 0)
	{
		printf("AgentComponent/Movement: failed loading animation %s\n", m_animationName);
		setStatus(MovementStatus::UNDEFINED);
	}
	
	//start the process
	m_morph = new Morph3(m_current, m_target);
	m_morph->setDuration( m_distance / ((movementSpeedMult/GameEngine::FPS()) * m_speed) );

	setStatus(MovementStatus::MAIN); //acceleration is disabled
}

void Movement::updateMovement(float movementSpeedMult, float animSpeed)
{
	if(m_morph == 0)
	{
		setStatus(MovementStatus::UNDEFINED);
		return;
	}
	else if(m_morph->hasFinished())
	{
		setStatus(MovementStatus::FINISHED);
		return;
	}

	switch(m_status)
	{
	case MovementStatus::ACCELERATION: //disabled
		break;

	case MovementStatus::MAIN:		
		if(m_morph->hasFinished())
			setStatus(MovementStatus::FINISHED);
		break;

	case MovementStatus::DECELERATION: //disabled
		break;
	}
	
	//update morphing processes
	m_morph->setDuration( m_distance / ((movementSpeedMult/GameEngine::FPS()) * m_speed) );
	m_current = m_morph->update();
}

void Movement::update()
{}

void Movement::setAnimation(const char* name)
{
	utils::strcpy(name, m_animationName, c_MaxAnimFileSize);
}

MovementStatus::List Movement::getStatus()
{
	return m_status;
}

MovementType::List Movement::getType()
{
	return m_type;
}

int Movement::getID()
{
	return m_ID;
}