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
// *************************************************************************************************
//


// ****************************************************************************************
//
// GameEngine Collision Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#ifndef COLLISIONMANAGER_H_
#define COLLISIONMANAGER_H_

#include <GameEngine/GameComponentManager.h>

#include <vector>

class CollisionComponent;

class CollisionManager : public GameComponentManager
{
public:
	static CollisionManager* instance();
	static void release();
	
	void run();

	void update() {}

	void addComponent(CollisionComponent* component);

	void removeComponent(CollisionComponent* component);
	

private:
	static CollisionManager*	m_instance;

	CollisionManager() {}
	~CollisionManager() {}

	std::vector<CollisionComponent*> m_collisionComponents;
};
#endif