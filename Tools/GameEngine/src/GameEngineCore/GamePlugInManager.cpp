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
// GameEngine Core Library of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "GamePlugInManager.h"

#include "GameLog.h"

#include "DynLib.h"

#include <fstream>

GamePlugInManager::GamePlugInManager()
{
}

GamePlugInManager::~GamePlugInManager()
{
	release();
}


bool GamePlugInManager::init()
{
	// Get executable path
	char path[260];			
	if( GameLog::GetExecutablePath( path, sizeof(path)-1 ) <= 0 )
		return false;

	if (path[strlen(path)-1]!='\\' && path[strlen(path)-1]!='/')
	{
		path[strlen(path)] = '/';
		path[strlen(path)+1] = '\0';
	}

	// Choose filename
	std::string plugincfg;
#ifdef _DEBUG
	plugincfg = "plugin_debug.cfg";
#else
	plugincfg = "plugin.cfg";
#endif

	// First try to find the config file in our working directory
	std::ifstream config(plugincfg.c_str());
	if( !config )
	{
		// Clear old error flags (only necessary before VS 2010)
		config.clear();
		// Alternatively search in the executable path
		plugincfg = path + plugincfg;
		config.open(plugincfg.c_str());
	}
	if( !config )
	{
		// Didn't find config in any of the paths
		GameLog::errorMessage("Error opening plugin file %s", plugincfg.c_str());
		return false;
	}

	// Now load plugins as named in the cfg file
	char dllname[128];			
	while ( config.getline(dllname, sizeof(dllname)) )
	{
		std::string dllAbsPath = path;
		dllAbsPath += dllname;

		GameLog::logMessage("Loading Plugin '%s'", dllAbsPath.c_str());
		
		DynLib* lib = new DynLib(dllAbsPath);
		if( lib->load() )
		{
			GameLog::logMessage("Plugin '%s' loaded", dllname);
			m_plugIns.insert(std::make_pair<std::string, DynLib*>(dllAbsPath, lib));
			LOAD_GAME_PLUGIN loadFuncPtr = (LOAD_GAME_PLUGIN) lib->getSymbol("dllLoadGamePlugin");
			if( loadFuncPtr )
				loadFuncPtr(); // Register plugin
			else
				GameLog::errorMessage("dllLoadGamePlugIn method not found in plugin '%s'! <br> Ensure extern \"C\" definition!", dllname);
		}
		else
			delete lib; // Error log message is triggered in lib->load
	}

	return true;
}

void GamePlugInManager::release()
{
	while( !m_plugIns.empty() )
	{
		UNLOAD_GAME_PLUGIN unloadFuncPtr = (UNLOAD_GAME_PLUGIN) m_plugIns.begin()->second->getSymbol("dllUnloadGamePlugin");
		if( unloadFuncPtr ) unloadFuncPtr();
		m_plugIns.erase( m_plugIns.begin() );

	}
}

void GamePlugInManager::loadScene( const char* sceneFile )
{
	std::map<std::string, DynLib*>::iterator iter = m_plugIns.begin();
	while( iter != m_plugIns.end() )
	{
		LOAD_SCENE loadFunc = (LOAD_SCENE) iter->second->getSymbol("dllLoadScene");
		if( loadFunc )
			loadFunc( sceneFile );
		++iter;
	}
}

void GamePlugInManager::registerLuaStack( lua_State *L )
{
	std::map<std::string, DynLib*>::iterator iter = m_plugIns.begin();
	while( iter != m_plugIns.end() )
	{
		REGISTER_LUA_STACK registerFunc = (REGISTER_LUA_STACK) iter->second->getSymbol("dllRegisterLuaStack");
		if( registerFunc )
			registerFunc( L );
		else
			GameLog::logMessage( "No Lua Bindings for plugin '%s' found!", iter->second->getName().c_str() );
		++iter;
	}
}

