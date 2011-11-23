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
#ifndef GAMEENGINE_BAYESNET_H_
#define GAMEENGINE_BAYESNET_H_

#include <GameEngine/config.h>

#ifdef PLATFORM_WIN
#	 ifdef BAYESNETCOMPONENT_EXPORTS
#       define BAYESNETAPI __declspec( dllexport )
#	 else
#       define BAYESNETAPI __declspec( dllimport )
#    endif
#else
#	 define BAYESNETAPI
#endif


namespace GameEngine
{
	/** \addtogroup GameBayesNetComponent
	 * 
	 * GameBayesNetComponent
	 *
	 * @author Ionut Damian
	 * @{
	 */

	///Returns the value of a node in the bayes net
	///@param entityWorldID the entity we want to use the function on
	///@param node_name the name of the node in interest
	///@param value_index the index of the value we are looking for
	///@return the value of the node at the specified index
	BAYESNETAPI double Bayes_getNodeValue( unsigned int entityWorldID, const char* node_name, int value_index );

	///Sets the value of a node in the bayes net
	///@param entityWorldID the entity we want to use the function on
	///@param node_name the name of the node in interest
	///@param value_index the index at which we want to insert the value
	BAYESNETAPI void Bayes_setNodeValue( unsigned int entityWorldID, const char* node_name, int value );

	///Sets the culture of the bayes net
	///@param entityWorldID the entity we want to use the function on
	///@param culture the index of the culture we want to use
	BAYESNETAPI void Bayes_setCulture( unsigned int entityWorldID, int culture );

	///Makes an update of the network
	///@param entityWorldID the entity we want to use the function on
	BAYESNETAPI void Bayes_updateNetwork( unsigned int entityWorldID );
}

#endif
        