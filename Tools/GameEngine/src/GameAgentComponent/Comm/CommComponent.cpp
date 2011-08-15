
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
    
#include "CommComponent.h"

#include "../AgentManager.h"
#include "../AgentComponent.h"

#include <GameEngine/GameLog.h>
#include <GameEngine/GameEntity.h>
#include <GameEngine/GameEvent.h>
#include <XMLParser/utXMLParser.h>

#include "GameEngine/GameEngine_Socket.h"
#include "GameEngine/GameEngine_Scenegraph.h"
#include "GameEngine/GameEngine.h"

#include "../utils.h"

#include "cmdAct.h"
#include "cmdGoto.h"
#include "cmdSet.h"

#include "fbError.h"

GameComponent* CommComponent::createComponent( GameEntity* owner )
{
	return new CommComponent( owner );
}

CommComponent::CommComponent(GameEntity* owner) : GameComponent(owner, "AgentComponent/Comm")
{
	AgentManager::instance()->addComponent(this);

	m_eID = owner->worldId();
	m_hID = GameEngine::entitySceneGraphID(m_eID);
	m_aID = AgentManager::instance()->getAgentID( m_eID );
	m_socket_eID = GameEngine::entityWorldID( Config::getParamS(Agent_Param::SocketEntityName_S) );

	//register commands
	m_commands.push_back(new cmdAct(this));
	m_commands.push_back(new cmdGoto(this));
	m_commands.push_back(new cmdSet(this));
}

CommComponent::~CommComponent()
{
	std::vector<Command*>::iterator iter = m_commands.begin();
	while(iter != m_commands.end())
	{
		if(*iter != 0)
		{
			delete *iter;
			(*iter) = 0;
		}
		++iter;
	}		
	m_commands.clear();

	AgentManager::instance()->removeComponent(this);
}

void CommComponent::executeEvent(GameEvent *event)
{
}

void CommComponent::loadFromXml(const XMLNode* node)
{
}

void CommComponent::update()
{	
	//prcess feedback
	std::list<Feedback*>::iterator iterfb = m_feedback.begin();
	while(iterfb != m_feedback.end())
	{		
		(*iterfb)->update();

		if((*iterfb)->hasFinished())
		{
			delete (*iterfb);
			iterfb = m_feedback.erase(iterfb);
		}
		else
			++iterfb;
	}

	//process incomming transmission
	const char *buffer;
	int bufferLength = GameEngine::getSocketData(m_socket_eID, &buffer);
	if(bufferLength <= 0)
		return;	

	char *message = new char[bufferLength+1];//+1 for tailing 0
	utils::strcpy(buffer, message, bufferLength+1);

	processCommand(message);

	delete message;
}

void CommComponent::processCommand(const char *message)
{
	for(unsigned int i=0; i< m_commands.size(); i++)
	{
		if(m_commands[i]->check(message))
		{
			m_commands[i]->process(message);
			return;
		}
	}

	//output error	
	addFeedbackNode( new fbError( getSocketEntityID(), "unrecognized command" ) );
}

void CommComponent::addFeedbackNode(Feedback *fb)
{
	m_feedback.push_back(fb);
}

int CommComponent::getSocketEntityID()
{
	return m_socket_eID;
}

int CommComponent::getEntityID()
{
	return m_eID;
}

int CommComponent::getHordeID()
{
	return m_hID;
}

int CommComponent::getAgentID()
{
	return m_aID;
}
        