// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine of the University of Augsburg
// 
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************
//
#ifndef TTSMANAGER_H_
#define TTSMANAGER_H_

#include <GameEngine/GameComponentManager.h>

#include <vector>

class TTSComponent;

class TTSManager : public GameComponentManager
{

public:
	
	/** 
	 */
	static TTSManager* instance();

	/**
	 * Releases the TTSManager instance
	 */
	static void release();

	/**
	 * Clears all ttsnodes from the update queue
	 * Note that the TTSComponent instances won't be deleted though it's the job of the GameEntity
	 */

	void run();

	/**
	 * Updates all current TTS Morph Targets
	 */
	void update();

	/**
	 * Adds a created TTSComponent to the TTS manager
	 * @param component reference to the component (must not be NULL)	 
	 */
	void addComponent(TTSComponent* component);

	/**
	 * Removes the component from the update queue
	 * @param component pointer to the instance that should be removed
	 */
	void removeComponent(TTSComponent* component);

private:
	TTSManager() {}
	~TTSManager() {}

	static TTSManager*		m_instance;

	/// Vector for TTS objects
	std::vector<TTSComponent*>	m_ttsComponents;

};

#endif