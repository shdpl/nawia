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

