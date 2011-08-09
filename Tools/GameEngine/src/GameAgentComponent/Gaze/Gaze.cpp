
// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
//
// This file is part of the GameEngine of the University of Augsburg
//
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************

// ****************************************************************************************
//
// GameEngine Agent Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2011 Ionut Damian
// 
// ****************************************************************************************

#include "Gaze.h"
#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_Scenegraph.h"
#include "GameEngine/GameEngine_IK.h"
#include "Horde3D/Horde3D.h"

#include "GazeComponent.h"

#include "../Config.h"
#include "../utils.h"

unsigned int Gaze::s_nextGazeID = 0;

Gaze::Gaze(GazeComponent* comp) : 
m_component(comp), m_target_eID(-1), m_isActive(false), m_badTarget(false), m_morph(0), 
m_speed(2), m_duration(-1), m_timer(0)
{
	m_agent_eID = m_component->getEntityID();

	m_ID = s_nextGazeID++;

	Vec3f targetGaze = computeDefaultTarget();
	
	m_distance = 0;
	m_isDefaultGaze = true;
	m_morph = new Morph3(Vec3f(), targetGaze);
	
	//snap to the end immediately
	m_morph->update(1);

	activate();
}

Gaze::Gaze(GazeComponent* comp, Vec3f currentGaze, Vec3f targetGaze, float morphSpeed, float duration) : 
m_component(comp), m_target_eID(-1), m_isActive(false), m_timer(0),
m_badTarget(false), m_morph(0), m_speed(morphSpeed), m_isDefaultGaze(false), m_duration(duration)
{
	m_agent_eID = m_component->getEntityID();

	m_ID = s_nextGazeID++;

	if(!checkGaze(targetGaze))
	{
		m_badTarget = true;
		return;
	}

	m_distance = (targetGaze - currentGaze).length();
	m_morph = new Morph3(currentGaze, targetGaze);

	if(m_speed == 0)
	{
		//0 speed means we snap to the end immediately
		m_morph->update(1);
	}
	else
	{
		float speedMultiplier = Config::getParamF(Agent_Param::GazeSpeedMult_F);
		m_morph->setDuration( m_distance / ((speedMultiplier/GameEngine::FPS()) * m_speed) );
	}
	
	activate();
}

Gaze::Gaze(GazeComponent* comp, Vec3f currentGaze, int target_eID, float speed, float duration) : 
m_component(comp), m_target_eID(target_eID), m_isActive(false), m_timer(0),
m_badTarget(false), m_morph(0), m_speed(speed), m_isDefaultGaze(false), m_duration(duration)
{
	m_agent_eID = m_component->getEntityID();

	m_ID = s_nextGazeID++;

	Vec3f targetGaze = computeTarget(target_eID);
	if(!checkGaze(targetGaze))
	{
		m_badTarget = true;
		return;
	}	

	m_distance = (targetGaze - currentGaze).length();
	m_morph = new Morph3(currentGaze, targetGaze);

	if(m_speed == 0)
	{
		//0 speed means we snap to the end immediately
		m_morph->update(1);
	}
	else
	{
		float speedMultiplier = Config::getParamF(Agent_Param::GazeSpeedMult_F);
		m_morph->setDuration( m_distance / ((speedMultiplier/GameEngine::FPS()) * m_speed) );
	}
	
	activate();
}

Gaze::~Gaze()
{
	delete m_morph;
	m_morph = 0;
}

void Gaze::update()
{
	if(!isActive())
		return;

	if(m_target_eID >= 0 || m_isDefaultGaze)
	{
		//check whether the target has moved
		Vec3f currentTarget = m_morph->getTarget();
		Vec3f newTarget = (m_isDefaultGaze) ? computeDefaultTarget() : computeTarget(m_target_eID);
		//if(newTarget != currentTarget)
		if((newTarget - currentTarget).length() > Config::getParamF(Agent_Param::MaxGazeError_F))
		{
			//check if the new target is gazeable
			if(!checkGaze(newTarget))
			{
				deactivate();
				delete m_morph;
				m_morph = 0;
				return;
			}
			Vec3f currentGaze = m_component->getGazeCoord();
			m_distance = (newTarget - currentGaze).length();
			Morph3* newMorph = new Morph3( currentGaze, newTarget );
			delete m_morph;
			m_morph = newMorph;
		}
	}

	//update morphing process
	if(!m_morph->hasFinished())
	{
		float speedMultiplier = Config::getParamF(Agent_Param::GazeSpeedMult_F);
		m_morph->setDuration( m_distance / ((speedMultiplier/GameEngine::FPS()) * m_speed) );

		Vec3f val = m_morph->update();
	}	
	Vec3f current = m_morph->getValue();

	//apply gaze to agent
	int result = m_component->setGazeCoord( current );

	//process gaze duration
	float time = (float)m_timer->getTotalTime();
	if(time > m_duration && m_duration > 0)
	{
		deactivate();
		return;
	}
}

Vec3f Gaze::computeTarget(int target_eID)
{
	Vec3f target;
	const float *absArray;
	int target_hID = GameEngine::entitySceneGraphID( target_eID );

	//we will gaze at the target entities head, if it has one
	h3dFindNodes( target_hID, Config::getParamS( Agent_Param::HeadName_S ), H3DNodeTypes::Joint );
	int head = h3dGetNodeFindResult(0);
	if(head > 0)
	{
		h3dGetNodeTransMats( head, 0, &absArray );
		target = Matrix4f(absArray) * Vec3f(0,0,0);
	}
	else
	{
		//if we can't find a head, we'll just gaze at the root node of the target
		target = utils::getEntityPosition(target_eID);
	}

	return target;
}

Vec3f Gaze::computeDefaultTarget()
{
	//determine a point straight ahead of the agent
	const float *agent_relArray;
	h3dGetNodeTransMats( GameEngine::entitySceneGraphID( m_agent_eID ), &agent_relArray, 0 );
	Matrix4f agent_relMat(agent_relArray);

	Vec3f targetGaze = agent_relMat * Vec3f(m_component->getDfltRelGaze().x, m_component->getDfltRelGaze().y, m_component->getDfltRelGaze().z);

	return targetGaze;
}

bool Gaze::checkGaze(Vec3f target)
{
	//check if it is possible to gaze at that target
	int g_code;
	g_code = GameEngine::IK_checkGaze( m_agent_eID, target.x, target.y, target.z, true, true, true );
	
	if( g_code >= 4 || g_code <= 0) //4 = head and eyes out of range, 0 = error
		return false;
	else
		return true;
}

void Gaze::reset(Vec3f currentGaze, float newSpeed)
{
	if(!isActive())
		return;

	Vec3f targetGaze = m_morph->getTarget();
	if(!checkGaze(targetGaze))
	{
		m_badTarget = true;
		return;
	}

	m_distance = (targetGaze - currentGaze).length();
	
	delete m_morph;
	m_morph = new Morph3(currentGaze, targetGaze);

	//check speed override
	if(newSpeed >= 0)
		m_speed = newSpeed;

	if(m_speed == 0)
	{
		//0 speed means we snap to the end immediately
		m_morph->update(1);
	}
	else
	{
		float speedMultiplier = Config::getParamF(Agent_Param::GazeSpeedMult_F);
		m_morph->setDuration( m_distance / ((speedMultiplier/GameEngine::FPS()) * m_speed) );
	}
	
	activate();
}

void Gaze::activate()
{
	if(m_timer != 0)
		delete m_timer;
	m_timer = new Timer();

	m_isActive = true;
}

void Gaze::deactivate()
{
	m_isActive = false;
}

bool Gaze::isActive()
{
	return m_isActive && m_morph != 0;
}

unsigned int Gaze::getID()
{
	return m_ID;
}

int Gaze::getTargetEID()
{
	return m_target_eID;
}

Vec3f Gaze::getCurrent()
{
	return m_morph->getValue();
}

Vec3f Gaze::getTarget()
{
	return m_morph->getTarget();
}

bool Gaze::isValid()
{
	return !m_badTarget;
}

float Gaze::getSpeed()
{
	return m_speed;
}
