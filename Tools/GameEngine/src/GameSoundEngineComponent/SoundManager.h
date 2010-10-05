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
// GameEngine Sound Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#ifndef SOUND_H_
#define SOUND_H_

#include <GameEngine/GameComponentManager.h>

#include <vector>

class SoundComponent;
class SoundListenerComponent;

class SoundManager : public GameComponentManager
{

public:

	/**
	 * Returns the singleton instance of the sound manager or creates a new instance if none exists yet
	 */
	static SoundManager* instance();

	/**
	 * Removes all sounds from the manager and deletes the SoundManager instance
	 * Note that the sound components won't be deleted though it's the job of the GameEntity
	 */
	static void release();

	/**
	 */
	void run();

	/**
	 * Updates all current Sound Targets
	 */
	void update();

	/**
	 * Adds a created SoundComponent to the Sound manager
	 * @param sound reference to the component (must not be NULL)	 
	 */
	void addComponent(SoundComponent* sound);

	/**
	 * Removes the node from the world
	 * @param sound pointer to the instance that should be removed
	 */
	void removeComponent(SoundComponent* sound);

	/**
	 * Uses the specified listener as the active one
	 */
	void setActiveListener( SoundListenerComponent* listener ) { m_activeListener = listener; }

	SoundListenerComponent* activeListener() { return m_activeListener; }

	/**
	 * Stop a sound and free the openal source
	  */
	void stopSound(SoundComponent* sound, bool delayEvent = false);

private:
	static SoundManager*		 m_instance;

	SoundManager();
	~SoundManager();
	
	void DisplayALError(const char *szText, int errorcode);

	void updateALProperties(SoundComponent* node);


	/// Vector for Sound objects
	std::vector<SoundComponent*> m_soundNodes;

	// OpenAL source buffers
	std::vector<unsigned int>	m_sources;

	// OpenAL available source buffers
	std::vector<unsigned int>	m_sourcesAvailable;

	SoundListenerComponent*		m_activeListener;

	// Sounds stopped in the last run call, event will be sent in update
	std::vector<SoundComponent*> m_stoppedNodes;

};

#endif