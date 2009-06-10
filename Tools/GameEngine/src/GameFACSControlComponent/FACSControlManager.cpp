// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
// Programmers: Nikolaus Bee
//
// This file is part of the GameEngine of the University of Augsburg
// 
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************
#include "FACSControlManager.h"
#include "FACSControlComponent.h"

#include <algorithm>

struct UpdateNode
{ 		
	void operator()(FACSControlComponent* ptr) const
	{
		ptr->update();
	}
};

FACSControlManager* FACSControlManager::m_instance = 0x0;

FACSControlManager* FACSControlManager::instance()
{
	if( m_instance == 0x0 )
		m_instance = new FACSControlManager();
	return m_instance;
}

void FACSControlManager::release()
{
	delete m_instance;
	m_instance = 0x0;	
}

void FACSControlManager::addComponent(FACSControlComponent *component)
{
	std::vector<FACSControlComponent*>::iterator iter = find(m_facsControlListener.begin(), m_facsControlListener.end(), component);
	if (iter == m_facsControlListener.end())
	{
		m_facsControlListener.push_back(component);	
	}
}

void FACSControlManager::removeComponent(FACSControlComponent *component)
{
	std::vector<FACSControlComponent*>::iterator iter = find(m_facsControlListener.begin(), m_facsControlListener.end(), component);
	if (iter != m_facsControlListener.end())
		m_facsControlListener.erase(iter);		
}

void FACSControlManager::run()
{
	for_each(m_facsControlListener.begin(), m_facsControlListener.end(), UpdateNode());
}

void FACSControlManager::update()
{
	// TODO maybe send event when new data has been received
}