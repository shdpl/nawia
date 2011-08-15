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
// GameEngine BayesNet Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************       
#include "BayesNetManager.h"
#include "BayesNetComponent.h"

#include <algorithm>

struct UpdateNode
{
	void operator()(BayesNetComponent* ptr) const
	{
		ptr->update();
	}
};

BayesNetManager* BayesNetManager::m_instance = 0x0;

BayesNetManager* BayesNetManager::instance()
{
	if( m_instance == 0x0 )
		m_instance = new BayesNetManager();
	return m_instance;
}

void BayesNetManager::release()
{
	delete m_instance;
	m_instance = 0x0;
}

void BayesNetManager::addComponent(BayesNetComponent *component)
{
	std::vector<BayesNetComponent*>::iterator iter = find(m_bayesNetListener.begin(), m_bayesNetListener.end(), component);
	if (iter == m_bayesNetListener.end())
	{
		m_bayesNetListener.push_back(component);
	}
}

void BayesNetManager::removeComponent(BayesNetComponent *component)
{
	std::vector<BayesNetComponent*>::iterator iter = find(m_bayesNetListener.begin(), m_bayesNetListener.end(), component);
	if (iter != m_bayesNetListener.end())
		m_bayesNetListener.erase(iter);
}

void BayesNetManager::run()
{

}

void BayesNetManager::update()
{
	//for_each(m_bayesNetListener.begin(), m_bayesNetListener.end(), UpdateNode());
}
        