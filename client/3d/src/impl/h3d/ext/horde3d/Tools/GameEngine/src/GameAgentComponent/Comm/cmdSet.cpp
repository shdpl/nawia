
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
    
#include "cmdSet.h"
#include "CommComponent.h"
#include "../GameEngine_Agent.h"

#include "../AgentManager.h"
#include "GameEngine/GameEngine_Sapi.h"
//#include "GameEngine/GameEngine_BayesNet.h" //disabled

#include "../utils.h"

using namespace std;

cmdSet::cmdSet()
{}

cmdSet::cmdSet(CommComponent* comp) : Command(comp)
{		
	//** define keyword
	utils::strcpy( "set", m_keyword, 16 );
	
	//** Register attributes
	m_attributes.push_back( new CommandAttribute("agent",		AttributeType::INTEGER,		&m_agent_aID, 0, 0) );	
	m_attributes.push_back( new CommandAttribute("visible",		AttributeType::INTEGER,		&m_visible, 0, &m_doVisible) );
	m_attributes.push_back( new CommandAttribute("icvisible",	AttributeType::INTEGER,		&m_iconVisible, 0, &m_doIconVisible) );
	m_attributes.push_back( new CommandAttribute("bayesnet",	AttributeType::INTEGER,		&m_bayesNet, 0, &m_doBayesNet) );
	m_attributes.push_back( new CommandAttribute("ttsvoice",	AttributeType::STRING,		&m_TTSVoice, 0, &m_doTTSVoice) );
	m_attributes.push_back( new CommandAttribute("ipdistmin",	AttributeType::FLOAT,		&m_IPDistMin, 0, &m_doIPDistMin) );
	m_attributes.push_back( new CommandAttribute("ipdistmax",	AttributeType::FLOAT,		&m_IPDistMax, 0, &m_doIPDistMax) );
	m_attributes.push_back( new CommandAttribute("deviation",	AttributeType::FLOAT,		&m_deviation, 0, &m_doDeviation) );
	m_attributes.push_back( new CommandAttribute("reposanim",	AttributeType::STRING,		&m_reposAnimName, 0, &m_doReposAnimName) );
}

cmdSet::~cmdSet()
{
	m_attributes.clear();
}

void cmdSet::execute()
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

	if(m_doVisible)
	{
		GameEngine::Agent_setVisible(agent_eID, (m_visible == 0) ? false : true);
	}

	if(m_doIconVisible)
	{
		GameEngine::Agent_setIconVisible(agent_eID, (m_visible == 0) ? false : true);
	}

	if(m_doBayesNet)
	{
		//GameEngine::Bayes_setCulture(agent_eID, m_bayesNet); //disabled
	}

	if(m_doTTSVoice)
	{
		GameEngine::setVoice(agent_eID, m_TTSVoice);
	}

	if(m_doIPDistMin)
	{
		float max;
		GameEngine::Agent_getIPDistance(agent_eID, 0, &max);
		GameEngine::Agent_setIPDistance(agent_eID, m_IPDistMin, max);
	}

	if(m_doIPDistMax)
	{
		float min;
		GameEngine::Agent_getIPDistance(agent_eID, &min, 0);
		GameEngine::Agent_setIPDistance(agent_eID, min, m_IPDistMax);
	}

	if(m_doDeviation)
	{
		GameEngine::Agent_setDeviation(agent_eID, m_deviation);
	}

	if(m_doReposAnimName)
	{
		GameEngine::Agent_setReposAnimName(agent_eID, m_reposAnimName);
	}
}

void cmdSet::reset()
{
	//** Variable initialization
	m_agent_aID = -1;

	m_doVisible = false;	
	m_doIconVisible = false;
	m_doTTSVoice = false;		
	m_doBayesNet = false;	
	m_doIPDistMin = false;	
	m_doIPDistMax = false;	
	m_doDeviation = false;
	m_doReposAnimName = false;

	m_visible = 0;
	m_iconVisible = 0;
	m_bayesNet = 0;
	m_TTSVoice[0] = '\0';
	m_IPDistMin = 0;
	m_IPDistMax = 0;
	m_deviation = 0;
	m_reposAnimName[0] = '\0';
}