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
#include "CollisionComponent.h"

#include "CollisionManager.h"

#include <GameEngine/GameEvent.h>
#include <GameEngine/GameEntity.h>

GameComponent* CollisionComponent::createComponent( GameEntity* owner )
{
	return new CollisionComponent( owner );
}

CollisionComponent::CollisionComponent(GameEntity *owner) : GameComponent(owner, "CollisionHandler")
{
	owner->addListener(GameEvent::E_COLLISION, this);
	CollisionManager::instance()->addComponent(this);	
}

CollisionComponent::~CollisionComponent()
{
	CollisionManager::instance()->removeComponent(this);
}

void CollisionComponent::update()
{
	m_collisions.resize(0);
}

void CollisionComponent::executeEvent(GameEvent *event)
{
	if( event->id() == GameEvent::E_COLLISION )
	{
		m_collisions.push_back( *static_cast<int*>(event->data()) );
	}
}

void CollisionComponent::loadFromXml(const XMLNode *description)
{
	// Nothing to configure
}