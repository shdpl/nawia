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
// Copyright (C) 2007 Christoph Nuscheler
// 
// ****************************************************************************************
#ifndef GAMENETWORKMANAGER_H_
#define GAMENETWORKMANAGER_H_

// make sure to link against Winsock2
#pragma comment( lib, "ws2_32.lib" )

#include "GameEngine.h"
#include "GameEngine_Network.h"
#include "GameComponent.h"

#include <set>
#include <vector>

struct ClientRecord;
struct NetworkMessage;

/** \addtogroup GameEngineCore
 * @{
 */

class DLLEXP GameNetworkManager
{
	friend class GameModules;

public:

	GameEngine::NetworkState getState();

	bool init();

	void update();

	void release();

	void setupServer();

	void connectToServer(const char* ip_addr);

	void disconnect();

	// registers a GameComponent on the server for transmitting its state to clients
	bool registerServerComponent(GameComponent* component);
	bool deregisterServerComponent(GameComponent* component);

	// registers a GameComponent on the local client for transmitting its state to the server
	bool registerClientComponent(GameComponent* component);
	bool deregisterClientComponent(GameComponent* component);

	bool setOption(GameEngine::NetworkOption option, const size_t value);
	bool setOption(GameEngine::NetworkOption option, const char* value);
	bool setOption(GameEngine::NetworkOption option, const bool value);

private:
	/// Private Contstructor ( friend class GameModules )
	GameNetworkManager(); 
	/// Private Destructor (friend class GameModules )
	~GameNetworkManager();

	// current state of the network manager
	GameEngine::NetworkState	m_currentState;

	// UDP socket
	SOCKET			m_socket;

	// buffer for game states
	char*			m_buffer;



	// handles clients' requests
	void sv_handleClientMessages();

	// collects GameComponents' states and sends them to clients
	void sv_transmitComponentStates();

	// adds a new client to the server's list
	size_t sv_addClient(SOCKADDR_IN client);

	// removes a client from the server's list
	void sv_removeClient(size_t clientID);

	// broadcasts the outgoing NetworkMessage to all clients
	void sv_broadcastOutgoingMessage();

	// test for timed out clients
	void sv_testClientsTimeout();


	// sends a connect message to server
	void cl_connectToServer();

	void cl_awaitAccept();

	void cl_handleServerMessages();

	void cl_transmitComponentStates();

	void cl_disconnect();



	// server vars
	size_t			m_sv_tick;
	size_t			m_sv_tickinterval;
	SOCKADDR_IN		m_sv_adress;
	size_t			m_sv_clientid;
	std::vector<ClientRecord*>	m_sv_clients;
	std::set<GameComponent*>	m_sv_components;



	// client vars
	size_t			m_cl_id;
	size_t			m_cl_tick;
	size_t			m_cl_tickinterval;
	SOCKADDR_IN		m_cl_serveradress;
	size_t			m_cl_retrytimer;
	std::set<GameComponent*>	m_cl_components;



	// network buffers
	NetworkMessage*	m_outgoing_message;
	NetworkMessage*	m_incoming_message;

	char* m_sendBuffer;
	char* m_receiveBuffer;

	bool m_useCompression;
};

/*! @}*/
#endif
