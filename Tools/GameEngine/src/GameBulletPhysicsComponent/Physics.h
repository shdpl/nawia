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
#ifndef PHYSICS_H_
#define PHYSICS_H_

#include <GameEngine/GameComponentManager.h>

#include <btBulletDynamicsCommon.h>

#include <vector>

class PhysicsComponent;
class btCollisionDispatcher;
/**
 * \brief The physics module manages a physics world
 * 
 * It creates the btDynamicsWorld instance that will handle all physic objects
 * It is also responsible for calling the update method of each physics object
 */
class Physics : public GameComponentManager
{

public:

	/**
	 * Creates and returns a singleton instance of the physics  
	 */
	static Physics* instance();

	/**
	 * Removes all objects and deletes the btDynamicsWorld.
	 * Note that the rigid bodies won't be deleted though it's the job of the GameEntity
	 */
	static void release();


	/** 
	 * Calling this method will make a step in the physics world 	 
	 */
	void run();

	/**
	 * Calling this method will update the components' transformations according to the physics world representation
	 */
	void update();

	/**
	 * Renders the collision objects in the current OpenGL context
	 */
	void render();

	/**
	 * Resets the physics transformations to the inital state
	 */
	void reset();


	/**
	 * Sets all physics components to active mode (wake them if the are sleeping due to no collision or forces)
	 */
	void activatePhysicComponents();

	/**
	 * Returns current state of the physics simulation
	 */
	bool enabled() { return m_enabled; }

	/**
	 * Toggles activation of physics calculations
	 */
	void setEnabled(bool enabled);

	/**
	 * Toggles collision shape rendering
	 */
	void setShapeRenderingEnabled(bool enabled) { m_renderShapes = enabled; }
	
	/**
	 * Returns the current render flag for the Physics Collision Shapes
	 */
	bool shapeRenderingEnabled() { return m_renderShapes; }

	/**
	 * Adds a created PhysicsComponent to the physics world
	 * @param object reference to the component (must not be NULL)	 
	 */
	void addObject(PhysicsComponent* object);

	/**
	 * Removes the node from the world
	 * @param object pointer to the instance that should be removed
	 */
	void removeObject(PhysicsComponent* object);

	/**
	 * Static function that will be called when a collision occurs
	 * @param collisionPair contains the colliding objects 
	 * @param dispatcher reference to the btCollisionDispatcher
	 * @param dispatchInfo info struct filled by the dispatcher when calling the defaultNearCallback
	 */
	void collisionCallback(btBroadphasePair& collisionPair, btCollisionDispatcher& dispatcher, btDispatcherInfo& dispatchInfo);

	btCollisionDispatcher*	dispatcher() { return m_dispatcher; }

private:
	Physics();
	~Physics();

	static Physics*			m_instance;

	// Default Collision Configuration (TODO: what can be configured using this variable?)
	btDefaultCollisionConfiguration* m_configuration;
	// The global physics world
	btDynamicsWorld*			m_physicsWorld;
	// Collision Dispatcher controlling the collision handling
	btCollisionDispatcher*		m_dispatcher;
	// ?
	btBroadphaseInterface*		m_pairCache;
	/// Constraint Solver controlling the constraints between rigid bodies
	btConstraintSolver*			m_constraintSolver;
	/// Global Physics Timer 
	btClock*					m_clock;

	/// Vector for dynamic objects
	std::vector<PhysicsComponent*>	m_physicsNodes;

	bool						m_enabled;

	bool						m_renderShapes;
};

#endif