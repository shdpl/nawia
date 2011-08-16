
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
    
#ifndef IDLE_H_
#define IDLE_H_

#include "Movement.h"

/*
 * represents an idle movement. Its only purpose is to call up the idle animation
 */
class Idle : public Movement
{
public:
	Idle(int agent_eID);
	~Idle();

	void activate();
	void deactivate();
};

#endif