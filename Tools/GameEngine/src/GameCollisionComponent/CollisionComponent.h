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
#ifndef COLLISIONCOMPONENT_H_
#define COLLISIONCOMPONENT_H_

#include <GameEngine/GameComponent.h>

/**
 * Component to handle collision events
 */
class CollisionComponent : public GameComponent
{

public:
	static GameComponent* createComponent( GameEntity* owner );
	CollisionComponent(GameEntity* owner);
	~CollisionComponent();


	// Clears the collision list
	void update();

	bool checkEvent(GameEvent* event) { return true; }
	void executeEvent(GameEvent* event);

	void loadFromXml(const XMLNode* description);

	std::vector<unsigned int>*	collisionList() { return &m_collisions; }

private:
	
	std::vector<unsigned int>	m_collisions;

};
#endif 

