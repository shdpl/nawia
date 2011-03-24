
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

#include "Stage.h"

#include "Horde3D/Horde3D.h"
#include "GameEngine/GameEngine_Scenegraph.h"
#include "GameEngine/GameEngine_Agent.h"

Stage::Stage(int agent_hID, int id) : m_agent_hID(agent_hID), m_ID(id), m_animation(0), m_isLocked(false)
{
	printf("stage construct\n");
}

Stage::~Stage()
{}

void Stage::setup(Animation *a)
{
	if(a == 0)
		return;

	m_animation = a;

	//prepare animation
	m_animation->reset();

	//initialize h3d stage parameters
	h3dSetModelAnimParams( m_agent_hID, m_ID, 0, 0 );

	//force gaze update to make sure that the initial animation setup won't overwrite the head position
	GameEngine::Agent_forceGazeUpdate( GameEngine::sceneGraphEntityID(m_agent_hID) );
}

void Stage::update(float layerWeight)
{
	if(m_animation == 0)
		return;

	m_animation->update();

	//update h3d animation system
	h3dSetModelAnimParams( m_agent_hID, m_ID, m_animation->getCurrentFrame(), layerWeight );
}

void Stage::reupdateLastFrame(float layerWeight)
{
	//update h3d animation system
	h3dSetModelAnimParams( m_agent_hID, m_ID, m_animation->getCurrentFrame(), layerWeight );
}

void Stage::activate()
{	
	m_animation->activate();
}

void Stage::deactivate()
{	
	m_animation->deactivate();
}

void Stage::free()
{
	if(m_animation != 0)
	{
		delete m_animation;
		m_animation = 0;
	}

	//release the lock
	m_isLocked = false;
}

void Stage::lock()
{
	m_isLocked = true;
}

int Stage::getID()
{
	return m_ID;
}

Animation* Stage::getAnimation()
{
	return m_animation;
}

bool Stage::isLocked()
{
	return m_isLocked;
}

bool Stage::isFree()
{
	return (m_animation == 0);
}

bool Stage::isActive()
{
	return (m_animation == 0) ? false : m_animation->isActive();
}
