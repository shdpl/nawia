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

#ifndef GAMEENGINE_SOUND_H_
#define GAMEENGINE_SOUND_H_

#include <GameEngine/config.h>

#ifdef PLATFORM_WIN
#	 ifdef GAMESOUNDCOMPONENT_EXPORTS
#       define SOUNDAPI __declspec( dllexport )
#	 else
#       define SOUNDAPI __declspec( dllimport )
#    endif
#else
#	 define SOUNDAPI 
#endif

namespace GameEngine
{
	/** \addtogroup GameSoundComponent
	 * 
	 * The Sound component offers 3D sound and the playback of *.ogg and *.wav files.
	 *
	 * @{
	 */

	/**
	 * Enables (and plays) or disables (and stops) a sound file
	 * @param entityWorldID the entity that is playing the sound
	 * @param enable whether the sound should be enabled or disabled
	 */
	SOUNDAPI void enableSound(unsigned int entityWorldID, const bool enable);

	/**
	 * Plays (and enables) or resumes a sound file
	 * @param entityWorldID the entity that should play the sound
	 */
	SOUNDAPI void playSound(unsigned int entityWorldID);

	/**
	 * Pauses a sound file
	 * @param entityWorldID the entity that is playing the sound
	 */
	SOUNDAPI void pauseSound(unsigned int entityWorldID);

	/**
	 * Stops (and disables) a sound file
	 * @param entityWorldID the entity that is playing the sound
	 */
	SOUNDAPI void stopSound(unsigned int entityWorldID);

	
	/**
	 * Sets the Sound Gain
	 */
	SOUNDAPI void setSoundGain(unsigned int entityWorldID, const float gain);
	
	/**
	 * Sets the Sound to loop or not
	 */
	SOUNDAPI void setSoundLoop(unsigned int entityWorldID, const bool loop);
	
	/**
	 * Sets the Sound Pitch
	 */
	SOUNDAPI void setSoundPitch(unsigned int entityWorldID, const float x);

	/**
	 * Sets the Sound RollOff
	 */
	SOUNDAPI void setSoundRolloff(unsigned int entityWorldID, const float x);

	/**
	 * Sets the Sound Max Dist
	 */
	SOUNDAPI void setSoundMaxdist(unsigned int entityWorldID, const float x);

	/**
	 * Sets the Sound Max Ref Dist
	 */
	SOUNDAPI void setSoundRefdist(unsigned int entityWorldID, const float x);

	/**
	 * Sets the Sound Offset
	 */
	SOUNDAPI void setSoundOffset(unsigned int entityWorldID, float offset);

	/**
	 * Sets a Sound File to be played (from the media directory)
	 */
	//SOUNDAPI void setSoundFile(unsigned int entityWorldID, const char* fileName);

	/**
	 * Sets a Sound and Phonemes File and plays them (from the media directory)
	 * If you only want to set one of them, pass 0 for other argument
	 */
	SOUNDAPI void setSoundFile(unsigned int entityWorldID, const char* soundFile, const char* phonemesFile=0);

	/**
	 * Sets the resource directory for sounds
	 */
	SOUNDAPI void setSoundResourceDirectory( const char* directory );

	/**
	 * Returns the sound resource directory
	 */
	SOUNDAPI const char* soundResourceDirectory();

	/**
	 * Sets the maximum of parallel playing sources
	 */
	SOUNDAPI void setMaxSoundSources(unsigned int maxSources);
	/**
	 * Gets the maximum of parallel playing sources
	 */
	SOUNDAPI unsigned int getMaxSoundSources();


	/**
	 * Sets the maximum of parallel playing sources
	 */
	SOUNDPLUGINEXP void setMaxSoundSources(unsigned int maxSources);
	/**
	 * Gets the maximum of parallel playing sources
	 */
	SOUNDPLUGINEXP unsigned int getMaxSoundSources();

	/*! @}*/
}

#endif