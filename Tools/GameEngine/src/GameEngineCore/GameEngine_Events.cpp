// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
// *************************************************************************************************



// ****************************************************************************************
//
// GameEngine Core Library of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "GameEngine.h"

#include "config.h"

#include "GameEvent.h"
#include "GameEntity.h"
#include "GameWorld.h"
#include "GameModules.h"


namespace GameEngine
{
	GAMEENGINE_API bool sendEvent(unsigned int entityWorldID, GameEvent* event)
	{
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if (entity && entity->checkEvent(event))
		{
			entity->executeEvent(event);
			return true;
		}
		else
			return false;
	}

	//GAMEENGINE_API std::vector<int>* collisionList(const char* entityID)
	//{
	//	GameEntity* entity = GameWorld::entity(entityID);
	//	CollisionComponent* component = 0;
	//	if ( entity && ( component = static_cast<CollisionComponent*>(entity->component(GameEngine::COLLISIONHANDLER)) ) != 0 )
	//		return component->collisionList();
	//	return 0;
	//}
	//
	GAMEENGINE_API void setEnabled(unsigned int entityWorldID, bool enable)
	{
		GameEventData data( enable );
		GameEvent event(GameEvent::E_SET_ENABLED, &data, 0);
		sendEvent(entityWorldID, &event);
	}
}
