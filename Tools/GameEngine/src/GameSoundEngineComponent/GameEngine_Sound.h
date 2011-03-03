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
#       define SOUNDPLUGINEXP extern "C" __declspec( dllexport )
#	 else
#       define SOUNDPLUGINEXP extern "C" __declspec( dllimport )
#    endif
#else
#	 define SOUNDPLUGINEXP 
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
	SOUNDPLUGINEXP void enableSound(unsigned int entityWorldID, const bool enable);
	
	/**
	 * Sets the Sound Velocity
	 */
	SOUNDPLUGINEXP void setSoundVelocity(unsigned int entityWorldID, float x, float y, float z);
	
	/**
	 * Sets the Sound Gain
	 */
	SOUNDPLUGINEXP void setSoundGain(unsigned int entityWorldID, const float gain);
	
	/**
	 * Sets the Sound to loop or not
	 */
	SOUNDPLUGINEXP void setSoundLoop(unsigned int entityWorldID, const bool loop);
	
	/**
	 * Sets the Sound Pitch
	 */
	SOUNDPLUGINEXP void setSoundPitch(unsigned int entityWorldID, const float x);

	/**
	 * Sets the Sound RollOff
	 */
	SOUNDPLUGINEXP void setSoundRolloff(unsigned int entityWorldID, const float x);

	/**
	 * Sets the Sound Max Dist
	 */
	SOUNDPLUGINEXP void setSoundMaxdist(unsigned int entityWorldID, const float x);

	/**
	 * Sets the Sound Max Ref Dist
	 */
	SOUNDPLUGINEXP void setSoundRefdist(unsigned int entityWorldID, const float x);

	/**
	 * Sets the Sound Offset
	 */
	SOUNDPLUGINEXP void setSoundOffset(unsigned int entityWorldID, float offset);

	/**
	 * Sets a Sound File to be played (from the media directory)
	 */
	//SOUNDPLUGINEXP void setSoundFile(unsigned int entityWorldID, const char* fileName);

	/**
	 * Sets a Sound and Phonemes File to be played (from the media directory)
	 * If you only want to set one of them, pass 0 for other argument
	 */
	SOUNDPLUGINEXP void setSoundFile(unsigned int entityWorldID, const char* soundFile, const char* phonemesFile=0);

	/**
	 * Sets the resource directory for sounds
	 */
	SOUNDPLUGINEXP void setSoundResourceDirectory( const char* directory );

	/**
	 * Returns the sound resource directory
	 */
	SOUNDPLUGINEXP const char* soundResourceDirectory();
	/*! @}*/
}

#endif