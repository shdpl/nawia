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
#include "GameModules.h"

#include "GamePlugInManager.h"
#include "GameWorld.h"
#include "GameComponentRegistry.h"
#include "GameNetworkManager.h"

GamePlugInManager* GameModules::m_plugInManager = 0x0;
GameComponentRegistry* GameModules::m_componentRegistry = 0x0;
GameWorld* GameModules::m_gameWorld = 0x0;
GameNetworkManager* GameModules::m_networkManager = 0x0;

void GameModules::release()
{
	delete m_networkManager; m_networkManager = 0;
	// Order of destruction is important !
	// First release the game world to delete all allocated components and entities
	delete m_gameWorld; m_gameWorld = 0;
	// Then we can release the plugins
	delete m_plugInManager; m_plugInManager = 0;
	// Last but not least, remove the component registry
	delete m_componentRegistry; m_componentRegistry = 0;
}

GamePlugInManager* GameModules::plugInManager()
{
	if( m_plugInManager == 0x0 )
		m_plugInManager = new GamePlugInManager();
	return m_plugInManager;
}

GameComponentRegistry* GameModules::componentRegistry()
{
	if( m_componentRegistry == 0x0 )
		m_componentRegistry = new GameComponentRegistry();
	return m_componentRegistry;
}

GameWorld* GameModules::gameWorld()
{
	if( m_gameWorld == 0x0 )
		m_gameWorld = new GameWorld();
	return m_gameWorld;
}

GameNetworkManager* GameModules::networkManager()
{
	if( m_networkManager == 0x0 )
		m_networkManager = new GameNetworkManager();
	return m_networkManager;
}

void GameModules::releaseGameWorld()
{
	delete m_gameWorld;
	m_gameWorld = 0x0;
}