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
// GameEngine Core of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#ifndef GAMECOMPONENTREGISTRY_H_
#define GAMECOMPONENTREGISTRY_H_

#include <GameEngine/config.h>

struct ComponentRegistryPrivate;
class GameComponent;
class GameEntity;
class GameComponentManager;

/** \addtogroup GameEngineCore
 * @{
 */

/**
 * \brief Handles the plugin's factory functions for creating GameComponent instances 
 * 
 * Each GameEngine plugin has to register it's factory methods (of type CREATE_COMPONENT)
 * using the registerComponent method of this class. To access the registry instance the plugin
 * has to use the GameModules::componentRegistry() method.
 * 
 * @author Volker Wiendl
 * @date  Jun 2008
 * 
 */ 
class DLLEXP GameComponentRegistry
{
	friend class GameModules;

public:
	/**
	 * \brief Prototyp for factory methods
	 * 
	 * @param a GameEntity that will contain the new component
	 * @return a new GameComponent instance
	 */  
	typedef GameComponent* (*CREATE_COMPONENT) ( GameEntity* );		

	/**
	 * \brief Registers a creation method for a specific component
	 * 
	 * @param name the name of the XML node used for loading a specific component
	 * @param func pointer to the factory method for creating a new component of type 'name'
	 */ 
	void registerComponent( const char* name, CREATE_COMPONENT func ); 
	
	/**
	 * \brief Registers a new component manager in the registry
	 * 
	 * All registered managers will be updated in each iteration of the
	 * GameEngine loop. 
	 * 
	 * @param manager instance of a GameComponentManager used for handling components
	 */
	void registerManager( GameComponentManager* manager ); 

	/**
	 * \brief Removes a component manager
	 * 
	 * @param manager a registered manager that should be removed from the GameEngine 
	 */
	void unregisterManager( GameComponentManager* manager );

	/**
	 * Factory function to create a new component based on the given component name
	 * 
	 * @param name the name of the component
	 * @param owner the entity the new gamecomponent should belong to (must not be null)
	 */
	GameComponent* createComponent(const char* name, GameEntity* owner );

	/**
	 * \brief Updates all registered component managers
	 * 
	 * This method will first call all GameComponentManager::run() methods of all
	 * registered managers in parallel. That's why it's important that the run method is thread
	 * safe regarding the communication with other component managers. After that the
	 * updates methods will be called in the order the plugin's where registered. The order
	 * can be defined by reordering the library names in the 'plugin.cfg'/'plugin_debug.cfg'.
	 */
	void updateComponentManagers();

	/**
	 * Returns names of supported components
	 */
	size_t componentNames(char* names, size_t size);

private:
	GameComponentRegistry();
	~GameComponentRegistry();


	ComponentRegistryPrivate*	m_privateRegistry;
};

/*! @}*/
#endif
