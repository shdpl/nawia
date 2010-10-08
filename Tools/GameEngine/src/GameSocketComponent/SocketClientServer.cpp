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

#include "SocketClientServer.h"

#include <iostream>

SocketClientServer::SocketClientServer(const char* server_name, int port, SocketProtocol::List protocol)
{
	memset(m_resultLength, 0, sizeof(m_resultLength));
	m_numMessages = 0;
	m_currentMessage = 0;
	m_firstNewMessage = -1;
	m_sizeOfNewMessages = 0;
	m_numNewMessages = 0;
	m_protocol = protocol;

	m_server_addr = new SocketAddress(server_name, port);
}

SocketClientServer::~SocketClientServer() 
{
	delete m_server_addr;
}

int SocketClientServer::getSocketData(const char** data, bool onlyNewestMessage /*=false*/)
{
	int res = 0;
	if (onlyNewestMessage && m_numMessages > 0)
	{
		int index = (m_currentMessage + m_numMessages - 1) % SocketData::BUFFER_LENGTH;
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
			m_currentMessage = (m_currentMessage+1) % SocketData::BUFFER_LENGTH;
		}
	}
	return res;
}

void SocketClientServer::getNewestMessages(char** data)
{
	if (m_numNewMessages > 0)
	{
		int bytesCopied = 0;
		// We have at least one new message, so copy all to the data pointer
		for (int i = m_firstNewMessage; i < m_numNewMessages; i++)
		{
			int index = i % SocketData::BUFFER_LENGTH;
			memcpy(*data + bytesCopied, m_messages[index], m_resultLength[index]);
			bytesCopied += m_resultLength[index];
		}
	}
}

void SocketClientServer::printSocketError(int errorCode)
{
	printf("SocketError: ");
	switch(errorCode)
	{
	case WSANOTINITIALISED:
		printf("A successful WSAStartup call must occur before using this function.\n");
		break;
	case WSAENETDOWN:	
		printf("The network subsystem has failed.\n");
		break;
	case WSAEFAULT:
		printf("The buf parameter is not completely contained in a valid part of the user address space.\n");
		break;
	case WSAENOTCONN:
		printf("The socket is not connected.\n");
		break;
	case WSAEINTR:
		printf("The (blocking) call was canceled through WSACancelBlockingCall.\n");
		break;
	case WSAEINPROGRESS:
		printf("A blocking Windows Sockets 1.1 call is in progress, or the service provider is still processing a callback function.\n");
		break;
	case WSAENETRESET:
		printf("For a connection-oriented socket, this error indicates that the connection has been broken due to keep-alive activity detecting a failure while the operation was in progress. For a datagram socket, this error indicates that the time to live has expired.\n");
		break;
	case WSAENOTSOCK:
		printf("The descriptor is not a socket.\n");
		break;
	case WSAEOPNOTSUPP:
		printf("MSG_OOB was specified, but the socket is not stream-style such as type SOCK_STREAM, OOB data is not supported in the communication domain associated with this socket, or the socket is unidirectional and supports only send operations.\n");
		break;
	case WSAESHUTDOWN:
		printf("The socket has been shut down; it is not possible to receive on a socket after shutdown has been invoked with how set to SD_RECEIVE or SD_BOTH.\n");
		break;
	case WSAEWOULDBLOCK:
		printf("The socket is marked as nonblocking and the receive operation would block.\n");
		break;
	case WSAEMSGSIZE:
		printf("The message was too large to fit into the specified buffer and was truncated.\n");
		break;
	case WSAEINVAL:
		printf("The socket has not been bound with bind, or an unknown flag was specified, or MSG_OOB was specified for a socket with SO_OOBINLINE enabled or (for byte stream sockets only) len was zero or negative.\n");
		break;
	case WSAECONNABORTED:
		printf("The virtual circuit was terminated due to a time-out or other failure. The application should close the socket as it is no longer usable.\n");
		break;
	case WSAETIMEDOUT:
		printf("The connection has been dropped because of a network failure or because the peer system failed to respond.\n");
		break;
	case WSAECONNRESET:
		printf("The virtual circuit was reset by the remote side executing a hard or abortive close. The application should close the socket as it is no longer usable. On a UPD-datagram socket this error would indicate that a previous send operation resulted in an ICMP \"Port Unreachable\" message.\n");
		break;
	default:
		printf("Unknownd socket error!\n");
		break;
	}
}