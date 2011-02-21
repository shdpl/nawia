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
#ifndef GAME_MODULES_H_
#define GAME_MODULES_H_

#include <GameEngine/config.h>

class GameComponentRegistry;
class GamePlugInManager;
class GameWorld;

/** \addtogroup GameEngineCore
 * @{
 */

/**
 * \brief Modules exported by the GameEngineCore
 * 
 * Plugins may access the tree main modules of the GameEngineCore. These are:
 * <ul> 
 * <li> the plugin manager responsible for loading and unloading of plugins. </li>
 * <li> The component registry handling the factory methods for GameComponent instances provided
 * by plugins. </li>
 * <li> the game world, responsible for the GameEntity instances.
 * </ul>
 * 
 * @author Volker Wiendl
 * @date  Jun 2008
 * 
 */ 
class DLLEXP GameModules
{
public:
	/**
	 * \brief Release all modules
	 */ 
	static void release();

	/**
	 * \brief Return the GamePlugInManager singleton instance
	 * 
	 * @return the singleton instance of the GamePlugInManager
	 */ 
	static GamePlugInManager*		plugInManager();

	/**
	 * \brief Return the GameComponentRegistry singleton instance
	 * 
	 * @return the singleton instance of the GameComponentRegistry
	 */ 
	static GameComponentRegistry*	componentRegistry();
	/**
	 * \brief Return the GameWorld singleton instance
	 * 
	 * @return the singleton instance of the GameWorld
	 */ 
	static GameWorld*				gameWorld();
	/**
	 * \brief Releases the gameworld with all entities in it
	 * 
	 */ 
	static void releaseGameWorld();
	
private:
	/// Singleton instance 
	static GamePlugInManager*		m_plugInManager;
	/// Singleton instance 
	static GameComponentRegistry*	m_componentRegistry;
	/// Singleton instance 
	static GameWorld*				m_gameWorld;
};

/*! @}*/
#endif
