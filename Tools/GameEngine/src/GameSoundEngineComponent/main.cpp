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
// GameEngine Sound Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************

#include "GameEngine_Sound.h"

#include <GameEngine/GameModules.h>
#include <GameEngine/GameLog.h>
#include <GameEngine/GameWorld.h>

#include <GameEngine/GameComponentRegistry.h>

#include <iostream>

#include "SoundManager.h"
#include "SoundResourceManager.h"
#include "SoundComponent.h"
#include "SoundListenerComponent.h"

#include <XMLParser/utXMLParser.h>


struct lua_State;

SOUNDPLUGINEXP void dllLoadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "Sound3D", SoundComponent::createComponent );	
	GameModules::componentRegistry()->registerComponent( "SoundListener", SoundListenerComponent::createComponent );	
	GameModules::componentRegistry()->registerManager( SoundManager::instance() );	
}

SOUNDPLUGINEXP void dllUnloadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "Sound3D", 0 );	
	GameModules::componentRegistry()->registerComponent( "SoundListener", 0 );	
	GameModules::componentRegistry()->unregisterManager( SoundManager::instance() );
	SoundManager::release();
}

SOUNDPLUGINEXP void dllRegisterLuaStack( lua_State* L )
{
	//SceneGraphLua::registerLuaBindings( L );
}

SOUNDPLUGINEXP void dllLoadScene( const char* sceneFile )
{
	XMLResults results;
	XMLNode scene = XMLNode::parseFile( sceneFile, "Configuration", &results);
	XMLNode& pathes(scene.getChildNode("EnginePath"));
	if (!pathes.isEmpty())
	{
		GameLog::logMessage("- Setting Sound Directory = %s", pathes.getAttribute("mediapath", "media"));
		SoundResourceManager::instance()->setResourceDirectory( pathes.getAttribute("mediapath", "media"));	
	}
}
