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
// Copyright (C) 2011 Ionut Damian
//
// ****************************************************************************************
//
// For information on how to use AAA, please read the readme.txt in the project folder 
// (ex: GameEngine\Samples\AAA\readme.txt) or check out the website at: 
// http://mm-werkstatt.informatik.uni-augsburg.de/projects/aaa/
//
// ****************************************************************************************

#include "AgentNode.h"
#include "GameEngine\GameEngine_IK.h"
#include "GameEngine\GameEngine_Agent.h"
#include "GameEngine\GameEngine_SceneGraph.h"
#include "Horde3D\Horde3D.h"

AgentNode::AgentNode(int _id, unsigned int _entity_id): 
		id(_id), entity_id(_entity_id), speaks(false), animation_id(-1), culture(-1), movement(-1),
		m_pc(false), active(true)
{
	horde_id = GameEngine::entitySceneGraphID( entity_id );
	if(horde_id <= 0)
	{
		active = false;
		return;
	}

	//set IK Options
	GameEngine::IK_setParamI( entity_id, IK_Param::UseDofr_I, 1 );
	GameEngine::IK_setParamI( entity_id, IK_Param::UseZLock_I, 0 );

	//set culture
	culture = 2;

	//find head
	h3dFindNodes( horde_id, "Bip01_Head", H3DNodeTypes::Joint );
	head_horde_id = h3dGetNodeFindResult(0);	

	GameEngine::Agent_setIconVisible(entity_id, false);

	//set initial position
	h3dGetNodeTransform(horde_id, &pos.x, &pos.y, &pos.z, &rot.x, &rot.y, &rot.z, &scale.x, &scale.y, &scale.z);
}

AgentNode::~AgentNode()
{
}

/**
 * Updates the agent node. Should be called every frame.
 */
void AgentNode::update()
{
	if(!active)
		return;
}

void AgentNode::setVisibility(bool visible)
{
	active = visible;
	//GameEngine::setVisible(entity_id, visible);
	h3dSetNodeFlags(horde_id, visible ? 0 : H3DNodeFlags::Inactive, true );

	//if this is the pc we also need to change the visibility of its flag
	if(m_pc)
		GameEngine::Agent_setIconVisible(entity_id, visible);
	else
		GameEngine::Agent_setIconVisible(entity_id, false);
}

void AgentNode::makePC()
{
	m_pc = true;
	GameEngine::Agent_setIconVisible(entity_id, true);
}

void AgentNode::makeNPC()
{
	m_pc = false;
	GameEngine::Agent_setIconVisible(entity_id, false);
}

bool AgentNode::isPC()
{
	return m_pc;
}