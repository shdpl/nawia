
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

#ifndef STAGE_H_
#define STAGE_H_

#include "Animation.h"

/*
 * The stage represents the link to the Horde3D Animation system
 */
class Stage
{
public:
	Stage(int agent_hID, int id);
	~Stage();

	///calls up the animation update and updates the Horde3D Animation system
	void update(float layerWeight);
	///re-sets the last animation frame on H3DA
	void reupdateLastFrame(float layerWeight);

	///initializes parameters and sets up the animation
	void setup(Animation* a);
	///frees the stage by removing all animation related data
	void free();
	
	///locks the stage to its current animation. It won't be able to use a different animation.
	void lock();
	///activates the stage and starts the playback process
	void activate();
	///deactivates the stage
	void deactivate();

	bool isFree();
	bool isActive();
	bool isLocked();

	int getID();
	Animation* getAnimation();

private:
	int m_ID;

	int m_agent_hID;
	int m_agent_eID;

	Animation* m_animation;
	///a locked stage will use only one animation, e.g. stage of still animation
	bool m_isLocked;
};

#endif