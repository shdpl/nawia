// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
// Programmers: Nikolaus Bee
// 
// This file is part of the GameEngine of the University of Augsburg
// 
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************
#include "GameEngine_FACSControl.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameWorld.h>
#include <GameEngine/GameModules.h>

#include "FACSControlComponent.h"

namespace GameEngine
{
	/*FACSCONTROLPLUGINEXP int getSocketData(unsigned int entityWorldID, const char **data)
	{		
		FACSControlComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<FACSControlComponent*>(entity->component("FACSControlComponent")) ) != 0 )
		{
			return component->getSocketData(data);
		}
		return 0;
	}*/

	FACSCONTROLPLUGINEXP void setFacialExpression( unsigned int entityWorldID, const std::string expression, const float intensity /* = 1.0f */ )
	{		
		FACSControlComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<FACSControlComponent*>(entity->component("FACSControlComponent")) ) != 0 )
		{
			component->setFacialExpression( expression, intensity );
		}
	}

	FACSCONTROLPLUGINEXP void setFacialExpressionPAD( unsigned int entityWorldID, float p, float a, float d )
	{		
		FACSControlComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<FACSControlComponent*>(entity->component("FACSControlComponent")) ) != 0 )
		{
			component->setFacialExpressionPAD( p, a, d );
		}
	}

	FACSCONTROLPLUGINEXP void getAvailableExpressions( unsigned int entityWorldID, std::vector<std::string> &availableExpressions )
	{		
		FACSControlComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<FACSControlComponent*>(entity->component("FACSControlComponent")) ) != 0 )
		{
			 component->getAvailableExpressions( availableExpressions );
		}
	}

}