
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
    
#ifndef AGENTCOMMCOMPONENT_H_
#define AGENTCOMMCOMPONENT_H_

#include <GameEngine/Config.h>
#include <GameEngine/GameComponent.h>

#include "StringTokenizer.h"
#include "Command.h"
#include "Feedback.h"

#include <vector>
#include <list>

class CommComponent : public GameComponent
{
public:
	static GameComponent*  createComponent( GameEntity* owner );

	CommComponent(GameEntity* owner);
	virtual ~CommComponent();

	bool checkEvent(GameEvent* event) { return true; }

	void executeEvent(GameEvent* event);

	void loadFromXml(const XMLNode* description);

	void update();

	///returns local horde ID
	int getHordeID();
	///returns local entity ID
	int getEntityID();
	///returns agent ID
	int getAgentID();

	///registers a feedback node
	void addFeedbackNode( Feedback* fb );
	///returns the entity which controls the socket component
	int getSocketEntityID();

private:
	///local agent horde ID
	int m_hID;
	///local agent entity ID
	int m_eID;
	///agent's agent ID
	int m_aID;

	int m_socket_eID;

	///received data
	char m_dataRecv[256];
	StringTokenizer m_tokenizer;

	///vector of all known commands
	std::vector<Command*> m_commands;
	///list of active feedback nodes
	std::list<Feedback*> m_feedback;

	///forwards the specified message to an appropiate command object for processing
	void processCommand(const char* message);
};

#endif
        