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
// GameEngine IK Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************
#include "GameEngine_IK.h"

#include <GameEngine/GameModules.h>
#include <GameEngine/GameComponentRegistry.h>
#include <GameEngine/GameLog.h>

#include "IKManager.h"
#include "IKComponent.h"
#include "Config.h"

IKPLUGINEXP void dllLoadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "IK", IKComponent::createComponent );
	GameModules::componentRegistry()->registerManager( IKManager::instance() );	
}

IKPLUGINEXP void dllUnloadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "IK", 0);
	GameModules::componentRegistry()->unregisterManager( IKManager::instance() );
	IKManager::release();
}

IKPLUGINEXP void dllLoadScene(const char* sceneFile)
{
	// First set default config
	Config::useDefault();


	XMLResults results;
	XMLNode scene = XMLNode::parseFile( sceneFile, "Configuration", &results);
	XMLNode& extras(scene.getChildNode("Extras"));
	if (!extras.isEmpty())
	{
		const XMLNode& ikSettings(extras.getChildNode("IKManager"));
		if (!ikSettings.isEmpty())
		{
			char* xmlString = ikSettings.createXMLString();
			GameLog::logMessage("- Setting IK options from xml = %s", xmlString);
			delete xmlString;

			Config::loadFromXml(ikSettings);
		}
	}
}


