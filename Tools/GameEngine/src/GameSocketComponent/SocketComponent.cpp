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
#include "SocketComponent.h"

#include "SocketManager.h"
#include <XmlParser/utXMLParser.h>

#include <GameEngine/GameLog.h>
#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEntity.h>
#include <GameEngine/GameEvent.h>

#include "SocketServer.h"
#include "SocketClient.h"

#include "GameEngine_Socket.h"

#pragma comment(lib, "ws2_32.lib")


GameComponent* SocketComponent::createComponent( GameEntity* owner )
{
	return new SocketComponent( owner );
}

SocketComponent::SocketComponent(GameEntity* owner) : GameComponent(owner, "SocketComponent"), m_clientServer(0)
{
	owner->addListener(GameEvent::E_SEND_SOCKET_DATA, this);
	owner->addListener(GameEvent::E_GET_SOCKET_DATA, this);
	owner->addListener(GameEvent::E_GET_SOCKET_NEWEST_MSG, this);
	SocketManager::instance()->addComponent(this);

	// initialize Winsock
	int err;
	err = WSAStartup( MAKEWORD(2,2), &m_wsaData );
	if (err != 0) 
	{
        // Tell the user that we could not find a usable Winsock DLL
        GameLog::errorMessage("SocketComponent: WSAStartup failed with error");
        return;
    }
}

SocketComponent::~SocketComponent()
{
	delete m_clientServer;

	WSACleanup();
	SocketManager::instance()->removeComponent(this);
}

void SocketComponent::executeEvent(GameEvent* event)
{
	switch (event->id())
	{
	case GameEvent::E_SEND_SOCKET_DATA:
		{
			sendSocketData(static_cast<const char*>(event->data()));
		}
		break;
	case GameEvent::E_GET_SOCKET_DATA:
		{
			getSocketData(static_cast<const char**>(event->data()));
		}
		break;
	case GameEvent::E_GET_SOCKET_NEWEST_MSG:
		{
			getSocketData(static_cast<const char**>(event->data()), true);
		}
		break;
	}
}

/**
 * XML Syntax: 
 * < Socket protocol port address type NrOfClients />
 *
 * where protocol = "TCP" / "UDP"
 *       port = int value
 *       address = alphanumeric value (optional, default 127.0.0.1)
 *       type = "server" / "client"
 *		 maxMsgLength = int value (optional, default 1024) representing the maximum byte length of a message (TCP will split the messages if too long)
 *		 bufferLength = int value (optional, default 64) representing the buffer length in number of messages
 *		 maxConnectionTrials = int value which indicates how often a tcp client tries to connect to it's server
 *
 * Example
 *		<Socket protocol="TCP" port="122" address="127.0.0.1" type="server"/>
 */
void SocketComponent::loadFromXml(const XMLNode* node)
{
	const char* protocol;
	int port;
	bool ok = true;
	bool isServer = false;

	/**
	 * Parse the xml file
	 */

	if((node->getAttribute( "protocol" ) != 0) && (strcmp(node->getAttribute("protocol"), "") != 0))
		protocol = node->getAttribute( "protocol", "UDP" );
	else ok = false;

	if((node->getAttribute( "port" ) != 0) && (strcmp(node->getAttribute("port"), "") != 0))
		port = atoi(node->getAttribute( "port" ));
	else ok = false;

	if((node->getAttribute( "type" ) != 0))
	{
		if(strcmp(node->getAttribute( "type" ), "server") == 0)
		{
			 isServer = true;
		}
		else if (strcmp(node->getAttribute( "type" ), "client") != 0)
		{
			ok = false;
		}
	} else ok = false;

	if(!ok)
	{
		GameLog::errorMessage("SocketComponent: xml parameter definition missing or incomplete");
		return;
	}

	// optional arguments (with standard values)
	const char* address = node->getAttribute( "address", "127.0.0.1");
	int bufferLength = atoi(node->getAttribute("bufferLength", "64"));
	int maxMsgLength = atoi(node->getAttribute("maxMsgLength", "1024"));
	int maxConnectionTrials = atoi(node->getAttribute("maxConnectionTrials", "5"));

	/**
	 * Initialize the component
	 */

	if ( protocol != 0 )
	{
		if (strcmp("UDP", protocol) != 0 && strcmp("TCP", protocol) != 0)
		{
			GameLog::errorMessage("SocketComponent: no valid protocol");
		}
		else
		{
			if ( isServer )
			{
				m_clientServer = new SocketServer( address, port, maxMsgLength, bufferLength, (strcmp ("UDP", protocol) == 0) ? SocketProtocol::UDP : SocketProtocol::TCP);
			}
			else
			{
				m_clientServer = new SocketClient( address, port, maxMsgLength, bufferLength, (strcmp ("UDP", protocol) == 0) ? SocketProtocol::UDP : SocketProtocol::TCP, maxConnectionTrials);
			}
		}
	}
	else
	{
		GameLog::errorMessage("SocketComponent: no protocol defined");
	}
}

void SocketComponent::run()
{
	if (m_clientServer != 0)
		m_clientServer->run();
}

void SocketComponent::update()
{
	if (m_clientServer != 0)
	{
		unsigned int newSize = m_clientServer->getNewestMessagesSize();
		if (newSize > 0)
		{
			char* data = new char[newSize];
			m_clientServer->getNewestMessages(&data);
			GameEventData eventData(data, newSize);
			GameEvent newData(GameEvent::E_SOCKET_NEW_DATA, &eventData, this);
			delete[] data;
		}
	}
}

int SocketComponent::getSocketData(const char **data, bool onlyNewestMessage /*= false*/)
{
	if (m_clientServer != 0)
		return m_clientServer->getSocketData(data, onlyNewestMessage);

	return -1;
}

void SocketComponent::sendSocketData(const char *data)
{
	if(m_clientServer != 0)
		m_clientServer->sendSocketData(data);
}

int SocketComponent::getMaxMsgLength()
{
	if (m_clientServer != 0)
		return m_clientServer->getMaxMsgLength();
	return -1;
}

int SocketComponent::getBufferLength()
{
	if (m_clientServer != 0)
		return m_clientServer->getBufferLength();
	return -1;
}