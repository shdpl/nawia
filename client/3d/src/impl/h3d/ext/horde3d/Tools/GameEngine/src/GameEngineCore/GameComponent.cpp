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
// GameEngine Core Library of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************

#include "GameComponent.h"

#include "GameEntity.h"


GameComponent::GameComponent(GameEntity *owner, ComponentID componentID) : m_owner(owner), m_componentID(componentID)
{
	if (m_owner) m_owner->addComponent(this);
}

GameComponent::~GameComponent()
{
	if (m_owner)
	{
		m_owner->removeListener(this);
		m_owner->removeComponent(this);
	}
}


size_t GameComponent::getSerializedState(char *state, size_t availableBytes) {
	return 0;
}

void GameComponent::setSerializedState(const char *state, size_t length) {

}
