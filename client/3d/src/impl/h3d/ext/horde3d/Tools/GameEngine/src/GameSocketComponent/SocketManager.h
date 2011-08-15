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
#ifndef SOCKET_MANAGER_H_
#define SOCKET_MANAGER_H_

#include <GameEngine/GameComponentManager.h>
#include <vector>

class SocketComponent;

/**
 * 
 */
class SocketManager : public GameComponentManager
{
public:
	static SocketManager* instance();
	static void release();

	void addComponent(SocketComponent* component);
	void removeComponent(SocketComponent* component);

	void run();

	void update();	


private:
	SocketManager() {}
	~SocketManager() {}

	static SocketManager*				m_instance;

	std::vector<SocketComponent*>		m_socketListener;	
};

#endif // SOCKET_MANAGER_H_