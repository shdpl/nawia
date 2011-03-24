
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
    
#include "fbError.h"
#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_Socket.h"
#include "GameEngine/GameEngine_Agent.h"
#include "../AgentManager.h"

#include <sstream>

using namespace std;

fbError::fbError(int socket_eID, const char* description) : Feedback(socket_eID)
{
	send(900, description);
	die();
}

void fbError::send(int code, const char* description)
{
	stringstream msg;
	
	//build message
	msg << "0000" << code;
	msg << " ERROR: " << description;
	
	//send message
	GameEngine::sendSocketData( m_socket_eID, msg.str().c_str() );
}