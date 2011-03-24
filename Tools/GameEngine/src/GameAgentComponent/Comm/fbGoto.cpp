
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
    
#include "fbGoto.h"
#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_Socket.h"
#include "GameEngine/GameEngine_Agent.h"
#include "../AgentManager.h"

#include <sstream>

fbGoto::fbGoto(int socket_eID, int agent_eID, int goto_ID) : Feedback(socket_eID), m_agent_eID(agent_eID), m_goto_ID(goto_ID)
{
	m_agent_aID = AgentManager::instance()->getAgentID(m_agent_eID);

	//send start message
	if(m_goto_ID < 0)
	{
		send(399, "failed to start");
		die();
	}
	else
		send(350, "started");
}

void fbGoto::update()
{
	//check animation status
	int status = GameEngine::Agent_getMovementStatus(m_agent_eID, m_goto_ID);

	//build message
	if(status <= 0)
	{		
		send(300, "finished (agent might be idle)");
		die();
	}
}

void fbGoto::send(int code, const char* description)
{
	std::stringstream msg;
	char* spacerAgent = "";
	char* spacerObject = "";

	if(m_goto_ID < 0) m_goto_ID = 0;

	//compute message formatting helpers
	if(m_agent_aID < 10) spacerAgent = "0";
	if(m_goto_ID < 10) spacerObject = "0";
	
	//build message
	msg << spacerAgent << m_agent_aID << spacerObject << m_goto_ID << code;
	msg << " agent #" << m_agent_aID << " movement #" << m_goto_ID << " " << description;
	
	//send message
	GameEngine::sendSocketData( m_socket_eID, msg.str().c_str() );
}