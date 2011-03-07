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
#include "GameEngine_Collisions.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameWorld.h>
#include <GameEngine/GameModules.h>

#include "CollisionManager.h"
#include "CollisionComponent.h"

namespace GameEngine
{
	COLLISIONPLUGINEXP size_t numCollisions(unsigned int entityWorldID)
	{
		CollisionComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<CollisionComponent*>(entity->component("CollisionHandler")) ) != 0 )
		{
			return component->collisionList()->size();
		}	
		return 0;
	}

	COLLISIONPLUGINEXP unsigned int collision(unsigned int entityWorldID, int index)
	{		
		CollisionComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<CollisionComponent*>(entity->component("CollisionHandler")) ) != 0 )
		{
			size_t size = component->collisionList()->size();
			if( (unsigned)index < size )
				return component->collisionList()->at(index);
		}	
		return 0;
	}
}

