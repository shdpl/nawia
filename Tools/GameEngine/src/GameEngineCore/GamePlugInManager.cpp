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
// Copyright (C) 2007-2011 Volker Wiendl, Felix Kistler
// 
// ****************************************************************************************
#include "GamePlugInManager.h"

#include "GameLog.h"

#include "DynLib.h"

#include <fstream>

// Check for file status
#include <sys/stat.h>

void GamePlugInManager::loadPluginFromEnvVar(const char* dllName, const std::string& envVarName)
{
#ifdef PLATFORM_WIN
	// Get a pointer to the environment block. 
    LPTCH lpvEnv = GetEnvironmentStrings();
    if (lpvEnv == NULL)
		return;

    // Variable strings are separated by NULL byte, and the block is terminated by a NULL byte. 
    LPTSTR lpszVar = (LPTSTR) lpvEnv;
    while (* lpszVar)
    {
		// Convert the LPTSTR to string
		std::string string(lpszVar); 
		// Check the length of the environment variable name
		if(string.length() > envVarName.length())
		{			
			// Check the name of the environment variable
			if(string.substr(0, string.find_first_of("=")).compare(envVarName) == 0 )
			{
				// Erase the name suffix and the '=' of the environment variable
				string.erase(0, envVarName.length() + 1);
				// ';' serves as a delimiter
				std::string delimiter = ";";
				// Skip ; at beginning.
				size_t lastPos = string.find_first_not_of(delimiter, 0);
				// Find first "non-delimiter".
				size_t pos = string.find_first_of(delimiter, lastPos);
				while (std::string::npos != pos || std::string::npos != lastPos)
				{
					// Found a token
					std::string path = string.substr(lastPos, pos - lastPos);
					unsigned int len = path.length();
					if(len > 0)
					{
						// Eventually append a path seperator
						if ((path.at(len - 1) != '\\') && (path.at(len - 1) != '/') )
						{
							path.append("\\");
						} 
						// Append the dll file name
						std::string dllAbsPath = path + dllName;
						// Check if the dll file exists
						struct stat info;
						int status = stat(dllAbsPath.c_str(), &info); 
						if(status == 0)
						{ 					
							// Try to load the plugin 
							loadDll(path.c_str(), dllName);
						}
					}
					// Skip delimiters.  Note the "not_of"
					lastPos = string.find_first_not_of(delimiter, pos);
					// Find next "non-delimiter"
					pos = string.find_first_of(delimiter, lastPos);
				}
			}
		}
		// Get the next environment variable string
		lpszVar += lstrlen(lpszVar) + 1;
    }
	// Free environment strings
	FreeEnvironmentStrings(lpvEnv);
#endif
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
#ifdef PLATFORM_WIN
		// Didn't find config in any of the paths
		GameLog::logMessage("Plugin file %s not found, now searching for dlls directly...", plugincfg.c_str());
		// Search for the dlls by their name pattern in the current working dir
		searchPluginDlls(path);
		return true;
#else
		// Didn't find config in any of the paths
		GameLog::errorMessage("Error opening plugin file %s", plugincfg.c_str());
		return false;
#endif
	}

	GameLog::logMessage("Loading dlls from plugin file %s...", plugincfg.c_str());
	// Now load plugins as named in the cfg file
	char dllname[128];			
	while ( config.getline(dllname, sizeof(dllname)) )
	{
		if (!loadDll(path, dllname))
		{
			// Dll not found in executable path
#ifdef PLATFORM_WIN
			// So we try to find the dll in the directories
			// given in the PATH environment variable
			loadPluginFromEnvVar(dllname, "PATH");
#elif defined PLATFORM_LINUX
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
		/*else
			GameLog::logMessage( "No Lua Bindings for plugin '%s' found!", iter->second->getName().c_str() );*/
		++iter;
	}
}

bool GamePlugInManager::loadDll(const char* path, const char* dllname)
{
	std::string dllAbsPath = path;
	dllAbsPath += dllname;

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
		return true;
	}
	else
		// Dll not found
		delete lib;

	return false;
}

bool GamePlugInManager::searchPluginDlls(const char* path)
{
	bool found = false;
#ifdef PLATFORM_WIN
	WIN32_FIND_DATA findFileData;
	HANDLE hFind;

	std::string pattern(path);

#ifdef _DEBUG
	pattern += "Game*Componentd.dll";
#else
	pattern += "Game*Component.dll";
#endif

	hFind = FindFirstFile(pattern.c_str(), &findFileData);
	if (hFind != INVALID_HANDLE_VALUE)
	{
		do
		{
			if (findFileData.dwFileAttributes != FILE_ATTRIBUTE_DIRECTORY
				 && loadDll(path, findFileData.cFileName))
				found = true;
		} while (FindNextFile(hFind, &findFileData));
	}

	FindClose(hFind);
#endif
	return found;
}