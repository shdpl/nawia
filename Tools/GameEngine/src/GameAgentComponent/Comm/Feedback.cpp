
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

#include "Feedback.h"
#include "GameEngine/GameEngine_Socket.h"

#include <sstream>
#include <string>

Feedback::Feedback(int socket_eID) : m_socket_eID(socket_eID), m_hasFinished(false)
{}

Feedback::~Feedback()
{
}

void Feedback::update()
{}

void Feedback::send(int code, const char* description)
{}
/*
void Feedback::_send(int agent_id, int obj_id, int code, const char* text)
{
	std::stringstream msg;
	char* spacer_agent = "";
	char* spacer_obj = "";
	char* spacer_code = "";

	if(agent_id < 0) agent_id = 0;
	if(obj_id < 0) obj_id = 0;
	if(code < 0) code = 0;

	if(agent_id < 10) spacer_agent = "0";
	if(obj_id < 10) spacer_obj = "0";
	if(code < 10) spacer_code = "00";
	else if(code < 100) spacer_code = "0";
	
	if(agent_id > 99) agent_id = 99;
	if(obj_id > 99) obj_id = 99;
	if(code > 999) code = 999;
	
	//build message
	msg << spacer_agent << agent_id 
		<< spacer_obj << obj_id 
		<< spacer_code << code
		<< " " << text;	
	
	//send message
	GameEngine::sendSocketData( m_socket_eID, msg.str().c_str() );
}

void Feedback::_send(int agent_id, int obj_id, int code, const char* text)
{
	std::stringstream msg;
	std::stringstream agent_id_ss, obj_id_ss, code_ss;	
	std::string agent_id_s, obj_id_s, code_s;

	agent_id_ss << agent_id;
	obj_id_ss << obj_id;
	code_ss << code;

	std::string agent_id_s(agent_id_ss.str());
	std::string obj_id_s(obj_id_ss.str());
	std::string code_s(code_ss.str());

	//cap elements to 9 digits
	if(agent_id_s.length() > 9) agent_id_s.substr(0,9);
	if(obj_id_s.length() > 9) obj_id_s.substr(0,9);
	if(code_s.length() > 9) code_s.substr(0,9);
	
	//build message
	msg << agent_id_s.length() << agent_id_s 
		<< obj_id_s.length() << obj_id_s 
		<< code_s.length() << code_s
		<< " " << text;	
	
	//send message
	GameEngine::sendSocketData( m_socket_eID, msg.str().c_str() );
}
*/

void Feedback::_send(int agent_id, int obj_id, int code, const char* text)
{
	std::stringstream msg;
	
	//build message
	msg << agent_id << '#' 
		<< obj_id << '#'
		<< code << '#'
		<< ' ' << text;	
	
	//send message
	GameEngine::sendSocketData( m_socket_eID, msg.str().c_str() );
}
	

void Feedback::die()
{
	m_hasFinished = true;
}

bool Feedback::hasFinished()
{
	return m_hasFinished;
}