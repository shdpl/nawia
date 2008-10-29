// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007
// Programmers: Volker Wiendl, Nikolaus Bee
// 
// This file is part of the GameEngine of the University of Augsburg
// 
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************
#include "GameEngine_SAPI.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameWorld.h>
#include <GameEngine/GameModules.h>

#include "TtsManager.h"
#include "TTSComponent.h"

namespace GameEngine
{
	SAPIPLUGINEXP void speak(unsigned int entityWorldID, const char* sentence)
	{
		TTSComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<TTSComponent*>(entity->component("Sapi")) ) != 0 )
		{
			GameEventData data(sentence);
			GameEvent event(GameEvent::E_SPEAK, &data, 0);
			if( entity->checkEvent( &event ) )
				entity->executeEvent( &event );
		}		
	}

	SAPIPLUGINEXP void setVoice(unsigned int entityWorldID, const char* voice)
	{		
		TTSComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<TTSComponent*>(entity->component("Sapi")) ) != 0 )
		{
			GameEventData data(voice);
			GameEvent event(GameEvent::E_SET_VOICE, &data, 0);
			if( entity->checkEvent( &event ) )
				entity->executeEvent( &event );
		}		
	}

	SAPIPLUGINEXP bool isSpeaking(unsigned int entityWorldID)
	{
		TTSComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<TTSComponent*>(entity->component("Sapi")) ) != 0 )
		{
			return component->isSpeaking();
		}
		return false;
	}
}

