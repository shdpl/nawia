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
	if ( !Horde3D::init() )
		GameLog::errorMessage(" Initialization of Horde3D failed! ");
}

SCENEGRAPHPLUGINEXP void dllUnloadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "Horde3D", 0 );	
	GameModules::componentRegistry()->unregisterManager( SceneGraphManager::instance() );
	SceneGraphManager::release();
	Horde3D::release();
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
	XMLNode& pathes(scene.getChildNode("EnginePath"));
	if (!pathes.isEmpty())
	{
		GameLog::logMessage("- Setting SceneGraph = %s", pathes.getAttribute("scenegraphpath", "models"));
		Horde3DUtils::setResourcePath(ResourceTypes::SceneGraph, pathes.getAttribute("scenegraphpath", "models"));
		GameLog::logMessage("- Setting GeometryPath = %s", pathes.getAttribute("modelpath", "models"));
		Horde3DUtils::setResourcePath(ResourceTypes::Geometry, pathes.getAttribute("modelpath", "models"));
		GameLog::logMessage("- Setting ShaderPath = %s", pathes.getAttribute("shaderpath", "shaders"));
		Horde3DUtils::setResourcePath(ResourceTypes::Shader, pathes.getAttribute("shaderpath", "shaders"));
		Horde3DUtils::setResourcePath(ResourceTypes::Code, pathes.getAttribute("shaderpath", "shaders"));
		GameLog::logMessage("- Setting Texture2DPath = %s", pathes.getAttribute("texturepath", "textures"));
		Horde3DUtils::setResourcePath(ResourceTypes::Texture2D, pathes.getAttribute("texturepath", "textures"));	
		GameLog::logMessage("- Setting TextureCube = %s", pathes.getAttribute("texturepath", "textures"));
		Horde3DUtils::setResourcePath(ResourceTypes::TextureCube, pathes.getAttribute("texturepath", "textures"));	
		GameLog::logMessage("- Setting MaterialPath = %s", pathes.getAttribute("materialpath", "materials"));
		Horde3DUtils::setResourcePath(ResourceTypes::Material, pathes.getAttribute("materialpath", "materials"));	
		GameLog::logMessage("- Setting EffectPath = %s", pathes.getAttribute("effectspath", "effects"));
		Horde3DUtils::setResourcePath(ResourceTypes::Effect, pathes.getAttribute("effectspath", "effects"));	
		GameLog::logMessage("- Setting Pipeline = %s", pathes.getAttribute("pipelinepath", "pipelines"));
		Horde3DUtils::setResourcePath(ResourceTypes::Pipeline, pathes.getAttribute("pipelinepath", "pipelines"));	
	}

	XMLNode& engineSettings(scene.getChildNode("EngineConfig"));
	if ( !engineSettings.isEmpty() )
	{				
		bool loadTextures = 
			_stricmp(engineSettings.getAttribute("loadTextures", "true"), "true") == 0 ||
			_stricmp(engineSettings.getAttribute("loadTextures", "1"), "1") == 0;
		GameLog::logMessage("LoadTextures: %s", loadTextures ? "enabled" : "disabled");
		Horde3D::setOption( EngineOptions::LoadTextures, loadTextures ? 1.0f : 0.0f );
		int shadowMapSize = atoi(engineSettings.getAttribute("shadowMapSize", "1024"));					
		GameLog::logMessage("ShadowMapSize: %d", shadowMapSize);
		Horde3D::setOption( EngineOptions::ShadowMapSize, float( shadowMapSize) );
		int anisotropyFactor = atoi(engineSettings.getAttribute("anisotropyFactor", "1"));
		GameLog::logMessage("Anisotropy: %d", anisotropyFactor);
		Horde3D::setOption( EngineOptions::AnisotropyFactor, float( anisotropyFactor ) );
		bool texCompression = 
			_stricmp(engineSettings.getAttribute("texCompression", "true"), "true") == 0 ||
			_stricmp(engineSettings.getAttribute("texCompression", "1"), "1") == 0;
		GameLog::logMessage("TexCompression: %s", texCompression ? "enabled" : "disabled");
		Horde3D::setOption( EngineOptions::TexCompression, texCompression );
		int maxNumMessages = atoi(engineSettings.getAttribute("maxNumMessages", "1024"));
		Horde3D::setOption( EngineOptions::MaxNumMessages, float( maxNumMessages ) );
	}

	// Loading scene graph
	XMLNode& sceneGraph(scene.getChildNode("SceneGraph"));
	if ( sceneGraph.isEmpty() ) GameLog::errorMessage("No Scene Graph Node found!");
	else
	{
		GameLog::logMessage("Loading SceneGraph %s", sceneGraph.getAttribute("path"));
		// Environment
		ResHandle sceneGraphID = Horde3D::addResource( ResourceTypes::SceneGraph, sceneGraph.getAttribute("path"), 0 );
		GameLog::logMessage("Loading Resources...");
		// Load resources
		Horde3DUtils::loadResourcesFromDisk( "" );
		GameLog::logMessage("Adding scene graph to root node");
		// Add scene nodes	
		NodeHandle newSceneID = Horde3D::addNodes( RootNode, sceneGraphID);
		SceneGraphManager::instance()->addNewHordeNode( newSceneID );
	}
	// Use the specified render cam
	if (scene.getChildNode("ActiveCamera").getAttribute("name") && Horde3D::findNodes( RootNode, scene.getChildNode("ActiveCamera").getAttribute("name"), SceneNodeTypes::Camera ) > 0)
		SceneGraphManager::instance()->setActiveCam( Horde3D::getNodeFindResult(0) );

}
