
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
    
#include "cmdGoto.h"

#include "fbGoto.h"

#include "CommComponent.h"
#include "StringTokenizer.h"
#include "../utils.h"

#include "../AgentManager.h"
#include "../GameEngine_Agent.h"
#include "GameEngine/GameEngine_Sapi.h"

#include "../Config.h"

using namespace std;

cmdGoto::cmdGoto()
{}

cmdGoto::cmdGoto(CommComponent* comp) : Command(comp)
{		
	//** define keyword
	utils::strcpy( "goto", m_keyword, 16 );

	//** Register attributes
	m_attributes.push_back( new CommandAttribute("agent",		AttributeType::INTEGER,		&m_agent_aID, 0, 0) );	
	m_attributes.push_back( new CommandAttribute("dest",		AttributeType::INTEGER,		&m_dest_aID, 0, &m_doGotoByID) );
	m_attributes.push_back( new CommandAttribute("dest",		AttributeType::VEC3F,		&m_dest_pos, 0, &m_doGotoByLocation) );
	m_attributes.push_back( new CommandAttribute("spd",			AttributeType::FLOAT,		&m_speed, 0, 0) );
	m_attributes.push_back( new CommandAttribute("queue",		AttributeType::INTEGER,		&m_putInQueue, 0, 0) );
}

cmdGoto::~cmdGoto()
{
	m_attributes.clear();
}

void cmdGoto::execute()
{
	//process ids
	if(m_agent_aID < 0)
	{
		error("unknown agent");
		return;
	}
	int agent_eID = AgentManager::instance()->getEntityID(m_agent_aID);
	if(agent_eID < 0)
	{
		error("unknown agent");
		return;
	}	

	if(m_doGotoByID)
	{
		int dest_eID = AgentManager::instance()->getEntityID(m_dest_aID);
		if(dest_eID < 0)
		{
			error("unknown destination");
			return;
		}
		m_goto_ID = GameEngine::Agent_gotoF( agent_eID, dest_eID, m_speed, 0, 0);
		m_comp->addFeedbackNode( new fbGoto( m_comp->getSocketEntityID(), agent_eID, dest_eID, m_goto_ID ) );
	}

	if(m_doGotoByLocation)
	{
		m_goto_ID = GameEngine::Agent_gotoP( agent_eID, m_dest_pos.x, m_dest_pos.y, m_dest_pos.z, m_speed, (m_putInQueue == 0) ? false : true, 0, 0);
		m_comp->addFeedbackNode( new fbGoto( m_comp->getSocketEntityID(), agent_eID, -1, m_goto_ID ) );
	}
}

void cmdGoto::reset()
{
	//** Variable initialization
	m_agent_aID = -1;
	m_goto_ID = 0;

	m_doGotoByID = false;	
	m_doGotoByLocation= false;

	m_speed = Config::getParamF(Agent_Param::DfltMovementSpeed_F);
	m_putInQueue = 0;
}