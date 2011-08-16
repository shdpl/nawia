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