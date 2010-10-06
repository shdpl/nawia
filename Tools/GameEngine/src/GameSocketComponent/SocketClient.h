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
#include "SocketClientServer.h"

class SocketClient : public SocketClientServer
{
public:
	SocketClient(const char* server_name, int port, SocketProtocol::List protocol);
	virtual ~SocketClient();

	//** functions
	///initializes and starts a TCP Client
	void startTCP();
	///initializes and starts a UDP Client
	void startUDP();

	///checks for incomming messages and stores them in a local buffer
	virtual void run();

	///looks in the local buffer and copies the received messages in the "data" variable
	//virtual int getSocketData(const char **data, bool onlyNewestMessage = false);
	///sends data to the linked server socket
	virtual void sendSocketData(const char *data);
};

#endif