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
// GameEngine Socket Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010
// authors: Ionut Damian, Nikolaus Bee, Felix Kistler
// 
// ****************************************************************************************
#include "SocketManager.h"
#include "SocketComponent.h"

#include <algorithm>

struct UpdateNode
{ 		
	void operator()(SocketComponent* ptr) const
	{
		ptr->update();
	}
};

SocketManager* SocketManager::m_instance = 0x0;

SocketManager* SocketManager::instance()
{
	if( m_instance == 0x0 )
		m_instance = new SocketManager();
	return m_instance;
}

void SocketManager::release()
{
	delete m_instance;
	m_instance = 0x0;	
}

void SocketManager::addComponent(SocketComponent *component)
{
	std::vector<SocketComponent*>::iterator iter = find(m_socketListener.begin(), m_socketListener.end(), component);
	if (iter == m_socketListener.end())
	{
		m_socketListener.push_back(component);	
	}
}

void SocketManager::removeComponent(SocketComponent *component)
{
	std::vector<SocketComponent*>::iterator iter = find(m_socketListener.begin(), m_socketListener.end(), component);
	if (iter != m_socketListener.end())
		m_socketListener.erase(iter);		
}

void SocketManager::run()
{
	for_each(m_socketListener.begin(), m_socketListener.end(), UpdateNode());
}

void SocketManager::update()
{
	// TODO maybe send event when new data has been received
}