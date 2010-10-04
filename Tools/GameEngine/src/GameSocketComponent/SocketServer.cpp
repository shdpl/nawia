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

SocketServer::SocketServer(const char* server_name, int port, SocketProtocol::List protocol, int NrOfClients) : SocketClientServer()
{
	memset(m_resultLength, 0, sizeof(m_resultLength));
	m_numMessages = 0;
	m_currentMessage = 0;

	m_nrClients = NrOfClients;
	m_protocol = protocol;

	m_server_addr = new SocketAddress(server_name, port);
	//m_client_addr = new SocketAddress(server_name, port);

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
	delete m_server_addr;
	
	for(unsigned int i=0; i< m_clients_addr.size(); i++)
		delete m_clients_addr[i];
	m_clients_addr.clear();

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

	// enable non-blocking
	//unsigned long mode = 1;
	//ioctlsocket(m_socket, FIONBIO, &mode);

	//listening for clients
	printf("SocketServer: waiting for %d clients\r\n", m_nrClients);

	rc = listen(m_socket, m_nrClients);
	if(rc != 0)
	{
		WSACleanup();
		GameLog::errorMessage("SocketComponent: SOCKET_ERROR (can't listen)");
		return;			
	}

	for(int i= 0; i<m_nrClients; i++)
	{
		//printf("SocketServer: Trying to accept client %d\r\n", i);
		SOCKET acceptSocket = accept( m_socket, 0, 0 );
		if(acceptSocket == INVALID_SOCKET) {
			printf("SocketServer: Accept failed on client %d with error %d\r\n", i, WSAGetLastError());
		}
		else {
			//////
			unsigned long mode = 1;
			ioctlsocket(acceptSocket, FIONBIO, &mode);
			/////
			printf("SocketServer: Accept succeeded on client %d with error %d\r\n", i, WSAGetLastError());
			m_clients_socket.push_back( acceptSocket );
			printf("SocketServer: Connection established to client %d\r\n", i);
	
		}
		//printf("SocketServer: Connection established to client %d\r\n", i);
	}

}

void SocketServer::update()
{
	int resultLength = 0;
	if (m_protocol == SocketProtocol::UDP)
	{
		int i = -1;
		do {
			i++;
			int addrLen = sizeof(sockaddr_in);
			SocketAddress* new_addr = new SocketAddress("", 0);

			int messageIndex = (m_numMessages + m_currentMessage) % BUFFER_LENGTH;
			resultLength = recvfrom(m_socket, m_messages[messageIndex], MAX_MSG_LENGTH, 0, (SOCKADDR *)&new_addr->m_address, &addrLen);

			//save client address in local client vector
			if(findClientAddress(new_addr) < 0)
				m_clients_addr.push_back( new_addr );

			if (resultLength > 0)
			{
				m_resultLength[messageIndex] = resultLength;
				m_numMessages++;
				if (m_numMessages == BUFFER_LENGTH)
				{
					// Buffer overflow, so throw away oldest message
					m_resultLength[m_currentMessage] = 0;
					m_currentMessage = (m_currentMessage + 1) % BUFFER_LENGTH;
					m_numMessages--;
				}
			}
		} while (resultLength > 0 && i < BUFFER_LENGTH);
	}
	else
	{
		// Our static array for the received message
		char msg[MAX_MSG_LENGTH];

		//Receive from all clients
		for(unsigned int i=0; i<m_clients_socket.size(); i++)
		{
			// Receive from the current connection
			int bytesReceived = recv(m_clients_socket[i], msg, MAX_MSG_LENGTH, 0);

			// Check the result of the receive call
			if ( bytesReceived > 0 ){
				printf("Bytes received: %d\n", bytesReceived);
				std::string str( msg, bytesReceived );
				//printf( "Message received: '%s'\r\n", str.c_str() );

				// Store message in the global data buffer
				memcpy( m_data+resultLength, msg, /*sizeof(msg)*/bytesReceived ); //m_data += bytesReceived/*sizeof(msg)*/;
				//memcpy( m_data, "<MSGEND>", 8 ); m_data += 8;
				// Update the result length of the current update call
				resultLength += bytesReceived;
			}
			else if ( bytesReceived == 0 ) {
				//printf("Connection closed\n");
			}
			else {
				//printf("recv failed: %d\n", WSAGetLastError());
			}
			//if(resultLength > 0) {
			//printf("SocketServer: Received message of length %d from client %d\r\n", resultLength, i);
			//store message in global buffer
			//memcpy( m_data, msg, sizeof(msg) ); m_data += sizeof(msg);
			//memcpy( m_data, "<MSGEND>", 8 ); m_data += 8;
			//}
		}
		m_currentMessage = 0;
		// Update the global result length for the getData call
		m_resultLength[0] = resultLength;
		if (resultLength > 0)
			m_numMessages = 1;		
	}
}

int SocketServer::getSocketData(const char **data, bool onlyNewestMessage /*= false*/)
{
	int res = 0;
	if (onlyNewestMessage && m_numMessages > 0)
	{
		int index = (m_currentMessage + m_numMessages - 1) % BUFFER_LENGTH;
		res = m_resultLength[index];
		*data = (const char*) m_messages[index];
		m_resultLength[index] = 0;
		// Throw away all older messages
		m_numMessages = m_currentMessage = 0;
		m_resultLength[0] = 0;
	}
	else
	{
		res = m_resultLength[m_currentMessage];
		*data = (const char*) m_messages[m_currentMessage];
		m_resultLength[m_currentMessage] = 0;
		if (res > 0)
		{
			m_numMessages--;
			m_currentMessage = (m_currentMessage+1) % BUFFER_LENGTH;
		}
	}
	return res;
}

void SocketServer::sendSocketData(const char *data)
{
	if(m_protocol == SocketProtocol::UDP)
	{
		//broadcast to all clients
		for(unsigned int i=0; i<m_clients_addr.size(); i++)
			sendto(m_socket, data, strlen(data), 0, (SOCKADDR *)&m_clients_addr[i]->m_address , sizeof(m_clients_addr[i]->m_address));
	}
	else
	{	//broadcast to all clients
		for(unsigned int i=0; i<m_clients_socket.size(); i++)
			send(m_clients_socket[i], data, strlen(data), 0);
	}
}

int SocketServer::findClientAddress( SocketAddress* addr )
{
	for(unsigned int i=0; i<m_clients_addr.size(); i++)
		if( m_clients_addr[i]->compareTo( addr ) ) return i;

	return -1;
}