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

// Includes for plugin loading from environment variables and file status checks
#include <tchar.h>
#include <sys/stat.h>
// 
typedef std::basic_string<TCHAR, std::char_traits<TCHAR>> TString;

void GamePlugInManager::loadPluginFromEnvVar(std::string dllName, std::string envVarName)
{	
	// Get a pointer to the environment block. 
    LPTCH lpvEnv = GetEnvironmentStrings();
    if (lpvEnv == NULL)
    {
		return;
    } 
    // Variable strings are separated by NULL byte, and the block is terminated by a NULL byte. 
    LPTSTR lpszVar = (LPTSTR) lpvEnv;
    while (* lpszVar)
    {
		// Convert the LPTSTR to string
		TString tstring(lpszVar); 
		
		// Check the length of the environment variable name
		if(tstring.length() > envVarName.length()) {
			
			// Check the name of the environment variable
			if(tstring.substr(0, tstring.find_first_of(_T("="))).compare(envVarName) == 0 )
			{
				// Erase the name suffix of the environment variable
				tstring.erase(0, envVarName.length() + 1);

				//_tprintf(TEXT("GamePlugInManager found values for environment variable '%s':\n'%s'\n"), envVarName.c_str(), tstring.c_str());

				//
				int index = 0;
				while( (index = tstring.find_first_of(_T(";"))) != std::string::npos)
				{
					//TODO forgets the last path!!!!!!!

					// Get the dll directory path
					TString dllAbsPath = tstring.substr(0, index);

					// Eventually append a path seperator
					if ((dllAbsPath.at(dllAbsPath.length() - 1) != '\\') && (dllAbsPath.at(dllAbsPath.length() - 1) != '/') )
					{
						dllAbsPath.append("\\");
					}

					// Append the dll file name
					dllAbsPath += dllName;

					// Check if the dll file exists
					struct stat info;
					int status = stat(dllAbsPath.c_str(), &info); 
					if(status == 0) { 
						
						_tprintf(TEXT("GamePlugInManager trying to load '%s'\n"), dllAbsPath.c_str());

						// Try to load the plugin 
						DynLib* lib = new DynLib(dllAbsPath);
						if( lib->load() )
						{
							// Register the new dll plugin
							GameLog::logMessage("Plugin '%s' loaded", dllAbsPath.c_str());
							m_plugIns.insert(std::make_pair<std::string, DynLib *>(dllAbsPath, lib));
							LOAD_GAME_PLUGIN loadFuncPtr = (LOAD_GAME_PLUGIN) lib->getSymbol("dllLoadGamePlugin");
							if( loadFuncPtr )
								loadFuncPtr(); 
							else
								GameLog::errorMessage("dllLoadGamePlugIn method not found in plugin '%s'! <br> Ensure extern \"C\" definition!", dllName);
						}
						else {
							// Cannot find the dll in the this path
							delete lib;
						}
					} 

					// Erase that part from the path variable string
					tstring.erase(0, index + 1);
				}
			}
		}
		// Get the next environment variable string
		lpszVar += lstrlen(lpszVar) + 1;
    }
	// Free environment strings
	FreeEnvironmentStrings(lpvEnv);
}


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

		//GameLog::logMessage("Loading Plugin '%s'", dllAbsPath.c_str());
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
		else {
			// We cannot find the dll in the execution path
			delete lib;

#ifdef WIN32
		// We try to find the dll in the evironment
		loadPluginFromEnvVar(dllname, "PATH");
#elif defined LINUX
		// Not yet implemented
#endif
		}
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

