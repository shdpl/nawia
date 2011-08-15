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
// *************************************************************************************************
//


// ****************************************************************************************
//
// GameEngine Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Felix Kistler
// 
// ****************************************************************************************
#include "MoveAnimManager.h"

#include "MoveAnimComponent.h"

#include <GameEngine/GameEngine.h>

#include <vector>
#include <algorithm>

using namespace std;

struct NodeUpdate
{
	NodeUpdate(float fps) : m_fps(fps) {}

	void operator()(MoveAnimComponent* const ptr) const
	{
		ptr->update(m_fps);
	}

	float m_fps;
};

MoveAnimManager* MoveAnimManager::m_instance = 0x0;

MoveAnimManager* MoveAnimManager::instance()
{
	if( m_instance == 0x0 )
		m_instance = new MoveAnimManager();
	return m_instance;
}

void MoveAnimManager::release()
{
	delete m_instance;
	m_instance = 0;
}

void MoveAnimManager::update( )
{
	const float fps = GameEngine::FPS();
	for_each(m_components.begin(), m_components.end(), NodeUpdate(fps));
}

void MoveAnimManager::addObject(MoveAnimComponent* object)
{
	std::vector<MoveAnimComponent*>::iterator iter = find(m_components.begin(), m_components.end(), object);
	if ( iter == m_components.end() )
		m_components.push_back(object);
}

void MoveAnimManager::removeObject(MoveAnimComponent* object)
{
	std::vector<MoveAnimComponent*>::iterator iter = find(m_components.begin(), m_components.end(), object);
	if (iter != m_components.end())
		m_components.erase(iter);		
}

