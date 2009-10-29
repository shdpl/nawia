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
#include "GameComponentRegistry.h"
#include "GameComponentManager.h"
// TODO: remove this include again
#include "TimingManager.h"

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
	

	float updateTime, runTime;
	static float runSum[25];
	static int runCount = 20;
	static float updateSum[25];
	static float renderSum = 0;

	runTime = TimingManager::currentTimeStamp();
#pragma omp parallel for schedule(dynamic), private(updateTime)
	for( int i = 0; i < size; ++i )
	{
		updateTime = TimingManager::currentTimeStamp();
		m_privateRegistry->ManagerRegistry[i]->run();
		runSum[i+1] += TimingManager::currentTimeStamp() - updateTime;
	}
	runSum[0] +=  TimingManager::currentTimeStamp() - runTime;

	for( int i = 0; i < size; ++i )
	{
		updateTime = TimingManager::currentTimeStamp();
		m_privateRegistry->ManagerRegistry[i]->update();
		updateSum[i] += TimingManager::currentTimeStamp() - updateTime;	
	}

	updateTime = TimingManager::currentTimeStamp();
	for( int i = 0; i < size; ++i )
	{
		m_privateRegistry->ManagerRegistry[i]->render();
	}
	renderSum += TimingManager::currentTimeStamp() - updateTime;


	if (runCount < 39)
	{
		++runCount;
	}
	else
	{
#ifdef _OPENMP
		printf("Using OpenMP!\n");
#else
		printf("NOT using OpenMP!\n");
#endif
		printf("Update:\n");
		for (int i = 0; i < size; ++i)
		{
			printf("Manager %d: %.4f\n", i, updateSum[i] / 0.04f);
			updateSum[i] = 0.0f;
		}
		printf("\n");
		printf("Run: %.4f\n", runSum[0] / 0.04f);
		for (int i = 0; i < size; ++i)
		{
			printf("Manager %d: %.4f\n", i, runSum[i+1] / 0.04f);
			runSum[i+1] = 0.0f;
		}
		runSum[0] = 0;
		printf("\n");
		printf("Render: %.4f\n", renderSum / 0.04f);
		renderSum = 0.0f;
		printf("\n");

		runCount = 0;
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

