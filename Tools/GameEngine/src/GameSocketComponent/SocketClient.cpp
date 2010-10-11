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
#include "SocketClient.h"
#include <GameEngine/GameLog.h>
#include <iostream>

#include "config.h"

SocketClient::SocketClient(const char* server_name, int port, int maxMsgLength, int bufferLength, SocketProtocol::List protocol) : SocketClientServer(server_name, port, maxMsgLength, bufferLength, protocol)
{
	// Initialize and start
	start();
}

SocketClient::~SocketClient()
{
}

void SocketClient::start()
{
	long rc = 0;

	if (m_protocol == SocketProtocol::UDP)
	{
		// Create socket with the server adress for receiving and sending
		m_socket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
		// Send a hello packet to notify the server
		rc = sendto(m_socket, "init", 5, 0, (SOCKADDR *) &m_server_addr.m_address, sizeof(m_server_addr.m_address));
		if(rc==SOCKET_ERROR)
		{
			// TODO: Maybe we shouldn't give up yet and try later to connect (or at least send an hello message several times)
			WSACleanup();
			GameLog::errorMessage("SocketComponent: SOCKET_ERROR (client failed to send initial message to server)");
			return;
		}
	}
	else // TCP
	{
		//"connect"
		// TODO: currently blocking, maybe only start the connection process and check for it's status in the run()-call, until it completed or retry a few times if it failed
		// Additionally a function for manually connecting could be useful
		m_socket = socket(AF_INET, SOCK_STREAM, 0);
		rc = connect( m_socket, (SOCKADDR *)&m_server_addr.m_address, sizeof(m_server_addr.m_address) );
		if(rc==SOCKET_ERROR)
		{
			WSACleanup();
			GameLog::errorMessage("SocketComponent: SOCKET_ERROR (client failed to connect to server)");
			return;
		}
	}
	// enable non-blocking
	unsigned long mode = 1;
	ioctlsocket(m_socket, FIONBIO, &mode);
}

void SocketClient::run()
{
	m_firstNewMessage = -1;
	m_sizeOfNewMessages = 0;
	m_numNewMessages = 0;

	int resultLength = 0;
	do {
		int messageIndex = (m_numMessages + m_currentMessage) % m_bufferLength;
		
		if (m_protocol == SocketProtocol::UDP)
		{
			int addrLen = sizeof(m_server_addr.m_address);
			resultLength = recvfrom(m_socket, &m_messages[messageIndex * m_maxMsgLength], m_maxMsgLength, 0, (SOCKADDR *)&m_server_addr.m_address, &addrLen);
		}
		else // TCP
		{
			resultLength = recv(m_socket, &m_messages[messageIndex * m_maxMsgLength], m_maxMsgLength, 0);
		}

		if (resultLength > 0)
		{
			m_resultLength[messageIndex] = resultLength;
			m_numMessages++;
			m_numNewMessages++;
			m_sizeOfNewMessages += resultLength;
			if (m_numMessages == m_bufferLength)
			{
				// Buffer overflow
				if (m_currentMessage == m_firstNewMessage)
				{
					GameLog::warnMessage("WARNING: Buffer overflow in SocketComponent, some data will be lost!");
					// Also reached the first message received by this run() call
					// So ignore it
					m_firstNewMessage++;
					m_sizeOfNewMessages -= m_resultLength[m_currentMessage];
					m_numNewMessages--;
				}
				// Throw away oldest message
				m_resultLength[m_currentMessage] = 0;
				m_currentMessage = (m_currentMessage + 1) % m_bufferLength;
				m_numMessages--;
			}
			if (m_firstNewMessage == -1)
				m_firstNewMessage = m_currentMessage;			
		}
#ifdef PRINT_SOCKET_ERRORS
		else if (resultLength < 0)
		{
			// negative value means error
			int error = WSAGetLastError();
			if (error != WSAEWOULDBLOCK)
			{
				// WSAWOULDBLOCK happens, if there is nothing more to receive
				printf("Error in ClientReceive - ");
				printSocketError(error);
			}
		}
#endif
	}
	while (resultLength > 0);
}

void SocketClient::sendSocketData(const char *data)
{
	if (data != 0)
	{
		int rc = 0;
		if(m_protocol == SocketProtocol::UDP)
		{
			rc = sendto(m_socket, data, strlen(data) + 1, 0, (SOCKADDR *)&m_server_addr.m_address , sizeof(m_server_addr.m_address));
		}
		else // TCP
			rc = send(m_socket, data, strlen(data) + 1 , 0);
#ifdef PRINT_SOCKET_ERRORS
		if (rc < 0)
		{
			printf("Error in ClientSend - ");
			printSocketError(WSAGetLastError());
		}
#endif
	}
}