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

#ifndef _AGENTNODE_H
#define _AGENTNODE_H

#include "GazeNode.h"
#include "Symbol.h"
#include <stack>
#include <vector>

/**
 * Class defines one agent in AAA.
 * Contains parameters and functions for agent manipulation and display
 */
class AgentNode
{
private:
	///flag indicating if this is a personal character (user agent)
	bool m_pc;
	///agent's symbol
	Symbol* m_symbol;

public:
	///local AAA id
	int id;
	///GameEngine entity id
	unsigned int entity_id;
	///H3D Node id
	unsigned int horde_id;
	///H3D Node id of the head node
	unsigned int head_horde_id;

	///vector containng all agents within the buffer zones of the local agent
	std::vector<AgentNode*> surroundingAgents;
	///vector containing the current and queued up gaze actions
	std::stack<GazeNode*> gazeNodes;

	///the ID of the last loaded animation
	int animation_id;
	///flag indicating whether the local agent performs a TTS action
	bool speaks;
	///ID of the current movement action
	int movement;

	///the culture of the agent (as defined by the BayesNet)
	int culture;
	
	///flag indicating whether agent is active
	bool active;	

	///constructor
	AgentNode(int _id, unsigned int _entity_id);
	///destructor
	~AgentNode();

	///updates the active processes of the agent, including gaze and entity interaction
	void update();
	
	///checks if the specified target is "gazeable" (if the agent can look at it)
	bool checkGaze(Vec3f target);

	///removes the specified agent from the local agent's knowledge (ex: because the agent has left the buffer zones)
	void removeSurroundingAgent(AgentNode* agent);
	///sets a new symbol for the agent
	void setSymbol(Symbol* s);
	///returns the agent's symbol
	Symbol* getSymbol();
	///sets the aagent's visibility and activeness status
	void setVisibility(bool visible);
	///makes local agent a personal character (user agent)
	void makePC();
	///makes local agent a non-personal character
	void makeNPC();
	///returns true if local agent is pc
	bool isPC();
};

#endif