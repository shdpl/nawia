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
#include "PhysicsComponent.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameLog.h>
#include <GameEngine/utMath.h>

#include "Physics.h"

#include <btBulletDynamicsCommon.h>
#include <GIMPACT/Bullet/btGImpactShape.h>
#include <GIMPACT/Bullet/btGImpactCollisionAlgorithm.h>
#include <btGImpactConvexDecompositionShape.h>

#include <XMLParser/utXMLParser.h>

GameComponent* PhysicsComponent::createComponent( GameEntity* owner )
{
	return new PhysicsComponent( owner );
}

PhysicsComponent::PhysicsComponent(GameEntity *owner) : GameComponent(owner, "BulletPhysics"),
m_motionState(0), m_collisionShape(0), m_btTriangleMesh(0), m_rigidBody(0)
{
	owner->addListener(GameEvent::E_SET_TRANSFORMATION, this);
	owner->addListener(GameEvent::E_SET_TRANSLATION, this);
	owner->addListener(GameEvent::E_SET_ROTATION, this);	
	owner->addListener(GameEvent::E_TRANSLATE_LOCAL, this);
	owner->addListener(GameEvent::E_TRANSLATE_GLOBAL, this);
	owner->addListener(GameEvent::E_ROTATE_LOCAL, this);
}

PhysicsComponent::~PhysicsComponent()
{
	release();
}


bool PhysicsComponent::checkEvent(GameEvent *event)
{
	if ( m_rigidBody == 0 || m_rigidBody->getActivationState() == DISABLE_SIMULATION)
		return true;

	// Only catch transformation if this is a dynamic object
	if( m_motionState )
	{
		switch( event->id() ) 
		{
		case GameEvent::E_SET_TRANSFORMATION:
			// We catch this event by using the physics engine for changing the transformation
			// this way the transformation event will not affect any other component and
			// the event's original transformation wouldn't be set
			setTransformation(static_cast<float*>(event->data()));
			return false;
		case GameEvent::E_SET_TRANSLATION:
			{
				Vec3f* translation = static_cast<Vec3f*>(event->data());
				setTranslation( translation->x, translation->y, translation->z);
			}
			return false;
		case GameEvent::E_SET_ROTATION:
			{
				Vec3f* rotation = static_cast<Vec3f*>(event->data());
				setRotation( rotation->x, rotation->y, rotation->z);
			}
			return false;
		}	
	}
	return true;
}


void PhysicsComponent::executeEvent(GameEvent *event)
{
	if ( m_rigidBody == 0 )
		return;

	switch (event->id())
	{
	case GameEvent::E_SET_TRANSFORMATION:
		setTransformation(static_cast<const float*>(event->data()));
		break;
	case GameEvent::E_SET_TRANSLATION:
		{
			Vec3f* translation = static_cast<Vec3f*>(event->data());
			setTranslation( translation->x, translation->y, translation->z);
		}
		break;
	case GameEvent::E_SET_ROTATION:
		{
			Vec3f* rotation = static_cast<Vec3f*>(event->data());
			setRotation( rotation->x, rotation->y, rotation->z);
		}
		break;

	}		
}

void PhysicsComponent::update()
{
	if (m_owner == 0 || m_rigidBody == 0 || !m_rigidBody->isActive())
		return;

	// Get Transformation from Bullet
	btTransform trans;
	m_motionState->getWorldTransform(trans);
	
	// Send Transformation to other components
	sendTransformation(trans, false);
}

void PhysicsComponent::reset()
{
	if (m_rigidBody && m_motionState)
	{			 			
		// Reset the transformation to it's initial state
		sendTransformation(m_motionState->m_startWorldTrans, true);			
	}	
}

void PhysicsComponent::setEnabled(bool enable)
{
	if( m_rigidBody )
	{
		if ( enable ) m_rigidBody->activate();
		else if ( !enable /*&& m_rigidBody->getActivationState() != DISABLE_SIMULATION*/ )
			m_rigidBody->forceActivationState(ISLAND_SLEEPING);
	}
}

void PhysicsComponent::resetForce()
{
	if( m_rigidBody )
	{
		m_rigidBody->setLinearVelocity(btVector3(0, 0, 0));
		m_rigidBody->setAngularVelocity(btVector3(0, 0, 0));
	}
}

void PhysicsComponent::applyForce(const float x, const float y, const float z, const float dx, const float dy, const float dz)
{
	if( m_rigidBody )
	{		
		m_rigidBody->applyForce(btVector3(x, y, z), btVector3(dx, dy, dz));
		m_rigidBody->activate();
	}
}

void PhysicsComponent::applyImpulse(const float x, const float y, const float z, const float dx, const float dy, const float dz)
{
	if( m_rigidBody )
	{		
		m_rigidBody->applyImpulse(btVector3(x, y, z), btVector3(dx, dy, dz));
		m_rigidBody->activate();
	}
}


void PhysicsComponent::loadFromXml(const XMLNode* description)
{
	// Delete old physics representation
	release();

	Matrix4f objTrans;	
	m_owner->executeEvent(&GameEvent(GameEvent::E_TRANSFORMATION, &GameEventData( (float*) objTrans.x, 16 ), this));

	Vec3f t, r, s;
	objTrans.decompose(t, r, s);

	// Parse Physics Node Configuration
	float mass = static_cast<float>(atof(description->getAttribute("mass", "0.0")));	

	const char* shape = description->getAttribute("shape", "Box");	
	// create collision shape based on the node configuration 
	if (shape && _stricmp(shape, "Box")==0) // Bounding Box Shape
	{
		float dimX = static_cast<float>(atof(description->getAttribute("x", "1.0")));
		float dimY = static_cast<float>(atof(description->getAttribute("y", "1.0")));
		float dimZ = static_cast<float>(atof(description->getAttribute("z", "1.0")));
		// update box settings with node scaling (TODO is this necessary if we already set the scale by using setLocalScaling?)
		//m_collisionShape = new btBoxShape(btVector3(dimX * s.x, dimY * s.y, dimZ * s.z));
		m_collisionShape = new btBoxShape(btVector3(dimX, dimY,dimZ));
	}
	else if (shape && _stricmp(shape, "Sphere")==0) // Sphere Shape
	{		
		float radius =  static_cast<float>(atof(description->getAttribute("radius", "1.0")));
		m_collisionShape = new btSphereShape(radius);
	}
	else if (shape && _stricmp(shape, "Cylinder")==0 ) // Cylinder Shape
	{
		float radius0 = static_cast<float>(atof(description->getAttribute("radius", "1.0")));
		float height =  static_cast<float>(atof(description->getAttribute("height", "1.0")));
		m_collisionShape = new btCylinderShape(btVector3(radius0,height,radius0));
	}
	else // Mesh Shape
	{		
		MeshData meshData;
		GameEvent meshEvent(GameEvent::E_MESH_DATA, &meshData, this);
		// get mesh data from graphics engine
		m_owner->executeEvent(&meshEvent);
		
		if(	meshData.VertexBase && meshData.TriangleBase)
		{
			// Create new mesh in physics engine
			m_btTriangleMesh = new btTriangleMesh();
			int offset = 3;
			if (meshData.TriangleMode == 5) // Triangle Strip
				offset = 1;
			
			//m_btTriangleMesh = new btTriangleIndexVertexArray();
			//btIndexedMesh bMesh;
			//bMesh.m_numTriangles = meshData.NumTriangleIndices / offset;
			//bMesh.m_triangleIndexBase = (const unsigned char*) meshData.TriangleBase;
			//bMesh.m_triangleIndexStride = offset * sizeof(unsigned int);
			//bMesh.m_vertexBase = (const unsigned char*) meshData.VertexBase;
			//bMesh.m_vertexStride = offset * sizeof( float );
			//bMesh.m_numVertices = meshData.NumVertices;
			//m_btTriangleMesh->addIndexedMesh( bMesh );

			// copy mesh from graphics to physics
			for (unsigned int i = 0; i < meshData.NumTriangleIndices - 2; i+=offset)
			{
				unsigned int index1 = (meshData.TriangleBase[i]   - meshData.VertRStart) * 3;
				unsigned int index2 = (meshData.TriangleBase[i+1] - meshData.VertRStart) * 3;
				unsigned int index3 = (meshData.TriangleBase[i+2] - meshData.VertRStart) * 3;
				m_btTriangleMesh->addTriangle(
					btVector3(meshData.VertexBase[index1], meshData.VertexBase[index1+1], meshData.VertexBase[index1+2] ),
					btVector3(meshData.VertexBase[index2], meshData.VertexBase[index2+1], meshData.VertexBase[index2+2] ),
					btVector3(meshData.VertexBase[index3], meshData.VertexBase[index3+1], meshData.VertexBase[index3+2] )
					); 
			}														

			bool useQuantizedAabbCompression = true;														

			if (mass > 0)
			{
				btGImpactMeshShape* shape = new btGImpactMeshShape(m_btTriangleMesh);

				//btGImpactConvexDecompositionShape* shape = new
				//	btGImpactConvexDecompositionShape(m_btTriangleMesh, btVector3(1.f,1.f,1.f),btScalar(0.1f), true);

				shape->updateBound();

				btCollisionDispatcher* dispatcher = static_cast<btCollisionDispatcher *>(Physics::instance()->dispatcher());
				btGImpactCollisionAlgorithm::registerAlgorithm(dispatcher);

				m_collisionShape = shape;		

				//m_collisionShape = new btConvexTriangleMeshShape(m_btTriangleMesh);
			}
			else // BvhTriangleMesh can be used only for static objects
				m_collisionShape = new btBvhTriangleMeshShape(m_btTriangleMesh,useQuantizedAabbCompression);
		}
		else
		{
			GameLog::errorMessage("The mesh data for the physics representation couldn't be retrieved");
			return;
		}
	}	

	bool kinematic = _stricmp(description->getAttribute("kinematic", "false"), "true") == 0 || 
					 _stricmp(description->getAttribute("kinematic", "0"), "1") == 0;

	// Create initial transformation without scale
	btTransform tr;			
	tr.setRotation(btQuaternion(r.y, r.x, r.z));
	tr.setOrigin(btVector3(t.x,t.y,t.z));	
	// Set local scaling in collision shape because Bullet does not support scaling in the world transformation matrices
	m_collisionShape->setLocalScaling(btVector3(s.x,s.y,s.z));			
	btVector3 localInertia(0,0,0);
	//rigidbody is dynamic if and only if mass is non zero otherwise static
	if (mass != 0)
		m_collisionShape->calculateLocalInertia(mass,localInertia);
	if (mass != 0 || kinematic)
		//using motionstate is recommended, it provides interpolation capabilities, and only synchronizes 'active' objects
		m_motionState = new btDefaultMotionState(tr);						

	btRigidBody::btRigidBodyConstructionInfo rbInfo(mass,m_motionState,m_collisionShape,localInertia);
	rbInfo.m_startWorldTransform = tr;	
	//rbInfo.m_restitution = btScalar( atof(description->getAttribute("restitution", "0")) );
	//rbInfo.m_friction = btScalar( atof(description->getAttribute("static_friction", "0.5")) );
	// Threshold for deactivation of objects (if movement is below this value the object gets deactivated)
	//rbInfo.m_angularSleepingThreshold = 0.8f;
	//rbInfo.m_linearSleepingThreshold = 0.8f;
	
	m_rigidBody = new btRigidBody(rbInfo);
	m_rigidBody->setUserPointer(this);
	m_rigidBody->setDeactivationTime(2.0f);	
	
	// Add support for collision detection if mass is zero but kinematic is explicitly enabled
	if (kinematic && mass == 0)
	{
		m_rigidBody->setCollisionFlags(m_rigidBody->getCollisionFlags() | btCollisionObject::CF_KINEMATIC_OBJECT);	
		m_rigidBody->setActivationState(DISABLE_DEACTIVATION);
	}

	Physics::instance()->addObject(this);
}


void PhysicsComponent::release()
{
	Physics::instance()->removeObject(this);
	delete m_rigidBody;		 m_rigidBody = 0;
	delete m_motionState;	 m_motionState = 0;
	delete m_collisionShape; m_collisionShape = 0;
	delete m_btTriangleMesh; m_btTriangleMesh = 0;
}

void PhysicsComponent::sendTransformation(const btTransform& transformation, bool apply)
{
#ifdef BT_USE_DOUBLE_PRECISION
	double m[16];
	transformation.getBasis().scaled(m_collisionShape->getLocalScaling()).getOpenGLSubMatrix(m);
	float x[16];
	x[0] = m[0]; x[1] = m[1]; x[2] = m[2]; x[3] = m[3];
	x[4] = m[4]; x[5] = m[5]; x[6] = m[6]; x[7] = m[7];
	x[8] = m[8]; x[9] = m[9]; x[10] = m[10]; x[11] = m[11];
	x[12] = transformation.getOrigin().x();
	x[13] = transformation.getOrigin().y();
	x[14] = transformation.getOrigin().z();
	x[15] = 1.0f;
#else
	float x[16];
	transformation.getBasis().scaled(m_collisionShape->getLocalScaling()).getOpenGLSubMatrix(x);
	x[12] = transformation.getOrigin().x();
	x[13] = transformation.getOrigin().y();
	x[14] = transformation.getOrigin().z();
	x[15] = 1.0f;
#endif
	// Merge scaling with scale free transformation

	GameEvent event(GameEvent::E_SET_TRANSFORMATION, &GameEventData( x, 16 ), this);
	if ( m_owner->checkEvent(&event) )
	{
		//printf("PhysicsComponent::update: %.3f, %.3f, %.3f\n", x[12], x[13], x[14]);
		m_owner->executeEvent(&event);
		if (apply) setTransformation(x);
	}
	else
	{		
		// Reset Physics State to original transformation
		GameEvent e(GameEvent::E_TRANSFORMATION, GameEventData( (float*) x, 16 ), this);
		m_owner->executeEvent(&e);
		setTransformation(x);
		// deactivate object until it is reactivated again by another collision or physics adjustment
		m_rigidBody->setActivationState(WANTS_DEACTIVATION);
	}
}

void PhysicsComponent::setTranslation(const float x, const float y, const float z)
{
	btTransform transform;
	if( m_motionState ) m_motionState->getWorldTransform( transform );
	else transform = m_rigidBody->getWorldTransform();
	
	transform.setOrigin( btVector3(x, y, z) );

	if (m_motionState)
		m_motionState->setWorldTransform(transform);
	m_rigidBody->setWorldTransform(transform);
	m_rigidBody->setInterpolationWorldTransform(transform);
	if( !m_rigidBody->isStaticObject() )
	{
		m_rigidBody->setLinearVelocity(btVector3(0,0,0));
		m_rigidBody->setAngularVelocity(btVector3(0,0,0));	
		m_rigidBody->activate(true);
	}
}

void PhysicsComponent::setRotation(const float x, const float y, const float z)
{		
	btTransform transform;
	if( m_motionState ) m_motionState->getWorldTransform( transform );
	else transform = m_rigidBody->getWorldTransform();
	
	// TODO maybe this order is not correct (UNTESTED)
	transform.setRotation( btQuaternion( x, y, z ) );

	if (m_motionState)
		m_motionState->setWorldTransform(transform);
	m_rigidBody->setWorldTransform(transform);
	m_rigidBody->setInterpolationWorldTransform(transform);
	if( !m_rigidBody->isStaticObject() )
	{
		m_rigidBody->setLinearVelocity(btVector3(0,0,0));
		m_rigidBody->setAngularVelocity(btVector3(0,0,0));	
		m_rigidBody->activate(true);
	}
}

void PhysicsComponent::setTransformation(const float* m)
{
	// we need a scale free rotation

	float sx = sqrtf( m[0]*m[0] + m[1]*m[1] + m[2]*m[2] );
    float sy = sqrtf( m[4]*m[4] + m[5]*m[5] + m[6]*m[6] );
    float sz = sqrtf( m[8]*m[8] + m[9]*m[9] + m[10]*m[10] );

	// TODO Fix this
	btVector3 localScaling = m_collisionShape->getLocalScaling();
	if (sx != localScaling.x() || sy != localScaling.y() || sz != localScaling.z())
		m_collisionShape->setLocalScaling(btVector3(sx, sy, sz));

	btMatrix3x3 rotation(
		m[0] / sx, m[4] / sy, m[8] / sz, 
		m[1] / sx, m[5] / sy, m[9] / sz,
		m[2] / sx, m[6] / sy, m[10]/ sz);

	btTransform transform(rotation, btVector3(m[12], m[13], m[14]));
	//printf("PhysicsComponent::setTransformation\n\t %.3f, %.3f, %.3f\n", m[12], m[13], m[14]);	

	if (m_motionState)
		m_motionState->setWorldTransform(transform);
	m_rigidBody->setWorldTransform(transform);
	m_rigidBody->setInterpolationWorldTransform(transform);
	if( !m_rigidBody->isStaticObject() )
	{
		m_rigidBody->setLinearVelocity(btVector3(0,0,0));
		m_rigidBody->setAngularVelocity(btVector3(0,0,0));	
		m_rigidBody->activate(true);
	}
}

