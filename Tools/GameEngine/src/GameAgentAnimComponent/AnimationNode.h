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
#ifndef ANIMATIONNODE_H_
#define ANIMATIONNODE_H_

#include "Horde3D/Horde3D.h"
#include "AnimationBlending.h"
#include "AnimationData.h"
#include <string>

class AnimationNode
{
public:
	H3DNode model;
	int id;
	char* file;
	int stage;
	float weight;
	float maxWeight;
	float scale;
	bool loop;
	bool doNotDie;
	char* mask;
	bool sleep;
	bool finished;
	bool noCustomization;
	H3DRes anim_res;
	int type;

	float frame;
	float max_frame;

	int stroke_reps;
	int current_reps;

	float stroke_start, stroke_end;

	AnimationBlending* fade;

	///pointer to a previosly loaded animation node that has to be started after this one finishes. Enables generation of animation chains
	AnimationNode* nextAnim;
	
	//for postures
	AnimationNode* posture_prep;
	AnimationNode* posture_stroke;
	AnimationNode* posture_ret;

	AnimationData* data;

	AnimationNode( H3DNode _model, unsigned int _id, const char* _file, int _stage, AnimationData* _data);
	AnimationNode();
	~AnimationNode();

	void setType(int _type);
	int getType();

	float getTotalFrameCount(bool absolute = false);

	//getter
	float AnimationNode::getCurrentFrame();
	float AnimationNode::getSpeed();
	float AnimationNode::getWeight();
	bool AnimationNode::isFinished();
	bool AnimationNode::isAsleep();
	int AnimationNode::getStrokeReps();
	bool AnimationNode::getNoCustomization();

	//setter
	void AnimationNode::setCurrentFrame(float _frame);
	void AnimationNode::setSpeed(float _scale);
	void AnimationNode::setWeight(float _weight, float _maxWeight = 1.0f);
	void AnimationNode::setFinished(bool _finished);
	void AnimationNode::setAsleep(bool _sleep);
	void AnimationNode::setStrokeReps(int _reps);
	void AnimationNode::setNoCustomization(bool _val);
	void AnimationNode::setMask(const char* _mask);
	void AnimationNode::definePosture(AnimationNode* prep, AnimationNode* stroke, AnimationNode* ret);
};

#endif