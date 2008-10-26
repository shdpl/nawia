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
// GameEngine Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Felix Kistler
// 
// ****************************************************************************************
#ifndef	MOVEANIM_H_
#define MOVEANIM_H_


#include <GameEngine/GameComponentManager.h>

#include <vector>

class MoveAnimComponent;

/**
 * \brief The MoveAnimManager manages (and updates) all MoveAnimComponent instances. 
 *
 * The MoveAnimComponent updates an entity's animations dependent on the transformation
 * change between two update calls of the MoveAnimManager class. The Manager is implemented
 * as a singleton, since only one instance should be care about the move animation compoments.
 *
 * \author Felix Kistler and Volker Wiendl
 * \date May, 2008
 */
class MoveAnimManager : public GameComponentManager
{
public:
	/**
	 * Creates and returns a singleton instance of the move anim component manager  
	 */
	static MoveAnimManager* instance();

	/**
	 * Deletes the move anim component manager
	 */
	static void release();

	void run() {}
	/**
	 * Updates all current MoveAnim Components
	 */
	void update();

	/**
	 * Adds a created MoveAnimComponent
	 * @param object reference to the component (must not be NULL)	 
	 */
	void addObject(MoveAnimComponent* object);

	/**
	 * Removes the MoveAnimComponent
	 * @param object pointer to the instance that should be removed
	 */
	void removeObject(MoveAnimComponent* object);

private:
	/// Private Constructor ( singleton, called via instance() )
	MoveAnimManager() {} 
	/// Private Destructor ( singleton, called via release() )
	~MoveAnimManager() {}

	/// Static instance
	static MoveAnimManager*		m_instance;

	/// Vector for MoveAnim components
	std::vector<MoveAnimComponent*>	m_components;

};

#endif