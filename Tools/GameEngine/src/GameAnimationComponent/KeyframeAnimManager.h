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
#ifndef KEYFRAMEANIMMANAGER_H_
#define KEYFRAMEANIMMANAGER_H_

#include <GameEngine/GameComponentManager.h>
#include <vector>

class KeyframeAnimComponent;

class KeyframeAnimManager : public GameComponentManager
{
public:
	/**
	 * Creates and returns a singleton instance of the KeyframeAnimManager
	 */
	static KeyframeAnimManager* instance();

	/**
	 * Deletes the move KeyframeAnimManager instance
	 */
	static void release();
	
	
	/**
	 * Integrates all pending changes to existing animations
	 */
	void run();
	
	/**
	 * Updates all current KeyframeAnimComponent Components with the current timestamp
	 */
	void update();

	/**
	 * Adds a created KeyframeAnimComponent
	 * @param object reference to the component (must not be NULL)	 
	 */
	void addObject(KeyframeAnimComponent* object);

	/**
	 * Removes the MoveAnimComponent
	 * @param object pointer to the instance that should be removed
	 */
	void removeObject(KeyframeAnimComponent* object);

private:
	KeyframeAnimManager() {}
	~KeyframeAnimManager() {}

	static KeyframeAnimManager*		m_instance;

	/// Vector for MoveAnim components
	std::vector<KeyframeAnimComponent*>	m_components;

};

#endif