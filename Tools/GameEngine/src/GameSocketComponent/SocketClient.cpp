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

#include "config.h"

SocketClient::SocketClient(const char* server_name, int port, SocketProtocol::List protocol) : SocketClientServer(server_name, port, protocol)
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

SocketClient::~SocketClient()
{
}

void SocketClient::startUDP()
{
	long rc = 0;

	//"connect"
	m_socket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	rc = sendto(m_socket, "init", 5, 0, (SOCKADDR *) &m_server_addr->m_address, sizeof(m_server_addr->m_address));
	if(rc==SOCKET_ERROR)
	{
		WSACleanup();
		GameLog::errorMessage("SocketComponent: SOCKET_ERROR (client failed to connect to server)");
		return;
	}
	// enable non-blocking
	unsigned long mode = 1;
	ioctlsocket(m_socket, FIONBIO, &mode);
}

void SocketClient::startTCP()
{
	long rc = 0;

	//"connect"
	m_socket = socket(AF_INET, SOCK_STREAM, 0);
	rc = connect( m_socket, (SOCKADDR *)&m_server_addr->m_address, sizeof(m_server_addr->m_address) );
	if(rc==SOCKET_ERROR)
	{
		WSACleanup();
		GameLog::errorMessage("SocketComponent: SOCKET_ERROR (client failed to connect to server)");
		return;
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
	int i = 0;
	do {
		int messageIndex = (m_numMessages + m_currentMessage) % SocketData::BUFFER_LENGTH;
		
		if (m_protocol == SocketProtocol::UDP)
		{
			int addrLen = sizeof(m_server_addr->m_address);
			resultLength = recvfrom(m_socket, m_messages[messageIndex], SocketData::MAX_MSG_LENGTH, 0, (SOCKADDR *)&m_server_addr->m_address, &addrLen);
		}
		else
		{
			resultLength = recv(m_socket, m_messages[messageIndex], SocketData::MAX_MSG_LENGTH, 0);
		}

		if (resultLength > 0)
		{
			i++;
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
	}
	while (resultLength > 0 && (i < SocketData::BUFFER_LENGTH || m_protocol == SocketProtocol::UDP));
	// With TCP we receive a number of maximum BUFFER_LENGTH messages in one frame
	// With UDP we receive as much as we can and only keep a number of BUFFER_LENGTH newest
}

void SocketClient::sendSocketData(const char *data)
{
	if (data != 0)
	{
		if(m_protocol == SocketProtocol::UDP)
		{
			sendto(m_socket, data, strlen(data) + 1, 0, (SOCKADDR *)&m_server_addr->m_address , sizeof(m_server_addr->m_address));
		}
		else
			send(m_socket, data, strlen(data) + 1 , 0);
	}
}