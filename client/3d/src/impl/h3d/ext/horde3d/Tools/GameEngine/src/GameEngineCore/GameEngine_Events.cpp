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
