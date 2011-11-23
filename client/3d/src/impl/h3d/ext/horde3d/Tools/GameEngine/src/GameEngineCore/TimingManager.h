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
// GameEngine Core Library of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#ifndef TIMINGMANAGER_H_
#define TIMINGMANAGER_H_

/** \addtogroup GameEngineCore
 * @{
 */

/**
 * \namespace Timer specific methods
 */ 
namespace TimingManager
{
	/**
	 * \brief The current frame timestamp 
	 * 
	 * Constant between two calls within one frame
	 * 
	 * @return the internal timestamp for the current frame
	 */ 
	float timeStamp();

	/**
	 * \brief The current timestamp
	 * 
	 * 
	 * @return time elapsed since starting the engine
	 */ 
	float currentTimeStamp();

	/**
	 *  Do an animation step
	 */
	void update();

	/**
	 * Resets the timestamp to zero
	 */
	void reset();

	float FPS();

}

/*! @}*/
#endif