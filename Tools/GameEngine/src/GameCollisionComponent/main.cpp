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
// GameEngine Collision Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include <GameEngine/GameModules.h>
#include <GameEngine/GameComponentRegistry.h>

#include <iostream>

#include "CollisionManager.h"
#include "CollisionComponent.h"

struct lua_State;

#ifdef PLATFORM_WIN
#    define COLLISIONPLUGINEXP extern "C" __declspec( dllexport )
#else
#	 define COLLISIONPLUGINEXP 
#endif

COLLISIONPLUGINEXP void dllLoadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "CollisionHandler", CollisionComponent::createComponent );	
	GameModules::componentRegistry()->registerManager( CollisionManager::instance() );	
}

COLLISIONPLUGINEXP void dllUnloadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "CollisionHandler", 0);	
	GameModules::componentRegistry()->unregisterManager( CollisionManager::instance() );
	CollisionManager::release();
}

COLLISIONPLUGINEXP void dllRegisterLuaStack( lua_State* L )
{
	// TODO
}

