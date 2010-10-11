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
// GameEngine Agent Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************  
#include "StillAnimationNode.h"
#include "GameEngine\GameEngine.h"

StillAnimationNode::StillAnimationNode( H3DNode _model, unsigned int _id, const char* _file, int _stage):
AnimationNode(_model, _id, _file, _stage, 0)
{
	t = 0;
	targetWeight = weight;
	startWeight = weight;
}

void StillAnimationNode::updateWeight(bool _noCustomization, float ext_t)
{	
	//if the scene doesn't allow animaiton customization, we will disable the stillAnim by setting its weight to 0
	if(_noCustomization)
	{
		//we will do a mini-blending of the stillAnim, for this we must reset t to 0
		//the weight of the stillAnim will then move from weight to targetWeight
		if(targetWeight != 0.0f)
		{
			if(AGENTANIMDEBUG) 
				printf("[db]=================================\n");
			t = 0;
			startWeight = weight;
		}
		targetWeight = 0.0f;
	}
	else
	{		
		//we will do a mini-blending of the stillAnim, for this we must reset t to 0
		//the weight of the stillAnim will then move from weight to targetWeight
		if(targetWeight != maxWeight) 
		{
			if(AGENTANIMDEBUG) 
				printf("[db]=================================\n");
			t = 0;
			startWeight = weight;
		}
		targetWeight = maxWeight;
	}

	//if an external blending index was porvided, we use that one it
	if(ext_t >= 0)
		t = ext_t;

	//here is where the blending is performed
	if(weight != targetWeight)
	{
		if(t <= 1)
		{
			weight = (float)((1.0f-t) *startWeight) + (float)(t *targetWeight);
			if(AGENTANIMDEBUG) 
				printf("[db]bstill: w=%.2f -> %.2f [t=%.2f]\n", weight, targetWeight, t);

			t = t + AnimationBlending::BLENDING_SPEED / GameEngine::FPS();			
		}
		else
		{
			t = 0;
			weight = targetWeight;
			startWeight = weight;
		}
	}
}

void StillAnimationNode::setWeight(float _weight, float _maxWeight)
{
}

void StillAnimationNode::setMaxWeight(float _maxWeight)
{
	maxWeight = _maxWeight;
	
	if(maxWeight < 0.0f)
		maxWeight = 0.0f;
}

float StillAnimationNode::getMaxWeight()
{
	return maxWeight;
}