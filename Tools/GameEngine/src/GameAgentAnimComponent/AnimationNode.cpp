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
#include "AnimationNode.h"
#include "GameEngine_AgentAnim.h"

AnimationNode::AnimationNode():
		model(0), id(0), file(0), stage(0), mask(0), stroke_start(0), stroke_end(0),
		scale(0), loop(false), doNotDie(false), sleep(false), finished(false),
		anim_res(0), frame(0.0f), max_frame(0), fade(0), stroke_reps(0), current_reps(0),
		noCustomization(false), maxWeight(0), weight(0)
{
}

AnimationNode::AnimationNode( H3DNode _model, unsigned int _id, const char* _file, int _stage):
		model(_model), id(_id), stage(_stage), weight(1), maxWeight(0),
		scale(1), loop(false), doNotDie(false), sleep(false), finished(false),
		anim_res(0), frame(0.0f), max_frame(500), fade(0), stroke_reps(1), current_reps(0),
		noCustomization(false)
{
	file = (char *)malloc(256);
	mask = (char *)malloc(256);
	strcpy_s( file, 256, _file );
	strcpy_s( mask, 1, "" );

	stroke_start = 0;
	stroke_end = 500;;
}

AnimationNode::~AnimationNode()
{
	if (file != 0)
	{
		free(file);
		file = 0;
	}
	if (mask != 0)
	{
		free(mask);
		mask = 0;
	}
}

void AnimationNode::setType(int _type)
{
	switch(_type)
	{
	case Agent_AnimType::AAT_IDLE:
		loop = true; doNotDie = false;
		break;
	case Agent_AnimType::AAT_POSTURE:
		loop = false; doNotDie = true;
		break;
	case Agent_AnimType::AAT_GESTURE:
		loop = false; doNotDie = false;
		break;
	case Agent_AnimType::AAT_GESTURE_ADDITIVE:
		loop = false; doNotDie = false;
		break;
	default:
		loop = false; doNotDie = false;
		break;
	}
}

//Returns the farme count
//if absolute is se true, the it will return the actual number of frames that elapsed
//otherwise the frame count of the animation
float AnimationNode::getTotalFrameCount(bool absolute)
{
	float stroke_len = stroke_end - stroke_start;
	return (absolute)? (max_frame + stroke_len *(stroke_reps -1)) : (max_frame);
}

//getter
float AnimationNode::getCurrentFrame()
{
	return frame;
}
float AnimationNode::getSpeed()
{
	return scale;
}
float AnimationNode::getWeight()
{
	return weight;
}
bool AnimationNode::isFinished()
{
	return finished;
}
bool AnimationNode::isAsleep()
{
	return sleep;
}
int AnimationNode::getStrokeReps()
{
	return stroke_reps;
}
bool AnimationNode::getNoCustomization()
{
	return noCustomization;
}

//setter
void AnimationNode::setCurrentFrame(float _frame)
{
	frame = _frame;
}
void AnimationNode::setSpeed(float _speed)
{
	if(noCustomization)
	{
		scale = 1.0f;
	}
	else
	{
		scale = _speed;
	}
}
void AnimationNode::setWeight(float _weight, float _maxWeight)
{
	//if the noCustomization flag is set, we will ignore the model_max_weight, as we don't want any SE effect
	if(noCustomization)
	{
		maxWeight = 1.0f;
		weight = _weight;
	}
	else
	{
		maxWeight = _maxWeight;
		weight = _weight * maxWeight;
	}

	if(weight < 0.0f)
		weight = 0.0f;
}
void AnimationNode::setFinished(bool _finished)
{
	finished = _finished;
}
void AnimationNode::setAsleep(bool _sleep)
{
	sleep = _sleep;
}
void AnimationNode::setStrokeReps(int _reps)
{
	if(noCustomization)
	{
		stroke_reps = 1;
	}
	else
	{
		stroke_reps = _reps;
	}
}
void AnimationNode::setNoCustomization(bool _val)
{
	noCustomization = _val;
}

void AnimationNode::setMask(const char *_mask)
{
	if(_mask == 0)
		mask = 0;
	else
		strcpy_s(mask, 256, _mask);
}