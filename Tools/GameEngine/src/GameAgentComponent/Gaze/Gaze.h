
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
    
#ifndef GAZE_H_
#define GAZE_H_

#include "GameEngine/utMath.h"
#include "../Morph.h"
#include "../Timer.h"

using namespace Horde3D;

class GazeComponent;

/*
 * Represents a gaze action towards a given target. Once the target is no longer valid, this object looses its purpose and should get deleted
 */
class Gaze
{
public:
	///constructs a gaze node where the agents gazes straight ahead (default gaze)
	Gaze(GazeComponent* comp);
	///constructor for agent-to-location gazing
	Gaze(GazeComponent* comp, Horde3D::Vec3f currentGaze, Vec3f targetGaze, float speed, float duration);
	///constructor for agent-to-agent gazing
	Gaze(GazeComponent* comp, Horde3D::Vec3f currentGaze, int target_eID, float speed, float duration);

	~Gaze();

	///updates morphing process, gaze
	void update();

	///resets gaze morphing process
	void reset(Vec3f currentGaze);

	///retrieves gaze node status
	bool isActive();

	///cehcks whether gazing at that target is possible
	bool checkGaze(Vec3f target);

	void activate();
	void deactivate();

	unsigned int getID();
	int getTargetEID();
	Vec3f getTarget();
	Vec3f getCurrent();
	bool isValid();

private:
	GazeComponent* m_component;

	///entity id of the local agent
	int m_agent_eID;

	///gaze target entity ID in case of agent-to-agent gazing
	int m_target_eID;

	Vec3f m_target;

	///unique id of this gaze node
	unsigned int m_ID;
	
	///gaze-to-gaze morphing process
	Morph3* m_morph;

	///distance needed to morph to get to the target
	float m_distance;

	float m_speed;

	Timer* m_timer;
	float m_duration;

	///flag indicating if gaze node is active
	bool m_isActive;
	///flag indicating if the target is no longer available or gazeable
	bool m_badTarget;
	///flag indicating if gaze node is a base node (the first node in an agents gaze stack)
	bool m_base;

	bool m_isDefaultGaze;

	///agent's head pitch
	int m_headPitch;

	///static counter for gaze ids
	static unsigned int s_nextGazeID;

	Vec3f computeTarget(int target_eID);
	Vec3f computeDefaultTarget();
};

#endif