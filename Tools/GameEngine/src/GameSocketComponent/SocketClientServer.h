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
#pragma once
#ifndef SOCKETCLIENTSERVER_H_
#define SOCKETCLIENTSERVER_H_

#include "SocketAddress.h"
#include "GameEngine_Socket.h"
#include "config.h"

class SocketClientServer
{
public:
	SocketClientServer(const char* server_name, int port, SocketProtocol::List protocol);
	virtual ~SocketClientServer(void);

	//** functions
	///initializes and starts a TCP or UDP Client
	virtual void startTCP() = 0;
	virtual void startUDP() = 0;

	///checks for incomming messages and stores them in a local buffer (in parallel to other components)
	virtual void run() = 0;

	///get the messages received by the last run() call, but doesn't throw them away
	///@param data: pointer where the data should be copied to
	virtual void getNewestMessages(char** data);

	///Gets the size of the messages received by the last run() call
	virtual unsigned int getNewestMessagesSize() { return m_sizeOfNewMessages; }

	///looks in the local buffer and copies the received messages in the "data" variable, throwing away all old messages
	virtual int getSocketData(const char **data, bool onlyNewestMessage = false);
	///sends data to the linked server socket
	virtual void sendSocketData(const char *data) = 0;

protected:
	// Print and error code from winsocket
	void printSocketError(int errorCode);

	//** variables
	///member socket
	SOCKET m_socket;

	///socket address of the linked server
	SocketAddress* m_server_addr;

	///used communication protocol
	SocketProtocol::List m_protocol;

	///length of the buffer that stores received data
	int			m_resultLength[SocketData::BUFFER_LENGTH];
	///number of received messages
	int			m_numMessages;
	///last received message
	int			m_currentMessage;
	///first message received in the last run() call, -1 if none received
	int			m_firstNewMessage;
	/// Number of messages received in the last run() call
	int			m_numNewMessages;
	///size of the messages received by the last run() call
	unsigned int m_sizeOfNewMessages;
	// Acces data per char or per message
	union
	{
		///buffer storing received messages
		char m_messages[SocketData::BUFFER_LENGTH][SocketData::MAX_MSG_LENGTH];
		///buffer storing received data
		char m_data[SocketData::MAX_DATA_LENGTH];
	};	
};

#endif
