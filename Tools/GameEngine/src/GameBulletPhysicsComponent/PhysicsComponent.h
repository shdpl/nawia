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
#ifndef PHYSICSCOMPONENT_H_
#define PHYSICSCOMPONENT_H_

#include <GameEngine/GameComponent.h>

class btRigidBody;
struct btDefaultMotionState;
class btCollisionShape;
class btTriangleMesh;
class btTransform;
class GameEntity;

class PhysicsComponent : public GameComponent
{
	
public:
	static GameComponent* createComponent( GameEntity* owner );

	PhysicsComponent(GameEntity* owner);
	~PhysicsComponent();

	bool checkEvent(GameEvent* event);
	void executeEvent(GameEvent* event);

	btRigidBody* rigidBody() const {return m_rigidBody;}
	bool isDynamic() const {return m_motionState != 0;}

	const btDefaultMotionState*	const motionState() {return m_motionState;}

	void update();

	void reset();

	void setEnabled(bool enable);
	void setCollisionResponse(bool enable);

	void resetForce();

	void applyForce(const float x, const float y, const float z, const float dx, const float dy, const float dz);
	void applyImpulse(const float x, const float y, const float z, const float dx, const float dy, const float dz);

	void loadFromXml(const XMLNode* description);	

private:

	void release();

	void sendTransformation(const btTransform& transformation, bool apply);

	void setTransformation(const float* transformation);

	void setTranslation( const float x, const float y, const float z );

	void setRotation( const float x, const float y, const float z );

	bool							m_blockSignals;
	bool							m_CF_Disabled;

	/// Motion state for dynamic objects
	btDefaultMotionState*			m_motionState;
	/// The main rigid body physics object
	btRigidBody*					m_rigidBody;
	/// The collision shape used for the physics engine
	btCollisionShape*				m_collisionShape;
	/// Triangle Collision Mesh, allocated only if the collision shape is of type Mesh
	btTriangleMesh*					m_btTriangleMesh;

	//float							m_mass;
	//btVector3						m_localInertia;		

};

#endif