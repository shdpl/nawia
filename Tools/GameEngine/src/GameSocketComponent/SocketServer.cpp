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
#include "SocketServer.h"
#include <GameEngine/GameLog.h>
#include <string>

SocketServer::SocketServer(const char* server_name, int port, SocketProtocol::List protocol) : SocketClientServer(server_name, port, protocol)
{
	switch(protocol)
	{
	case SocketProtocol::TCP:
		startTCP();
		break;
	case SocketProtocol::UDP:
		startUDP();
		break;
	}
}

SocketServer::~SocketServer()
{
	for(unsigned int i=0; i< m_clients_socket.size(); i++)
		closesocket( m_clients_socket[i] );
	m_clients_socket.clear();
}

void SocketServer::startUDP()
{
	int ret = 0;

	//create socket
	m_socket = socket(AF_INET, SOCK_DGRAM, 0);
	if ( m_socket == INVALID_SOCKET )
	{
		WSACleanup();
		GameLog::errorMessage("SocketComponent: INVALID_SOCKET");
		return;
	}

	//bind socket to address and port
	ret = bind( m_socket, (SOCKADDR *) &m_server_addr->m_address, sizeof(SOCKADDR) );
	if(ret != 0)
	{
		WSACleanup();
		GameLog::errorMessage("SocketComponent: SOCKET_ERROR");
		return;			
	}	

	// enable non-blocking
	unsigned long mode = 1;
	ioctlsocket(m_socket, FIONBIO, &mode);
}

void SocketServer::startTCP()
{
	long rc = 0;

	//create socket
	m_socket = socket(AF_INET, SOCK_STREAM, 0);
	if ( m_socket == INVALID_SOCKET )
	{
		WSACleanup();
		GameLog::errorMessage("SocketComponent: INVALID_SOCKET");
		return;
	}

	//bind socket to address and port
	rc = bind( m_socket, (SOCKADDR *) &m_server_addr->m_address, sizeof(SOCKADDR) );
	if(rc != 0)
	{
		WSACleanup();
		GameLog::errorMessage("SocketComponent: SOCKET_ERROR");
		return;			
	}

	//enable non-blocking
	unsigned long mode = 1;
	ioctlsocket(m_socket, FIONBIO, &mode);

	rc = listen(m_socket, SOMAXCONN);
	if(rc != 0)
	{
		WSACleanup();
		GameLog::errorMessage("SocketComponent: SOCKET_ERROR (can't listen)");
		return;			
	}
}

void SocketServer::run()
{
	if (m_protocol == SocketProtocol::TCP)
	{
		SOCKET acceptSocket;
		do
		{
			acceptSocket = accept( m_socket, 0, 0 );
			if(acceptSocket != INVALID_SOCKET)
			{
				// Enable non-blocking for new socket
				unsigned long mode = 1;
				ioctlsocket(acceptSocket, FIONBIO, &mode);
				// Add new client socket
				m_clients_socket.push_back( acceptSocket );
				printf("SocketServer: Connection established to client %d\r\n", m_clients_socket.size());
			}
		}
		while (acceptSocket != INVALID_SOCKET);
	}

	m_firstNewMessage = -1;
	m_sizeOfNewMessages = 0;
	m_numNewMessages = 0;
	int resultLength = 0;
	if (m_protocol == SocketProtocol::UDP)
	{
		do {
			int addrLen = sizeof(sockaddr_in);
			SocketAddress new_addr("", 0);

			int messageIndex = (m_numMessages + m_currentMessage) % SocketData::BUFFER_LENGTH;
			resultLength = recvfrom(m_socket, m_messages[messageIndex], SocketData::MAX_MSG_LENGTH, 0, (SOCKADDR *)&new_addr.m_address, &addrLen);

			if (resultLength > 0)
			{
				//save client address in local client vector
				m_clients_addr.insert( new_addr );

				m_resultLength[messageIndex] = resultLength;
				m_numMessages++;
				m_numNewMessages++;
				m_sizeOfNewMessages += resultLength;
				if (m_numMessages == SocketData::BUFFER_LENGTH)
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
					m_currentMessage = (m_currentMessage + 1) % SocketData::BUFFER_LENGTH;
					m_numMessages--;
				}
				if (m_firstNewMessage == -1)
					m_firstNewMessage = m_currentMessage;
			}
			else if (resultLength == 0)
			{
				// 0 means closed connection, so remove the client
				m_clients_addr.erase(new_addr);
			}
			else
			{
				// negative value means error
				//printSocketError(WSAGetLastError());
			}
		}
		while (resultLength > 0 );
	}
	else //TCP
	{
		bool somethingReceived;
		do {
			somethingReceived = false;
			//Receive from all clients
			for(unsigned int i = 0; i < m_clients_socket.size(); i++)
			{
				int messageIndex = (m_numMessages + m_currentMessage) % SocketData::BUFFER_LENGTH;

				// Receive from the current connection
				resultLength = recv(m_clients_socket[i], m_messages[messageIndex], SocketData::MAX_MSG_LENGTH, 0);

				if (resultLength > 0)
				{
					somethingReceived = true;
					m_resultLength[messageIndex] = resultLength;
					m_numMessages++;
					m_numNewMessages++;
					m_sizeOfNewMessages += resultLength;
					if (m_numMessages == SocketData::BUFFER_LENGTH)
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
						m_currentMessage = (m_currentMessage + 1) % SocketData::BUFFER_LENGTH;
						m_numMessages--;
					}
					if (m_firstNewMessage == -1)
						m_firstNewMessage = m_currentMessage;
				}
				else if (resultLength == 0)
				{
					// 0 means closed connection, so remove the client
					m_clients_socket.erase(m_clients_socket.begin() + i);
					i--;
				}
				else
				{
					// negative value means error
					//printSocketError(WSAGetLastError());
				}
			}
		} while(somethingReceived);
	}
}

void SocketServer::sendSocketData(const char *data)
{
	if (data != 0)
	{
		const std::set<SocketAddress>::iterator end = m_clients_addr.end();
		std::set<SocketAddress>::iterator iter;
		if(m_protocol == SocketProtocol::UDP)
		{
			for (iter = m_clients_addr.begin(); iter != end; iter++)
				sendto(m_socket, data, strlen(data) + 1, 0, (SOCKADDR *)&iter->m_address , sizeof(iter->m_address));
		}
		else
		{	//broadcast to all clients
			for(unsigned int i=0; i<m_clients_socket.size(); i++)
				send(m_clients_socket[i], data, strlen(data) + 1, 0);
		}
	}
}