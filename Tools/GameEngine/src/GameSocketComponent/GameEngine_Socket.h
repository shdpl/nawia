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
// ****************************************************************************************
//

// ****************************************************************************************
//
// GameEngine Socket Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010
// authors: Ionut Damian, Nikolaus Bee, Felix Kistler
// 
// ****************************************************************************************
#ifndef GAMEENGINE_SOCKET_H_
#define GAMEENGINE_SOCKET_H_

#include <GameEngine/config.h>

#ifdef PLATFORM_WIN
#	 ifdef SOCKETCOMPONENT_EXPORTS
#       define SOCKETPLUGINEXP extern "C" __declspec( dllexport )
#	 else
#       define SOCKETPLUGINEXP extern "C" __declspec( dllimport )
#    endif
#else
#	 define SOCKETPLUGINEXP extern "C" 
#endif

///communication protocols
struct SocketProtocol
{
	enum List
	{
		TCP = 0,
		UDP
	};
};

// Data definitions
struct SocketData
{
	enum List
	{ 
		BUFFER_LENGTH = 32,
		MAX_DATA_LENGTH = 32768,
		MAX_MSG_LENGTH = 1024
	};
};

namespace GameEngine
{
	/** \addtogroup GameSocketComponent
	 * 
	 * SocketComponent
	 *
	 * @author Ionut Damian, Nikolaus Bee, Felix Kistler
	 * @{
	 */

	///Receives socket data
	///@param entityWorldID the entity we want to use the function on
	///@param data pointer to char array where the received socket data will be stored
	///@param onlyNewestMessage flag for receiving only the newest message
	///@return size of received data
	SOCKETPLUGINEXP int getSocketData( unsigned int entityWorldID, const char **data, bool onlyNewestMessage = false);

	///Sends socket data to all known peers
	///@param entityWorldID the entity we want to use the function on
	///@param data pointer to char array that contains the data to be sent
	SOCKETPLUGINEXP void sendSocketData( unsigned int entityWorldID, const char *data );
}

#endif