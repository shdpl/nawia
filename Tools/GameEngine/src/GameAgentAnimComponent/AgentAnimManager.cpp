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
#include "AgentAnimManager.h"
#include "AgentAnimComponent.h"

#include <algorithm>

struct UpdateNode
{
	void operator()(AgentAnimComponent* ptr) const
	{
		ptr->update();
	}
};

AgentAnimManager* AgentAnimManager::m_instance = 0x0;

AgentAnimManager* AgentAnimManager::instance()
{
	if( m_instance == 0x0 )
		m_instance = new AgentAnimManager();
	return m_instance;
}

void AgentAnimManager::release()
{
	delete m_instance;
	m_instance = 0x0;
}

void AgentAnimManager::addComponent(AgentAnimComponent *component)
{
	std::vector<AgentAnimComponent*>::iterator iter = find(m_agentAnimListener.begin(), m_agentAnimListener.end(), component);
	if (iter == m_agentAnimListener.end())
	{
		m_agentAnimListener.push_back(component);
	}
}

void AgentAnimManager::removeComponent(AgentAnimComponent *component)
{
	std::vector<AgentAnimComponent*>::iterator iter = find(m_agentAnimListener.begin(), m_agentAnimListener.end(), component);
	if (iter != m_agentAnimListener.end())
		m_agentAnimListener.erase(iter);
}

void AgentAnimManager::run()
{

}

void AgentAnimManager::update()
{
	for_each(m_agentAnimListener.begin(), m_agentAnimListener.end(), UpdateNode());
}
        