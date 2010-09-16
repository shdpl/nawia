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
#include "GazeNode.h"

#include "Horde3D/Horde3D.h"
#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_IK.h"
#include "AgentNode.h"


GazeNode::GazeNode( AgentNode* _agent, Vec3f current_gaze, Vec3f target_gaze, float speed ):
	agent(_agent), t(0), head_pitch(0), target(0), active(true), morphing(true), bad_target(false), base(false)
{
	morph_end = target_gaze;
	morph_start = current_gaze;	

	if(speed == 0)
	{
		morph_speed = 0;
		morph_curValue = morph_end;
	}
	else
	{
		morph_speed = speed;
		morph_curValue = morph_start;
	}

	//check if it is possible to gaze at that target
	if(!agent->checkGaze(morph_end))
		bad_target = true;
}

GazeNode::GazeNode( AgentNode* _agent, Vec3f current_gaze, AgentNode* _target, float speed ):
	agent(_agent), t(0), head_pitch(0), target(_target), active(true), morphing(true), bad_target(false), base(false)
{
	const float *absArray;
	h3dFindNodes( target->horde_id, "Bip01_Head", H3DNodeTypes::Joint );
	int head = h3dGetNodeFindResult(0);
	h3dGetNodeTransMats( head, 0, &absArray );

	morph_end = Matrix4f(absArray) * Vec3f(0,0,0);
	morph_start = current_gaze;

	if(speed == 0)
	{
		morph_speed = 0;
		morph_curValue = morph_end;
	}
	else
	{
		morph_speed = speed;
		morph_curValue = morph_start;
	}

	//check if it is possible to gaze at that target
	if(!agent->checkGaze(morph_end))
	{
		bad_target = true;

		//remove target from agent's "knowledge"
		agent->removeSurroundingAgent(target);
	}
}

void GazeNode::reset(Vec3f start)
{
	morph_start = start;
	morph_curValue = start;
	
	morphing = true;
	bad_target = false;

	t = 0;
}

void GazeNode::setNewEnd(Vec3f end)
{
	morphing = true;
	bad_target = false;
	
	morph_end = end;
	if(t == 0)
	{
		t = 0.1f;
		morph_start = morph_curValue;
	}
}

void GazeNode::update()
{
	if(bad_target)
	{
		GameEngine::IK_gaze( agent->entity_id,
				morph_curValue.x, morph_curValue.y, morph_curValue.z, true, true, true, head_pitch ); //change
		return;
	}

	if( morphing )
	{
		if( morph_speed == 0 ) //jump to gaze position
		{
			GameEngine::IK_gaze( agent->entity_id,
				morph_end.x, morph_end.y, morph_end.z, true, true, true, head_pitch ); //change
			morphing = false;

			morph_curValue = morph_end;
		}

		else //morph to gaze position
		{
			morph_curValue.x = morph_start.x *(1- t) + morph_end.x * t;
			morph_curValue.y = morph_start.y *(1- t) + morph_end.y * t;
			morph_curValue.z = morph_start.z *(1- t) + morph_end.z * t;

			int gaze_result = GameEngine::IK_gaze( agent->entity_id,
								morph_curValue.x, morph_curValue.y, morph_curValue.z, true, true, true, head_pitch ); //change
			
			t += morph_speed / GameEngine::FPS();
			
			//stop process if we're at the end
			if(t >= 1)
			{
				t = 0;
				morph_curValue = morph_end;
				morphing = false;
			}
		}
	}
	else
		GameEngine::IK_gaze( agent->entity_id,
			morph_end.x, morph_end.y, morph_end.z, true, true, true, head_pitch ); //change
}

void GazeNode::updateTarget()
{
	if(target == 0)
		return;

	const float *absArray;
	h3dFindNodes( target->horde_id, "Bip01_Head", H3DNodeTypes::Joint );
	int head = h3dGetNodeFindResult(0);
	h3dGetNodeTransMats( head, 0, &absArray );

	if(morph_end != Matrix4f(absArray) * Vec3f(0,0,0))
	{
		setNewEnd(Matrix4f(absArray) * Vec3f(0,0,0));

		//check if it is possible to gaze at that target
		if(!agent->checkGaze(morph_end))
		{
			bad_target = true;

			//remove target from agent's "knowledge"
			agent->removeSurroundingAgent(target);
		}
	}
}

void GazeNode::defaultGaze()
{
	const float *agent_relArray;
	h3dGetNodeTransMats( agent->horde_id, &agent_relArray, 0 );
	Matrix4f agent_relMat(agent_relArray);

	if(morph_end != agent_relMat * Vec3f(0,0,200))
	{
		target = 0;
		setNewEnd(agent_relMat * Vec3f(0,0,200));
	}
}

bool GazeNode::hasFinsihed()
{
	return !base && (!active || bad_target);
}