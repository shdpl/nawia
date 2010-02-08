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


// ****************************************************************************************
//
// GameEngine Core Library of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007-2009 Volker Wiendl, Felix Kistler
// 
// ****************************************************************************************
#include "GameEntity.h"

#include "GameLog.h"
#include "GameModules.h"
#include "GameWorld.h"


#include <algorithm>

using namespace std;

/**
 * \brief
 * Stores the components and listeners of a GameEntity
 * 
 * While the GameEntity provides the interface to the user and gameengine plugins
 * this private class hides members that should not be accessible from outside
 * 
 * @author Volker Wiendl
 * @date 2008
 * 
 * @author Felix Kistler
 * @date 2009
 */
struct GameEntityPrivate
{
	~GameEntityPrivate() 
	{
		while( !Components.empty() )
		{
			// Destructor of GameComponent will remove component from vector and listeners
			delete Components.front();
		}
	}

	void addListener(GameEvent::EventID id, GameComponent* listener, GameEntity* entity)
	{
		// Don't add components multiple times
		vector<GameComponent*>::iterator component = 
			find(Listeners[id].begin(), Listeners[id].end(), listener);
		if (component == Listeners[id].end())
		{
			Listeners[id].push_back(listener);

			if (Listeners[id].size() == 1)
			{
				// First listener of this kind, so register a listener to the game world
				GameModules::gameWorld()->addListener(id, entity);
			}
		}
	}

	void removeListener(GameEvent::EventID id, GameComponent* listener, GameEntity* entity)
	{	
		if (!Listeners[id].empty())
		{
			vector<GameComponent*>::iterator component = 
				find(Listeners[id].begin(), Listeners[id].end(), listener);
			if (component != Listeners[id].end())
			{
				Listeners[id].erase(component);
				
				// Last listener so remove listener of the game world
				if (Listeners[id].empty())
					GameModules::gameWorld()->removeListener(id, entity);
			}
		}
	}

	void removeListener(GameComponent* listener, GameEntity* entity)
	{		
		for (int i=0; i < GameEvent::EVENT_COUNT; ++i)
		{
			vector<GameComponent*>::iterator component = 
				find(Listeners[i].begin(), Listeners[i].end(), listener);
			if (component != Listeners[i].end())
			{
				Listeners[i].erase(component);

				// Last listener so remove listener of the game world
				if (Listeners[i].empty())
					GameModules::gameWorld()->removeListener((GameEvent::EventID)i, entity);
			}
		}
	}

	vector<GameComponent*>	 Listeners[GameEvent::EVENT_COUNT];
	vector<GameComponent*>	 Components;
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
	m_privateData->addListener( eventType, listener, this );
}

void GameEntity::removeListener( GameEvent::EventID eventType, GameComponent* listener )
{
	m_privateData->removeListener( eventType, listener, this );
}

void GameEntity::removeListener( GameComponent* listener )
{
	m_privateData->removeListener( listener, this );
}


bool GameEntity::checkEvent(GameEvent* event) const
{	
	const int id = event->id();
	vector<GameComponent*>::iterator componentIter = m_privateData->Listeners[id].begin();
	const vector<GameComponent*>::iterator componentsEnd = m_privateData->Listeners[id].end();
	const GameComponent* sender = event->sender();
	while ( componentIter != componentsEnd )
	{
		GameComponent* component( *componentIter++ );
		// Don't make a check on the event sender
		if ( component != sender && !component->checkEvent(event) )
			return false;
	}
	return true;
}

void GameEntity::executeEvent(GameEvent* event) 
{	
	const int id = event->id();
	vector<GameComponent*>::iterator componentIter = m_privateData->Listeners[id].begin();
	const vector<GameComponent*>::iterator componentsEnd = m_privateData->Listeners[id].end();
	const GameComponent* sender = event->sender();
	while (componentIter != componentsEnd)
	{
		GameComponent* component( *componentIter );
		if ( component != sender )
			component->executeEvent(event);
		++componentIter;
	}
}

GameComponent* GameEntity::component(const GameComponent::ComponentID& id)
{
	vector<GameComponent*>::iterator iter = m_privateData->Components.begin();
	const vector<GameComponent*>::iterator end = m_privateData->Components.end();
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
	vector<GameComponent*>::iterator iter = m_privateData->Components.begin();
	const vector<GameComponent*>::iterator end = m_privateData->Components.end();
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
	vector<GameComponent*>::iterator iter = m_privateData->Components.begin();
	const vector<GameComponent*>::iterator end = m_privateData->Components.end();
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