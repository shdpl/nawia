
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
    
#ifndef ORIENTATION_H_
#define ORIENTATION_H_

#include "Movement.h"

/*
 * Represents an orientation movement (a continous frame relative change in the agent's body rotation 
 * until it either faces the given target or reaches the given euler rotation values)
 */
class Orientation : public Movement
{
public:
	Orientation(int agent_eID, Vec3f target, float speed, bool targetIsRotation = false);
	~Orientation();

	void activate();

	void update();

private:
	/*
	 * computes the optimal rotation direction given the current angle and the target angle
	 * @return angle value representing new rotational target
	 */
	float optimizeRotation(float from, float to);

	bool m_targetIsRotation;
};

#endif