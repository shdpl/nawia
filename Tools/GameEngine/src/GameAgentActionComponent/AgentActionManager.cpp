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
// GameEngine Agent Action Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************
#include "AgentActionManager.h"
#include "AgentActionComponent.h"

#include <algorithm>

struct UpdateNode
{
	void operator()(AgentActionComponent* ptr) const
	{
		ptr->update();
	}
};

AgentActionManager* AgentActionManager::m_instance = 0x0;

AgentActionManager* AgentActionManager::instance()
{
	if( m_instance == 0x0 )
		m_instance = new AgentActionManager();
	return m_instance;
}

void AgentActionManager::release()
{
	delete m_instance;
	m_instance = 0x0;
}

void AgentActionManager::addComponent(AgentActionComponent *component)
{
	std::vector<AgentActionComponent*>::iterator iter = find(m_agentActionListener.begin(), m_agentActionListener.end(), component);
	if (iter == m_agentActionListener.end())
	{
		m_agentActionListener.push_back(component);
	}
}

void AgentActionManager::removeComponent(AgentActionComponent *component)
{
	std::vector<AgentActionComponent*>::iterator iter = find(m_agentActionListener.begin(), m_agentActionListener.end(), component);
	if (iter != m_agentActionListener.end())
		m_agentActionListener.erase(iter);
}

void AgentActionManager::run()
{

}

void AgentActionManager::update()
{
	for_each(m_agentActionListener.begin(), m_agentActionListener.end(), UpdateNode());
}
        