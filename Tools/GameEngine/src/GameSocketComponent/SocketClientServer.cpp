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

SocketClientServer::SocketClientServer(const char* server_name, int port, SocketProtocol::List protocol)
{
	memset(m_resultLength, 0, sizeof(m_resultLength));
	m_numMessages = 0;
	m_currentMessage = 0;
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