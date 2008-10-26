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
// GameEngine Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "GameEngine_Animations.h"

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

ANIMATIONSPLUGINEXP void dllLoadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "KeyframeAnimation", KeyframeAnimComponent::createComponent );	
	GameModules::componentRegistry()->registerComponent( "MoveAnimation", MoveAnimComponent::createComponent );	
	GameModules::componentRegistry()->registerComponent( "MorphtargetAnimation", MorphtargetAnimComponent::createComponent );

	GameModules::componentRegistry()->registerManager( MoveAnimManager::instance() );	
	GameModules::componentRegistry()->registerManager( KeyframeAnimManager::instance() );	
	GameModules::componentRegistry()->registerManager( MorphtargetAnimManager::instance() );

	Horde3D::init();
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

	Horde3D::release();
}


ANIMATIONSPLUGINEXP void dllLoadScene( const char* sceneFile )
{
	XMLResults results;
	XMLNode scene = XMLNode::parseFile( sceneFile, "Configuration", &results);

	XMLNode& pathes(scene.getChildNode("EnginePath"));
	if (!pathes.isEmpty())
	{
		GameLog::logMessage("-  AnimationPath = %s", pathes.getAttribute("AnimationPath", "models"));
		Horde3DUtils::setResourcePath(ResourceTypes::Animation, pathes.getAttribute("animationpath", "animations"));
	}

	XMLNode& engineSettings(scene.getChildNode("EngineConfig"));
	if ( !engineSettings.isEmpty() )
	{				
		bool fastAnim = 
			_stricmp(engineSettings.getAttribute("fastAnimation", "false"), "true") == 0 ||
			_stricmp(engineSettings.getAttribute("fastAnimation", "0"), "1") == 0;
		GameLog::logMessage("FastAnimation: %s", fastAnim ? "enabled" : "disabled");
		Horde3D::setOption( EngineOptions::FastAnimation, fastAnim ? 1.0f : 0.0f );
	}

}

extern "C" ANIMATIONSPLUGINEXP  void dllRegisterLuaStack( lua_State* L )
{
	AnimationLua::registerLuaBindings( L );
}