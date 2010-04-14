// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2010 Ionut Damian
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
#ifndef GAMEENGINE_IK_H_
#define GAMEENGINE_IK_H_

#include <GameEngine/config.h>

#ifdef PLATFORM_WIN
#	 ifdef IKCOMPONENT_EXPORTS
#       define IKPLUGINEXP extern "C" __declspec( dllexport )
#	 else
#       define IKPLUGINEXP extern "C" __declspec( dllimport )
#    endif
#else
#	 define IKPLUGINEXP extern "C" 
#endif

///IK Parameters
struct IK_Param
{
	enum List
	{
		UseDofr_I,						///< flag for using degree of freedom restrictions (joint rotational constraints) (default: 1)
		UseIkmo_I,						///< flag for using the IKMO routine (accelerates the CCD algorithm) (default: 0)
		UseZLock_I,						///< flag for locking z_axis during Gaze (makes head movement more realistic) (default: 1)
		CCDMaxIterations_I,				///< number of CCD iterations before giving up (default: 100)
		CCDTwistJointManipulation_I,	///< flag for looking after "Twist Joints" (joints parallel to normal joints which need to be rotated simultaneously, ex: forearm-twist-joint) (default: 0)
		NumAnimFrames_I,				///< number of frames of the IK animation (default 512)
		CCDMaxDistError_F,				///< allowed deviation from target, expressed as distance between target and actual vector
		CCDRotJitterTolerance_F,		///< allowed jitter tolerance when rotating the ik chain, expressed in cos of angle (default 0.00001)
		H3DAVersion_F,					///< current version of Horde3D Animation
		H3DGVersion_F,					///< current version of Horde3D Geometry
		DfltEyeRotX_F,					///< the rotation parameters for the default eye position (looking forward)
		DfltEyeRotY_F,					///< the rotation parameters for the default eye position (looking forward)
		DfltEyeRotZ_F					///< the rotation parameters for the default eye position (looking forward)
	};
};

///Result codes of IK solve function
struct IK_CCDResult
{
	enum List
	{
		UNKNOWN,
		REACHED_DESTINATION,
		REACHED_MAX_ITERATIONS,
		CCD_ERROR
	};
};
///Result codes of IK gaze function
struct IK_GazeResult
{
	enum List
	{		
		GAZE_ERROR,
		OK = 1,
		EYES_OUT_OF_RANGE = 2,
		HEAD_OUT_OF_RANGE = 3,
		EYES_AND_HEAD_OUT_OF_RANGE = 4
	};
};

namespace GameEngine
{
	/** \addtogroup GameIKComponent
	 * 
	 * The IKComponent solves the IK Problem using the Cyclic Coordinate Descent (CCD Method). After solving the IK,
	 * this component either applies it to the scenegraph or generates an keyframe animation with IKAnim with the two chain positions. \n
	 * It also houses the Gaze Algorithm, a specialized CCD Algorithm, which moves the heads of humanoids in a gaze-like fashion
	 *
	 * @author Ionut Damian
	 * @{
	 */

	///Generates and plays a keyframe animation by interpolating the current position of the body with the one after solving the IK
	///@param entityWorldID the entity we want to use the function on
	///@param endEffectorName The name of the joint that should reach the given position (End Effector) [exemple: Finger Joint]
	///@param stopName The name of the joint that symbolizes the end of the chain [example: Shoulder Joint]
	///@param targetX The value on the x-axis of the requested position
	///@param targetY The value on the y-axis of the requested position
	///@param targetZ The value on the z-axis of the requested position
	///@param animStage the desired animation stage
	///@param animWeight the desired weight of the animation (default 1.0f)
	///@param animSpeed the desired animation speed (default 30.0f)
	///@return -1 if an error occurred, a positive value otherwise
	IKPLUGINEXP int IK_solveWithAnim( unsigned int entityWorldID, const char* endEffectorName, const char* stopName, float targetX, float targetY, float targetZ, int animStage, float animWeight = 1.0f, float animSpeed = 30.0f );

	///Generates a keyframe animation by interpolating the current position of the body with the one after solving the IK (does not play the animation)
	///@param entityWorldID the entity we want to use the function on
	///@param endEffectorName The name of the joint that should reach the given position (End Effector) [exemple: Finger Joint]
	///@param stopName The name of the joint that symbolizes the end of the chain [example: Shoulder Joint]
	///@param targetX The value on the x-axis of the requested position
	///@param targetY The value on the y-axis of the requested position
	///@param targetZ The value on the z-axis of the requested position
	///@return Horde3D animation resource
	IKPLUGINEXP int IK_createIKAnim( unsigned int entityWorldID, const char* endEffectorName, const char* stopName, float targetX, float targetY, float targetZ );
	
	///The main IK function which solves the IK using the CCD Method.
	///@param entityWorldID the entity we want to use the function on
	///@param endEffectorName The name of the joint that should reach the given position (End Effector) [exemple: Finger Joint]
	///@param stopName The name of the joint that symbolizes the end of the chain [example: Shoulder Joint]
	///@param targetX The value on the x-axis of the requested position
	///@param targetY The value on the y-axis of the requested position
	///@param targetZ The value on the z-axis of the requested position
	///@return result code of type IK_CCDResult
	IKPLUGINEXP int IK_solve( unsigned int entityWorldID, const char* endEffectorName, const char* stopName, float targetX, float targetY, float targetZ );

	///The gaze function which moves the characters body and eyes to create a gaze animation
	///@param entityWorldID the entity we want to use the function on
	///@param targetX The value on the x-axis of the requested position
	///@param targetY The value on the y-axis of the requested position
	///@param targetZ The value on the z-axis of the requested position
	///@param moveLEye
	///@param moveREye
	///@param moveHead
	///@param head_pitch A value from (-10, 10) representing the pitch the head will sustain during a gaze action
	///				(where -10 means a higher angle for the "pointing joint" therefor a "less arrogant" gaze and +10 the opposite)
	///@return status code of type IK_GazeResult
	IKPLUGINEXP int IK_gaze( unsigned int entityWorldID, float targetX, float targetY, float targetZ, bool moveLEye, bool moveREye, bool moveHead, int head_pitch = 0 );
	
	///Does same computations like gaze but it doesn't apply them on the SceneGraph. It just returns a status code of type IK_GazeResult
	IKPLUGINEXP int IK_checkGaze( unsigned int entityWorldID, float targetX, float targetY, float targetZ, bool moveLEye, bool moveREye, bool moveNeck );
	
	///Sets an IK parameter of type integer
	///The IK parameters are defined in IK_Param
	IKPLUGINEXP void IK_setParamI( unsigned int entityWorldID, IK_Param::List ikparam, int value );
	
	///Sets an IK parameter of type float
	///The IK parameters are defined in IK_Param
	IKPLUGINEXP void IK_setParamF( unsigned int entityWorldID, IK_Param::List ikparam, float value );
	
	///Gets an IK parameter of type integer
	///The IK parameters are defined in IK_Param
	IKPLUGINEXP int IK_getParamI( unsigned int entityWorldID, IK_Param::List ikparam );
	
	///Gets an IK parameter of type float
	///The IK parameters are defined in IK_Param
	IKPLUGINEXP float IK_getParamF( unsigned int entityWorldID, IK_Param::List ikparam );
}

#endif
