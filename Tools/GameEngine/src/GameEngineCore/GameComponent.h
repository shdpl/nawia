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
#ifndef GAMECOMPONENT_H_
#define GAMECOMPONENT_H_

#include <GameEngine/config.h>
#include <GameEngine/GameEvent.h>

#include <string>
#include <vector>

struct XMLNode;
class GameEntity;

/** \addtogroup GameEngineCore
 * @{
 */

/**
 * \brief Base class for all components available for an entity
 * 
 * The GameComponent class defines the interface for all components available for an entity
 * @author Volker Wiendl
 * @date May 2008
 */ 
class DLLEXP GameComponent
{
	friend class GameEntity;

public:

	typedef std::string ComponentID;

	/**
	 * Constructor
	 */
	GameComponent(GameEntity* owner, ComponentID componentID);
	
	/**
	 * Destructor
	 */
	virtual ~GameComponent();

	/**
	 * Returns the specific ID of a component
	 * 
	 * Normally this should be equal to the XML node's tag name that is used
	 * for loading a component from an XML node.
	 */
	const ComponentID& componentID() const {return m_componentID;}
	
	/**
	 * Returns the entity this component belongs to
	 */
	GameEntity*	owner() const {return m_owner;}

	//////////////////////////////////////////
	///////   Abstract Interface   ///////////
	
	//virtual void	init() = 0;	
	
	/**
	 * \brief Check if event can be executed 
	 * 
	 * Returns false if the provided event should be not executed.
	 * This can be usefull if a translation event is blocked e.g. by a collision detection
	 * @param event pointer to the event to test
	 * @return true if all components accept the event, false if one of the component has catched it and 
	 * don't want it to be executed
	 */
	virtual bool	checkEvent(GameEvent* event) = 0;	
	/**
	 * \brief Executes the provided event
	 * @param event pointer to the event to execute
	 */
	virtual void	executeEvent(GameEvent* event) = 0;

	/**
	 * \brief Load component from XML description
	 * 
	 * Initializes the component from the given XML data
	 * @param description a XML Node representing the data for the component ( must not be null)
	 */
	virtual void	loadFromXml(const XMLNode* description) = 0;

protected:

	/// The entity containing this component instance 
	GameEntity*		m_owner;

private:
	/**
	 * \brief The component's ID
	 * 
	 * Every entity can have only one instance of each component. The ComponentID is responsible
	 * for the identification of different components. 
	 * 
	 * e.g. if the ComponentID is 'Horde3D' and such a component already exists in a GameEntity
	 * instance, loading another Horde3D component will result in replacing the existing one.
	 */
	ComponentID		m_componentID;

};

/*! @}*/
#endif
