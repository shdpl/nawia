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
#include "GameComponentRegistry.h"
#include "GameComponentManager.h"

#ifdef _OPENMP
#include <omp.h>
#endif

#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


struct ComponentRegistryPrivate
{
	/**
	 * Stores all creation functions for components
	 */
	map<string, GameComponentRegistry::CREATE_COMPONENT> ComponentRegistry;


	/**
	 * Stores all component managers of plugins
	 */
	vector<GameComponentManager*>						 ManagerRegistry;
};


GameComponentRegistry::GameComponentRegistry()
{
	m_privateRegistry = new ComponentRegistryPrivate();
}

GameComponentRegistry::~GameComponentRegistry()
{
	delete m_privateRegistry;
}

GameComponent* GameComponentRegistry::createComponent(const char *name, GameEntity* owner )
{
	map<string, GameComponentRegistry::CREATE_COMPONENT>::iterator iter = m_privateRegistry->ComponentRegistry.find(name);
	if( iter != m_privateRegistry->ComponentRegistry.end() )
	{
		return iter->second( owner );
	}
	else
		return 0;
}

void GameComponentRegistry::registerComponent( const char* name, CREATE_COMPONENT func )
{
	if( func )
		m_privateRegistry->ComponentRegistry[name] = func;
	else if ( m_privateRegistry->ComponentRegistry.find( name ) != m_privateRegistry->ComponentRegistry.end() )
		m_privateRegistry->ComponentRegistry.erase( m_privateRegistry->ComponentRegistry.find( name ) );
}

void GameComponentRegistry::registerManager(GameComponentManager *manager)
{
	if( find(m_privateRegistry->ManagerRegistry.begin(), m_privateRegistry->ManagerRegistry.end(), manager) == m_privateRegistry->ManagerRegistry.end() )
		m_privateRegistry->ManagerRegistry.push_back(manager);
}

void GameComponentRegistry::unregisterManager(GameComponentManager *manager)
{
	vector<GameComponentManager*>::iterator iter = find(m_privateRegistry->ManagerRegistry.begin(), m_privateRegistry->ManagerRegistry.end(), manager);
	if( iter != m_privateRegistry->ManagerRegistry.end() )
		m_privateRegistry->ManagerRegistry.erase(iter);
}

void GameComponentRegistry::updateComponentManagers()
{
	const int size = (int) m_privateRegistry->ManagerRegistry.size();
	
#pragma omp parallel for
	for( int i = 0; i < size; ++i )
	{
		m_privateRegistry->ManagerRegistry[i]->run();
	}

	for( int i = 0; i < size; ++i )
	{
		m_privateRegistry->ManagerRegistry[i]->update();
	}

	for( int i = 0; i < size; ++i )
	{
		m_privateRegistry->ManagerRegistry[i]->render();
	}
}

size_t GameComponentRegistry::componentNames(char* names, size_t size)
{
	std::string componentNames;

	std::map<std::string, CREATE_COMPONENT>::iterator iter = m_privateRegistry->ComponentRegistry.begin();
	while( iter != m_privateRegistry->ComponentRegistry.end() )
	{
		componentNames += iter->first + ';';
		++iter;
	}
	if( size > componentNames.length() && names != 0x0 )
	{
		memset( names, 0, size );
		memcpy( names, componentNames.c_str(), componentNames.length() );
	}
	return componentNames.length() + 1; // add one for the null termination character
}

