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
// GameEngine IK Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************
#include "GameEngine_IK.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameWorld.h>
#include <GameEngine/GameModules.h>

#include "IKComponent.h"

namespace GameEngine
{	
	//Generates and plays a keyframe animation by interpolating the current position of the body with the one after solving the IK
	//@param entityWorldID the entity we want to use the function on
	//@param endEffectorName The name of the joint that should reach the given position (End Effector) [exemple: Finger Joint]
	//@param stopName The name of the joint that symbolizes the end of the chain [example: Shoulder Joint]
	//@param targetX The value on the x-axis of the requested position
	//@param targetY The value on the y-axis of the requested position
	//@param targetZ The value on the z-axis of the requested position
	//@param animStage the desired animation stage
	//@param animWeight the desired weight of the animation (default 1.0f)
	//@param animSpeed the desired animation speed (default 30.0f)
	//@return -1 if an error occurred, a positive value otherwise
	IKAPI int IK_solveWithAnim( unsigned int entityWorldID, const char* endEffectorName, const char* stopName, float targetX, float targetY, float targetZ, int animStage, float animWeight, float animSpeed )
	{		
		IKComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<IKComponent*>(entity->component("IK")) ) != 0 )
		{
			int animRes = -1;
			//create animation
			GameEvent ik_canim(GameEvent::IK_CREATEIKANIM, new IKData(endEffectorName, stopName, targetX, targetY, targetZ, false), 0);
			if( entity->checkEvent( &ik_canim ) )
			{
				entity->executeEvent( &ik_canim );				
				IKData* ikd = (IKData*)(ik_canim.data());
				animRes = ikd->result; //requires sequentiality in event execution
			}
			//play animation
			GameEvent ik_panim(GameEvent::IK_PLAYIKANIM, new IKData(animStage, animWeight, animSpeed), 0);
			if( entity->checkEvent( &ik_panim ) && animRes > 0 )
			{
				entity->executeEvent( &ik_panim );
				
				IKData* ikd = (IKData*)(ik_panim.data());
				return ikd->result; //requires sequentiality in event execution
			}
		}
		return -1;
	}

	//Generates a keyframe animation by interpolating the current position of the body with the one after solving the IK (does not play the animation)
	//@param entityWorldID the entity we want to use the function on
	//@param endEffectorName The name of the joint that should reach the given position (End Effector) [exemple: Finger Joint]
	//@param stopName The name of the joint that symbolizes the end of the chain [example: Shoulder Joint]
	//@param targetX The value on the x-axis of the requested position
	//@param targetY The value on the y-axis of the requested position
	//@param targetZ The value on the z-axis of the requested position
	//@return Horde3D animation resource
	IKAPI int IK_createIKAnim( unsigned int entityWorldID, const char* endEffectorName, const char* stopName, float targetX, float targetY, float targetZ )
	{		
		IKComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<IKComponent*>(entity->component("IK")) ) != 0 )
		{
			GameEvent ik_anim(GameEvent::IK_CREATEIKANIM, new IKData(endEffectorName, stopName, targetX, targetY, targetZ), 0);
			if( entity->checkEvent( &ik_anim ) )
			{
				entity->executeEvent( &ik_anim );
				
				IKData* ikd = (IKData*)(ik_anim.data());
				return ikd->result; //requires sequentiality in event execution
			}
		}
		return -1;
	}

	//The main IK function which solves the IK using the CCD Method.
	//@param entityWorldID the entity we want to use the function on
	//@param endEffectorName The name of the joint that should reach the given position (End Effector) [exemple: Finger Joint]
	//@param stopName The name of the joint that symbolizes the end of the chain [example: Shoulder Joint]
	//@param targetX The value on the x-axis of the requested position
	//@param targetY The value on the y-axis of the requested position
	//@param targetZ The value on the z-axis of the requested position
	//@return result code of type IK_CCDResult
	IKAPI int IK_solve( unsigned int entityWorldID, const char* endEffectorName, const char* stopName, float targetX, float targetY, float targetZ )
	{		
		IKComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<IKComponent*>(entity->component("IK")) ) != 0 )
		{
			GameEvent ik_compute(GameEvent::IK_SOLVE, new IKData(endEffectorName, stopName, targetX, targetY, targetZ, false), 0);
			if( entity->checkEvent( &ik_compute ) )
			{
				entity->executeEvent( &ik_compute );
				
				IKData* ikd = (IKData*)(ik_compute.data());
				return ikd->result; //requires sequentiality in event execution
			}
		}
		return -1;
	}

	//The gaze function which moves the characters body and eyes to create a gaze animation
	//@param entityWorldID the entity we want to use the function on
	//@param targetX The value on the x-axis of the requested position
	//@param targetY The value on the y-axis of the requested position
	//@param targetZ The value on the z-axis of the requested position
	//@param moveLEye
	//@param moveREye
	//@param moveHead
	//@param head_pitch A value from (-10, 10) representing the pitch the head will sustain during a gaze action
	//				(where -10 means a higher angle for the "pointing joint" therefor a "less arrogant" gaze and +10 the opposite)
	//@return status code of type IK_GazeResult
	IKAPI int IK_gaze( unsigned int entityWorldID, float targetX, float targetY, float targetZ, bool moveLEye, bool moveREye, bool moveHead, int head_pitch )
	{		
		IKComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<IKComponent*>(entity->component("IK")) ) != 0 )
		{
			GameEvent ik_gaze(GameEvent::IK_GAZE, new IKData(targetX, targetY, targetZ, moveLEye, moveREye, moveHead, head_pitch, false), 0);
			if( entity->checkEvent( &ik_gaze ) )
			{
				entity->executeEvent( &ik_gaze );

				IKData* ikd = (IKData*)(ik_gaze.data());
				return ikd->result; //requires sequentiality in event execution
			}
		}
		return -9;
	}

	//Does same computations like gaze but it doesn't apply them on the SceneGraph. It just returns a status code of type IK_GazeResult
	IKAPI int IK_checkGaze( unsigned int entityWorldID, float targetX, float targetY, float targetZ, bool moveLEye, bool moveREye, bool moveHead )
	{		
		IKComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<IKComponent*>(entity->component("IK")) ) != 0 )
		{
			GameEvent ik_gaze(GameEvent::IK_GAZE, new IKData(targetX, targetY, targetZ, moveLEye, moveREye, moveHead, 0, true), 0);
			if( entity->checkEvent( &ik_gaze ) )
			{
				entity->executeEvent( &ik_gaze );

				IKData* ikd = (IKData*)(ik_gaze.data());
				return ikd->result; //requires sequentiality in event execution
			}
		}
		return -9;
	}

	//Sets an IK parameter of type integer
	//The IK parameters are defined in IK_Param
	IKAPI void IK_setParamI( unsigned int entityWorldID, IK_Param::List ikparam, int value )
	{
		IKComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<IKComponent*>(entity->component("IK")) ) != 0 )
		{
			GameEvent ik_set(GameEvent::IK_SETPARAMI, IKData((int)ikparam, value), 0);
			if( entity->checkEvent( &ik_set ) )
			{
				entity->executeEvent( &ik_set );
			}
		}
	}

	//Sets an IK parameter of type float
	//The IK parameters are defined in IK_Param
	IKAPI void IK_setParamF( unsigned int entityWorldID, IK_Param::List ikparam, float value )
	{
		IKComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<IKComponent*>(entity->component("IK")) ) != 0 )
		{
			GameEvent ik_set(GameEvent::IK_SETPARAMF, IKData((int)ikparam, value), 0);
			if( entity->checkEvent( &ik_set ) )
			{
				entity->executeEvent( &ik_set );
			}
		}
	}

	//Gets an IK parameter of type integer
	//The IK parameters are defined in IK_Param
	IKAPI int IK_getParamI( unsigned int entityWorldID, IK_Param::List ikparam )
	{
		IKComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<IKComponent*>(entity->component("IK")) ) != 0 )
		{
			GameEvent ik_get(GameEvent::IK_GETPARAMI, IKData((int)ikparam, 0), 0);
			entity->executeEvent( &ik_get );

			IKData* ikd = (IKData*)(ik_get.data());
			return ikd->ikparam_valuei; //requires sequentiality in event execution
		}
		return -1;
	}

	//Gets an IK parameter of type float
	//The IK parameters are defined in IK_Param
	IKAPI float IK_getParamF( unsigned int entityWorldID, IK_Param::List ikparam )
	{
		IKComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if( entity && ( component = static_cast<IKComponent*>(entity->component("IK")) ) != 0 )
		{
			GameEvent ik_get(GameEvent::IK_GETPARAMF, IKData((int)ikparam, 0), 0);
			entity->executeEvent( &ik_get );

			IKData* ikd = (IKData*)(ik_get.data());
			return ikd->ikparam_valuef; //requires sequentiality in event execution
		}
		return -1;
	}
}
