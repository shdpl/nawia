// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// The GameEngine is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation version 3 of the License 
//
// The GameEngine is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// ****************************************************************************************


// ****************************************************************************************
//
// GameEngine Collision Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#ifndef GAMEENGINE_SAPI_H_
#define GAMEENGINE_SAPI_H_

#include <GameEngine/config.h>

#ifdef PLATFORM_WIN
#	 ifdef COLLISIONCOMPONENT_EXPORTS
#       define COLLISIONPLUGINEXP extern "C" __declspec( dllexport )
#	 else
#       define COLLISIONPLUGINEXP extern "C" __declspec( dllimport )
#    endif
#else
#	 define COLLISIONPLUGINEXP 
#endif

namespace GameEngine
{
	/**
	 * Returns number of collisions the specified entity during the last update iteration
	 * @param entityWorldID the unique world id of the entity 
	 * @return unsigned int number of collisions in the last frame
	 */
	COLLISIONPLUGINEXP size_t numCollisions(unsigned int entityWorldID);


	/**
	 * Returns the world id of the entity that collided with the specified entity
	 * @param entityWorldID the unique world id of the entity 
	 * @param index collision number based on the number of collisions provided by collisions()
	 * @return unsigned int the world id of the entity colliding with the entity specified by entityWorldID
	 */
	COLLISIONPLUGINEXP unsigned int collision(unsigned int entityWorldID, int index);
}

#endif