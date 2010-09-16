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
#ifndef SOCKETCLIENT_H_
#define SOCKETCLIENT_H_

#include "SocketAddress.h"
#include "GameEngine_Socket.h"

class SocketClient
{
public:
	SocketClient(const char* server_name, int port, SocketProtocol::List protocol);
	~SocketClient();

	//** functions
	///initializes and starts a TCP Client
	void startTCPClient();
	///initializes and starts a UDP Client
	void startUDPClient();

	///checks for incomming messages and stores them in a local buffer
	void update();

	///looks in the local buffer and copies the received messages in the "data" variable
	int getSocketData(const char **data);
	///sends data to the linked server socket
	void sendSocketData(const char *data);

private:
	//** variables
	///member socket
	SOCKET m_socket;

	///socket address of the linked server
	SocketAddress* m_server_addr;

	///used communication protocol
	SocketProtocol::List m_protocol;

	///length of the buffer that stores received data
	int			m_resultLength;
	///buffer storing received data
	char*		m_data;	
};

#endif