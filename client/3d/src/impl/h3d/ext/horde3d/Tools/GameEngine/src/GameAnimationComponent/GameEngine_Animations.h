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
// GameEngine Core of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#ifndef GAMEENGINE_ANIMATIONS_H_
#define GAMEENGINE_ANIMATIONS_H_

#include <GameEngine/config.h>

#ifdef PLATFORM_WIN
#	 ifdef ANIMATIONSCOMPONENT_EXPORTS
#       define ANIMATIONSAPI __declspec( dllexport )
#	 else
#       define ANIMATIONSAPI __declspec( dllimport )
#    endif
#else
#	 define ANIMATIONSAPI
#endif

struct GameEngineAnimParams
{
	enum List
	{
		Weight = 1,
		Speed,
		Duration
	};
};

namespace GameEngine
{
	/** \addtogroup GameAnimationsComponent
	 * 
	 * The Animations module of the GameEngine is responsible for the loading and playing of animations. It currently
	 * contains two components. The KeyframeAnimComponent is able to load and play Horde3D Animations. It provides an easy
	 * to use but also quite flexible mechanism to play animations with one single call to playAnim(). <br>
	 * The second component is the MoveAnimComponent that is able to adjust a walking animation's speed (loaded for the KeyframeAnimComponent) 
	 * dependent on the translation change of the entity. If the entity's translation between two frames falls below a threshold
	 * the MoveAnimComponent switches to an idle animation.
	 * @{
	 */

	/**
	 * \brief Plays an animation on the given entity
	 * 
	 * @param entityWorldID the entity's world ID that should play an animation
	 * @param animation name of the animation resource that should be played
	 * @param stage the stage id the animation should be played (0 - 16, whereby lesser values means higher priority, default = 0)
	 * @param weight limits the influence of the animation on the entity. (values 0 - 1, default 1)
	 * @param duration limits the animation playing to the given duration (default = -1 => endless playing). <br>
	 *                 The animation will be looped or cut if the duration does not match with the given speed and number of frames
	 *                 available in the animation. If speed is set to zero the animation will be played exactly one time within the 
	 *                 given duration, if duration is also set to zero, the animation will be played one time with the predefined speed
	 * @param speed the speed of the animation playing in frames per second (default = 30 fps)
	 * @param timeoffset if specified, the animation will be played after timeoffset seconds (default 0)
	 * @return int an animation job ID that can be used to adjust an animation currently played by using updateAnim
	 */
	ANIMATIONSAPI int playAnim(
		unsigned int entityWorldID, 
		const char* animation, 
		const int stage = 0, 
		const float weight = 1.0f, 
		const float duration = -1.0f, 
		const float speed = 30.0f,
		const float timeoffset = 0.0f);

	/**
	 * \brief Stops a playing or paused animation on the given entity
	 * 
	 * @param entityWorldID the entity's world ID that plays the animation
	 * @param stage the stage id the animation is playing on (0 - 16, default = 0)
	 */
	ANIMATIONSAPI void stopAnim(unsigned int entityWorldID, const int stage = 0);

	/**
	 * \brief Pauses a playing animation on the given entity
	 * 
	 * @param entityWorldID the entity's world ID that plays the animation
	 * @param stage the stage id the animation is playing on (0 - 16, default = 0)
	 */
	ANIMATIONSAPI void pauseAnim(unsigned int entityWorldID, const int stage = 0);

	/**
	 * \brief Resumes a paused animation on the given entity
	 * 
	 * @param entityWorldID the entity's world ID that plays the animation
	 * @param stage the stage id the animation is playing on (0 - 16, default = 0)
	 */
	ANIMATIONSAPI void resumeAnim(unsigned int entityWorldID, const int stage = 0);
	
	/** 
	 * \brief Updates an animation currently played
	 * 
	 * @param entityWorldID the entity's world ID that is playing the animation to update
	 * @param jobID the id returned by playAnim when starting a new animation
	 * @param paramType the type of parameter you want to update in the animation (Weight, Speed, Duration (TODO) )
	 * @param value the new value for the specified type
	 * @param timeoffset offset in time since the start of the animation
	 */
	ANIMATIONSAPI void updateAnim(unsigned int entityWorldID, const int jobID, const GameEngineAnimParams::List paramType, const float value, const float timeoffset = 0);


	/**
	 * \brief Check if a specific animation is currently being played
	 * 
	 * If you want to check if a specific animation is currently being played by an entity you can call this method.
	 * Note: Return value is also true for currently paused animations.
	 * 
	 * @param entityWorldID the entity's world ID that may playing the specified animation
	 * @param animation the animation that may be played
	 * @return true if the specified animation is currently being played by the given entity
	 */ 
	ANIMATIONSAPI bool isPlaying( unsigned int entityWorldID, const char* animation);
	
	/**
	 * \brief Get the length of an animation ( Frames / Speed )
	 * 
	 * 
	 * @param entityWorldID the entity's world ID to which the animation belongs
	 * @param animation the animation for which you want to get the length
	 * @return the length of the animation in seconds ( Frames / Speed ) or 0 if it wasn't found.
	 */ 
	ANIMATIONSAPI float getAnimLength( unsigned int entityWorldID, const char* animation);

	/**
	 * \brief Get the speed of an animation
	 * 
	 * 
	 * @param entityWorldID the entity's world ID to which the animation belongs
	 * @param animation the animation for which you want to get the speed
	 * @return the speed of the animation or 0 if it wasn't found.
	 */ 
	ANIMATIONSAPI float getAnimSpeed( unsigned int entityWorldID, const char* animation);

	/*! @}*/

}

#endif
