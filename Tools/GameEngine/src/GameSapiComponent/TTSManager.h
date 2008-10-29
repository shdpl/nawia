// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine of the University of Augsburg
// 
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************
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

	void run() {}

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