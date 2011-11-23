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