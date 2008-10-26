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
	void update() {}

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

	void stopSoundSource( unsigned int sourceID );

private:
	static SoundManager*		 m_instance;

	SoundManager();
	~SoundManager();
	
	void DisplayALError(const char *szText, int errorcode);


	/// Vector for Sound objects
	std::vector<SoundComponent*> m_soundNodes;

	// OpenAL source buffers
	std::vector<unsigned int>	m_sources;

	// OpenAL available source buffers
	std::vector<unsigned int>	m_sourcesAvailable;

	SoundListenerComponent*		m_activeListener;


};

#endif