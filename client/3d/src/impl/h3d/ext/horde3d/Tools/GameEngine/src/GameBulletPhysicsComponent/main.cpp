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
// GameEngine Bullet Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "GameEngine_BulletPhysics.h"

#include <GameEngine/GameModules.h>
#include <GameEngine/GameComponentRegistry.h>

#include <iostream>

#include "Physics.h"
#include "PhysicsComponent.h"
#include "PhysicsLua.h"

extern "C" BULLETPHYSICSPLUGINEXP void dllLoadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "BulletPhysics", PhysicsComponent::createComponent );	
	// For compatibility reasons
	GameModules::componentRegistry()->registerComponent( "Physics", PhysicsComponent::createComponent);	
	GameModules::componentRegistry()->registerManager( Physics::instance() );	
}

extern "C" BULLETPHYSICSPLUGINEXP void dllUnloadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "BulletPhysics", 0);	
	// For compatibility reasons
	GameModules::componentRegistry()->registerComponent( "Physics", 0);	
	GameModules::componentRegistry()->unregisterManager( Physics::instance() );
	Physics::release();
}

extern "C" BULLETPHYSICSPLUGINEXP  void dllRegisterLuaStack( lua_State* L )
{
	PhysicsLua::registerLuaBindings( L );
}

