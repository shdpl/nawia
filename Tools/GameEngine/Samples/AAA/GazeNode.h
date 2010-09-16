// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// ****************************************************************************************
//

// ****************************************************************************************
//
// Advanced Agent Animation
//
// -------------------------
// Copyright (C) 2010 Ionut Damian
//
// ****************************************************************************************
//
// For information on how to use AAA, please read the readme.txt in the project folder 
// (ex: GameEngine\Samples\AAA\readme.txt) or check out the website at: 
// http://mm-werkstatt.informatik.uni-augsburg.de/projects/aaa/
//
// ****************************************************************************************

#ifndef _GAZENODE_H
#define _GAZENODE_H

#include "GameEngine/utmath.h"

using namespace Horde3D;

class AgentNode;

class GazeNode
{
public:
	///parent agent
	AgentNode* agent;
	///gaze target in case of agent-to-agent gazing
	AgentNode* target;

	///flag indicating if gaze node is currently in a gaze-to-gaze morphing process
	bool morphing;
	///flag indicating if gaze node is active
	bool active;
	///flag indicating if the target is no longer available or gazeable
	bool bad_target;
	///flag indicating if gaze node is a base node (the first node in an agents gaze stack)
	bool base;
	///gaze-to-gaze morphing start coordinates
	Vec3f morph_start;
	///gaze-to-gaze morphing end/target coordinates
	Vec3f morph_end;
	///gaze-to-gaze morphing current coordinates
	Vec3f morph_curValue;
	///gaze-to-gaze morphing speed
	float morph_speed;
	///gaze-to-gaze morphing t-variable
	float t;

	///agent's head pitch
	int head_pitch;

	///constructor for agent-to-location gazing
	GazeNode( AgentNode* _agent, Vec3f current_gaze, Vec3f target_gaze, float speed );
	///constructor for agent-to-agent gazing
	GazeNode( AgentNode* _agent, Vec3f current_gaze, AgentNode* _target, float speed );

	///updates morphing process, gaze
	void update();
	///resets gaze morphing process
	void reset(Vec3f morph_start);
	///changes target (end) of a gaze morphing process
	void setNewEnd(Vec3f end);
	///performs a target update and checks for invalid targets
	void updateTarget();
	///forces a morph to the default gaze position (straight forward)
	void defaultGaze();
	///retrieves gaze node status
	bool hasFinsihed();
};

#endif