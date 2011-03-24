
// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
//
// This file is part of the GameEngine of the University of Augsburg
//
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************

// ****************************************************************************************
//
// GameEngine Agent Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2011 Ionut Damian
// 
// ****************************************************************************************
    
#include "AgentManager.h"
#include "AgentComponent.h"
#include "Animation/AnimationComponent.h"
#include "Movement/MovementComponent.h"
#include "Gaze/GazeComponent.h"
#include "Comm/CommComponent.h"
#include "Formation/FormationComponent.h"

#include "Animation/AnimationData.h"

#include <algorithm>

struct UpdateNode
{
	void operator()(AgentComponent* ptr) const
	{
		ptr->update();
	}
	void operator()(GazeComponent* ptr) const
	{
		ptr->update();
	}
	void operator()(AnimationComponent* ptr) const
	{
		ptr->update();
	}
	void operator()(MovementComponent* ptr) const
	{
		ptr->update();
	}
	void operator()(CommComponent* ptr) const
	{
		ptr->update();
	}
	void operator()(FormationComponent* ptr) const
	{
		ptr->update();
	}
};

AgentManager* AgentManager::m_instance = 0x0;

AgentManager* AgentManager::instance()
{
	if( m_instance == 0x0 )
		m_instance = new AgentManager();
	return m_instance;
}

void AgentManager::release()
{
	//release static data
	AnimationData::release();

	delete m_instance;
	m_instance = 0x0;
}

void AgentManager::addComponent(AgentComponent *component)
{
	std::vector<AgentComponent*>::iterator iter = find(m_agentListener.begin(), m_agentListener.end(), component);
	if (iter == m_agentListener.end())
	{
		m_agentListener.push_back(component);
	}
}
void AgentManager::addComponent(AnimationComponent *component)
{
	std::vector<AnimationComponent*>::iterator iter = find(m_agentAnimationListener.begin(), m_agentAnimationListener.end(), component);
	if (iter == m_agentAnimationListener.end())
	{
		m_agentAnimationListener.push_back(component);
	}
}
void AgentManager::addComponent(GazeComponent *component)
{
	std::vector<GazeComponent*>::iterator iter = find(m_agentGazeListener.begin(), m_agentGazeListener.end(), component);
	if (iter == m_agentGazeListener.end())
	{
		m_agentGazeListener.push_back(component);
	}
}
void AgentManager::addComponent(CommComponent *component)
{
	//we need only one instance of the communicaiton component
	if(m_agentCommListener.empty())
		m_agentCommListener.push_back(component);

	//std::vector<CommComponent*>::iterator iter = find(m_agentCommListener.begin(), m_agentCommListener.end(), component);
	//if (iter == m_agentCommListener.end())
	//{
	//	m_agentCommListener.push_back(component);
	//}
}
void AgentManager::addComponent(FormationComponent *component)
{
	std::vector<FormationComponent*>::iterator iter = find(m_agentInteractionListener.begin(), m_agentInteractionListener.end(), component);
	if (iter == m_agentInteractionListener.end())
	{
		m_agentInteractionListener.push_back(component);
	}
}
void AgentManager::addComponent(MovementComponent *component)
{
	std::vector<MovementComponent*>::iterator iter = find(m_agentMovementListener.begin(), m_agentMovementListener.end(), component);
	if (iter == m_agentMovementListener.end())
	{
		m_agentMovementListener.push_back(component);
	}
}


void AgentManager::removeComponent(AgentComponent *component)
{
	std::vector<AgentComponent*>::iterator iter = find(m_agentListener.begin(), m_agentListener.end(), component);
	if (iter != m_agentListener.end())
		m_agentListener.erase(iter);
}
void AgentManager::removeComponent(AnimationComponent *component)
{
	std::vector<AnimationComponent*>::iterator iter = find(m_agentAnimationListener.begin(), m_agentAnimationListener.end(), component);
	if (iter != m_agentAnimationListener.end())
	{
		m_agentAnimationListener.erase(iter);
	}
}
void AgentManager::removeComponent(GazeComponent *component)
{
	std::vector<GazeComponent*>::iterator iter = find(m_agentGazeListener.begin(), m_agentGazeListener.end(), component);
	if (iter != m_agentGazeListener.end())
	{
		m_agentGazeListener.erase(iter);
	}
}
void AgentManager::removeComponent(CommComponent *component)
{
	std::vector<CommComponent*>::iterator iter = find(m_agentCommListener.begin(), m_agentCommListener.end(), component);
	if (iter != m_agentCommListener.end())
	{
		m_agentCommListener.erase(iter);
	}
}
void AgentManager::removeComponent(FormationComponent *component)
{
	std::vector<FormationComponent*>::iterator iter = find(m_agentInteractionListener.begin(), m_agentInteractionListener.end(), component);
	if (iter != m_agentInteractionListener.end())
	{
		m_agentInteractionListener.erase(iter);
	}
}
void AgentManager::removeComponent(MovementComponent *component)
{
	std::vector<MovementComponent*>::iterator iter = find(m_agentMovementListener.begin(), m_agentMovementListener.end(), component);
	if (iter != m_agentMovementListener.end())
	{
		m_agentMovementListener.erase(iter);
	}
}


void AgentManager::run()
{

}

void AgentManager::update()
{
	for_each(m_agentListener.begin(), m_agentListener.end(), UpdateNode());

	for_each(m_agentMovementListener.begin(), m_agentMovementListener.end(), UpdateNode());
	for_each(m_agentAnimationListener.begin(), m_agentAnimationListener.end(), UpdateNode());
	for_each(m_agentGazeListener.begin(), m_agentGazeListener.end(), UpdateNode());
	for_each(m_agentCommListener.begin(), m_agentCommListener.end(), UpdateNode());
	for_each(m_agentInteractionListener.begin(), m_agentInteractionListener.end(), UpdateNode());
}     

//getter
AgentComponent* AgentManager::getAgentComponent(int eID)
{
	std::vector<AgentComponent*>::iterator iter = m_agentListener.begin();
	while (iter != m_agentListener.end())
	{
		if((*iter)->getEntityID() == eID)
			return *iter;

		++iter;
	}

	return 0;
}

AnimationComponent* AgentManager::getAnimationComponent(int eID)
{
	std::vector<AnimationComponent*>::iterator iter = m_agentAnimationListener.begin();
	while (iter != m_agentAnimationListener.end())
	{
		if((*iter)->getEntityID() == eID)
			return *iter;

		++iter;
	}

	return 0;
}

GazeComponent* AgentManager::getGazeComponent(int eID)
{
	std::vector<GazeComponent*>::iterator iter = m_agentGazeListener.begin();
	while (iter != m_agentGazeListener.end())
	{
		if((*iter)->getEntityID() == eID)
			return *iter;

		++iter;
	}

	return 0;
}

CommComponent* AgentManager::getCommComponent(/*int eID*/)
{
	//std::vector<CommComponent*>::iterator iter = m_agentCommListener.begin();
	//while (iter != m_agentCommListener.end())
	//{
	//	if((*iter)->getEntityID() == eID)
	//		return *iter;

	//	++iter;
	//}

	//return 0;

	if(m_agentCommListener.empty())
		return 0;
	else
		return m_agentCommListener.front();
}

FormationComponent* AgentManager::getFormationComponent(int eID)
{
	std::vector<FormationComponent*>::iterator iter = m_agentInteractionListener.begin();
	while (iter != m_agentInteractionListener.end())
	{
		if((*iter)->getEntityID() == eID)
			return *iter;

		++iter;
	}

	return 0;
}

MovementComponent* AgentManager::getMovementComponent(int eID)
{
	std::vector<MovementComponent*>::iterator iter = m_agentMovementListener.begin();
	while (iter != m_agentMovementListener.end())
	{
		if((*iter)->getEntityID() == eID)
			return *iter;

		++iter;
	}

	return 0;
}

int AgentManager::getAgentID(int eID)
{
	for(unsigned int i=0; i< m_agentListener.size(); i++ )
	{
		if(m_agentListener[i]->getEntityID() == eID)
			return i;
	}
	return -1;
}

int AgentManager::getEntityID(int aID)
{
	if(aID < 0 || (unsigned int)aID >= m_agentListener.size())
		return -1;

	return m_agentListener[(unsigned int)aID]->getEntityID();
}