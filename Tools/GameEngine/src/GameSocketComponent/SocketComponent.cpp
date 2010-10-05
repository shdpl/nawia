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
 *       NrOfClients = int value (optional, default 1)
 *
 * Example
 *		<Socket protocol="TCP" port="122" address="127.0.0.1" type="server" NrOfClients="6" />
 */
void SocketComponent::loadFromXml(const XMLNode* node)
{
	const char* protocol;
	const char* address;
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

	if((node->getAttribute( "address" ) != 0) && (strcmp(node->getAttribute("address"), "") != 0))
		address = node->getAttribute( "address" );
	else
		address = "127.0.0.1";

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
				m_clientServer = new SocketServer( address, port, (strcmp ("UDP", protocol) == 0) ? SocketProtocol::UDP : SocketProtocol::TCP);
			}
			else
			{
				m_clientServer = new SocketClient( address, port, (strcmp ("UDP", protocol) == 0) ? SocketProtocol::UDP : SocketProtocol::TCP );
			}
		}
	}
	else
	{
		GameLog::errorMessage("SocketComponent: no protocol defined");
	}
}

void SocketComponent::update()
{
	if (m_clientServer != 0)
		m_clientServer->update();
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