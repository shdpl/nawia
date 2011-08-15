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
// ****************************************************************************************
//

// ****************************************************************************************
//
// GameEngine Socket Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010
// authors: Ionut Damian, Nikolaus Bee, Felix Kistler
// 
// ****************************************************************************************
#include <GameEngine/GameModules.h>
#include <GameEngine/GameComponentRegistry.h>

#include "SocketManager.h"
#include "SocketComponent.h"

#ifdef PLATFORM_WIN
#    define SOCKETPLUGINEXP extern "C" __declspec( dllexport )
#else
#	 define SOCKETPLUGINEXP extern "C" 
#endif

SOCKETPLUGINEXP void dllLoadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "Socket", SocketComponent::createComponent );
	GameModules::componentRegistry()->registerManager( SocketManager::instance() );	
}

SOCKETPLUGINEXP void dllUnloadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "Socket", 0);
	GameModules::componentRegistry()->unregisterManager( SocketManager::instance() );
	SocketManager::release();
}


