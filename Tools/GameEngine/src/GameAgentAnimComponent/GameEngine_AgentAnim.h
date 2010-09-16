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
// GameEngine Agent Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************    
#ifndef GAMEENGINE_AGENTANIM_H_
#define GAMEENGINE_AGENTANIM_H_

#include <GameEngine/config.h>

#ifdef PLATFORM_WIN
#	 ifdef AGENTANIMCOMPONENT_EXPORTS
#       define AGENTANIMPLUGINEXP extern "C" __declspec( dllexport )
#	 else
#       define AGENTANIMPLUGINEXP extern "C" __declspec( dllimport )
#    endif
#else
#	 define AGENTANIMPLUGINEXP extern "C"
#endif

///Animation types
struct Agent_AnimType
{
	enum List
	{
		AAT_UNKNOWN = 0,
		AAT_STILL,
		AAT_IDLE,
		AAT_POSTURE,
		AAT_GESTURE,
		AAT_GESTURE_ADDITIVE,
	};
};

///Status codes for animations
struct Agent_AnimStatus
{
	enum List
	{
		AAS_UNKNOWN = 0,
		AAS_ANIM_NOT_FOUND,
		AAS_ACTIVE,
		AAS_BLENDING,
		AAS_FADING,
		AAS_ASLEEP,
		AAS_FINISHED,
		AAS_ASLEEP_AT_LASTFRAME
	};
};

namespace GameEngine
{
	/** \addtogroup GameAgentAnimComponent
	 * 
	 * AgentAnimComponent
	 *
	 * @author Ionut Damian
	 * @{
	 */

	///Loads an animation and plays it back
	///@param entityWorldID the entity we want to use the function on
	///@param anim_file the filename of the animation
	///@param type desired type of the animation
	///@param mask the name of the node that represents the starting node of the chain to be animated (ex: mask=Bip01_L_Clavicle will result in animating only the left arm). Leave 0 for whole body.
	///@param syncWord TTS word the animation start should be synchronized with
	///@return positive value if successful, negative otherwise
	AGENTANIMPLUGINEXP int AgentAnim_loadAnim( unsigned int entityWorldID, char* anim_file, Agent_AnimType::List type, char* mask, char* syncWord );

	///Loads an animation and plays it back
	///@param entityWorldID the entity we want to use the function on
	///@param anim_name the name of the animation as defined in the GestureLexicon
	///@param type desired type of the animation
	///@param mask the name of the node that represents the starting node of the chain to be animated (ex: mask=Bip01_L_Clavicle will result in animating only the left arm). Leave 0 for whole body.
	///@param syncWord TTS word the animation start should be synchronized with
	///@return positive value if successful, negative otherwise
	AGENTANIMPLUGINEXP int AgentAnim_loadAnimByName( unsigned int entityWorldID, const char* anim_name, Agent_AnimType::List type, char* mask, char* syncWord );

	///Loads an animation and plays it back
	///@param entityWorldID the entity we want to use the function on
	///@param anim_id the id of the animation as defined in the GestureLexicon
	///@param type desired type of the animation
	///@param mask the name of the node that represents the starting node of the chain to be animated (ex: mask=Bip01_L_Clavicle will result in animating only the left arm). Leave 0 for whole body.
	///@param syncWord TTS word the animation start should be synchronized with
	///@return positive value if successful, negative otherwise
	AGENTANIMPLUGINEXP int AgentAnim_loadAnimByID( unsigned int entityWorldID, int anim_id, Agent_AnimType::List type, char* mask, char* syncWord );

	///Loads an animation but doesn't start it. Instead the animation is put to sleep until it is started by a loadAnim
	///@param entityWorldID the entity we want to use the function on
	///@param anim_file the filename of the animation
	///@param type desired type of the animation
	///@param mask the name of the node that represents the starting node of the chain to be animated (ex: mask=Bip01_L_Clavicle will result in animating only the left arm). Leave 0 for whole body.
	///@return positive value if successful, negative otherwise
	AGENTANIMPLUGINEXP int AgentAnim_preloadAnim( unsigned int entityWorldID, char* anim_file, Agent_AnimType::List type, char* mask );

	///Loads an animation but doesn't start it. Instead the animation is put to sleep until it is started by a loadAnim
	///@param entityWorldID the entity we want to use the function on
	///@param anim_name the name of the animation as defined in the GestureLexicon
	///@param type desired type of the animation
	///@param mask the name of the node that represents the starting node of the chain to be animated (ex: mask=Bip01_L_Clavicle will result in animating only the left arm). Leave 0 for whole body.
	///@return positive value if successful, negative otherwise
	AGENTANIMPLUGINEXP int AgentAnim_preloadAnimByName( unsigned int entityWorldID, const char* anim_name, Agent_AnimType::List type, char* mask );

	///Loads an animation but doesn't start it. Instead the animation is put to sleep until it is started by a loadAnim
	///@param entityWorldID the entity we want to use the function on
	///@param anim_id the id of the animation as defined in the GestureLexicon
	///@param type desired type of the animation
	///@param mask the name of the node that represents the starting node of the chain to be animated (ex: mask=Bip01_L_Clavicle will result in animating only the left arm). Leave 0 for whole body.
	///@return positive value if successful, negative otherwise
	AGENTANIMPLUGINEXP int AgentAnim_preloadAnimByID( unsigned int entityWorldID, int anim_id, Agent_AnimType::List type, char* mask );

	///Sets the special extent of an animation
	///@param entityWorldID the entity we want to use the function on
	///@param extent the desired value of the SE. Known values: "normal", "medium", "low", "still"
	///@param change_now flag indicating whether the change should have effect right away or only starting with the next loaded animation
	AGENTANIMPLUGINEXP void AgentAnim_setExtents( unsigned int entityWorldID, const char* extent, bool change_now );

	///Sets the special extent of an animation
	///@param entityWorldID the entity we want to use the function on
	///@param extent the desired value of the SE. Values go from 0 to 10 where "0" represents a normal SE (non-altered) and "10" is a very low SE (still)
	///@param change_now flag indicating whether the change should have effect right away or only starting with the next loaded animation
	AGENTANIMPLUGINEXP void AgentAnim_setExtenti( unsigned int entityWorldID, unsigned int extent, bool change_now );

	///Sets the animation playback speed of an agent
	///@param entityWorldID the entity we want to use the function on
	///@param speed the desired value for the playback speed. Known values: "high", "normal", "low"
	AGENTANIMPLUGINEXP void AgentAnim_setSpeeds( unsigned int entityWorldID, const char* speed );
	
	///Sets the animation playback speed of an agent
	///@param entityWorldID the entity we want to use the function on
	///@param speed the desired value for the playback speed. Values go from 0 to infinite, where "0" represents no playback at all, "1" is normal playback speed, "2" is double speed, ...
	AGENTANIMPLUGINEXP void AgentAnim_setSpeedf( unsigned int entityWorldID, float speed );

	///Sets the playback speed of a specific animation
	///@param entityWorldID the entity we want to use the function on
	///@param anim_id the animation id, as returned by a load function, we want to use the function on
	///@param speed the desired value for the playback speed. Known values: "high", "normal", "low"
	AGENTANIMPLUGINEXP void AgentAnim_setSpeedOnAnims( unsigned int entityWorldID, unsigned int anim_id, const char* speed );

	///Sets the animation playback speed of an agent
	///@param entityWorldID the entity we want to use the function on
	///@param anim_id the animation id, as returned by a load function, we want to use the function on
	///@param speed the desired value for the playback speed. Values go from 0 to infinite, where "0" represents no playback at all, "1" is normal playback speed, "2" is double speed, ...
	AGENTANIMPLUGINEXP void AgentAnim_setSpeedOnAnimf( unsigned int entityWorldID, unsigned int anim_id, float speed );

	///Clears all animation stages
	///@param entityWorldID the entity we want to use the function on
	AGENTANIMPLUGINEXP void AgentAnim_clearStages( unsigned int entityWorldID );

	///Returns the status of a specific animation
	///@param entityWorldID the entity we want to use the function on
	///@param anim_id the animation id, as returned by a load function, we want to use the function on
	///@return animation status code of type Agent_AnimStatus
	AGENTANIMPLUGINEXP Agent_AnimStatus::List AgentAnim_getAnimStatus( unsigned int entityWorldID, unsigned int anim_id );
}

#endif
        