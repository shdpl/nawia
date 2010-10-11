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
#include "GameEngine_Socket.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameWorld.h>
#include <GameEngine/GameModules.h>

#include "SocketComponent.h"

namespace GameEngine
{
	//Receives socket data
	//@param entityWorldID the entity we want to use the function on
	//@param data pointer to char array where the received socket data will be stored
	//@param onlyNewestMessage flag for receiving only the newest message
	//@return size of received data
	SOCKETPLUGINEXP int getSocketData(unsigned int entityWorldID, const char **data, bool onlyNewestMessage /*= false*/)
	{		
		SocketComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<SocketComponent*>(entity->component("SocketComponent")) ) != 0 )
		{
			return component->getSocketData(data, onlyNewestMessage);
		}
		return 0;
	}

	//Sends socket data to all known peers
	//@param entityWorldID the entity we want to use the function on
	//@param data pointer to char array that contains the data to be sent
	SOCKETPLUGINEXP void sendSocketData(unsigned int entityWorldID, const char *data)
	{		
		SocketComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<SocketComponent*>(entity->component("SocketComponent")) ) != 0 )
		{
			component->sendSocketData(data);
		}
	}

	SOCKETPLUGINEXP int getMaxMessageLength( unsigned int entityWorldID)
	{
		SocketComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<SocketComponent*>(entity->component("SocketComponent")) ) != 0 )
		{
			return component->getMaxMsgLength();
		}
		return -1;
	}

	///Get the socket buffer length
	///@param entityWorldID the entity we want to use the function on
	///@return the buffer length in number of messages, -1 if an error occured
	SOCKETPLUGINEXP int getMaxBufferLength( unsigned int entityWorldID)
	{
		SocketComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<SocketComponent*>(entity->component("SocketComponent")) ) != 0 )
		{
			return component->getBufferLength();
		}
		return -1;
	}
}