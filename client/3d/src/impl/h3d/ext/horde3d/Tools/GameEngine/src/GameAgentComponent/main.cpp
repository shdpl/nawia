
// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
//
// This file is part of the GameEngine of the University of Augsburg
//
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************

// ****************************************************************************************
//
// GameEngine Agent Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2011 Ionut Damian
// 
// ****************************************************************************************
    
#include <GameEngine/GameModules.h>
#include <GameEngine/GameComponentRegistry.h>
#include <GameEngine/GameLog.h>
#include <XMLParser/utXMLParser.h>
#include <Horde3D/Horde3DUtils.h>

#include "AgentManager.h"
#include "AgentComponent.h"
#include "Config.h"

#ifdef PLATFORM_WIN
#    define AGENTPLUGINEXP extern "C" __declspec( dllexport )
#else
#	 define AGENTPLUGINEXP extern "C"
#endif

AGENTPLUGINEXP void dllLoadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "Agent", AgentComponent::createComponent );
	GameModules::componentRegistry()->registerManager( AgentManager::instance() );

	h3dInit();
}

AGENTPLUGINEXP void dllUnloadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "Agent", 0);
	GameModules::componentRegistry()->unregisterManager( AgentManager::instance() );
	AgentManager::release();
}

AGENTPLUGINEXP void dllLoadScene( const char* sceneFile )
{
	XMLResults results;
	XMLNode scene = XMLNode::parseFile( sceneFile, "Configuration", &results);

	/*
	 * Paths
	 */
	XMLNode& pathes(scene.getChildNode("EnginePath"));
	if (!pathes.isEmpty())
	{
		GameLog::logMessage("-  AnimationPath = %s", pathes.getAttribute("AnimationPath", "models"));
		h3dutSetResourcePath(H3DResTypes::Animation, pathes.getAttribute("animationpath", "animations"));
	}

	/*
	 * Horde3D configurations
	 */
	XMLNode& engineSettings(scene.getChildNode("EngineConfig"));
	if ( !engineSettings.isEmpty() )
	{				
		bool fastAnim = 
			_stricmp(engineSettings.getAttribute("fastAnimation", "false"), "true") == 0 ||
			_stricmp(engineSettings.getAttribute("fastAnimation", "0"), "1") == 0;
		GameLog::logMessage("FastAnimation: %s", fastAnim ? "enabled" : "disabled");
		h3dSetOption( H3DOptions::FastAnimation, fastAnim ? 1.0f : 0.0f );
	}

	/*
	 * Agent component configurations
	 */
	// First set default config
	Config::useDefault();

	XMLNode& extras(scene.getChildNode("Extras"));
	if (!extras.isEmpty())
	{
		const XMLNode& agentSettings(extras.getChildNode("AgentConfig"));
		if (!agentSettings.isEmpty())
		{
			char* xmlString = agentSettings.createXMLString();
			GameLog::logMessage("- Setting Agent settings from xml = %s", xmlString);
			delete xmlString;

			Config::loadFromXml(agentSettings);
		}
	}

	/*
	 * Animation lexicon
	 */
	if (!extras.isEmpty())
	{
		const XMLNode& animLexicon(extras.getChildNode("AnimationLexicon"));
		if (!animLexicon.isEmpty() && animLexicon.getAttribute("path") != 0)
		{			
			GameLog::logMessage("- Parsing Animation Lexicon from %s", animLexicon.getAttribute("path"));
			AnimationData::loadLexiconData( &XMLNode::openFileHelper( animLexicon.getAttribute("path"), "AnimationLexicon" ));
		}
		else
			GameLog::errorMessage( "AgentComponent: error parsing animation lexicon (file not found?). Animation loading will only be available by filename or resource" );
	}

	/*
	 * Socket entity
	 */
	if (!extras.isEmpty())
	{
		const XMLNode& socket(extras.getChildNode("SocketServer"));
		if (!socket.isEmpty() && socket.getAttribute("entity") != 0)
		{			
			GameLog::logMessage("- SocketServer entity set to %s", socket.getAttribute("entity"));
			Config::setParamS(Agent_Param::SocketEntityName_S, socket.getAttribute("entity"));
		}
		else
			GameLog::logMessage("- SocketServer entity set to default value (%s)", Config::getParamS(Agent_Param::SocketEntityName_S));
	}
}