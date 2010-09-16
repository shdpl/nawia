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
// GameEngine Agent Action Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************    
#ifndef GAMEENGINE_AGENTACTION_H_
#define GAMEENGINE_AGENTACTION_H_

#include <GameEngine/config.h>

#ifdef PLATFORM_WIN
#	 ifdef AGENTACTIONCOMPONENT_EXPORTS
#       define AGENTACTIONPLUGINEXP extern "C" __declspec( dllexport )
#	 else
#       define AGENTACTIONPLUGINEXP extern "C" __declspec( dllimport )
#    endif
#else
#	 define AGENTACTIONPLUGINEXP extern "C"
#endif

///Agent status codes
struct Agent_Status
{
	enum List
	{
		AS_UNKNOWN = 0,
		AS_WALKING,
		AS_ROTATING,
		AS_FADING_STOPWALK,
		AS_INTERACTING_WITH_AGENT,
		AS_IDLE_OR_UNKNOWN
	};
};

namespace GameEngine
{
	/** \addtogroup GameAgentActionComponent
	 * 
	 * AgentActionComponent
	 *
	 * @author Ionut Damian
	 * @{
	 */

	///Starts a walking process causing the specified entity to move to the specified destination
	///@param entityWorldID the entity we want to use the function on
	///@param dest_entityWorldID the destination entity
	///@param speed the movement speed with which to perform the process (1.0 = normal)
	AGENTACTIONPLUGINEXP void Agent_goToEntity( unsigned int entityWorldID, unsigned int dest_entityWorldID, float speed );

	///Starts a walking process causing the specified entity to move to the specified destination
	///@param entityWorldID the entity we want to use the function on
	///@param dest_entityWorldID the destination entity
	///@param speed the movement speed with which to perform the process (1.0 = normal)
	AGENTACTIONPLUGINEXP void Agent_goToPosition( unsigned int entityWorldID, float dest_x, float dest_y, float dest_z, float speed );

	///Starts a rotation process causing the specified entity to rotate until it reaches the specified rotation
	///@param entityWorldID the entity we want to use the function on
	///@param rot_x the target rotation around the x-axis
	///@param rot_y the target rotation around the y-axis
	///@param rot_z the target rotation around the z-axis
	///@param speed the rotation speed with which to perform the process (1.0 = normal)
	AGENTACTIONPLUGINEXP void Agent_rotate( unsigned int entityWorldID, float rot_x, float rot_y, float rot_z, float speed );

	///returns the number of buffer zones this entity has
	///@param entityWorldID the entity we want to use the function on
	///@return the number of buffer zones the local agent has
	AGENTACTIONPLUGINEXP int Agent_getBufferZonesCount( unsigned int entityWorldID );

	///return the buffer zone value (radius) with the id bufferZoneID
	///@param entityWorldID the entity we want to use the function on
	///@param bufferZoneID the id of the buffer zone we want
	///@return the radius of the specified buffer zone
	AGENTACTIONPLUGINEXP float Agent_getBufferZone( unsigned int entityWorldID, int bufferZoneID );

	///Other entities should call up this function when starting a movement towards this entity
	///@param entityWorldID the entity we want to use the function on
	///@param caller_entityID the ID of the entity that is interested in this information (usually the function caller)
	///@return the orientation type the caller should use when aproaching this entity	
	AGENTACTIONPLUGINEXP int Agent_getPreferedOrientation( unsigned int target_entityID, unsigned int caller_entityID );

	///Other entities call up this function to request an orientation
	///This funciton usually gets called up when the caller gets close to this entity
	///if the orientation was accepted then this entity will execute a beta action, as a repsonse to the callers alpha action
	///@param entityWorldID the entity we want to use the function on
	///@param orientation_type requested orientation type
	///@param caller_entityID the ID of the entity that is interested in this information (usually the function caller)
	///@return positive value if orientation was accepted, negative if not
	AGENTACTIONPLUGINEXP int Agent_useOrientation( unsigned int target_entityID, unsigned int orientation_type, unsigned int caller_entityID );

	///Returns the status code of the specifeid agent
	///@param entityWorldID the entity we want to use the function on
	///@return status code of type Agent_Status
	AGENTACTIONPLUGINEXP Agent_Status::List Agent_getAgentStatus( unsigned int entityWorldID );

	///Returns array with entity_ids of surrounding entities. WARNING: allocates memory!! Don't forget to free it up later
	///@param entityWorldID the entity we want to use the function on
	///@param entityArray pointer to a non-allocated array of unsigned integers in which the surrounding entities will be copied
	///@return size of the array
	AGENTACTIONPLUGINEXP int Agent_getSurroundingEntities( unsigned int entityWorldID, unsigned int** entityArray );

	///Forcefully refreshes the agent's orientation
	///@param entityWorldID the entity we want to use the function on
	AGENTACTIONPLUGINEXP void Agent_refreshOrientation( unsigned int entityWorldID );
}

#endif
        