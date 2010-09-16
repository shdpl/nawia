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
#ifndef STILLANIMNODE_H_
#define STILLANIMNODE_H_

#include "AnimationNode.h"

class StillAnimationNode : public AnimationNode
{
public:
	StillAnimationNode();
	StillAnimationNode(H3DNode _model, unsigned int _id, const char* _file, int _stage);

	void updateWeight(bool noCustomization, float ext_t = -1.0f);	
	void setWeight(float _weight, float _maxWeight = 1.0f);
	void setMaxWeight(float _maxWeight);
	float getMaxWeight();

private:
	//blending variables
	float t;
	float targetWeight, startWeight;
};

#endif