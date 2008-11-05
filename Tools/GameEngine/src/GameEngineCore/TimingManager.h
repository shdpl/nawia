// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
// *************************************************************************************************



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