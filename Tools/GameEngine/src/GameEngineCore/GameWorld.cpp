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
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "GameWorld.h"

#include "GameLog.h"

#include <map>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

struct DeleteEntity
{ 
	template<typename T> void operator()(const T* ptr) const
	{
		delete ptr;
	}
};

struct ExecuteEvent
{ 
	ExecuteEvent(GameEvent* e) : event(e) {}
	void operator()(GameEntity* ptr) const
	{
		if (ptr != 0) ptr->executeEvent(event);
	}

	GameEvent* event;
};

struct GameWorldPrivate
{
	~GameWorldPrivate()
	{
		for_each( WorldList.begin(), WorldList.end(), DeleteEntity() );
		WorldList.clear();
		WorldMap.clear();	
		while (!NextIndexList.empty())
			NextIndexList.pop();
	}

	std::map<EntityID, unsigned int> WorldMap;
	std::vector<GameEntity*>			WorldList;

	std::stack<unsigned int>			NextIndexList;
};



GameWorld::GameWorld() 
{
	m_world = new GameWorldPrivate();
}

GameWorld::~GameWorld()
{
	delete m_world;	
}


GameEntity*	GameWorld::entity(const EntityID& id)
{
	if( m_world == 0x0 ) return 0;

	map<EntityID, unsigned int>::iterator iter = m_world->WorldMap.find(id);
	if (iter == m_world->WorldMap.end())
		return 0;
	return m_world->WorldList.at(iter->second - 1);
}

GameEntity*	GameWorld::entity(const unsigned int id)
{
	if( id > 0 && id <= m_world->WorldList.size() )
		return m_world->WorldList.at(id - 1);
	else
		return 0;
}


unsigned int GameWorld::entityID(const EntityID& id)
{
	map<EntityID, unsigned int>::iterator iter = m_world->WorldMap.find(id);
	if (iter != m_world->WorldMap.end())
		return iter->second;
	else
		return 0;
}

GameEntity* GameWorld::createEntity(const EntityID& id)
{
	map<EntityID, unsigned int>::iterator iter = m_world->WorldMap.find(id);
	if (iter != m_world->WorldMap.end())
	{
		return 0x0;
		//GameLog::warnMessage("Entity with name %s already exists!", id.c_str());
		//return m_world->WorldList.at(iter->second - 1);
	}
	GameEntity* entity = new GameEntity(id);
	if ( m_world->NextIndexList.empty() )
	{
		m_world->WorldList.push_back(entity);
		entity->m_worldId = (unsigned int) m_world->WorldList.size();
		m_world->WorldMap.insert(make_pair<string, unsigned int>(id, entity->m_worldId));
	}
	else
	{
		entity->m_worldId = m_world->NextIndexList.top() + 1;
		m_world->WorldList[m_world->NextIndexList.top()] = entity;
		m_world->WorldMap.insert(make_pair<string, unsigned int>(id, m_world->NextIndexList.top() + 1));
		m_world->NextIndexList.pop();
	}
	return entity;
}

//GameEntity* removeEntity(const EntityID& id)
//{
//	GameEntity* entity = 0;
//	map<idstring, unsigned int>::iterator iter = WorldMap.find(id);
//	if (iter != WorldMap.end())
//	{
//		entity = WorldList.at(iter->second);
//		NextIndexList.push(iter->second);
//		WorldList.at(iter->second) = 0;
//		WorldMap.erase(iter);
//		
//	}
//	return entity;
//}

void GameWorld::releaseEntity(const EntityID& id)
{
	map<EntityID, unsigned int>::iterator iter = m_world->WorldMap.find(id);
	if (iter != m_world->WorldMap.end())
	{
		m_world->NextIndexList.push(iter->second - 1);
		delete m_world->WorldList.at(iter->second - 1);
		m_world->WorldList.at(iter->second - 1) = 0;
		m_world->WorldMap.erase(iter);			
	}
}


void GameWorld::releaseEntity(const unsigned int id)
{
	GameEntity* entityPtr = entity(id);
	if( entityPtr )
	{
		releaseEntity( entityPtr->id() );
	}
}

void GameWorld::renameEntity(const EntityID& oldId, const EntityID& newId)
{
	releaseEntity(newId);
	map<EntityID, unsigned int>::iterator iter = m_world->WorldMap.find(oldId);
	if (iter != m_world->WorldMap.end())
	{
		unsigned int listID = iter->second;
		m_world->WorldMap.erase(iter);
		m_world->WorldMap.insert(std::make_pair<EntityID, unsigned int>(newId, listID));		
	}
}


void GameWorld::renameEntity(const unsigned int oldId, const EntityID& newId)
{
	GameEntity* entityPtr = entity(oldId);
	if(entityPtr)
	{
		renameEntity( entityPtr->id(), newId );
	}
}


bool GameWorld::checkEvent(GameEvent* event)
{
	vector<GameEntity*>::iterator iter = m_world->WorldList.begin();
	const vector<GameEntity*>::iterator end = m_world->WorldList.end();
	while( iter != end )
	{
		if( (*iter)->checkEvent(event) == false ) return false;
		++iter;
	}
	return true;
}

void GameWorld::executeEvent(GameEvent* event)
{
	for_each(m_world->WorldList.begin(), m_world->WorldList.end(), ExecuteEvent(event));
}

bool GameWorld::checkEvent(unsigned int id, GameEvent* event)
{
	if (id <= m_world->WorldList.size() && m_world->WorldList[id])	
		return m_world->WorldList[id]->checkEvent(event);	
	else
		return false;
}

void GameWorld::executeEvent(unsigned int id, GameEvent* event)
{
	if (id <= m_world->WorldList.size() && m_world->WorldList[id])	
		m_world->WorldList[id]->executeEvent(event);		
}