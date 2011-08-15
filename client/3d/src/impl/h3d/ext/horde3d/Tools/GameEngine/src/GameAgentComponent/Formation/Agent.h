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
#ifndef AGENT_H_
#define AGENT_H_

#include "BodyLocation.h"
#include "BodyOrientation.h"

class Formation {};

/**
 * Container class for agents
 */
class Agent
{
public:
	Agent(int eID);
	~Agent();

	int getAID();
	int getEID();

private:
	///agent id
	int m_aID;
	///game engine entity id
	int m_eID;
	///horde3d model id
	int m_hID;
};

#endif
