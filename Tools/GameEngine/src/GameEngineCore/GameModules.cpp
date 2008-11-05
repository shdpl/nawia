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
#include "GameModules.h"

#include "GamePlugInManager.h"
#include "GameWorld.h"
#include "GameComponentRegistry.h"

GamePlugInManager* GameModules::m_plugInManager = 0x0;
GameComponentRegistry* GameModules::m_componentRegistry = 0x0;
GameWorld* GameModules::m_gameWorld = 0x0;

void GameModules::release()
{
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