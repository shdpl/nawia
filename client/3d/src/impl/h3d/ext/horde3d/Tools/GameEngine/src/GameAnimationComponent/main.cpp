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
// GameEngine Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include <GameEngine/GameModules.h>
#include <GameEngine/GameLog.h>
#include <GameEngine/GameComponentRegistry.h>

#include <XMLParser/utXMLParser.h>

#include <Horde3D/Horde3DUtils.h>

#include <iostream>

#include "MoveAnimManager.h"
#include "MoveAnimComponent.h"
#include "KeyframeAnimComponent.h"
#include "KeyframeAnimManager.h"
#include "MorphtargetAnimComponent.h"
#include "MorphtargetAnimManager.h"
#include "AnimationLua.h"

#ifdef PLATFORM_WIN
#	 ifdef ANIMATIONSCOMPONENT_EXPORTS
#       define ANIMATIONSPLUGINEXP extern "C" __declspec( dllexport )
#	 else
#       define ANIMATIONSPLUGINEXP extern "C" __declspec( dllimport )
#    endif
#else
#	 define ANIMATIONSPLUGINEXP extern "C" 
#endif


ANIMATIONSPLUGINEXP void dllLoadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "KeyframeAnimation", KeyframeAnimComponent::createComponent );	
	GameModules::componentRegistry()->registerComponent( "MoveAnimation", MoveAnimComponent::createComponent );	
	GameModules::componentRegistry()->registerComponent( "MorphtargetAnimation", MorphtargetAnimComponent::createComponent );

	GameModules::componentRegistry()->registerManager( MoveAnimManager::instance() );	
	GameModules::componentRegistry()->registerManager( KeyframeAnimManager::instance() );	
	GameModules::componentRegistry()->registerManager( MorphtargetAnimManager::instance() );

	h3dInit();
}

ANIMATIONSPLUGINEXP void dllUnloadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "KeyframeAnimation", 0 );	
	GameModules::componentRegistry()->registerComponent( "MoveAnimation", 0 );	
	GameModules::componentRegistry()->registerComponent( "MorphtargetAnimation", 0 );

	GameModules::componentRegistry()->unregisterManager( MoveAnimManager::instance() );
	GameModules::componentRegistry()->unregisterManager( KeyframeAnimManager::instance() );	
	GameModules::componentRegistry()->unregisterManager( MorphtargetAnimManager::instance() );

	MoveAnimManager::release();
	KeyframeAnimManager::release();
	MorphtargetAnimManager::release();

	h3dRelease();
}


ANIMATIONSPLUGINEXP void dllLoadScene( const char* sceneFile )
{
	XMLResults results;
	XMLNode scene = XMLNode::parseFile( sceneFile, "Configuration", &results);

	XMLNode& pathes(scene.getChildNode("EnginePath"));
	if (!pathes.isEmpty())
	{
		GameLog::logMessage("-  AnimationPath = %s", pathes.getAttribute("AnimationPath", "models"));
		h3dutSetResourcePath(H3DResTypes::Animation, pathes.getAttribute("animationpath", "animations"));
	}

	XMLNode& engineSettings(scene.getChildNode("EngineConfig"));
	if ( !engineSettings.isEmpty() )
	{				
		bool fastAnim = 
			_stricmp(engineSettings.getAttribute("fastAnimation", "false"), "true") == 0 ||
			_stricmp(engineSettings.getAttribute("fastAnimation", "0"), "1") == 0;
		GameLog::logMessage("FastAnimation: %s", fastAnim ? "enabled" : "disabled");
		h3dSetOption( H3DOptions::FastAnimation, fastAnim ? 1.0f : 0.0f );
	}

}

extern "C" ANIMATIONSPLUGINEXP  void dllRegisterLuaStack( lua_State* L )
{
	AnimationLua::registerLuaBindings( L );
}
