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
// GameEngine IK Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************
#include "IKManager.h"
#include "IKComponent.h"

#include <algorithm>

struct UpdateNode
{ 		
	void operator()(IKComponent* ptr) const
	{
		ptr->update();
	}
};

IKManager* IKManager::m_instance = 0x0;

IKManager* IKManager::instance()
{
	if( m_instance == 0x0 )
		m_instance = new IKManager();
	return m_instance;
}

void IKManager::release()
{
	delete m_instance;
	m_instance = 0x0;	
}

void IKManager::addComponent(IKComponent *component)
{
	std::vector<IKComponent*>::iterator iter = find(m_IKListener.begin(), m_IKListener.end(), component);
	if (iter == m_IKListener.end())
	{
		m_IKListener.push_back(component);	
	}
}

void IKManager::removeComponent(IKComponent *component)
{
	std::vector<IKComponent*>::iterator iter = find(m_IKListener.begin(), m_IKListener.end(), component);
	if (iter != m_IKListener.end())
		m_IKListener.erase(iter);		
}

void IKManager::run()
{
}

void IKManager::update()
{
	for_each(m_IKListener.begin(), m_IKListener.end(), UpdateNode());
}