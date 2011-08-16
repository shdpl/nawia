
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

#include "Idle.h"

#include "../utils.h"
#include <stdio.h>

Idle::Idle(int agent_eID) : Movement(agent_eID)
{
	m_type = MovementType::IDLE;
}

Idle::~Idle()
{}

void Idle::activate()
{	
	if(isActive())
		return;

	//play anim
	m_animationPID = GameEngine::Agent_playAnimationF( m_agent_eID, m_animationName, Agent_AnimType::POSTURE, 1, 1, 0, 0, 0 );
	if(m_animationPID >= 0)
		setStatus(MovementStatus::MAIN);
}

void Idle::deactivate()
{	
	if(!isActive())
		return;

	//stop anim
	GameEngine::Agent_stopAnimation( m_agent_eID, m_animationPID );
	
	setStatus(MovementStatus::INACTIVE);
}