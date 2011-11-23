
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
    
#ifndef LOCOMOTION_H_
#define LOCOMOTION_H_

#include "Movement.h"

/*
 * Represents a locomotion movement (a continous frame relative change in the agent's body position until it reaches a given position)
 */
class Locomotion : public Movement
{
public:
	Locomotion(int agent_eID, Vec3f destination, float speed);
	~Locomotion();

	///activates the movement
	void activate();

	///updates the movement, should be called every frame
	void update();
};

#endif