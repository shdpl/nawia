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
// GameEngine Core Library of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#ifndef GAMEPLUGINMANAGER_H_
#define GAMEPLUGINMANAGER_H_

#include "config.h"

#include <map>
#include <string>

class DynLib;
struct lua_State;
struct SQVM;

/** \addtogroup GameEngineCore
 * @{
 */

/**
 * \brief Handles all plugin instances 
 * 
 * The PlugIn Manager takes response to load and unload the GameEngine plugins that contains
 * the components of entities. 
 * 
 * @author Volker Wiendl
 * @date Jun 2008
 */ 
class GamePlugInManager
{
	friend class GameModules;

	/// \typedef Prototype for loading a plugin (MUST be implemented by plugins)
	typedef void (*LOAD_GAME_PLUGIN)(void);

	/// \typedef UNLOAD_GAME_PLUGIN Prototype for unloading a plugin (MUST be implemented by plugins)
	typedef void (*UNLOAD_GAME_PLUGIN)(void);

	/// \typedef Prototype for scene loading method in plugins
	typedef void (*LOAD_SCENE)( const char* scene );

	/// \typedef Prototype for lua registration method in plugins
	typedef void (*REGISTER_LUA_STACK)( lua_State* L );
	typedef void (*REGISTER_SQUIRREL_FUNCTIONS)(SQVM* V);

public:
	/**
	 * \brief Loads plugins
	 * 
	 * When calling this method all plugins defined in a 'plugin.cfg' file will be loaded.
	 * This file has to be stored in the same directory as the GameEngineCore library.
	 * For the debug version of the GameEngineCore the file is called 'plugin_debug.cfg'.
	 * 
	 * @return true if the plugin file has been read successfully, false otherwise (note
	 * that if plugins failed to load this method still returns true, but error messages
	 * will be written to the GameEngineLog.html)
	 */ 
	bool init();

	/**
	 * \brief Unloads all plugins
	 * 
	 * To unload the dynamically loaded plugins you have to call release()
	 */ 
	void release();
	
	/**
	 * \brief Informs the plugins about the loading of the specified scene
	 * 
	 * @param sceneFile a scenefile currently loaded by the GameEngineCore
	 */ 
	void loadScene( const char* sceneFile );

	/**
	 * \brief Register lua binding of plugins
	 * 
	 * The GameEngine itself does not provide a lua stack. If the application
	 * that uses the GameEngine want's to control the GameEngine using lua, it
	 * can create a lua stack and call this method afterwards. This way all 
	 * lua bindings will be registered on the application's lua stack.
	 * @param L 
	 */ 
	void registerLuaStack( lua_State* L );
	void registerSquirrelFunctions(SQVM* V);

private:
	/// Private Contstructor ( friend class GameModules )
	GamePlugInManager(); 
	/// Priate Destructor (friend class GameModules )
	~GamePlugInManager();

	/// All currently loaded plugin instances
	std::map<std::string, DynLib*> m_plugIns;
	
};

/*! @}*/
#endif
