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
// GameEngine Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "GameEngine_Animations.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameWorld.h>
#include <GameEngine/GameModules.h>

#include "KeyframeAnimComponent.h"

namespace GameEngine
{
	ANIMATIONSPLUGINEXP int playAnim(unsigned int entityWorldID, const char* animation, const int stage /*= 0*/, const float weight /*= 1.0f*/, 
		const float duration /*= -1.0f*/, const float speed /*= 30.0f*/, const float timeoffset /*= 0.0f*/)
	{		
		KeyframeAnimComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<KeyframeAnimComponent*>(entity->component("KeyframeAnimComponent")) ) != 0 )
		{
			AnimationSetup anim( animation, stage, speed, duration, weight, timeoffset );
			GameEvent event(GameEvent::E_PLAY_ANIM, &anim, 0);
			if( entity->checkEvent( &event ) )
				entity->executeEvent( &event );
			return anim.JobID;
		}		
		return -1;
	}

	ANIMATIONSPLUGINEXP void updateAnim(unsigned int entityWorldID, const int jobID, const GameEngineAnimParams::List paramType, const float value, const float timeoffset /*= 0*/)
	{		
		KeyframeAnimComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<KeyframeAnimComponent*>(entity->component("KeyframeAnimComponent")) ) != 0 )
		{
			AnimationUpdate data(jobID, paramType, value, timeoffset);
			GameEvent event(GameEvent::E_UPDATE_ANIM, &data, 0);
			if( entity->checkEvent( &event ) )
				entity->executeEvent( &event );
		}		
	}

	ANIMATIONSPLUGINEXP bool isPlaying( unsigned int entityWorldID, const char* animation )
	{
		KeyframeAnimComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<KeyframeAnimComponent*>(entity->component("KeyframeAnimComponent")) ) != 0 )
		{
			return component->isPlaying(animation);
		}
		return false;
	}

	ANIMATIONSPLUGINEXP float getAnimLength( unsigned int entityWorldID, const char* animation)
	{
		KeyframeAnimComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<KeyframeAnimComponent*>(entity->component("KeyframeAnimComponent")) ) != 0 )
		{
			return component->getAnimLength(animation);
		}
		return 0;
	}

	ANIMATIONSPLUGINEXP float getAnimSpeed( unsigned int entityWorldID, const char* animation)
	{
		KeyframeAnimComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<KeyframeAnimComponent*>(entity->component("KeyframeAnimComponent")) ) != 0 )
		{
			return component->getAnimSpeed(animation);
		}
		return 0;
	}
}

