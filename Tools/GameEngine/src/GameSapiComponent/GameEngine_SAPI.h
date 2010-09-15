// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 
// Programmers: Volker Wiendl, Nikolaus Bee
// 
// This file is part of the GameEngine of the University of Augsburg
// 
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************
//

#ifndef GAMEENGINE_SAPI_H_
#define GAMEENGINE_SAPI_H_

#include <GameEngine/config.h>

#ifdef PLATFORM_WIN
#	 ifdef SAPICOMPONENT_EXPORTS
#       define SAPIPLUGINEXP extern "C" __declspec( dllexport )
#	 else
#       define SAPIPLUGINEXP extern "C" __declspec( dllimport )
#    endif
#else
#	 define SAPIPLUGINEXP 
#endif

namespace GameEngine
{
	/** \addtogroup GameSapiComponent
	 * 
	 * The Sapi component offers Text-To-Speech with visemes supported by MS SAPI
	 *
	 * @{
	 */

	/**
	 * \brief Sends a E_SPEAK event to the TTS component of the given entity
	 * 
	 * @param entityWorldID 
	 * @param sentence 
	 */ 
	SAPIPLUGINEXP void speak(unsigned int entityWorldID, const char* sentence);

	/**
	 * \brief Sends an E_SET_VOICE event to the TTS component of the given entity
	 * 
	 * @param entityWorldID 
	 * @param voice 
	 */ 
	SAPIPLUGINEXP void setVoice(unsigned int entityWorldID, const char* voice);

	/**
	 * \brief Checks wether an entitiy is still speaking
	 * 
	 * @param entityWorldID 
	 */ 
	SAPIPLUGINEXP bool isSpeaking(unsigned int entityWorldID);
	/*! @}*/
}

#endif