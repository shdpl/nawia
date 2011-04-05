
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
    
#ifndef AGENTGAZECOMPONENT_H_
#define AGENTGAZECOMPONENT_H_

#include <GameEngine/Config.h>
#include <GameEngine/GameComponent.h>

#include "Gaze.h"

#include <stack>

/*
 * Manages agent gazing
 */
class GazeComponent : public GameComponent
{
public:
	static GameComponent*  createComponent( GameEntity* owner );

	GazeComponent(GameEntity* owner);
	virtual ~GazeComponent();

	bool checkEvent(GameEvent* event) { return true; }

	void executeEvent(GameEvent* event);

	void loadFromXml(const XMLNode* description);

	void update();

	// ********************
	// Interface functions
	// ********************
	///starts a gaze action towards a target agent
	int gaze(int target_eID, float speed, float duration);
	///starts a gaze action towards a target point in 3D space
	int gaze(float targetX, float targetY, float targetZ, float speed, float duration);	
	///performs a head nod (negative extent results in head jerk)
	void nod(float extent, float speed, float duration);

	int getStatus(int gazeID);

	float getGazeSpeed();
	void setGazeSpeed(float speed);

	///returns the default gaze coordinates relative to the agent's head (these are NOT actual gazeable coordinates)
	Horde3D::Vec3f getDfltRelGaze();

	///returns the current gaze target's coordinates
	Vec3f getGazeCoord();
	///sets the gaze coordinates and applies the gaze on the scenegraph
	int setGazeCoord(Vec3f gaze);

	///returns local horde ID
	int getHordeID();
	///returns local entity ID
	int getEntityID();


private:
	///local agent horde ID
	int m_hID;
	///local agent entity ID
	int m_eID;

	///default gaze morphing speed of this agent
	float m_speed;
	
	///current gaze coordinates of the agent
	Vec3f m_gazeCoord;
	///stack of all valid gaze actions. Only the top gaze gets rendered.
	std::stack<Gaze*> m_gazeNodes;

	///the default gaze coordinates relative to the agent's head, these are NOT actual gazeable coordinates (example [0,0,10] if agent is looking towards Z positive)
	Horde3D::Vec3f m_dfltRelGaze;

	///removes all gaze nodes from the stack
	void clearGazeStack();
};

#endif
        