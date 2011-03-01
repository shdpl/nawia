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
// GameEngine Video Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Felix Kistler
// 
// ****************************************************************************************
    
#include "GameEngine_Video.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameWorld.h>
#include <GameEngine/GameModules.h>

#include "VideoComponent.h"

namespace GameEngine
{
	VIDEOPLUGINEXP void playAvi( unsigned int entityWorldID)
	{
		VideoComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<VideoComponent*>(entity->component("VideoComponent")) ) != 0 )
		{
			component->playAvi();
		}
	}

	VIDEOPLUGINEXP void stopAvi( unsigned int entityWorldID)
	{
		VideoComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<VideoComponent*>(entity->component("VideoComponent")) ) != 0 )
		{
			component->stopAvi();
		}
	}

	VIDEOPLUGINEXP void OpenAvi( unsigned int entityWorldID, const char* file)
	{
		VideoComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<VideoComponent*>(entity->component("VideoComponent")) ) != 0 )
		{
			component->openAvi(file);
		}
	}
}
        