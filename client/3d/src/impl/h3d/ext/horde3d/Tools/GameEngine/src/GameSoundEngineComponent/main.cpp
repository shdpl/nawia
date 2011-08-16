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
// GameEngine Sound Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************

#include <GameEngine/GameModules.h>
#include <GameEngine/GameLog.h>
#include <GameEngine/GameWorld.h>

#include <GameEngine/GameComponentRegistry.h>

#include <iostream>

#include "SoundManager.h"
#include "SoundResourceManager.h"
#include "SoundComponent.h"
#include "SoundListenerComponent.h"
#include "SoundLua.h"

#include <XMLParser/utXMLParser.h>

struct lua_State;

#ifdef PLATFORM_WIN
#    define SOUNDPLUGINEXP extern "C" __declspec( dllexport )
#else
#	 define SOUNDPLUGINEXP extern "C"
#endif

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
	SoundLua::registerLuaBindings( L );
}

SOUNDPLUGINEXP void dllLoadScene( const char* sceneFile )
{
	// Remove unused resources as we are loading a new scene
	SoundResourceManager::instance()->releaseUnusedResources();
	XMLResults results;
	XMLNode scene = XMLNode::parseFile( sceneFile, "Configuration", &results);
	XMLNode& pathes(scene.getChildNode("EnginePath"));
	if (!pathes.isEmpty())
	{
		GameLog::logMessage("- Setting Sound Directory = %s", pathes.getAttribute("mediapath", "media"));
		SoundResourceManager::instance()->setResourceDirectory( pathes.getAttribute("mediapath", "media"));	
	}

	XMLNode& extras(scene.getChildNode("Extras"));
	if (!extras.isEmpty())
	{
		const XMLNode& settings(extras.getChildNode("SoundManager"));
		if (!settings.isEmpty())
		{
			const char* maxSources = settings.getAttribute("maxSources");
			if (maxSources)
			{
				unsigned int maxS = (unsigned)atoi(maxSources);
				GameLog::logMessage("- Setting max sound sources: %u", maxS);
				SoundManager::instance()->setMaxSources(maxS);
			}
		}
	}
}
