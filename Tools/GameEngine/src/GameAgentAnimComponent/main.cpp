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
// GameEngine Agent Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************  
#include "GameEngine_AgentAnim.h"

#include <GameEngine/GameModules.h>
#include <GameEngine/GameLog.h>
#include <GameEngine/GameComponentRegistry.h>

#include <XMLParser/utXMLParser.h>
#include <Horde3D/Horde3DUtils.h>
#include <iostream>

#include "AgentAnimManager.h"
#include "AgentAnimComponent.h"

AGENTANIMPLUGINEXP void dllLoadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "AgentAnimation", AgentAnimComponent::createComponent );
	GameModules::componentRegistry()->registerManager( AgentAnimManager::instance() );
	
	h3dInit();
}

AGENTANIMPLUGINEXP void dllUnloadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "AgentAnimation", 0);
	GameModules::componentRegistry()->unregisterManager( AgentAnimManager::instance() );
	AgentAnimManager::release();

	h3dRelease();
}

AGENTANIMPLUGINEXP void dllLoadScene( const char* sceneFile )
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
        