// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
//
// This file is part of the GameEngine of the University of Augsburg
//
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************

// ****************************************************************************************
//
// GameEngine Agent Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2011 Ionut Damian
// 
// ****************************************************************************************
    
#include "GameEngine_Agent.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameWorld.h>
#include <GameEngine/GameModules.h>

#include "AgentComponent.h"
#include "Animation/AnimationComponent.h"

#include "Config.h"

namespace GameEngine
{
	/***************************************/
	/************* ANIMATION ***************/
	/***************************************/

	//Loads an animation and plays it back
	//@param entityWorldID the entity we want to use the function on
	//@param file the filename of the animation
	//@param speed desired playback speed of the animation (0 = still, 1 = normal, 2= double, ..), use -1 for agent default
	//@param spatialExtent the spatial extent of the animation (0 = still, 0.5 = half, 1 = normal), use -1 for agent default
	//@param strokeRepetitions number of stroke repetitions the animation should perform (0 = normal playback, 1 = one extra stroke is performed, ..), use -1 for agent default
	//@param startNode the name of the node that represents the starting node of the chain to be animated (ex: startNode=Bip01_L_Clavicle willl result in animating only the left arm). Leave 0 for whole body.
	//@param syncWord TTS word the animation start should be synchronized with
	//@return negative value if not successful, animation id otherwise
	AGENTAPI int Agent_playAnimationF( unsigned int entityWorldID, const char* file, Agent_AnimType::List type, float speed, float spatialExtent, int strokeRepetitions, char* startNode, char* syncWord )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getAnimationComponent()->playAnimationF( file, type, speed, spatialExtent, strokeRepetitions, startNode, syncWord );
		}
		return -1;
	}

	//Loads an animation and plays it back
	//@param entityWorldID the entity we want to use the function on
	//@param name the name of the animation as defined in the AnimationLexicon
	//@param speed desired playback speed of the animation (0 = still, 1 = normal, 2= double, ..), use -1 for agent default
	//@param spatialExtent the spatial extent of the animation (0 = still, 0.5 = half, 1 = normal), use -1 for agent default
	//@param strokeRepetitions number of stroke repetitions the animation should perform (0 = normal playback, 1 = one extra stroke is performed, ..), use -1 for agent default
	//@param startNode the name of the node that represents the starting node of the chain to be animated (ex: startNode=Bip01_L_Clavicle willl result in animating only the left arm). Leave 0 for whole body.
	//@param syncWord TTS word the animation start should be synchronized with
	//@return negative value if not successful, animation id otherwise
	AGENTAPI int Agent_playAnimationN( unsigned int entityWorldID, const char* name, float speed, float spatialExtent, int strokeRepetitions, char* startNode, char* syncWord )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getAnimationComponent()->playAnimationN( name, speed, spatialExtent, strokeRepetitions, startNode, syncWord );
		}
		return -1;
	}

	//Loads an animation and plays it back
	//@param entityWorldID the entity we want to use the function on
	//@param id the id of the animation as defined in the AnimationLexicon
	//@param speed desired playback speed of the animation (0 = still, 1 = normal, 2= double, ..), use -1 for agent default
	//@param spatialExtent the spatial extent of the animation (0 = still, 0.5 = half, 1 = normal), use -1 for agent default
	//@param strokeRepetitions number of stroke repetitions the animation should perform (0 = normal playback, 1 = one extra stroke is performed, ..), use -1 for agent default
	//@param startNode the name of the node that represents the starting node of the chain to be animated (ex: startNode=Bip01_L_Clavicle willl result in animating only the left arm). Leave 0 for whole body.
	//@param syncWord TTS word the animation start should be synchronized with
	//@return negative value if not successful, animation id otherwise
	AGENTAPI int Agent_playAnimationI( unsigned int entityWorldID, int id, float speed, float spatialExtent, int strokeRepetitions, char* startNode, char* syncWord )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getAnimationComponent()->playAnimationI( id, speed, spatialExtent, strokeRepetitions, startNode, syncWord );
		}
		return -1;
	}

	//Loads an animation and plays it back
	//@param entityWorldID the entity we want to use the function on
	//@param resource the id of an animation resource already loaded in the horde3d resource manager
	//@param speed desired playback speed of the animation (0 = still, 1 = normal, 2= double, ..), use -1 for agent default
	//@param spatialExtent the spatial extent of the animation (0 = still, 0.5 = half, 1 = normal), use -1 for agent default
	//@param strokeRepetitions number of stroke repetitions the animation should perform (0 = normal playback, 1 = one extra stroke is performed, ..), use -1 for agent default
	//@param startNode the name of the node that represents the starting node of the chain to be animated (ex: startNode=Bip01_L_Clavicle willl result in animating only the left arm). Leave 0 for whole body.
	//@param syncWord TTS word the animation start should be synchronized with
	//@return negative value if not successful, animation id otherwise
	AGENTAPI int Agent_playAnimationR( unsigned int entityWorldID, int resource, Agent_AnimType::List type, float speed, float spatialExtent, int strokeRepetitions, char* startNode, char* syncWord )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getAnimationComponent()->playAnimationR( resource, type, speed, spatialExtent, strokeRepetitions, startNode, syncWord );
		}
		return -1;
	}

	//Stops the playback of an animation
	//@param entityWorldID the entity we want to use the function on
	//@param playbackID the playback id of the animation, as returned by a play or load function
	AGENTAPI void Agent_stopAnimation( unsigned int entityWorldID, int playbackID )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->getAnimationComponent()->forceAnimationStop( playbackID );
		}
	}

	//Gets the spatial extent of an animation
	//@param entityWorldID the entity we want to use the function on
	//@param playbackID the playback id of the animation, as returned by a play or load function (use -1 to get agent default)
	//@return spatialExtent value of the Spatial Extent attribute represented by a float between 0 to 1, where 0 is the lowest (still) spatial extent and 1 is the highest spatial extent (normal playback)
	AGENTAPI float Agent_getAnimationExtent( unsigned int entityWorldID, int playbackID, float spatialExtent ){
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			if(playbackID < 0)
				return c->getAnimationComponent()->getAnimationExtent();
			else
				return c->getAnimationComponent()->getAnimationExtent( playbackID );
		}
		return -1;
	}


	//Gets the playback speed of an animation
	//@param entityWorldID the entity we want to use the function on
	//@param playbackID the playback id of the animation, as returned by a play or load function (use -1 to get agent default)
	//@return speed the desired value for the playback speed. Values range from 0 to infinite, where "0" represents no playback at all, "1" is normal playback speed, "2" is double speed, ...
	AGENTAPI float Agent_getAnimationSpeed( unsigned int entityWorldID, int playbackID, float speed )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			if(playbackID < 0)
				return c->getAnimationComponent()->getAnimationSpeed();
			else
				return c->getAnimationComponent()->getAnimationSpeed( playbackID );
		}
		return -1;
	}

	//Gets the number of stroke repetitions the specified animation should perform
	//@param entityWorldID the entity we want to use the function on
	//@param playbackID the playback id of the animation, as returned by a play or load function (use -1 to get agent default)
	//@return reps the desired number of stroke repetitions the specified animation should perform
	AGENTAPI int Agent_getAnimationStrokeReps( unsigned int entityWorldID, int playbackID, unsigned int numStrokeReps )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			if(playbackID < 0)
				return c->getAnimationComponent()->getAnimationStrokeReps();
			else
				return c->getAnimationComponent()->getAnimationStrokeReps( playbackID );
		}
		return -1;
	}


	//Sets the spatial extent of an animation
	//@param entityWorldID the entity we want to use the function on
	//@param playbackID the playback id of the animation, as returned by a play or load function (use -1 to set agent default)
	//@param spatialExtent value of the Spatial Extent attribute represented by a float between 0 to 1, where 0 is the lowest (still) spatial extent and 1 is the highest spatial extent (normal playback)
	AGENTAPI void Agent_setAnimationExtent( unsigned int entityWorldID, int playbackID, float spatialExtent )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			if(playbackID < 0)
				c->getAnimationComponent()->setAnimationExtent( spatialExtent );
			else
				c->getAnimationComponent()->setAnimationExtent( playbackID, spatialExtent );
		}
	}

	//Sets the playback speed of an animation
	//@param entityWorldID the entity we want to use the function on
	//@param playbackID the playback id of the animation, as returned by a play or load function (use -1 to set agent default)
	//@param speed the desired value for the playback speed. Values range from 0 to infinite, where "0" represents no playback at all, "1" is normal playback speed, "2" is double speed, ...
	AGENTAPI void Agent_setAnimationSpeed( unsigned int entityWorldID, int playbackID, float speed )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			if(playbackID < 0)
				c->getAnimationComponent()->setAnimationSpeed( speed );
			else
				c->getAnimationComponent()->setAnimationSpeed( playbackID, speed );
		}
	}

	//Sets the number of stroke repetitions the specified animation should perform
	//@param entityWorldID the entity we want to use the function on
	//@param playbackID the playback id of the animation, as returned by a play or load function (use -1 to set agent default)
	//@param reps the desired number of stroke repetitions the specified animation should perform
	AGENTAPI void Agent_setAnimationStrokeReps( unsigned int entityWorldID, int playbackID, unsigned int numStrokeReps )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			if(playbackID < 0)
				c->getAnimationComponent()->setAnimationStrokeReps( numStrokeReps );
			else
				c->getAnimationComponent()->setAnimationStrokeReps( playbackID, numStrokeReps );
		}
	}

	//Clears all animation stages, deleting all loaded animations
	//@param entityWorldID the entity we want to use the function on
	AGENTAPI void Agent_clearAnimations( unsigned int entityWorldID )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->getAnimationComponent()->clear();
		}
	}

	//Returns the status of a specific animation
	//@param entityWorldID the entity we want to use the function on
	//@param playbackID the playback id of the animation, as returned by a play or load function
	//@return animation status code of type Agent_AnimStatus
	AGENTAPI Agent_AnimStatus::List Agent_getAnimationStatus( unsigned int entityWorldID, int playbackID )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getAnimationComponent()->getAnimationStatus( playbackID );
		}
		return Agent_AnimStatus::UNKNOWN;
	}

	/***************************************/
	/************** MOVEMENT ***************/
	/***************************************/

	//Queues up the movement: entityWorldID orients towards and then moves to the position of targetEntityID
	//@param entityWorldID the entity we want to use the function on
	//@param targetEntityID the destination entity
	//@param speed the movement speed (use -1 for agent default)
	//@param putInQueue doesn't start the movement immediately but places it in a queue.
	//@param orientAnimName the name, as defined in the animation lexicon, of the animation to be played while orienting (use 0 for default agent walk animation)
	//@param walkAnimName the name, as defined in the animation lexicon, of the animation to be played while moving (use 0 for default agent walk animation)
	AGENTAPI int Agent_gotoE( unsigned int entityWorldID, unsigned int targetEntityID, float speed, bool putInQueue, const char* orientAnimName /*= 0*/, const char* walkAnimName /*= 0*/ )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getMovementComponent()->goTo(targetEntityID, speed, putInQueue, orientAnimName, walkAnimName);
		}
		return -1;
	}

	//Queues up the movement: entityWorldID orients towards and then moves to the position described by targetX, targetY, targetZ
	//@param entityWorldID the entity we want to use the function on
	//@param targetX the x-coordinate of the destination position
	//@param targetY the y-coordinate of the destination position
	//@param targetZ the z-coordinate of the destination position
	//@param speed the movement speed (use -1 for agent default)
	//@param putInQueue doesn't start the movement immediately but places it in a queue.
	//@param orientAnimName the name, as defined in the animation lexicon, of the animation to be played while orienting (use 0 for default agent walk animation)
	//@param walkAnimName the name, as defined in the animation lexicon, of the animation to be played while moving (use 0 for default agent walk animation)
	AGENTAPI int Agent_gotoP( unsigned int entityWorldID, float targetX, float targetY, float targetZ, float speed, bool putInQueue, const char* orientAnimName /*= 0*/, const char* walkAnimName /*= 0*/ )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getMovementComponent()->goTo(targetX, targetY, targetZ, speed, putInQueue, orientAnimName, walkAnimName);
		}
		return -1;
	}

	//Queues up the movement: entityWorldID rotates until it faces the location targetX, targetY, targetZ
	//@param entityWorldID the entity we want to use the function on
	//@param targetX the x-coordinate of the desired target
	//@param targetY the y-coordinate of the desired target
	//@param targetZ the z-coordinate of the desired target
	//@param speed the movement speed (use -1 for agent default)
	//@param putInQueue doesn't start the movement immediately but places it in a queue.
	//@param animName the name, as defined in the animation lexicon, of the animation to be played during the movement (use 0 for default agent walk animation)
	AGENTAPI int Agent_turnTowards( unsigned int entityWorldID, float targetX, float targetY, float targetZ, float speed, bool putInQueue, const char* animName /*= 0*/ )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getMovementComponent()->turnTowards(targetX, targetY, targetZ, speed, putInQueue, animName);
		}
		return -1;
	}

	//Queues up the movement: entityWorldID moves to the position described by targetX, targetY, targetZ
	//@param entityWorldID the entity we want to use the function on
	//@param targetX the x-coordinate of the destination position
	//@param targetY the y-coordinate of the destination position
	//@param targetZ the z-coordinate of the destination position
	//@param speed the movement speed (use -1 for agent default)
	//@param putInQueue doesn't start the movement immediately but places it in a queue.
	//@param animName the name, as defined in the animation lexicon, of the animation to be played during the movement (use 0 for default agent walk animation)
	AGENTAPI int Agent_move( unsigned int entityWorldID, float targetX, float targetY, float targetZ, float speed, bool putInQueue, const char* animName /*= 0*/ )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getMovementComponent()->move(targetX, targetY, targetZ, speed, putInQueue, animName);
		}
		return -1;
	}


	//Queues up the movement: entityWorldID rotates until it reaches the rotation targetX, targetY, targetZ
	//@param entityWorldID the entity we want to use the function on
	//@param targetX the x-coordinate of the desired rotation
	//@param targetY the y-coordinate of the desired rotation
	//@param targetZ the z-coordinate of the desired rotation
	//@param speed the movement speed (use -1 for agent default)
	//@param putInQueue doesn't start the movement immediately but places it in a queue.
	//@param animName the name, as defined in the animation lexicon, of the animation to be played during the movement (use 0 for default agent walk animation)
	AGENTAPI int Agent_rotate( unsigned int entityWorldID, float targetX, float targetY, float targetZ, float speed, bool putInQueue, const char* animName /*= 0*/ )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getMovementComponent()->rotate(targetX, targetY, targetZ, speed, putInQueue, animName);
		}
		return -1;
	}

	//Retrieves the status of a specific movement node
	//@param entityWorldID the entity we want to use the function on
	//@param movementID the id of the movement, as returned by a goto function
	//@return positive value in case the movement node is active, negative otherwise
	AGENTAPI int Agent_getMovementStatus( unsigned int entityWorldID, unsigned int movementID )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getMovementComponent()->getStatus(movementID);
		}
		return -1;
	}

	//Gets the default agent movement speed
	//@param entityWorldID the entity we want to use the function on
	//@return the value of the movement speed
	AGENTAPI float Agent_getMovementSpeed( unsigned int entityWorldID, float speed )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getMovementComponent()->getSpeed();
		}
		return -1;
	}

	//Sets the default agent movement speed
	//@param entityWorldID the entity we want to use the function on
	//@param speed the desired value for the movement speed
	AGENTAPI void Agent_setMovementSpeed( unsigned int entityWorldID, float speed )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->getMovementComponent()->setSpeed(speed);
		}
	}

	/***************************************/
	/**************** GAZE *****************/
	/***************************************/

	//Starts a gaze action towards the specified target
	//@param entityWorldID the entity we want to use the function on
	//@param targetEntityID the target entity
	//@param speed the gazing speed (use -1 for agent default)
	//@param duration the gazing duration in seconds, use -1 for constant gazing (default 10.0f)
	//@return gaze action ID
	AGENTAPI int Agent_gazeE( unsigned int entityWorldID, unsigned int targetEntityID, float speed, float duration )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getGazeComponent()->gaze(targetEntityID, speed, duration);
		}
		return -1;
	}

	//Starts a gaze action towards the specified target
	//@param entityWorldID the entity we want to use the function on
	//@param targetX the x-coordinate of the target position
	//@param targetY the y-coordinate of the target position
	//@param targetZ the z-coordinate of the target position
	//@param speed the gazing speed (use -1 for agent default)
	//@param duration the gazing duration in seconds, use -1 for constant gazing (default 10.0f)
	//@return gaze action ID
	AGENTAPI int Agent_gazeP( unsigned int entityWorldID, float targetX, float targetY, float targetZ, float speed, float duration )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getGazeComponent()->gaze(targetX, targetY, targetZ, speed, duration);
		}
		return -1;
	}

	//Performs a head nod (or head jerk if the extent is negative)
	//@param entityWorldID the entity we want to use the function on
	//@param extent the "size" of the nod (use negative values for head jerks)
	//@param speed the speed of the nod
	//@param duration the duration of the nod in seconds
	AGENTAPI void Agent_nod( unsigned int entityWorldID, float extent, float speed, float duration )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->getGazeComponent()->nod(extent, speed, duration);
		}
	}

	//Retrieves the status of a specific gaze node
	//@param entityWorldID the entity we want to use the function on
	//@param gazeID the playback id of the gaze node, as returned by a gaze function
	//@return positive value in case gaze node is active, negative otherwise
	AGENTAPI int Agent_getGazeStatus( unsigned int entityWorldID, unsigned int gazeID )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getGazeComponent()->getStatus(gazeID);
		}
		return -1;
	}

	//Gets the default agent speed of transitions between gaze targets
	//@param entityWorldID the entity we want to use the function on
	//@return the speed we want to set as default (positive value)
	AGENTAPI float Agent_getGazeSpeed( unsigned int entityWorldID )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getGazeComponent()->getGazeSpeed();
		}
		return -1;
	}

	//Sets the default agent speed of transitions between gaze targets
	//@param entityWorldID the entity we want to use the function on
	//@param speed the speed we want to set as default (positive value)
	AGENTAPI void Agent_setGazeSpeed( unsigned int entityWorldID, float speed )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->getGazeComponent()->setGazeSpeed(speed);
		}
	}

	//Forces the system to update and render the gaze node now
	//@param entityWorldID the entity we want to use the function on
	AGENTAPI void Agent_forceGazeUpdate( unsigned int entityWorldID )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->getGazeComponent()->update();
		}
	}

	/***************************************/
	/************** FORMATION **************/
	/***************************************/

	//Starts the movement: entityWorldID moves to join the formation of targetEntityID
	//@param entityWorldID the entity we want to use the function on
	//@param targetEntityID the destination entity
	//@param speed the movement speed (use -1 for agent default)
	AGENTAPI int Agent_gotoF( unsigned int entityWorldID, unsigned int targetEntityID, float speed, const char* orientAnimName, const char* walkAnimName )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getFormationComponent()->gotoE(targetEntityID, speed, orientAnimName, walkAnimName);
		}
		return -1;
	}

	//Adds a member to entityWorldID's formation
	//@param entityWorldID the entity we want to receive information from
	//@param newMember_eID the entity of the agent that should be added to the formation
	AGENTAPI void Agent_addMemberToFormation( unsigned int entityWorldID, unsigned int newMember_eID )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->getFormationComponent()->addNewMemberE(newMember_eID);
		}
	}

	//Remove a member from entityWorldID's formation
	//@param entityWorldID the entity we want to receive information from
	//@param newMember_eID the entity of the agent that should be removed from the formation
	AGENTAPI void Agent_removeMemberFromFormation( unsigned int entityWorldID, unsigned int member_eID )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->getFormationComponent()->removeMember(member_eID);
		}
	}

	//Triggers an agent event meant to attract the attention of the members of the formation
	//@param entityWorldID the entity we want to use the function on
	//@param e the event type 
	AGENTAPI void Agent_fireEvent( unsigned int entityWorldID, Agent_Event::List e )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->getFormationComponent()->fireEvent(e);
		}
	}

	//Reacts to the specified event
	//@param entityWorldID the entity we want to use the function on
	//@param senderEntityID the entity id of the one who fired the event
	//@param e the event type
	AGENTAPI void Agent_reactOnEvent( unsigned int entityWorldID, unsigned int senderEntityID, Agent_Event::List e )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->getFormationComponent()->reactOnEvent(senderEntityID, e);
		}
	}

	//computes and returns a possible entry point to the local formation for a foreign agent  
	//@param entityWorldID the entity we want to receive information from
	//@param caller_eID the entity ID of the caller
	//@param entryPoint pointer to a size 3 float array where the computed entry point willl be saved
	//@return false if the component was unable to compute the point
	AGENTAPI bool Agent_getFormationEntryPoint( unsigned int entityWorldID, unsigned int caller_eID, float** entryPoint )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getFormationComponent()->getEntryPoint(caller_eID, entryPoint);
		}
		return false;
	}

	//Returns the members of the formation the agent entityWorldID is part of 
	//@param entityWorldID the entity we want to receive information from
	//@param members pointer to int array which willl end up pointing towards the member list
	//@return size of the members list
	AGENTAPI int Agent_getFormationMembers( unsigned int entityWorldID, int** members )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getFormationComponent()->getMembers(members);
		}
		return 0;
	}

	//Returns the type of the formation 
	//@param entityWorldID the entity we want to receive information from
	//@return type from enumeration Agent_FormationType
	AGENTAPI Agent_FormationType::List Agent_getFormationType( unsigned int entityWorldID )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getFormationComponent()->getType();
		}
		return Agent_FormationType::UNKNOWN;
	}	

	//Returns the minimal and maximal interpersonal distance of an agent
	//@param entityWorldID the entity we want to receive information from
	//@param min pointer to a float where the the minimal interpersonal distance willl be stored	
	//@param max pointer to a float where the the maximal interpersonal distance willl be stored
	AGENTAPI void Agent_getIPDistance( unsigned int entityWorldID, float* min, float* max )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->getFormationComponent()->getIPDistance(min, max);
		}
	}

	//Returns the deviation from the normal orientation of the agent
	//@param entityWorldID the entity we want to receive information from
	//@return the deviation in degrees
	AGENTAPI float Agent_getDeviation( unsigned int entityWorldID )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getFormationComponent()->getDeviation();
		}
		return -1;
	}

	
	//Returns the repositioning animation name
	//@param entityWorldID the entity we want to receive information from
	//@return the animation name
	AGENTAPI const char* Agent_getReposAnimName( unsigned int entityWorldID )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			return c->getFormationComponent()->getReposAnimName();
		}
		return 0;
	}

	//Sets the minimal and maximal interpersonal distance of an agent
	//@param entityWorldID the entity we want to receive information from
	//@param min the minimal interpersonal distance
	//@param max the maximal interpersonal distance
	AGENTAPI void Agent_setIPDistance( unsigned int entityWorldID, float min, float max )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->getFormationComponent()->setIPDistance(min, max);
		}
	}

	//Sets the deviation from the normal orientation of the agent
	//@param entityWorldID the entity we want to customize
	//@param deviation the deviation in degrees
	AGENTAPI void Agent_setDeviation( unsigned int entityWorldID, float deviation )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->getFormationComponent()->setDeviation(deviation);
		}
	}

	

	//Sets the repositioning animation name
	//@param entityWorldID the entity we want to receive information from
	//@param name the name of the animation as written in the AnimationLexicon
	AGENTAPI void Agent_setReposAnimName( unsigned int entityWorldID, const char* name )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->getFormationComponent()->setReposAnimName(name);
		}
	}

	/***************************************/
	/*************** CONFIG ****************/
	/***************************************/

	//Sets the value of a integer parameter (configurations are not entity specific)
	//@param param a parameter of type Agent_Param
	//@param value the desired value
	AGENTAPI void Agent_setParamI( Agent_Param::List param, int value )
	{
		Config::setParamI(param, value);
	}

	//Sets the value of a float parameter (configurations are not entity specific)
	//@param param a parameter of type Agent_Param
	//@param value the desired value
	AGENTAPI void Agent_setParamF( Agent_Param::List param, float value )
	{
		Config::setParamF(param, value);
	}
	
	//Sets the value of a char array parameter (configurations are not entity specific)
	//@param param a parameter of type Agent_Param
	//@param value the desired value
	AGENTAPI void Agent_setParamS( Agent_Param::List param, const char* value )
	{
		Config::setParamS(param, value);
	}

	//Returns the value of a integer parameter (configurations are not entity specific)
	//@param param a parameter of type Agent_Param
	//@return the parameter's value
	AGENTAPI int Agent_getParamI( Agent_Param::List param )
	{
		return Config::getParamI(param);
	}

	//Returns the value of a float parameter (configurations are not entity specific)
	//@param param a parameter of type Agent_Param
	//@return the parameter's value
	AGENTAPI float Agent_getParamF( Agent_Param::List param )
	{
		return Config::getParamF(param);
	}

	
	//Returns the value of a char array parameter (configurations are not entity specific)
	//@param param a parameter of type Agent_Param
	//@return the parameter's value
	AGENTAPI const char* Agent_getParamS( Agent_Param::List param )
	{
		return Config::getParamS(param);
	}
	
	/***************************************/
	/**************** ICON *****************/
	/***************************************/

	//Sets the icon of an agent
	//@param entityWorldID the entity we want to use the function on
	//@param icon_hID the horde ID of the icon we want to attach to this agent
	AGENTAPI void Agent_setIcon( unsigned int entityWorldID, const char* iconName )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->setIcon(iconName);
		}
	}

	//Sets the icon visbillity of an agent
	//@param entityWorldID the entity we want to use the function on
	//@param visible the desired value for the agent's icon visibility status
	AGENTAPI void Agent_setIconVisible( unsigned int entityWorldID, bool visible )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->setIconVisible(visible);
		}
	}

	/***************************************/
	/*************** OTHERS ****************/
	/***************************************/

	//Sets an agent visible or invisible
	//@param entityWorldID the entity we want to use the function on
	//@param visible the desired value for the agent's visibility status
	AGENTAPI void Agent_setVisible( unsigned int entityWorldID, bool visible )
	{
		AgentComponent* c = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( c = static_cast<AgentComponent*>(entity->component("AgentComponent")) ) != 0 )
		{
			c->setVisible(visible);
		}
	}
}
        