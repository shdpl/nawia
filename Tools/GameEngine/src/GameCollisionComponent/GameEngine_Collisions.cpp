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
			if( index < size )
				return component->collisionList()->at(index);
		}	
		return 0;
	}
}

