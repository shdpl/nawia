// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// The GameEngine is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation version 3 of the License 
//
// The GameEngine is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// ****************************************************************************************


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