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
#include "AnimationBlending.h"
#include "AgentAnimComponent.h"
#include "AnimationNode.h"
#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEvent.h"
#include "GameEngine/GameEntity.h"
#include "GameEngine/GameEngine_Scenegraph.h"
#include <time.h>

//definitions
float AnimationBlending::BLENDING_SPEED = 2;
float AnimationBlending::BLENDING_SPEED_PG = 2;
float AnimationBlending::BLENDING_SPEED_GP = 2;

AnimationBlending::AnimationBlending(AgentAnimComponent* comp, int blend_A, int blend_B, float posture_weight):
A_id(blend_A), B_id(blend_B), running(true), abort(false), t(0), temp_posture_weight(posture_weight), fade_from(0), fade_to(0)
{
	//find animations
	A = 0;
	B = 0;
	std::vector<AnimationNode*>::iterator iter = comp->m_animations.begin();
	const std::vector<AnimationNode*>::iterator end = comp->m_animations.end();
	while ( iter != end )
	{
		if( *iter == NULL )
		{
			++iter; continue;
		}
		if( (*iter)->id == A_id )
		{
			A = *iter;
		}
		if( (*iter)->id == B_id )
		{
			B = *iter;
		}
		++iter;
	}

	m_component = comp;
	temp_still_max_weight = (m_component->stillAnim != 0) ? m_component->stillAnim->getMaxWeight() : 0;
	if(m_component->stillAnim != 0 && temp_still_max_weight > 0.0f && blend_A == -1) 
	{
		m_component->stillAnim->setMaxWeight(0.0f);
		m_component->stillAnim->setWeight(0.0f);
	}

	start_weight = 1;
}

AnimationBlending::AnimationBlending(AgentAnimComponent* comp, int fade_anim_id, float _fade_from, float _fade_to):
A_id(fade_anim_id), B_id(-1), running(true), abort(false), t(0), temp_posture_weight(-1), start_weight(1)
{
	A = 0; B = 0;
	std::vector<AnimationNode*>::iterator iter = comp->m_animations.begin();
	const std::vector<AnimationNode*>::iterator end = comp->m_animations.end();
	while ( iter != end )
	{
		if( *iter == NULL )
		{
			++iter; continue;
		}
		if( (*iter)->id == A_id )
		{
			A = *iter;
		}
		++iter;
	}

	m_component = comp;
	fade_from = _fade_from;
	fade_to = _fade_to;

	fade_direction = (fade_from < fade_to)? 1 : -1;
	t = fade_from;
}

AnimationBlending::~AnimationBlending()
{
	m_component = 0;
	A = 0;
	B = 0;
}

void AnimationBlending::blend_gg()
{
	if(abort)
	{
		t = 1;
		running = false;
		abort = false;
		if(AGENTANIMDEBUG)
			printf("[db]-- ABORT B_GG on entity %d --\n",GameEngine::sceneGraphEntityID(A->model));
	}
	//stop if the animations were not found or were deleted
	if(A == 0 || B == 0) 
	{
		t = 0;
		running = false;
		return;
	}
	if(AGENTANIMDEBUG)
		printf("[db]bgg on %d: anim%d(%.2f) to anim%d(%.2f) with pw= %.2f sw= %.2f mmw= %.2f\n",
		GameEngine::sceneGraphEntityID(A->model), A->stage, A->weight, B->stage, B->weight, m_component->posture_weight, (m_component->stillAnim != 0) ? m_component->stillAnim->weight : 0, m_component->model_max_weight);

	//compute weight morphing (blending)
	if(t==0)
		start_weight = A->weight;
	if(t <= 1)
	{
		A->setWeight(start_weight * (1 - t));
		B->setWeight(t, m_component->model_max_weight);

		if(start_weight <= 0.9)
			m_component->posture_weight = ((start_weight-t) * m_component->model_max_weight);
		else
			m_component->posture_weight = 0.0f;

		if(m_component->posture_weight < 0) m_component->posture_weight = 0;

		//update still anim
		if(m_component->stillAnim != 0)
			m_component->stillAnim->updateWeight(m_component->getAnimNodeWithNoCust(true) != 0, t);

		t = t + BLENDING_SPEED * (float)(m_component->loopTime/CLOCKS_PER_SEC) * (float)((A->scale > B->scale)? A->scale : B->scale);
		//t = t + BLENDING_SPEED_PG * 0.1f;		
	}
	else
	{
		//"snap" to end
		B->setWeight(1.0f, m_component->model_max_weight);

		//terminate animation A
		A->sleep = true;
		A->frame = A->max_frame -1;
		A->setWeight(0.0f);		
		if(!A->loop || B->loop)
			m_component->killAnim( A );
		
		//reset blending parameters
		t = 0;
		running = false;
	}
}

void AnimationBlending::blend_pg()
{
	if(abort)
	{
		t = 1;
		running = false;
		abort = false;	
		if(AGENTANIMDEBUG)
			printf("[db]-- ABORT B_PG on entity %d --\n",GameEngine::sceneGraphEntityID(B->model));
	}
	//stop if the animations were not found or were deleted
	if(B == 0 || m_component->nr_postures <= 0) 
	{
		t = 0;
		running = false;
		return;
	}
	//printf("pg %.2f\n",t);
	if(AGENTANIMDEBUG)
		printf("[db]bpg on %d: postures(%.2f) to anim%d(%.2f) with sw= %.2f\n",
		GameEngine::sceneGraphEntityID(B->model),  m_component->posture_weight, B->id, B->weight, (m_component->stillAnim != 0) ? m_component->stillAnim->weight : 0);

	//compute weight morphing (blending)
	if(t <= 1)
	{
		m_component->posture_weight = ((1-t) * m_component->model_max_weight);
		//B->weight = (t * m_component->model_max_weight);
		B->setWeight(t, m_component->model_max_weight);

		if(m_component->posture_weight < 0) m_component->posture_weight = 0;

		//if the spacial extent of the animations is restricted, we must blend that too
		if(m_component->stillAnim != 0)
		{
			if(temp_still_max_weight > 0.0f && m_component->stillAnim->getMaxWeight() < temp_still_max_weight)
				m_component->stillAnim->setMaxWeight(t);
			else
				m_component->stillAnim->setMaxWeight(temp_still_max_weight);
		}
		
		//force a still animation weight update
		if(m_component->stillAnim != 0)
			m_component->stillAnim->updateWeight(m_component->getAnimNodeWithNoCust(true) != 0);

		t = t + BLENDING_SPEED_PG * (float)(m_component->loopTime/CLOCKS_PER_SEC) * B->scale;
		//t = t + BLENDING_SPEED_PG * 0.1f;
	}
	else
	{
		m_component->posture_weight = 0.0f;
		if(B->loop)
		{
			//kill all postures
			for(unsigned int i=0; i< m_component->m_animations.size(); i++)
			{
				if(m_component->m_animations[i] == 0)
					continue;

				if(m_component->m_animations[i]->doNotDie)
					m_component->killAnim(m_component->m_animations[i]);
			}
		}

		t = 0;
		running = false;
	}
}

void AnimationBlending::blend_gp()
{
	if(abort)
	{
		t = 1;
		running = false;
		abort = false;
		if(AGENTANIMDEBUG)
			printf("[db]-- ABORT B_GP on entity %d --\n",GameEngine::sceneGraphEntityID(A->model));
		return;
	}
	//stop if the animations were not found or were deleted
	if(A == 0 || m_component->nr_postures <= 0) 
	{
		t = 0;
		running = false;
		return;
	}
	if(AGENTANIMDEBUG)
		printf("[db]bgp on %d: anim%d(%.2f) to posture(%.2f) with sw= %.2f\n",GameEngine::sceneGraphEntityID(A->model), A->id, A->weight, (m_component->stillAnim != 0) ? m_component->stillAnim->weight : 0);

	//compute weight morphing (blending)
	if(t <= 1)
	{
		A->setWeight(start_weight - t, m_component->model_max_weight);
		m_component->posture_weight = (t * temp_posture_weight);

		if(m_component->posture_weight < 0) m_component->posture_weight = 0;

		//if the spacial extent of the animations is restricted, we must blend that too
		if(m_component->stillAnim != 0)
		{
			if(temp_still_max_weight > 0.0f && m_component->stillAnim->getMaxWeight() > 0.0f)
				m_component->stillAnim->setMaxWeight(temp_still_max_weight - t);
			else
				m_component->stillAnim->setMaxWeight(0.0f);
		}
		
		//force a still animation weight update
		if(m_component->stillAnim != 0)
			m_component->stillAnim->weight = m_component->stillAnim->getMaxWeight();

		t = t + BLENDING_SPEED_GP * (float)(m_component->loopTime/CLOCKS_PER_SEC) * A->scale;
		//t = t + BLENDING_SPEED_PG * 0.1f;
		
		if(A->finished)
		{
			//We have to manually update the Animation
			SetAnimFrame setAnimFrame(A->stage, A->max_frame, A->weight);
			GameEvent event(GameEvent::E_SET_ANIM_FRAME, &setAnimFrame, 0);
			m_component->owner()->executeEvent(&event);
			//h3dSetModelAnimParams(A->model, A->stage, A->max_frame -0.1f, A->weight);
		}
	}
	else
	{
		m_component->posture_weight = temp_posture_weight;
		if(m_component->stillAnim != 0)
			m_component->stillAnim->setMaxWeight(temp_still_max_weight);

		A->weight = 0.0f;
		t = 0;
		running = false;

		//kill anim
		m_component->killAnim( A );
		//if( m_component->idleAnimStarted ) m_component->restoreIdle();

	}
}

void AnimationBlending::blend_gi()
{
	if(abort)
	{
		t = 1;
		running = false;
		abort = false;
		if(AGENTANIMDEBUG)
			printf("[db]-- ABORT B_GI --\n");
		return;
	}
	//stop if the animations were not found or were deleted
	if(A == 0 || B == 0) 
	{
		t = 0;
		running = false;
		return;
	}
	if(AGENTANIMDEBUG)
		printf("[db]bgi on %d: anim%d(%.2f) to idle%d(%.2f) with sw= %.2f\n",GameEngine::sceneGraphEntityID(A->model), A->stage, A->weight, B->stage, B->weight, (m_component->stillAnim != 0) ? m_component->stillAnim->weight : 0);

	//wake up idle anim
	B->sleep = false;

	//compute weight morphing (blending)
	if(t <= 1)
	{
		A->setWeight(start_weight - t, m_component->model_max_weight);
		B->setWeight(t, m_component->model_max_weight);
		if(start_weight <= 0.9)
			m_component->posture_weight = ((start_weight-t) * m_component->model_max_weight);
		else
			m_component->posture_weight = 0.0f;

		if(A->weight < 0) A->weight = 0;
		if(B->weight < 0) B->weight = 0;
		if(m_component->posture_weight < 0) m_component->posture_weight = 0;
		
		//update still anim
		if(m_component->stillAnim != 0)
			m_component->stillAnim->updateWeight(m_component->getAnimNodeWithNoCust(true) != 0);	

		t = t + BLENDING_SPEED * (float)(m_component->loopTime/CLOCKS_PER_SEC) * (float)((A->scale > B->scale)? A->scale : B->scale);
		//t = t + BLENDING_SPEED_PG * 0.1f;		
		
		if(A->finished)
		{
			//We have to manually update the Animation until the blending finishes
			SetAnimFrame setAnimFrame(A->stage, A->max_frame, A->weight);
			GameEvent event(GameEvent::E_SET_ANIM_FRAME, &setAnimFrame, 0);
			m_component->owner()->executeEvent(&event);
			//h3dSetModelAnimParams(A->model, A->stage, A->max_frame -0.1f, A->weight);
		}
	}
	else
	{		
		//"snap" to end
		B->setWeight(1.0f, m_component->model_max_weight);
		
		//kill anim
		m_component->killAnim( A );

		//reset blending parameters
		t = 0;
		running = false;
	}
}

bool AnimationBlending::fade()
{
	if((t - fade_to)*fade_direction >= 0)
	{
		//snap to limit
		A->weight = fade_to;

		//if this was a fade out, kill anim
		if(fade_direction < 0)
			m_component->killAnim( A );

		running = false;
		return false;
	}

	A->weight = t;
	t = t + (float)fade_direction * BLENDING_SPEED * (float)(m_component->loopTime/CLOCKS_PER_SEC) * (float)A->scale;		

	if(AGENTANIMDEBUG)
		printf("[db]fade on %d: t=%.2f, x=%.2f\n",GameEngine::sceneGraphEntityID(A->model), t, (float)fade_direction * BLENDING_SPEED * (m_component->loopTime/CLOCKS_PER_SEC) * (float)A->scale);

	return true;
}

void AnimationBlending::forceBlendFinish_gg(bool kill_anim)
{
	if(!running)
		return;

	abort = true;

	A->sleep = true;
	A->weight = 0.0f;
	A->frame = 0.0f;

	if((!A->loop || B->loop) && kill_anim)
		m_component->killAnim(A);

	B->weight = m_component->model_max_weight;
}

void AnimationBlending::forceBlendFinish_gp(bool kill_anim)
{
	if(!running)
		return;

	abort = true;

	A->sleep = true;
	A->weight = 0.0f;
	A->frame = 0.0f;

	m_component->posture_weight = temp_posture_weight;
	if(m_component->stillAnim != 0)
		m_component->stillAnim->setMaxWeight(temp_still_max_weight);

	t = 0;

	//kill anim
	if(kill_anim)
		m_component->killAnim( A );
}

void AnimationBlending::forceBlendFinish_pg(bool kill_anim)
{
	if(!running)
		return;

	abort = true;

	m_component->posture_weight = 0.0f;
	B->weight = m_component->model_max_weight;
	if(m_component->stillAnim != 0)
		m_component->stillAnim->setMaxWeight(temp_still_max_weight);

	if(B->loop && kill_anim)
	{
		//kill all postures
		for(unsigned int i=0; i< m_component->m_animations.size(); i++)
		{
			if(m_component->m_animations[i] == 0)
				continue;

			if(m_component->m_animations[i]->doNotDie)
				m_component->killAnim(m_component->m_animations[i]);
		}
	}
	
	t = 0;
}

void AnimationBlending::forceBlendFinish_gi(bool kill_anim)
{
	if(!running)
		return;

	abort = true;

	A->sleep = true;
	A->weight = 0.0f;
	A->frame = 0.0f;

	B->weight = m_component->model_max_weight;	
	m_component->posture_weight = 0.0f;

	t = 0;
		
	//kill anim
	if(kill_anim)
		m_component->killAnim( A );
}

void AnimationBlending::forceFadeFinish(bool kill_anim)
{
	if(!running)
		return;

	A->weight = fade_to;

	//if this was a fade out, kill anim
	if(fade_direction < 0)
	{
		A->sleep = true;
		A->weight = 0.0f;
		A->frame = 0.0f;
		if(kill_anim)
			m_component->killAnim( A );
	}

	running = false;
}