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

#include "AgentNode.h"
#include "GameEngine\GameEngine_IK.h"
#include "GameEngine\GameEngine_AgentAction.h"
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
	GameEngine::IK_setParamI( entity_id, IK_Param::UseZLock_I, 1 );

	//set culture
	culture = 2;

	//find head
	h3dFindNodes( horde_id, "Bip01_Head", H3DNodeTypes::Joint );
	head_horde_id = h3dGetNodeFindResult(0);		

	//set initial gaze node (look forward)
	gazeNodes.push( new GazeNode( this, Vec3f(0,0,0), Vec3f(0,0,0), 0 ) );
	gazeNodes.top()->defaultGaze();
	gazeNodes.top()->base = true;
}

AgentNode::~AgentNode()
{
	surroundingAgents.clear();

	//delete gaze stack
	while(!gazeNodes.empty())
	{
		delete gazeNodes.top();
		gazeNodes.pop();
	}
}

/**
 * Removes an entity from the agent's knowledge. 
 * Should be called whenever an entity is no longer reachable by this agent.
 */
void AgentNode::removeSurroundingAgent(AgentNode* agent)
{
	std::vector<AgentNode*>::iterator iter = surroundingAgents.begin();
	while(iter != surroundingAgents.end())
	{
		if((*iter)->entity_id == agent->entity_id)
			(*iter) = 0; //don't delete, just clear reference

		iter++;
	}
}

/**
 * Updates the agent node. Should be called every frame.
 */
void AgentNode::update()
{
	if(!active)
		return;

	//** Process gaze
	//skip if gaze is not active or if this agent is a pc
	if(!gazeNodes.top()->active || isPC())
		return;
	
	if(gazeNodes.top()->target > 0)
	{
		//update target, target could have moved
		//but first check if target is still in agents zone
		bool exists = false;
		for(unsigned int i=0; i<surroundingAgents.size(); i++)
		{
			if(surroundingAgents[i] == 0)
				continue;

			if(gazeNodes.top()->target->entity_id == surroundingAgents[i]->entity_id)
			{
				exists = true;
				break;
			}
		}
		if(exists)
			gazeNodes.top()->updateTarget();
		else
		{
			//if target is no longer in our zone, go back to previous gaze node or to default gaze
			if(!gazeNodes.top()->base)
			{
				Vec3f curVal = gazeNodes.top()->morph_curValue;
				gazeNodes.pop();

				gazeNodes.top()->reset(curVal);
				if(gazeNodes.top()->morph_speed == 0) gazeNodes.top()->morph_speed = 1;

				if(gazeNodes.top()->base)
					gazeNodes.top()->defaultGaze();
			}
			else
			{
				if(gazeNodes.top()->morph_speed == 0) gazeNodes.top()->morph_speed = 1;
				gazeNodes.top()->defaultGaze();
			}
		}
	}

	//update gaze
	gazeNodes.top()->update();
	//check if node has finished
	if(gazeNodes.top()->hasFinsihed())
	{
		Vec3f curVal = gazeNodes.top()->morph_curValue;
		gazeNodes.pop();

		gazeNodes.top()->reset(curVal);
		if(gazeNodes.top()->morph_speed == 0) gazeNodes.top()->morph_speed = 1;

		if(gazeNodes.top()->base)
			gazeNodes.top()->defaultGaze();
	}
}

void AgentNode::setVisibility(bool visible)
{
	active = visible;
	h3dSetNodeActivation( horde_id, visible );

	//if this is the pc we also need to change the visibility of its flag
	if(m_pc && m_symbol != 0)
		m_symbol->setVisible(visible);
}

void AgentNode::makePC()
{
	if(m_symbol == 0)
		return;

	m_pc = true;
	
	//remove all gaze nodes above the base
	while(!gazeNodes.top()->base)
		gazeNodes.pop();
	//set node as inactive to avoid further updating
	gazeNodes.top()->active = false;
	
	m_symbol->setParent(horde_id);
	m_symbol->setVisible(active);
}

void AgentNode::makeNPC()
{
	m_pc = false;
	gazeNodes.top()->active = true;
	gazeNodes.top()->defaultGaze();

	m_symbol->setVisible(false);
}

bool AgentNode::isPC()
{
	return m_pc;
}

void AgentNode::setSymbol(Symbol *s)
{
	m_symbol = s;
	s->setVisible( active && m_pc );
}

Symbol* AgentNode::getSymbol()
{
	return m_symbol;
}

bool AgentNode::checkGaze( Vec3f target )
{
	//check if it is possible to gaze at that target
	int g_code;
	g_code = GameEngine::IK_checkGaze(entity_id, target.x, target.y, target.z, true, true, true);
	if( g_code >= 4 || g_code <= 0) //4 = head and eyes out of range, 0 = error
		return false;
	else
		return true;	
}