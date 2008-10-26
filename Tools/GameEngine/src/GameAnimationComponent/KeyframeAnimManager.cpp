// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
// *************************************************************************************************



// ****************************************************************************************
//
// GameEngine Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "KeyframeAnimManager.h"

#include "KeyframeAnimComponent.h"

#include <GameEngine/GameEngine.h>

#include <algorithm>

struct NodeUpdate
{
	NodeUpdate(const float timestamp) : m_timestamp(timestamp) {}

	void operator()(KeyframeAnimComponent* const ptr) const
	{
		ptr->update(m_timestamp);
	}

	float m_timestamp;
};

struct NodeApplyChanges
{
	NodeApplyChanges(const float timestamp) : m_timestamp(timestamp) {}

	void operator()(KeyframeAnimComponent* const ptr) const
	{
		ptr->applyChanges(m_timestamp);
	}

	float m_timestamp;
};


KeyframeAnimManager* KeyframeAnimManager::m_instance = 0x0;

KeyframeAnimManager* KeyframeAnimManager::instance()
{
	if( m_instance == 0x0 )
		m_instance = new KeyframeAnimManager();
	return m_instance;
}

void KeyframeAnimManager::release()
{
	delete m_instance;
	m_instance = 0x0;
}

void KeyframeAnimManager::run()
{
	const float timestamp = GameEngine::timeStamp();
	for_each(m_components.begin(), m_components.end(), NodeApplyChanges(timestamp));
}

void KeyframeAnimManager::update()
{
	const float timestamp = GameEngine::timeStamp();
	for_each(m_components.begin(), m_components.end(), NodeUpdate(timestamp));
}

void KeyframeAnimManager::addObject(KeyframeAnimComponent* object)
{
	std::vector<KeyframeAnimComponent*>::iterator iter = find(m_components.begin(), m_components.end(), object);
	if ( iter == m_components.end() )
		m_components.push_back(object);
}

void KeyframeAnimManager::removeObject(KeyframeAnimComponent* object)
{
	std::vector<KeyframeAnimComponent*>::iterator iter = find(m_components.begin(), m_components.end(), object);
	if (iter != m_components.end())
		m_components.erase(iter);		
}

