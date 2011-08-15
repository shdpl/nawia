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
	SocketClientServer(const char* server_name, int port, int maxMsgLength, int bufferLength, SocketProtocol::List protocol);
	virtual ~SocketClientServer(void);

	//** Pure virtual functions, have to be implemented in sub classes
	///initializes and starts a TCP or UDP Client/Server
	virtual void start() = 0;

	///checks for incomming messages and stores them in a local buffer (in parallel to other components)
	virtual void run() = 0;

	///sends data to the linked server/clients
	virtual void sendSocketData(const char *data) = 0;

	//** Virtual functions, can be reimplemented in sub classes
	///looks in the local buffer and returns a pointer to the next not yet received message
	///@param data: variable which will be set to point to the message
	///@param onlyNewestMessage: data will be point to the last received message instead of the next, throwing away all older messages
	virtual int getSocketData(const char **data, bool onlyNewestMessage = false);

	//** Common functions
	///Copies all messages received at the last run call ordered to the given pointer, but doesn't throw them away
	///@param data: pointer where the data should be copied to
	void getNewestMessages(char** data);

	///Gets the size of the messages received by the last run() call (Use to allocate memory before getNewestMessages())
	unsigned int getNewestMessagesSize() { return m_sizeOfNewMessages; }

	///Gets the maximum message length for udp message based comunnication
	///TCP data will also be split at this length
	int getMaxMsgLength() { return m_maxMsgLength; }
	///Gets the buffer length in number of messages --> max data length = bufferLength * maxMessageLength
	// If the buffer overflows, the oldest messges will be thrown away
	int getBufferLength() { return m_bufferLength; }

protected:
	// Print the descriptions to an error code from winsocket
	void printSocketError(int errorCode);

	//** variables
	///member socket
	SOCKET m_socket;

	///socket address of the linked server or our own adress if we are a server
	SocketAddress m_server_addr;

	///used communication protocol
	SocketProtocol::List m_protocol;

	///length of the buffer that stores received data
	int*		m_resultLength;
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
	// The received messages organized in a ring buffer
	char* m_messages;
	///The maximum message length for udp message based comunnication
	///TCP data will also be split at this length
	int m_maxMsgLength;
	///The buffer length of the ring buffer in number of messages --> max data length = bufferLength * maxMessageLength
	// If the buffer overflows, the oldest messges will be thrown away
	int m_bufferLength;
};

#endif
