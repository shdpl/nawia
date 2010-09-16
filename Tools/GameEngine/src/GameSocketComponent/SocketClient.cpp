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

#define MAX_DATA_LENGTH 32768
#define MAX_MSG_LENGTH 2048

SocketClient::SocketClient(const char* server_name, int port, SocketProtocol::List protocol)
{
	m_data = new char[MAX_DATA_LENGTH];
	m_resultLength = 0;

	m_server_addr = new SocketAddress(server_name, port);
	m_protocol = protocol;

	switch(protocol)
	{
	case SocketProtocol::TCP:
		startTCPClient();
		break;
	case SocketProtocol::UDP:
		startUDPClient();
		break;
	}
}

SocketClient::~SocketClient()
{
	delete m_data;
	delete m_server_addr;
}

void SocketClient::startUDPClient()
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

void SocketClient::startTCPClient()
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

void SocketClient::update()
{
	int resultLength = 0;
	do {
		if (m_protocol == SocketProtocol::UDP)
		{
			int addrLen = sizeof(m_server_addr->m_address);
			resultLength = recvfrom(m_socket, m_data, MAX_MSG_LENGTH, 0, (SOCKADDR *)&m_server_addr->m_address, &addrLen);
		}
		else
		{
			resultLength = recv(m_socket, m_data, MAX_MSG_LENGTH, 0);
		}
		if (resultLength > 0)
		{
			m_resultLength = resultLength;
		}
	} while (resultLength > 0);
}

int SocketClient::getSocketData(const char **data)
{
	int res = m_resultLength;
	m_resultLength = 0;
	*data = (const char*) m_data;
	return res;
}

void SocketClient::sendSocketData(const char *data)
{
	if(m_protocol == SocketProtocol::UDP)
	{
		sendto(m_socket, data, strlen(data) + 1, 0, (SOCKADDR *)&m_server_addr->m_address , sizeof(m_server_addr->m_address));
	}
	else
		send(m_socket, data, strlen(data) +1 , 0);
}