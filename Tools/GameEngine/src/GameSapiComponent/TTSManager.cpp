// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine of the University of Augsburg
// 
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************
#include "TTSManager.h"

#include "TTSComponent.h"

#include <algorithm>

struct UpdateNode
{ 		
	void operator()(TTSComponent* ptr) const
	{
		ptr->update();
	}
};

TTSManager*		TTSManager::m_instance = 0x0;

TTSManager* TTSManager::instance()
{
	if( m_instance == 0x0 )
		m_instance = new TTSManager();
	return m_instance;
}

void TTSManager::release()
{
	delete m_instance;
	m_instance = 0;
}

void TTSManager::update()
{
	for_each(m_ttsComponents.begin(), m_ttsComponents.end(), UpdateNode());
}

void TTSManager::addComponent(TTSComponent* component)
{
	std::vector<TTSComponent*>::iterator iter = find(m_ttsComponents.begin(), m_ttsComponents.end(), component);
	if (iter == m_ttsComponents.end())
		m_ttsComponents.push_back(component);
}

void TTSManager::removeComponent(TTSComponent* component)
{
	std::vector<TTSComponent*>::iterator iter = find(m_ttsComponents.begin(), m_ttsComponents.end(), component);
	if (iter != m_ttsComponents.end())
		m_ttsComponents.erase(iter);		
}

