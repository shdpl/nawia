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
// Copyright (C) 2011 Christoph Nuscheler
// 
// ****************************************************************************************
#ifndef GAMENETWORKMANAGER_H_
#define GAMENETWORKMANAGER_H_

// make sure to link against Winsock2
#pragma comment( lib, "ws2_32.lib" )

#include "GameEngine.h"
#include "GameEngine_Network.h"

#include <set>
#include <map>
#include <string>

struct ClientRecord;
struct NetworkMessage;

class GameComponent;

/** \addtogroup GameEngineCore
 * @{
 */

class DLLEXP GameNetworkManager
{
	friend class GameModules;

public:

	GameEngine::Network::NetworkState getState();

	bool init();

	void update();

	void release();

	void setupServer();

	void connectToServer(const char* ip_addr);

	void disconnect();

	bool removeClient(const size_t clientID);

	// registers a GameComponent on the server for transmitting its state to clients
	bool registerServerComponent(GameComponent* component);
	bool deregisterServerComponent(GameComponent* component);

	void requestClientUpdate(size_t clientID, const char* entityID, const char* componentID);
	void disrequestClientUpdate(size_t clientID, const char* entityID, const char* componentID);

	// register callbacks
	void registerCallbackOnClientConnect(void (*callback)(size_t));
	void registerCallbackOnClientDisconnect(void (*callback)(size_t));
	void registerCallbackOnStateRequest(void (*callback)(std::string, std::string));

	bool setOption(GameEngine::Network::NetworkOption option, const size_t value);
	bool setOption(GameEngine::Network::NetworkOption option, const char* value);
	bool setOption(GameEngine::Network::NetworkOption option, const bool value);

private:
	/// Private Contstructor ( friend class GameModules )
	GameNetworkManager(); 
	/// Private Destructor (friend class GameModules )
	~GameNetworkManager();

	// current state of the network manager
	GameEngine::Network::NetworkState	m_currentState;

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
	bool sv_removeClient(size_t clientID);

	// broadcasts the outgoing NetworkMessage to all clients
	void sv_broadcastOutgoingMessage();

	// test for timed out clients
	void sv_testClientsTimeout();

	// send requests to clients
	void sv_sendStateRequests();


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
	size_t			m_sv_clientTimeoutInterval;
	bool			m_sv_restrictClientUpdates;
	std::map<size_t,ClientRecord*>	m_sv_clients;			// TODO: map<int,ClientRecord> could speed up some things
	std::set<GameComponent*>		m_sv_components;



	// client vars
	size_t			m_cl_id;
	size_t			m_cl_tick;
	size_t			m_cl_tickinterval;
	SOCKADDR_IN		m_cl_serveradress;
	size_t			m_cl_retrytimer;
	std::set<GameComponent*>	m_cl_components;




	// common vars
	char*			m_applicationID;
	bool			m_useCompression;



	// network buffers
	NetworkMessage*	m_outgoing_message;
	NetworkMessage*	m_incoming_message;

	char* m_sendBuffer;
	char* m_receiveBuffer;



	// event callbacks
	void			(*m_onClientConnect)(size_t);
	void			(*m_onClientDisconnect)(size_t);

	void			(*m_onStateRequest)(std::string, std::string);
};

/*! @}*/
#endif
