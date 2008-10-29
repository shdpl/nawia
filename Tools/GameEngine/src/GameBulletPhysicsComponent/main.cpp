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

