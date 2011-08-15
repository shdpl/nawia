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
// GameEngine Bullet Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#ifndef GAMEENGINE_BULLETPHYSICS_H_
#define GAMEENGINE_BULLETPHYSICS_H_

#include <GameEngine/config.h>

#ifdef PLATFORM_WIN
#	 ifdef BULLETPHYSICSCOMPONENT_EXPORTS
#       define BULLETPHYSICSPLUGINEXP __declspec( dllexport )
#	 else
#       define BULLETPHYSICSPLUGINEXP __declspec( dllimport )
#    endif
#else
#	 define BULLETPHYSICSPLUGINEXP 
#endif

namespace GameEngine
{
	/** \addtogroup GameBulletPhysicsComponent
	 * 
	 * The BulletPhysics component integrates the Bullet physics engine into the GameEngine
	 *
	 * @{
	 */

	/**
	* Render physics collision objects
	*/
	BULLETPHYSICSPLUGINEXP bool physicsShapeRenderingEnabled();

	/**
	 * Render physics collision objects
	 */
	BULLETPHYSICSPLUGINEXP void setPhysicsShapeRenderingEnabled(bool enabled);

	/**
	 * Resets the Physics Engine to the initial transformations
	 */
	BULLETPHYSICSPLUGINEXP void resetPhysics();

	/**
	 * Renders the collision shapes for the collision objects
	 */
	BULLETPHYSICSPLUGINEXP void renderPhysics();

	/**
	 * Returns the current enabled state of the physics engine
	 */
	BULLETPHYSICSPLUGINEXP bool physicsEnabled();
	
	/**
	 * Enables or disabled the physics processing 
	 */
	BULLETPHYSICSPLUGINEXP void setPhysicsEnabled(bool enabled);

	/**
	 * Toggles the activation state of the physics engine concerning one single entity
	 */
	BULLETPHYSICSPLUGINEXP void setEntityPhysicsEnabled(unsigned int entityID, bool enable);

	/**
	 * Apply force to component 
	 */
	BULLETPHYSICSPLUGINEXP void applyEntityPhysicsForce(const char* entityID, float x, float y, float z, float dx, float dy, float dz);

	/**
	 * Apply impulse to component 
	 */
	BULLETPHYSICSPLUGINEXP void applyEntityPhysicsImpulse(const char* entityID, float x, float y, float z, float dx, float dy, float dz);

	/**
	 * Reset all forces to zero
	 */
	BULLETPHYSICSPLUGINEXP void resetEntityPhysicsForces(const char* entityID);

	BULLETPHYSICSPLUGINEXP int physicsRay(float x, float y, float z, float dx, float dy, float dz, float* pos = 0, float* normal = 0);

	/*! @}*/
}

#endif