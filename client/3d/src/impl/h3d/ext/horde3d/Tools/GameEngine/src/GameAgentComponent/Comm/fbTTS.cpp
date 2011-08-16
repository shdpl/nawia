
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
    
#include "fbTTS.h"
#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_Agent.h"
#include "GameEngine/GameEngine_Sapi.h"
#include "../AgentManager.h"

#include <sstream>

fbTTS::fbTTS(int socket_eID, int agent_eID, int tts_ID) : Feedback(socket_eID), m_agent_eID(agent_eID), m_tts_ID(tts_ID)
{
	m_agent_aID = AgentManager::instance()->getAgentID(m_agent_eID);

	//send start message
	if(m_tts_ID < 0)
	{
		send(299, "failed to start");
		die();
	}
	else
		send(250, "started");
}

void fbTTS::update()
{
	//check animation status
	bool status = GameEngine::isSpeaking(m_agent_eID);

	//build message
	if(!status)
	{		
		send(200, "finished");
		die();
	}
}

void fbTTS::send(int code, const char* description)
{	
	std::stringstream text;
	text << "agent " << m_agent_aID << " TTS " << m_tts_ID << " " << description;

	_send(m_agent_aID, m_tts_ID, code, text.str().c_str());
}