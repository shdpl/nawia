// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 
// Programmers: Volker Wiendl, Nikolaus Bee
// 
// This file is part of the GameEngine of the University of Augsburg
// 
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************
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
}

#endif