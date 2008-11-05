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
#ifndef GAME_COMPONENT_MANAGER_H_
#define GAME_COMPONENT_MANAGER_H_

/** \addtogroup GameEngineCore
 * @{
 */

/**
 * \brief Abstract interface for GameEngine PlugIns
 * 
 * The GameComponentManager is the interface for the component managers
 * implemented in sub classes. It defines the three methods
 * run(), update() and render()
 * 
 * @author Volker Wiendl
 * @date  Jun 2008
 * 
 */ 
class GameComponentManager
{
public:

	/**
	 * Virtual to allow deregistration of components in subclass implementations
	 */
	virtual ~GameComponentManager() {}

	/**
	 * 
	 * \brief executed before update 
	 *
	 * Can be reimplemented in sub classes to increase performance. All run methods of component managers
	 * are executed in parallel so they have to be thread safe regarding the communication 
	 * or access of variables used by other GameComponentManager instances. So a GameComponentManager
	 * MUST NOT send any events to other components in it's run method and should not access any variables
	 * accessed by other GameComponentMangers during the execution of their run methods!
	 */
	virtual void run() = 0;
	
	/**
	 * Has to update all components registered at the manager.
	 * Use this method for the communication of the different components.
	 */
	virtual void update() = 0;


	/**
	 * May be reimplemented in sub classes to visualize components
	 */
	virtual void render() {}

};

/*! @}*/
#endif
