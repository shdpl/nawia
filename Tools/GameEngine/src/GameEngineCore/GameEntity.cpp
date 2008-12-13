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
	std::map< std::string, std::pair<PropertyType,void*> >::iterator t = m_properties.begin();
	while(t != m_properties.end())
	{
		delete t->second.second;
		t++;
	}
	m_properties.clear();
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




void* GameEntity::setProperty(std::string name, int value, GameComponent* editor)
{
	std::map< std::string, std::pair< PropertyType, void*> >::iterator t;
	t = m_properties.find(name);
	if(t != m_properties.end())
	{
		if(t->second.first == INTEGER)
		{
			int* val = static_cast<int*>(t->second.second);
			*val = value;
			throwPropertyEvent(name,INTEGER,t->second.second,editor);
			return t->second.second;
		}
		return 0x0;
	}
	else
	{
		m_properties[name] = std::make_pair(INTEGER, new int(value));
		throwPropertyEvent(name,INTEGER, m_properties[name].second,editor);
		return m_properties[name].second;
	}
}
void* GameEntity::setProperty(std::string name, unsigned int value, GameComponent* editor)
{
	std::map< std::string, std::pair< PropertyType, void*> >::iterator t;
	t = m_properties.find(name);
	if(t != m_properties.end())
	{
		if(t->second.first == UNSIGNED)
		{
			unsigned int* val = static_cast<unsigned int*>(t->second.second);
			*val = value;
			throwPropertyEvent(name,UNSIGNED,t->second.second,editor);
			return t->second.second;
		}
		return 0x0;
	}
	else
	{
		m_properties[name] = std::make_pair(UNSIGNED, new unsigned int(value));
		throwPropertyEvent(name,UNSIGNED,m_properties[name].second,editor);
		return m_properties[name].second;
	}
}
void* GameEntity::setProperty(std::string name, float value, GameComponent* editor)
{
	std::map< std::string, std::pair< PropertyType, void*> >::iterator t;
	t = m_properties.find(name);
	if(t != m_properties.end())
	{
		if(t->second.first == FLOAT)
		{
			float* val = static_cast<float*>(t->second.second);
			*val = value;
			throwPropertyEvent(name,FLOAT,t->second.second,editor);
			return t->second.second;
		}
		return 0x0;
	}
	else
	{
		m_properties[name] = std::make_pair(FLOAT, new float(value));
		throwPropertyEvent(name,FLOAT,m_properties[name].second,editor);
		return m_properties[name].second;
	}
}
void* GameEntity::setProperty(std::string name, double value, GameComponent* editor)
{
	std::map< std::string, std::pair< PropertyType, void*> >::iterator t;
	t = m_properties.find(name);
	if(t != m_properties.end())
	{
		if(t->second.first == DOUBLE)
		{
			double* val = static_cast<double*>(t->second.second);
			*val = value;
			throwPropertyEvent(name,DOUBLE,t->second.second,editor);
			return t->second.second;
		}
		return 0x0;
	}
	else
	{
		m_properties[name] = std::make_pair(DOUBLE, new double(value));
		throwPropertyEvent(name,DOUBLE,m_properties[name].second,editor);
		return m_properties[name].second;
	}
}
void* GameEntity::setProperty(std::string name, std::string value, GameComponent* editor)
{
	std::map< std::string, std::pair< PropertyType, void*> >::iterator t;
	t = m_properties.find(name);
	if(t != m_properties.end())
	{
		if(t->second.first == STRING)
		{
			std::string* val = static_cast<std::string*>(t->second.second);
			*val = value;
			throwPropertyEvent(name,STRING,t->second.second,editor);
			return t->second.second;
		}
		return 0x0;
	}
	else
	{
		m_properties[name] = std::make_pair(STRING, new std::string(value));
		throwPropertyEvent(name,STRING,m_properties[name].second,editor);
		return m_properties[name].second;
	}
}
void* GameEntity::setProperty(std::string name, Vec3f value, GameComponent* editor)
{
	std::map< std::string, std::pair< PropertyType, void*> >::iterator t;
	t = m_properties.find(name);
	if(t != m_properties.end())
	{
		if(t->second.first == VEC)
		{
			Vec3f* val = static_cast<Vec3f*>(t->second.second);
			*val = value;
			throwPropertyEvent(name,VEC,t->second.second,editor);
			return t->second.second;
		}
		return 0x0;
	}
	else
	{
		m_properties[name] = std::make_pair(VEC, new Vec3f(value));
		throwPropertyEvent(name,VEC,m_properties[name].second,editor);
		return m_properties[name].second;
	}
}

int GameEntity::getPropertyInteger(std::string name)
{
	std::map< std::string, std::pair< PropertyType, void*> >::iterator t;
	t = m_properties.find(name);
	if(t != m_properties.end())
	{
		if(t->second.first == INTEGER)
		{
			return *(static_cast<int*>(t->second.second));
		}
	}
	return 0;
}
unsigned int GameEntity::getPropertyUnsigned(std::string name)
{
	std::map< std::string, std::pair< PropertyType, void*> >::iterator t;
	t = m_properties.find(name);
	if(t != m_properties.end())
	{
		if(t->second.first == UNSIGNED)
		{
			return *(static_cast<unsigned int*>(t->second.second));
		}
	}
	return 0;
}
float GameEntity::getPropertyFloat(std::string name)
{
	std::map< std::string, std::pair< PropertyType, void*> >::iterator t;
	t = m_properties.find(name);
	if(t != m_properties.end())
	{
		if(t->second.first == FLOAT)
		{
			return *(static_cast<float*>(t->second.second));
		}
	}
	return 0.0f;
}
double GameEntity::getPropertyDouble(std::string name)
{
	std::map< std::string, std::pair< PropertyType, void*> >::iterator t;
	t = m_properties.find(name);
	if(t != m_properties.end())
	{
		if(t->second.first == DOUBLE)
		{
			return *(static_cast<double*>(t->second.second));
		}
	}
	return 0.0;
}
std::string GameEntity::getPropertyString(std::string name)
{
	std::map< std::string, std::pair< PropertyType, void*> >::iterator t;
	t = m_properties.find(name);
	if(t != m_properties.end())
	{
		if(t->second.first == STRING)
		{
			return *(static_cast<std::string*>(t->second.second));
		}
	}
	return "";
}
Vec3f GameEntity::getPropertyVec3f(std::string name)
{
	std::map< std::string, std::pair< PropertyType, void*> >::iterator t;
	t = m_properties.find(name);
	if(t != m_properties.end())
	{
		if(t->second.first == VEC)
		{
			return *(static_cast<Vec3f*>(t->second.second));
		}
	}
	return Vec3f(0.0f,0.0f,0.0f);
}
void GameEntity::throwPropertyEvent(std::string name, PropertyType type, void* value, GameComponent* editor)
{
	std::pair<std::string , std::pair<PropertyType,void*> > data;
	data.first = name;
	data.second.first = type;
	data.second.second = value;
	GameEvent event(GameEvent::E_SET_PROPERTY,&GameEventData(static_cast<void*>(&data)),editor);
	checkEvent(&event);
}