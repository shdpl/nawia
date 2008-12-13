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
// GameEngine Core Library of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "GameEntity.h"
#include "GameLog.h"


#include <algorithm>

/**
 * \brief
 * Stores the components and listeners of a GameEntity
 * 
 * While the GameEntity provides the interface to the user and gameengine plugins
 * this private class hides members that should not be accessible from outside
 * 
 * @author Volker Wiendl
 * @date 2008
 */
struct GameEntityPrivate
{
	~GameEntityPrivate() 
	{
		while( !Components.empty() )
		{
			// Destructor of GameComponent will remove component from vector
			delete Components.front();
		}
	}

	void addListener(GameEvent::EventID id, GameComponent* listener)
	{
		Listeners[id].push_back(listener);
	}

	void removeListener(GameEvent::EventID id, GameComponent* listener)
	{	
		if (!Listeners[id].empty())
		{
			std::vector<GameComponent*>::iterator component;
			const std::vector<GameComponent*>::iterator componentsEnd = Listeners[id].end();
			while ((component = find(Listeners[id].begin(), Listeners[id].end(), listener)) != componentsEnd)
				Listeners[id].erase(component);
		}
	}

	void removeListener(GameComponent* listener)
	{		
		for (int i=0; i < GameEvent::EVENT_COUNT; ++i)
		{
			std::vector<GameComponent*>::iterator component;		
			// TODO: Can one component be registered to one event multiple times?
			while ((component = find(Listeners[i].begin(), Listeners[i].end(), listener)) != Listeners[i].end())
				Listeners[i].erase(component);
		}
	}

	std::vector<GameComponent*>	 Listeners[GameEvent::EVENT_COUNT];
	std::vector<GameComponent*>	 Components;
};


/*
 * Game Entity Implementation
 */

GameEntity::GameEntity(const EntityID& id) : m_id(id), m_worldId(0)
{
	m_privateData = new GameEntityPrivate();
#ifdef _DEBUG
	GameLog::logMessage("Creating entity %s", id.c_str());
#endif

}

GameEntity::~GameEntity()
{
	delete m_privateData;
}

void GameEntity::addListener( GameEvent::EventID eventType, GameComponent* listener )
{
	m_privateData->addListener( eventType, listener );
}

void GameEntity::removeListener( GameEvent::EventID eventType, GameComponent* listener )
{
	m_privateData->removeListener( eventType, listener );
}

void GameEntity::removeListener( GameComponent* listener )
{
	m_privateData->removeListener( listener );
}


bool GameEntity::checkEvent(GameEvent* event) const
{	
	const int id = event->id();
	std::vector<GameComponent*>::iterator componentIter = m_privateData->Listeners[id].begin();
	const std::vector<GameComponent*>::iterator componentsEnd = m_privateData->Listeners[id].end();
	while ( componentIter != componentsEnd )
	{
		GameComponent* component( *componentIter++ );
		// Don't make a check on the event sender
		if ( component != event->sender() && !component->checkEvent(event) )
			return false;
	}
	return true;
}

void GameEntity::executeEvent(GameEvent* event) 
{	
	const int id = event->id();
	std::vector<GameComponent*>::iterator componentIter = m_privateData->Listeners[id].begin();
	const std::vector<GameComponent*>::iterator componentsEnd = m_privateData->Listeners[id].end();
	while (componentIter != componentsEnd)
	{
		GameComponent* component( *componentIter );
		if ( component != event->sender() )
			component->executeEvent(event);
		++componentIter;
	}
}

GameComponent* GameEntity::component(const GameComponent::ComponentID& id)
{
	std::vector<GameComponent*>::iterator iter = m_privateData->Components.begin();
	const std::vector<GameComponent*>::iterator end = m_privateData->Components.end();
	while( iter != end )
	{
		if( (*iter)->componentID() == id )	return *iter;
		++iter;
	}
	return 0;
}

void GameEntity::removeComponent(const GameComponent::ComponentID& id)
{
	// The GameComponent Destructor automatically removes the component from m_privateData
	std::vector<GameComponent*>::iterator iter = m_privateData->Components.begin();
	const std::vector<GameComponent*>::iterator end = m_privateData->Components.end();
	while( iter != end )
	{
		if( (*iter)->componentID() == id )
		{
			GameComponent* component = *iter;	
			m_privateData->Components.erase(iter);
			delete component;
			break;
		}
		++iter;
	}
}

void GameEntity::addComponent(GameComponent* component)
{
	// Remove and delete any previously loaded component with the same ComponentID
	removeComponent(component->componentID());
	// Add newly created component
	m_privateData->Components.push_back(component);
}

void GameEntity::removeComponent(GameComponent *component)
{
	std::vector<GameComponent*>::iterator iter = m_privateData->Components.begin();
	const std::vector<GameComponent*>::iterator end = m_privateData->Components.end();
	while( iter != end )
	{
		if( (*iter) == component )
		{
			m_privateData->Components.erase(iter);
			break;
		}
		++iter;
	}
}