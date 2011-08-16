
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
    
#include "fbGaze.h"
#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_Socket.h"
#include "GameEngine/GameEngine_Agent.h"
#include "../AgentManager.h"

#include <sstream>

fbGaze::fbGaze(int socket_eID, int agent_eID, int gaze_ID) : Feedback(socket_eID), m_agent_eID(agent_eID), m_gaze_ID(gaze_ID)
{
	m_agent_aID = AgentManager::instance()->getAgentID(m_agent_eID);

	//send start message
	if(m_gaze_ID < 0)
	{
		send(599, "failed to start");
		die();
	}
	else
		send(550, "started");
}

void fbGaze::update()
{
	//check animation status
	int status = GameEngine::Agent_getGazeStatus(m_agent_eID, m_gaze_ID);

	//build message
	if(status <= 0)
	{		
		send(500, "finished (cannot be found)");
		die();
	}
}

void fbGaze::send(int code, const char* description)
{	
	std::stringstream text;
	text << "agent " << m_agent_aID << " gaze " << m_gaze_ID << " " << description;

	_send(m_agent_aID, m_gaze_ID, code, text.str().c_str());
}