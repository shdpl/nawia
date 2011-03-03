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
// GameEngine Sound Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************

#include "GameEngine_Sound.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameWorld.h>
#include <GameEngine/GameModules.h>

#include "SoundManager.h"
#include "SoundResourceManager.h"
#include "SoundComponent.h"
#include "SoundListenerComponent.h"

namespace GameEngine
{
	void sendEvent(unsigned int entityWorldID, GameEvent* event)
	{
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if (entity && entity->checkEvent(event))
			entity->executeEvent(event);
	}

	SOUNDPLUGINEXP void enableSound(unsigned int entityWorldID, const bool enable)
	{		
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity )
		{
			SoundComponent* component = static_cast<SoundComponent*>(entity->component("Sound3D"));
			if( component )	component->setEnabled( enable );
			else 
			{
				SoundListenerComponent* component = static_cast<SoundListenerComponent*>(entity->component("SoundListener"));
				if( component ) component->setEnabled( enable );
			}
		}		
	}	

	SOUNDPLUGINEXP void setSoundGain(unsigned int entityWorldID, const float gain)
	{
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_SET_SOUND_GAIN, &GameEventData( gain ), 0) );
	}

	SOUNDPLUGINEXP void setSoundLoop(unsigned int entityWorldID, const bool loop)
	{
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_SET_SOUND_LOOP, &GameEventData( loop ), 0));
	}

	SOUNDPLUGINEXP void setSoundPitch(unsigned int entityWorldID, const float x)
	{
		SoundComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && (component = static_cast<SoundComponent*>(entity->component("Sound3D"))) != 0 ) 
			component->setPitch( x );
	}

	SOUNDPLUGINEXP void setSoundRolloff(unsigned int entityWorldID, const float x)
	{		
		SoundComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && (component = static_cast<SoundComponent*>(entity->component("Sound3D"))) != 0 ) 
			component->setRollOff( x );
	}

	SOUNDPLUGINEXP void setSoundMaxdist(unsigned int entityWorldID, const float x)
	{
		SoundComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && (component = static_cast<SoundComponent*>(entity->component("Sound3D"))) != 0 ) 
			component->setMaxDist( x );
	}

	SOUNDPLUGINEXP void setSoundRefdist(unsigned int entityWorldID, const float x)
	{
		SoundComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && (component = static_cast<SoundComponent*>(entity->component("Sound3D"))) != 0 ) 
			component->setRefDist( x );
	}

	SOUNDPLUGINEXP void setSoundOffset(unsigned int entityWorldID, float offset)
	{
		SoundComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && (component = static_cast<SoundComponent*>(entity->component("Sound3D"))) != 0 ) 
			component->setOffset(offset);
	}

	SOUNDPLUGINEXP void setSoundFile(unsigned int entityWorldID, const char* soundFile, const char* phonemesFile/*=0*/)
	{
		if( soundFile != 0 )
			sendEvent(entityWorldID, &GameEvent(GameEvent::E_SET_SOUND_FILE, &GameEventData( soundFile ), 0));
		if( phonemesFile != 0 )
			sendEvent(entityWorldID, &GameEvent(GameEvent::E_SET_PHONEMES_FILE, &GameEventData( phonemesFile ), 0));
	}

	SOUNDPLUGINEXP void setSoundResourceDirectory( const char* directory )
	{
		SoundResourceManager::instance()->setResourceDirectory( directory );
	}

	SOUNDPLUGINEXP const char* soundResourceDirectory()
	{
		return SoundResourceManager::instance()->getResourceDirectory();
	}

}

