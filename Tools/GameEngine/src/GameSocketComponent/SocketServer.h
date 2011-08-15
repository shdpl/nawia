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
#include <set>

class SocketServer : public SocketClientServer
{
public:
	SocketServer(const char* server_name, int port, int maxMsgLength, int bufferLength, SocketProtocol::List protocol);
	virtual ~SocketServer();

	//** functions
	///initializes and starts a TCP or UDP Server
	void start();

	///checks for incomming messages and stores them in a local buffer
	virtual void run();

	///looks in the local buffer and copies the received messages in the "data" variable
	//virtual int getSocketData(const char **data, bool onlyNewestMessage = false);
	///sends data to all known clients (broadcast)
	virtual void sendSocketData(const char *data);

private:

	//** variables
	///socket addresses of all known clients (used for UDP communication)
	std::set<SocketAddress> m_clients_addr;
	///sockets of all clients (used for TCP communication)
	std::vector<SOCKET> m_clients_socket;	
};

#endif