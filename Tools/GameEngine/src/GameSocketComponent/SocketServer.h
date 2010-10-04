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
#ifndef SOCKETSERVER_H_
#define SOCKETSERVER_H_

#include "SocketAddress.h"
#include "GameEngine_Socket.h"
#include "config.h"
#include "SocketClientServer.h"

#include <vector>

class SocketServer : public SocketClientServer
{
public:
	SocketServer(const char* server_name, int port, SocketProtocol::List protocol, int NrOfClients = 0);
	~SocketServer();

	//** functions
	///initializes and starts a TCP Server
	void startTCP();
	///initializes and starts a UDP Client
	void startUDP();

	///checks for incomming messages and stores them in a local buffer
	void update();

	///looks in the local buffer and copies the received messages in the "data" variable
	int getSocketData(const char **data, bool onlyNewestMessage = false);
	///sends data to all known clients (broadcast)
	void sendSocketData(const char *data);

private:	
	///returns the index to the client with the specified address
	int findClientAddress( SocketAddress* addr );

	//** variables
	///member socket
	SOCKET m_socket;

	///socket address of the server
	SocketAddress* m_server_addr;
	///socket addresses of all known clients (used for UDP communication)
	std::vector<SocketAddress*> m_clients_addr;
	///sockets of all clients (used for TCP communication)
	std::vector<SOCKET> m_clients_socket;

	///used communication protocol
	SocketProtocol::List m_protocol;

	///expected number of clients (used for TCP communication)
	int m_nrClients;

	///length of the buffer that stores incomming messages
	int			m_resultLength[BUFFER_LENGTH];
	///number of received messages
	int			m_numMessages;
	///last received message (?)
	int			m_currentMessage;

	// Acces data per char or per message
	union
	{
		///buffer storing received messages
		char m_messages[BUFFER_LENGTH][MAX_MSG_LENGTH];
		///buffer storing received data
		char m_data[MAX_DATA_LENGTH];
	};
	
};

#endif