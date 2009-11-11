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
#ifndef GAMEWORLD_H_
#define GAMEWORLD_H_

#include "GameEntity.h"
#include "GameEvent.h"

#include <string>

struct GameWorldPrivate;

/** \addtogroup GameEngineCore
 * @{
 */

/**
 * \brief Global entity registry
 * 
 * The GameWorld provides a registry for all GameEntity instances
 * and offers the possibility to send events to all entities at once
 * It is the only class that is allowed to create new GameEntity instances.
 * It also creates the world IDs that should be used by the component manipulation
 * methods for faster access. If entity's are manipulated using their names a binary search
 * for the entity with the specified name has to be executed each time an entity 
 * will be accessed. This may result in a poor performance!
 * 
 */
class DLLEXP GameWorld
{
	friend class GameModules;

public:
	/**
	 * \brief Return the entity instance to a given name
	 * 
	 * @param id the entity's name
	 * @return pointer to the instance corresponding to this name or 0 if no such entity exists
	 */ 
	GameEntity*	entity(const EntityID& id);

	/**
	 * \brief Return the entity instance to a given world ID
	 * 
	 * @param id the entity's world ID
	 * @return pointer to the instance corresponding to this name or 0 if no such entity exists
	 */ 
	GameEntity*	entity(const unsigned int id);

	/**
	 * \brief Returns an entity's world ID
	 * 
	 * @param id the name of the entity
	 * @return the entity's world ID
	 */ 
	unsigned int entityID(const EntityID& id);

	/**
	 * \brief Creates a new entity
	 * 
	 * Registers a new entity with the specified ID within the GameEngine's world. If
	 * another entity with this name has been created before, the previous entity will be
	 * returned and no new entity will be created.
	 * 
	 * @param id a unique name for the new entity
	 * @return the newly created entity or the entity that has been created (but not removed) before
	 * using the same id (name)
	 */ 
	GameEntity* createEntity(const EntityID& id);
	
	/**
	 * \brief Removes an entity from the world
	 * 
	 * Tries to find the specified entity and deletes it's instance if found
	 * @param id the unique ID of the entity
	 */ 
	void releaseEntity(const EntityID& id);
	
	/**
	 * \brief Removes an entity from the world
	 * 
	 * Tries to find the specified entity and deletes it's instance if found
	 * @param id the entity's index within the GameEngine's world
	 * @see releaseEntity(const EntityID&)
	 */ 
	void releaseEntity(const unsigned int id);

	/**
	 * \brief Renames an entity
	 * 
	 * @param oldId the entity's current name
	 * @param newId the entity's new name
	 */ 
	void renameEntity(const EntityID& oldId, const EntityID& newId);
	
	/**
	 * \brief Renames an entity 
	 * 
	 * @param oldId the entity's world id that should be renamed
	 * @param newId the new name of the entity
	 */ 
	void renameEntity(const unsigned int oldId, const EntityID& newId);

	/**
	 * \brief Calls checkevent for all entities
	 * 
	 * If only one entity returns false, the whole method returns false immediately
	 * and the checkEvent won't be called for any further entity
	 * @param event the event to check
	 */ 
	bool checkEvent(GameEvent* event);

	/**
	 * \brief Executes an event on all entities
	 * 	 
	 * @param event the event to execute
	 */ 
	void executeEvent(GameEvent* event);

	/**
	 * \brief Calls checkevent on a specific entity
	 * 
	 * @param id the entity's world ID
	 * @param event the event to check
	 * @return true if all components of the entity accept the event, false otherwise
	 */ 
	bool checkEvent(unsigned int id, GameEvent* event);

	/**
	 * \brief Executes an event on a specific entity
	 * 
	 * @param id the entity's world ID
	 * @param event the event to execute
	 */ 
	void executeEvent(unsigned int id, GameEvent* event);

	/**
	 * \brief Adds a Entity as a listener for the specified event
	 * 
	 * @param eventType the ID of the GameEvent the Entity wants to listen to
	 * @param listener the Entity that wants to be notified about the specified event
	 */
	void addListener( GameEvent::EventID id, GameEntity* listener );

	/**
	 * \brief Removes a Entity from the list of listeners for a specific event
	 * 
	 * @param eventType the ID of the GameEvent the Entity has been listen to
	 * @param listener the Entity that wants to should be removed from the event's listener list
	 */
	void removeListener( GameEvent::EventID eventType, GameEntity* listener );

	/**
	 * \brief Removes a Entity from the World's communication system
	 * 
	 * After calling this method the specified Entity won't be notified about any event any longer
	 * @param listener the Entity that should not be notified about events any longer
	 */
	void removeListener( GameEntity* listener );

private:
	/// Private Constructor (only GameModules is allowed to call it)
	GameWorld();
	/// Private Destructor  (only GameModules is allowed to call it)
	~GameWorld();

	/// Hide member data
	GameWorldPrivate*					m_world;
};

/*! @}*/
#endif
