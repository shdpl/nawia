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
// GameEngine Video Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Felix Kistler
// 
// ****************************************************************************************
    
#ifndef GAMEENGINE_VIDEO_H_
#define GAMEENGINE_VIDEO_H_

#include <GameEngine/config.h>

#ifdef PLATFORM_WIN
#	 ifdef VIDEOCOMPONENT_EXPORTS
#       define VIDEOPLUGINEXP extern "C" __declspec( dllexport )
#	 else
#       define VIDEOPLUGINEXP extern "C" __declspec( dllimport )
#    endif
#else
#	 define VIDEOPLUGINEXP extern "C"
#endif

namespace GameEngine
{
	/** \addtogroup GameVideoComponent
	 * 
	 * The Video component offers video playback on Horde materials and as an overlay using video for windows.
	 *
	 * @{
	 */

	/**
	 * Play the currently loaded avi
	 * @param entityWorldID the entity we want to use the function on
	 */
	VIDEOPLUGINEXP void playAvi( unsigned int entityWorldID);

	/**
	 * Stop the currently playing avi
	 * @param entityWorldID the entity we want to use the function on
	 */
	VIDEOPLUGINEXP void stopAvi( unsigned int entityWorldID);

	/**
	 * Load a video file (starts the video automatically if autostart is set)
	 * @param entityWorldID the entity we want to use the function on
	 * @param file the filename of the video to be loaded
	 */
	VIDEOPLUGINEXP void OpenAvi( unsigned int entityWorldID, const char* file);
	/*! @}*/
}

#endif
        