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
#ifndef SOCKETCOMPONENT_H_
#define SOCKETCOMPONENT_H_

#include <GameEngine/config.h>
#include <GameEngine/GameComponent.h>
#include "SocketAddress.h"
#include "SocketClientServer.h"

#include <string>

class SocketComponent : public GameComponent
{
public:
	static GameComponent*  createComponent( GameEntity* owner );
	SocketComponent(GameEntity* owner);
	virtual ~SocketComponent();
	bool checkEvent(GameEvent* event) { return true; }
	void executeEvent(GameEvent* event);
	void loadFromXml(const XMLNode* description);

	void update();
	void run();

	///receives socket data
	int getSocketData(const char **data, bool onlyNewestMessage = false);
	///sends socket data
	void sendSocketData(const char *data);

private:
	SocketClientServer* m_clientServer;

	///member WSA
	WSADATA		m_wsaData;
};

#endif
