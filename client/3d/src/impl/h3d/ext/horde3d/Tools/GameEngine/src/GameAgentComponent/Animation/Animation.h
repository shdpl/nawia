
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

#ifndef ANIMATION_H_
#define ANIMATION_H_

#include "../GameEngine_Agent.h"

#include "AnimationData.h"
#include "../Timer.h"
#include "../Config.h"

/**
 * Defines a specific playback of an animation
 * The animation specific information is stored in AnimationData while the playback specific informaiton is stored here.
 */
class Animation
{
public:
	Animation(int agent_hID, AnimationData* data, const char* startNode);
	~Animation();

	void update();
	void activate();
	void deactivate();
	void reset();

	///loads the animation file stored in the animation data that matches the specified gender and culture
	bool loadFile(Agent_Gender::List gender);

	//** operators
	bool equals( Animation *a);

	//** getter
	int getID();
	unsigned int getPlaybackID();
	AnimationData* getData();
	Agent_AnimType::List getType();
	Agent_AnimStatus::List getStatus();
	bool isFinishing();
	bool hasFinished();
	bool isActive();
	float getCurrentFrame();
	int getNumFrames(bool withStrokeRepetitions);	
	Animation* getNextAnimation();
	Animation* getLinkedAnimation();
	const char* getStartNode();
	int getResource();
	float getSpatialExtent();	
	int getNumStrokeRepetitions();
	float getSpeed();
	AnimationFile* getFile();

	//** setter
	void setResource(int resource);
	void setSpeed(float speed);
	void setSpatialExtent(float se);
	void setNumStrokeRepetitions(unsigned int reps);
	void setNextAnimation(Animation* next);	
	void setLinkedAnimation(Animation* link);

private:
	///this ID uniquelly identifies a playback of an animation. It is different from the ID in the animation data which identifies an animation
	unsigned int m_playbackID;
	///animation data containing information speicifc to the animation itself, not its playback at a specific time. The same data can be used by many animations.
	AnimationData* m_data;

	///the animation file used for this playback (cross-pointer)
	AnimationFile* m_file;

	///Horde3D animation resrource id
	int m_resource;

	///Horde3D ID of the agent
	int m_agent_hID;

	bool m_isActive;
	bool m_isFinished;
	Agent_AnimStatus::List m_status;

	//** animation playback related varibles
	float m_frame;
	int m_numFrames;

	///internal flag indicating whether the animation loops or not. Is true if the animation is a posture
	bool m_loop;
	
	float m_speed;
	float m_spatialExtent; //this is pretty much maxWeight ...
	unsigned int m_targetStrokeReps;	
	unsigned int m_currentStrokeReps;

	///defines the skeleton node from which the engine should start animating, leaving the rest of the body un-animated
	char m_startNode[c_MaxNodeNameSize];

	Animation* m_nextAnimation;
	///An animation can be linked to another animation, this link has no implicit meaning other then this animation knows the linked one
	///e.g. the retraction of a posture knows the animation that caused that caused its playback
	Animation* m_linkedAnimation;

	Timer* m_timer;

	static unsigned int s_nextPlaybackID;

	//** computations
};

#endif