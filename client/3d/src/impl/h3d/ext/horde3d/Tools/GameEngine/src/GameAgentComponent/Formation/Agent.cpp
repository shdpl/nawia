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
#include "Agent.h"
#include "../AgentManager.h"

Agent::Agent(int eID)
{
	m_aID = AgentManager::instance()->getAgentID(eID);	
	m_eID = eID;
}

Agent::~Agent()
{}

int Agent::getAID()
{
	return m_aID;
}

int Agent::getEID()
{
	return m_eID;
}