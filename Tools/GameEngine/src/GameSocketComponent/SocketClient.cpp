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

SocketClient::SocketClient(const char* server_name, int port, int maxMsgLength, int bufferLength, SocketProtocol::List protocol, int maxConnectionTrials)
	: SocketClientServer(server_name, port, maxMsgLength, bufferLength, protocol), m_connectionStatus(NO_CONNECTION), m_maxConnectionTrials(maxConnectionTrials), m_connectionTrials(0)
{
	// Initialize and start
	start();
}

SocketClient::~SocketClient()
{
	if (m_protocol == SocketProtocol::TCP)
	{
		closesocket(m_socket);
	}
}

void SocketClient::start()
{
	long rc = 0;

	if (m_protocol == SocketProtocol::UDP)
	{
		// Create socket with the server adress for receiving and sending
		m_socket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

		// enable non-blocking
		unsigned long mode = 1;
		ioctlsocket(m_socket, FIONBIO, &mode);

		// Send a hello packet to notify the server
		rc = sendto(m_socket, "init", 5, 0, (SOCKADDR *) &m_server_addr.m_address, sizeof(m_server_addr.m_address));
		if(rc==SOCKET_ERROR)
		{
			WSACleanup();
			m_socket = INVALID_SOCKET;
			GameLog::errorMessage("SocketComponent: SOCKET_ERROR (client failed to send initial message to server with address: %s)", m_server_addr.m_addressString.c_str());
			return;
		}
		m_connectionStatus = CONNECTED;
		m_connectionTrials = 1;
	}
	else // TCP
	{
		// Create socket
		m_socket = socket(AF_INET, SOCK_STREAM, 0);

		// enable non-blocking
		unsigned long mode = 1;
		ioctlsocket(m_socket, FIONBIO, &mode);

		// Try to connect directly
		connectToServer();
	}
}

bool SocketClient::connectToServer()
{
	if (m_protocol == SocketProtocol::TCP && m_socket)
	{
		m_connectionTrials++;
		long rc = connect( m_socket, (SOCKADDR *)&m_server_addr.m_address, sizeof(m_server_addr.m_address) );
		if(rc==SOCKET_ERROR)
		{
			int error = WSAGetLastError();
			if (error == WSAEWOULDBLOCK)
				// Connection initialised but not yet finished
				m_connectionStatus = CONNECTING;
			else if (error == WSAECONNREFUSED)
				// Connection was directly refused by the server machine (server not initialised yet?)
				m_connectionStatus = NO_CONNECTION;
			else
			{
				// Real failure in connect so stop this
#ifdef PRINT_SOCKET_ERRORS
				printSocketError(error);
#endif
				WSACleanup();
				GameLog::errorMessage("SocketComponent: SOCKET_ERROR (client failed to connect to server with address: %s)", m_server_addr.m_addressString.c_str());
				m_connectionStatus = GIVEN_UP;
				return false;
			}
		}
		else
		{
			// Connection was established directly
			m_connectionStatus = CONNECTED;
			GameLog::logMessage("SocketComponent: Connected to server with address: %s)", m_server_addr.m_addressString.c_str());
		}

		return true;
	}
	return false;
}

void SocketClient::run()
{
	if (m_socket == INVALID_SOCKET)
		return;

	if (m_protocol == SocketProtocol::TCP && m_connectionStatus != CONNECTED)
	{
		// TCP client and no connection
		switch (m_connectionStatus)
		{
		case CONNECTING:
			{
				// Check if connection has completed
				fd_set socketSet;
				socketSet.fd_count = 1;
				socketSet.fd_array[0] = m_socket; 
				timeval maxWait;
				maxWait.tv_sec = 0;	// 0 seconds,
				maxWait.tv_usec = 100000; // but 100 000 microseconds = 0.1 seconds
				int result = select(0, 0x0, &socketSet, 0x0, &maxWait);
				if (result == 1)
				{
					// Connection completed
					m_connectionStatus = CONNECTED;
					GameLog::logMessage("SocketComponent: Connected to server with address: %s)", m_server_addr.m_addressString.c_str());
				}
				else
				{
					socketSet.fd_count = 1;
					socketSet.fd_array[0] = m_socket;
					// Check for failed connection
					if (select(0, 0x0, 0x0, &socketSet, &maxWait) == 1)
					{
						// Connection failed
						// Reconnect next run() call
						m_connectionStatus = NO_CONNECTION;
					}
					// else still connecting...
				}
			}
			break;
		case NO_CONNECTION:
			// Try to reconnect m_maxConnectionTrials times or infinite times if m_maxConnectionTrials < 0
			if (m_maxConnectionTrials < 0 || m_connectionTrials < m_maxConnectionTrials)
				connectToServer();
			else
			{
				// Give up with connecting
				WSACleanup();
				m_socket = INVALID_SOCKET;
				GameLog::errorMessage("SocketComponent: Client gave up connecting to server with address: %s after %d trials.", m_server_addr.m_addressString.c_str(), m_connectionTrials);
				m_connectionStatus = GIVEN_UP;
			}

			break;
		}
	}
	else
	{
		// TCP client already connected or UDP client which doesn't need connecting
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
					if (m_numNewMessages == m_bufferLength)
					{
						GameLog::warnMessage("WARNING: Buffer overflow in SocketComponent, some data will be lost!");
						// Also reached the first message received by this run() call
						// So ignore it
						m_firstNewMessage = (m_firstNewMessage + 1) % m_bufferLength;
						m_sizeOfNewMessages -= m_resultLength[m_currentMessage];
						m_numNewMessages--;
					}
					// Throw away oldest message
					m_resultLength[m_currentMessage] = 0;
					m_currentMessage = (m_currentMessage + 1) % m_bufferLength;
					m_numMessages--;
				}
				if (m_firstNewMessage == -1)
					m_firstNewMessage = messageIndex;			
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
}

void SocketClient::sendSocketData(const char *data)
{
	if (data != 0 && m_socket != INVALID_SOCKET)
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