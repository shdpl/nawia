
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
    
#include "fbAnimation.h"
#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_Socket.h"
#include "GameEngine/GameEngine_Agent.h"
#include "../AgentManager.h"

#include <sstream>

fbAnimation::fbAnimation(int socket_eID, int agent_eID, int animation_ID) : Feedback(socket_eID), m_agent_eID(agent_eID), m_animation_ID(animation_ID)
{
	m_agent_aID = AgentManager::instance()->getAgentID(m_agent_eID);

	//send start message
	if(m_animation_ID < 0)
	{
		send(190, "failed to start");
		die();
	}
	else
		send(150, "started");
}

void fbAnimation::update()
{
	//check animation status
	Agent_AnimStatus::List status = GameEngine::Agent_getAnimationStatus(m_agent_eID, m_animation_ID);

	//build message
	switch(status)
	{
	case Agent_AnimStatus::ANIM_NOT_FOUND:
		send(100, "finished (cannot be found)");
		die();
		break;

	case Agent_AnimStatus::FINISHED:
		send(101, "finished");
		die();
		break;

	case Agent_AnimStatus::INACTIVE:
		send(110, "no longer active (might have finished)");
		die();
		break;

	default: //do nothing
		return;
		break;
	}
}

void fbAnimation::send(int code, const char* description)
{	
	std::stringstream text;
	text << "agent " << m_agent_aID << " animation " << m_animation_ID << " " << description;

	_send(m_agent_aID, m_animation_ID, code, text.str().c_str());
}