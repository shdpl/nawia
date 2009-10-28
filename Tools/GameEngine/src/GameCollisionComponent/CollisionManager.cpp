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
#include "CollisionManager.h"

#include "CollisionComponent.h"

#include <algorithm>

CollisionManager* CollisionManager::m_instance = 0x0;

CollisionManager* CollisionManager::instance()
{
	if( m_instance == 0x0 )
		m_instance = new CollisionManager();
	return m_instance;
}

void CollisionManager::release()
{
	delete m_instance;
	m_instance = 0x0;
}

struct UpdateNode
{ 		
	void operator()(CollisionComponent* ptr) const
	{
		ptr->update();
	}
};

void CollisionManager::run()
{
	for_each(m_collisionComponents.begin(), m_collisionComponents.end(), UpdateNode());
}

void CollisionManager::addComponent(CollisionComponent* component)
{
	std::vector<CollisionComponent*>::iterator iter = find(m_collisionComponents.begin(), m_collisionComponents.end(), component);
	if (iter == m_collisionComponents.end())
		m_collisionComponents.push_back(component);
}

void CollisionManager::removeComponent(CollisionComponent* component)
{
	std::vector<CollisionComponent*>::iterator iter = find(m_collisionComponents.begin(), m_collisionComponents.end(), component);
	if (iter != m_collisionComponents.end())
		m_collisionComponents.erase(iter);		
}

