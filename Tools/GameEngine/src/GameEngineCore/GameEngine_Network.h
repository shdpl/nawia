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
// GameEngine Core Library of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#ifndef GAMEENGINE_NETWORK_H_
#define GAMEENGINE_NETWORK_H_

#include <GameEngine/config.h>

#ifdef MEMORYCHECK
#include <vld.h>
#endif

/** \addtogroup GameEngineCore
 * @{
 */

namespace GameEngine
{
	/** \addtogroup GameEngineCore
	 * 
	 *	The Core module of the GameEngine is responsible for the initialization and update of the 
	 *  world as well as for (un-)loading the component plugins and the communication system between
	 *  components.
	 *
 	 * @{
	 */

	enum NetworkState {
		INVALID_STATE,
		DISCONNECTED,
		CONNECTING_TO_SERVER,
		CONNECTED_TO_SERVER,
		SETTING_UP_SERVER,
		SERVING,
		DISCOVERY
	};

	enum NetworkOption {
		SV_PORT,
		SV_IP,
		SV_TICKRATE,
		CL_SERVERPORT,
		CL_TICKRATE,
		USE_COMPRESSION
	};

	/**
	 * Connects the local GameEngine as a client to a remote server
	 */
	GAMEENGINE_API void connectToServer(const char* ip_addr);

	/**
	 * Disconnects the local GameEngine from the remote server or shuts down local server
	 */
	GAMEENGINE_API void disconnect();

	/**
	 * Sets up the local GameEngine as a server
	 */
	GAMEENGINE_API void startServer();

	/**
	 * Registers a GameComponent on the local server so its gamestate gets transmitted to clients
	 * @return true on success
	 */
	GAMEENGINE_API bool registerComponentOnServer(const char* entityID, const char* componentID);
	
	/**
	 * Removes a GameComponent from the local server
	 * @return true on success
	 */
	GAMEENGINE_API bool deregisterComponentOnServer(const char* entityID, const char* componentID);

	/**
	 * Registers a GameComponent on the local client so its gamestate gets transmitted to server
	 * @return true on success
	 */
	GAMEENGINE_API bool registerComponentOnClient(const char* entityID, const char* componentID);
	
	/**
	 * Removes a GameComponent from the local client
	 * @return true on success
	 */
	GAMEENGINE_API bool deregisterComponentOnClient(const char* entityID, const char* componentID);

	GAMEENGINE_API GameEngine::NetworkState getNetworkState();

	GAMEENGINE_API bool setNetworkOption(GameEngine::NetworkOption option, const size_t value);

	GAMEENGINE_API bool setNetworkOption(GameEngine::NetworkOption option, const char* value);

	GAMEENGINE_API bool setNetworkOption(GameEngine::NetworkOption option, const bool value);

	/*! @}*/
}

/*! @}*/

#endif
