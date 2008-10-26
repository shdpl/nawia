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
#ifndef GAMEENGINE_H_
#define GAMEENGINE_H_

#include <GameEngine/config.h>

#ifdef MEMORYCHECK
#include <vld.h>
#endif

#include <string>
#include <vector>

class GameEvent;
struct lua_State;

/**
 * \mainpage GaBaCo - GameEngine based on Components
 * 
 * \section intro_sec Introduction
 * 
 * GaBaCo provides a component based game engine approach. All objects within a game application are represented as an
 * entity in a game world. Each entity can have several unique components. The components interact using game events. 
 * The core of GaBaCo is the \ref GameEngineCore module. It provides the communication system, the plugin management and the GameEntity
 * class. It is also responsible for the loading of entity's as well as for adding components. 
 *
 * To make this concept a little bit more easier to understand let's make an example:
 *
 * We have a GameEntity that should represent a character. This character should be steered by some kind of control component
 * and if the character is being moved, a walking animation should be played.
 * 
 * So how to realize that within GaBaCo:
 * 
 * First we need an entity! We'll give it a unique name as an access index for later application specific manipulations.
 * Then we add a SceneGraphComponent to visualize the character and store e.g. it's transformation. To control it's position
 * we add a CrowdParticleComponent that will change the characters position based on some more complex crowd simulation algorithms.
 * To play an animation when the transformation changes we add a MoveAnimComponent that will use KeyframeAnimComponent to play an animation
 * when the character starts moving and update the animation's speed depending on the amount of the transformation change.
 *
 * So in the end we have an entity with the following components:
 *
 * <ul>
 * <li> \c SceneGraphComponent for visualization, transformation </li>
 * <li> \c CrowdParticleComponent for changing the transformation </li>
 * <li> \c KeyframeAnimComponent for playing animations </li>
 * <li> \c MoveAnimComponent for automatically control animations based on the transformation change </li>
 * </ul>
 *
 * In each iteration of the GameEngine::update() method the crowd simulation will change the transformation of the character
 * by sending an GameEvent::E_SET_TRANSLATION and an GameEvent::E_SET_ROTATION event. These events will be send to all components. So the scenegraph component
 * will update it's internal transformation and the MoveAnimComponent will adjust the speed of the walking animation based on the length of
 * the translation vector provided by the E_SET_TRANSLATION event's position and the position of the entity in the last frame. 
 *
 * @todo To synchronize the states of an entity it may be suggestive to create some kind of EntityProperty for GameEntities. Using some
 * hasChanged flag would allow the components to update their internal representations or behave differently when another component
 * has changed a property. A component could create a property if no other component has created it before or use the existing one if
 * already created by another component. For example, an entity may have a global transformation in the world. If there is a scenegraph
 * component, this component would create the property. If there is no scenegraph component but a physics component, the physics component
 * would create the property. If there are both, a physics component and a scenegraph component, the one loaded first would create the property.
 * If one of the components has some information about the initial transformation, it would set the transformation property and the other
 * component will synchronize it's state the next time an update will be done and the hasChanged flag will be evaluated. Another possibility
 * would be to have a list of callbacks that will be executed when a property has changed. That would allow an immediately update and does not
 * introduce a delay of one frame. ... to be continued!
 *
 * @author Volker Wiendl
 * @date 2008
 */

/** \addtogroup GameEngineCore
 * @{
 */

/**
 * \namespace GameEngine
 *
 * \brief The GameEngine namespace provides all methods to control GaBaCo. 
 *
 * The GameEngine.h header file from the GameEngineCore would provide all basic methods to create and manipulate GameEntity instances.
 * It also contains the essential init, release, update methods.
 */
namespace GameEngine
{
	/** \addtogroup GameEngineCore
	 * 
	 *	The Core module of the GameEngine is responsible for the initialization and update of the 
	 *  world as well as for (un-)loading the component plugins and the communication system between
	 *  components.
	 *
 	 * @{
	 */

	/** 
	 * \brief Initializes all component plugins
	 * 
	 * When calling init, the GamePlugInManager will be initialized. It will load all plugins specified in the 
	 * plugin configuration file. Take note that depending on the plugins loaded, calling this method may require
	 * a valid rendering context.
	 * 
	 * @return true on success, false in case of an error (currently only if GameEngine was initialized before)
	 */
	GAMEENGINE_API bool init();

	/**
	 * \brief Releases all Component Managers
	 * 
	 * Unloads all plugins and entities
	 */
	GAMEENGINE_API void release();

	/**	
	 * Loads the scene specified
	 * @param sceneFile name of the scn file
	 * @return true on success, false in case of an error
	 */
	GAMEENGINE_API bool loadScene(const char* sceneFile);

	/**
	 * Registers the GameEngine methods on the given lua stack
	 */
	GAMEENGINE_API void registerLuaStack(lua_State* L);

	/**
	 * \brief Returns the index of an entity within the GameWorld
	 *
	 * Retrieves the internal index for an entity for faster access
	 * @param entityID the entity's id
	 * @return 0 if no entity with this id exists, otherwise the internal world index 
	 */
	GAMEENGINE_API unsigned int entityWorldID( const char* entityID );
	
	/**
     * Creates a new GameEntity based on the given XML data 
	 * @param xmlText data for a game entity. e.g.: 
	 * \code
		<GameEntity name="NewEntity" />
	   \endcode
     * but you may also integrate several components in the entity's description directly: e.g.:	 
	 * \code
		<GameEntity name="NewEntity">
		  <Horde3D id="3" />
		  <BulletPhysics radius="0.75" mass="0.3" static_friction="0.5" height="0.975" shape="Cylinder" />
		</GameEntiy>
	   \endcode
	 * @return index of the entity within the GameWorld
	 */
	GAMEENGINE_API unsigned int createGameEntity( const char *xmlText );

	/**
     * Removes an entity from the GameEngine's world
	 * @param entityWorldID the index of the entity within the GameWorld	 
	 */
	GAMEENGINE_API void removeGameEntity( unsigned int entityWorldID );

	/**
	 * Renames an already created entity to a new id
	 */
	GAMEENGINE_API void renameGameEntity( unsigned int entityWorldID, const char* newEntityName );


	/**
	 * Adds a component to the specified entity with given data. If the entity has already a component
	 * of the same type, the component will be updated. If xmlData is a null pointer the component will be removed
	 * @param entityWorldID the entity's index in the GameWorld
	 * @param componentID the id of the component (usally the name of the XML node that would be used for loading the component)
	 * @param xmlData the xml node e.g. for creating a physics component based on the BulletPhysics plugin the xmlData would be:
	 *        \code
	          <BulletPhysics radius="0.75" mass="0.3" static_friction="0.5"
                 height="0.975" shape="Cylinder" /> 
			  \endcode
     *
	 * So calling this method may look as follows:
	 * \code
	    const char* xmlText = "<BulletPhysics radius=\"0.75\" mass=\"0.3\" static_friction=\"0.5\" height=\"0.975\" shape=\"Cylinder\" />";
	    GameEngine::setComponentData(entityID, "BulletPhysics",  xmlText);
	   \endcode
	 */
	GAMEENGINE_API bool setComponentData(unsigned int entityWorldID, const char* componentID, const char* xmlData);
	
	/**
	 * Updates all component managers
	 */
	GAMEENGINE_API void update();

	/**
	 * Return the names of nodes supported by the installed plugins (semicolon separated)
	 * @param names pointer to an allocated memory block that should be used to save the supported names to. If 
	 *        null, the method will return the size required for saving the names
	 * @param size length of the names memory block 
	 * @return size of the string required to save all component names
	 */
	GAMEENGINE_API size_t componentNames( char* names, size_t size );

	/**
	 * @return current frames per second
	 */
	GAMEENGINE_API float FPS();

	/**
	 * @return the internal timestamp of the gameengine 
	 */
	GAMEENGINE_API float timeStamp();

	/**
	 * \brief The current timestamp 
	 *
	 * @return the current time since starting the engine
	 */
	GAMEENGINE_API float currentTimeStamp();
	
	/**
	 * Sends an Event to a specifc component (maybe should be limited to internal use)
	 */
	GAMEENGINE_API bool sendEvent( unsigned int entityWorldID, GameEvent* event);
	
	/**
	 * Sets an entity and all of it's components enabled/disabled
	 */
	GAMEENGINE_API void setEnabled(unsigned int entityWorldID, bool enable);

	/*! @}*/
}

/*! @}*/

#endif
