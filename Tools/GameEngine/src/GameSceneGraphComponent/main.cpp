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
// GameEngine SceneGraph Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "GameEngine_SceneGraph.h"

#include <GameEngine/GameModules.h>
#include <GameEngine/GameLog.h>
#include <GameEngine/GameWorld.h>

#include <GameEngine/GameComponentRegistry.h>

#include <iostream>

#include "SceneGraph.h"
#include "SceneGraphComponent.h"
#include "SceneGraphLua.h"

#include <XMLParser/utXMLParser.h>
#include <Horde3D/Horde3DUtils.h>

struct lua_State;

SCENEGRAPHPLUGINEXP void dllLoadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "Horde3D", SceneGraphComponent::createComponent );	
	GameModules::componentRegistry()->registerManager( SceneGraphManager::instance() );	
	if ( !h3dInit() )
		GameLog::errorMessage(" Initialization of Horde3D failed! ");
}

SCENEGRAPHPLUGINEXP void dllUnloadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "Horde3D", 0 );	
	GameModules::componentRegistry()->unregisterManager( SceneGraphManager::instance() );
	SceneGraphManager::release();
	h3dRelease();
}

SCENEGRAPHPLUGINEXP void dllRegisterLuaStack( lua_State* L )
{
	//SceneGraphLua::registerLuaBindings( L );
}

SCENEGRAPHPLUGINEXP void dllLoadScene( const char* sceneFile )
{
	GameLog::logMessage("Setting Horde3D Paths");
	
	XMLResults results;
	XMLNode scene = XMLNode::parseFile( sceneFile, "Configuration", &results);
	XMLNode& engineSettings(scene.getChildNode("EngineConfig"));
	if ( !engineSettings.isEmpty() )
	{				
		bool loadTextures = 
			_stricmp(engineSettings.getAttribute("loadTextures", "true"), "true") == 0 ||
			_stricmp(engineSettings.getAttribute("loadTextures", "1"), "1") == 0;
		GameLog::logMessage("LoadTextures: %s", loadTextures ? "enabled" : "disabled");
		h3dSetOption( H3DOptions::LoadTextures, loadTextures ? 1.0f : 0.0f );
		int shadowMapSize = atoi(engineSettings.getAttribute("shadowMapSize", "1024"));					
		GameLog::logMessage("ShadowMapSize: %d", shadowMapSize);
		h3dSetOption( H3DOptions::ShadowMapSize, float( shadowMapSize) );
		int anisotropyFactor = atoi(engineSettings.getAttribute("anisotropyFactor", "1"));
		GameLog::logMessage("Anisotropy: %d", anisotropyFactor);
		h3dSetOption( H3DOptions::MaxAnisotropy, float( anisotropyFactor ) );
		bool texCompression = 
			_stricmp(engineSettings.getAttribute("texCompression", "true"), "true") == 0 ||
			_stricmp(engineSettings.getAttribute("texCompression", "1"), "1") == 0;
		GameLog::logMessage("TexCompression: %s", texCompression ? "enabled" : "disabled");
		h3dSetOption( H3DOptions::TexCompression, texCompression );
		int maxNumMessages = atoi(engineSettings.getAttribute("maxNumMessages", "1024"));
		h3dSetOption( H3DOptions::MaxNumMessages, float( maxNumMessages ) );
	}

	// Loading scene graph
	XMLNode& sceneGraph(scene.getChildNode("SceneGraph"));
	if ( sceneGraph.isEmpty() ) GameLog::errorMessage("No Scene Graph Node found!");
	else
	{
		GameLog::logMessage("Loading SceneGraph %s", sceneGraph.getAttribute("path"));
		// Environment
		H3DRes sceneGraphID = h3dAddResource( H3DResTypes::SceneGraph, sceneGraph.getAttribute("path"), 0 );
		GameLog::logMessage("Loading Resources...");
		// Load resources
		h3dutLoadResourcesFromDisk( "." );
		GameLog::logMessage("Adding scene graph to root node");
		// Add scene nodes	
		H3DNode newSceneID = h3dAddNodes( H3DRootNode, sceneGraphID);
		SceneGraphManager::instance()->addNewHordeNode( newSceneID );
	}
	// Use the specified render cam
	if (scene.getChildNode("ActiveCamera").getAttribute("name") && h3dFindNodes( H3DRootNode, scene.getChildNode("ActiveCamera").getAttribute("name"), H3DNodeTypes::Camera ) > 0)
		SceneGraphManager::instance()->setActiveCam( h3dGetNodeFindResult(0) );

}
