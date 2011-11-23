
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
    
#ifndef MOVEMENT_H_
#define MOVEMENT_H_

#include "GameEngine/utMath.h"

#include "../Morph.h"
#include "../Config.h"

using namespace Horde3D;

struct MovementStatus
{
	enum List
	{
		INACTIVE = 0,
		ACCELERATION,
		MAIN,
		DECELERATION,
		FINISHED,
		UNDEFINED
	};
};

struct MovementType
{
	enum List
	{
		UNKNOWN = 0,
		LOCOMOTION,
		ORIENTATION,
		IDLE
	};
};

/*
 * The parent class for all agent movements. Handles all general computation such as value morphing and animation call-ups
 */
class Movement
{
public:
	Movement(int agent_eID);
	virtual ~Movement();

	///activates the movement
	virtual void activate();
	///deactivates the movement
	virtual void deactivate();

	///updates the movement
	virtual void update();
	virtual bool isActive();
	virtual bool hasFinished();

	MovementStatus::List getStatus();
	MovementType::List getType();
	int getID();

	///sets the animation that should be played back during the movement
	virtual void setAnimation(const char* name);

protected:	
	///static counter for movement ids
	static unsigned int s_nextMovementID;

	int m_ID;
	int m_agent_eID;

	MovementStatus::List m_status;
	MovementType::List m_type;

	///movement's target values vector (independent of movement type)
	Vec3f m_target;
	///movement's current values vector (independent of movement type)
	Vec3f m_current;
	///movement's starting (initial) values vector (independent of movement type)
	Vec3f m_start;

	///distance to the target (independent of movement type)
	float m_distance;

	///value morphing controller
	Morph3* m_morph;
	///blending controller (used for acc/decc)
	Morph* m_blend;

	///speed of the movement
	float m_speed;

	///the AniamtionLexicon name of the movement animation
	char m_animationName[c_MaxAnimFileSize];
	///the playabck id of the animation
	int m_animationPID;

	void setStatus(MovementStatus::List s);

	///starts the morphing process
	void startMovement(float movementSpeedMult);
	///udpates the morphing process
	void updateMovement(float movementSpeedMult, float animSpeed);
};

#endif