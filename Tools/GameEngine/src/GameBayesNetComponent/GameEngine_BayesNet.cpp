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
// ****************************************************************************************
//

// ****************************************************************************************
//
// GameEngine BayesNet Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************     
#include "GameEngine_BayesNet.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameWorld.h>
#include <GameEngine/GameModules.h>

#include "BayesNetComponent.h"

namespace GameEngine
{
	//Returns the value of a node in the bayes net
	//@param entityWorldID the entity we want to use the function on
	//@param node_name the name of the node in interest
	//@param value_index the index of the value we are looking for
	//@return the value of the node at the specified index
	BAYESNETAPI double Bayes_getNodeValue( unsigned int entityWorldID, const char* node_name, int value_index )
	{
		BayesNetComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<BayesNetComponent*>(entity->component("BayesNetComponent")) ) != 0 )
		{
			return component->getNodeValue( node_name, value_index );
		}
		return 0;
	}

	//Sets the value of a node in the bayes net
	//@param entityWorldID the entity we want to use the function on
	//@param node_name the name of the node in interest
	//@param value_index the index at which we want to insert the value
	BAYESNETAPI void Bayes_setNodeValue( unsigned int entityWorldID, const char* node_name, int value )
	{
		BayesNetComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<BayesNetComponent*>(entity->component("BayesNetComponent")) ) != 0 )
		{
			return component->setNodeValue( node_name, value );
		}
	}

	//Sets the culture of the bayes net
	//@param entityWorldID the entity we want to use the function on
	//@param culture the index of the culture we want to use
	BAYESNETAPI void Bayes_setCulture( unsigned int entityWorldID, int culture )
	{
		BayesNetComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<BayesNetComponent*>(entity->component("BayesNetComponent")) ) != 0 )
		{
			return component->setNewCulture( culture );
		}
	}

	//Makes an update of the network
	//@param entityWorldID the entity we want to use the function on
	BAYESNETAPI void Bayes_updateNetwork( unsigned int entityWorldID )
	{
		BayesNetComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<BayesNetComponent*>(entity->component("BayesNetComponent")) ) != 0 )
		{
			return component->updateNetwork();
		}
	}
}
        