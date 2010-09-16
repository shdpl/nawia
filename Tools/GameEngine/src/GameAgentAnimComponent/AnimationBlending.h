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
#ifndef ANIMATIONBLENDING_H_
#define ANIMATIONBLENDING_H_

#include "config.h"

class AnimationNode;
class AgentAnimComponent;

class AnimationBlending
{
public:	
	static float BLENDING_SPEED, BLENDING_SPEED_PG, BLENDING_SPEED_GP;
	bool running, abort;
	int A_id, B_id;
	float t, temp_posture_weight, temp_still_max_weight;
	AnimationNode *A, *B;
	AgentAnimComponent *m_component;
	float start_weight;

	float fade_from, fade_to;
	int fade_direction;
	
	AnimationBlending(AgentAnimComponent *comp, int blend_A, int blend_B, float posture_weight);
	AnimationBlending(AgentAnimComponent* comp, int fade_anim_id, float from, float to);
	~AnimationBlending();

	void blend_gg();
	void blend_pg();
	void blend_gp();
	void blend_gi();
	bool fade();

	void forceBlendFinish_gg(bool kill_anim=true);
	void forceBlendFinish_gp(bool kill_anim=true);
	void forceBlendFinish_pg(bool kill_anim=true);
	void forceBlendFinish_gi(bool kill_anim=true);
	void forceFadeFinish(bool kill_anim=true);

};

#endif