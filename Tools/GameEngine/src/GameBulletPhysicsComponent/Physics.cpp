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
#include "Physics.h"

#include <GameEngine/GameEntity.h>

#include "PhysicsComponent.h"
#include "GLPhysicsView.h"

#include <algorithm>
#include <vector>

using namespace std;

Physics* Physics::m_instance = 0x0;

Physics* Physics::instance()
{
	if( m_instance == 0x0 ) m_instance = new Physics();
	return m_instance;
}

void Physics::release()
{
	delete m_instance;
	m_instance = 0x0;
}

Physics::Physics() : m_enabled(true), m_renderShapes(false)
{
	m_clock = new btClock();
	m_configuration = new btDefaultCollisionConfiguration();
	m_dispatcher = new btCollisionDispatcher(m_configuration);
	// handle collisions in callback
	//m_dispatcher->setsetNearCallback(Physics::collisionCallback);
	// TODO make this configurable
	//m_pairCache = new btMultiSapBroadphase();
	btPoint3 worldAabbMin(-1000,-1000,-1000);
	btPoint3 worldAabbMax(1000,1000,1000);
	m_pairCache = new btAxisSweep3 (worldAabbMin, worldAabbMax);
	m_constraintSolver = new btSequentialImpulseConstraintSolver();
	m_physicsWorld = new btDiscreteDynamicsWorld(m_dispatcher,m_pairCache,m_constraintSolver, m_configuration);
	m_physicsWorld->setGravity(btVector3(0,-10,0));
}

Physics::~Physics()
{
	delete m_physicsWorld;
	delete m_pairCache;
	delete m_constraintSolver;
	delete m_dispatcher;
	delete m_clock;
	delete m_configuration;
}

void Physics::activatePhysicComponents()
{
	m_clock->reset();
	const size_t size = m_physicsNodes.size();
	for( size_t i= 0; i < size; ++i)
		m_physicsNodes[i]->rigidBody()->activate(true);
}

void Physics::setEnabled(bool enabled)
{
	m_enabled = enabled;
	m_clock->reset();
}

void Physics::run()
{
	if (m_enabled)
	{
		// get time delta 
		float dt = m_clock->getTimeMicroseconds() * 0.000001f;
		// reset clock for next measurment
		m_clock->reset();
		// update phyiscs simulation
		m_physicsWorld->stepSimulation(dt, 1000);
	}
}

void Physics::update()
{
	if (m_enabled)
	{
		// update transformation of all physic nodes
		vector<PhysicsComponent*>::iterator iter = m_physicsNodes.begin();
		const vector<PhysicsComponent*>::iterator end = m_physicsNodes.end();
		while ( iter != end )
		{
			(*iter)->update();
			++iter;
		}
		// Get contact points (collisions)
		int numManifolds = m_dispatcher->getNumManifolds();
		for (int i=0;i<numManifolds;i++)
		{
			btPersistentManifold* contactManifold = m_dispatcher->getManifoldByIndexInternal(i);
			btCollisionObject* obA = static_cast<btCollisionObject*>(contactManifold->getBody0());
			btCollisionObject* obB = static_cast<btCollisionObject*>(contactManifold->getBody1());				
			int numContacts = contactManifold->getNumContacts();
			if ( contactManifold->getNumContacts() > 0 )
			//for (int j=0;j<numContacts;j++)
			{
				//btManifoldPoint& pt = contactManifold->getContactPoint(j);
		
				PhysicsComponent* obj1 = (PhysicsComponent*)(obA->getUserPointer());
				PhysicsComponent* obj2 = (PhysicsComponent*)(obB->getUserPointer());		

				GameEvent collisionEvent1(GameEvent::E_COLLISION, GameEventData( (int) obj2->owner()->worldId()), obj1);
				GameEvent collisionEvent2(GameEvent::E_COLLISION, GameEventData( (int) obj1->owner()->worldId()), obj2);
				obj1->owner()->executeEvent(&collisionEvent1);
				obj2->owner()->executeEvent(&collisionEvent2);
			}

			//you can un-comment out this line, and then all points are removed
			//contactManifold->clearManifold();	
		}
	}
}

void Physics::reset()
{
	m_clock->reset();			
	int numObjects = m_physicsWorld->getNumCollisionObjects();
	for (int i=0;i<numObjects;i++)
	{
		btCollisionObject* colObj = m_physicsWorld->getCollisionObjectArray()[i];
		((PhysicsComponent*)((btCollisionObject*) colObj)->getUserPointer())->reset();
	}
}

void Physics::render()
{
	if( m_renderShapes )
		BulletPhysicsComponent::drawCollisionObjects(m_physicsWorld);
}

void Physics::addObject(PhysicsComponent* object)
{
	m_physicsWorld->addRigidBody(object->rigidBody());
	// add it to the object vector only if it is dynamic
	if (object->motionState()) m_physicsNodes.push_back(object);
}

void Physics::removeObject(PhysicsComponent* object)
{
	if (object->rigidBody())
	{
		m_physicsWorld->removeRigidBody(object->rigidBody());
		// remove from dynamic PhysicsComponent list
		if (object->isDynamic())
		{
			vector<PhysicsComponent*>::iterator iter = find(m_physicsNodes.begin(), m_physicsNodes.end(), object);
			if (iter != m_physicsNodes.end())
				m_physicsNodes.erase(iter);
		}
	}
}

int Physics::castRay(float x, float y, float z, float dx, float dy, float dz, float* pos, float* normal)
{
	btCollisionWorld::ClosestRayResultCallback t(btVector3(x,y,z),btVector3(dx,dy,dz));
	m_physicsWorld->rayTest(btVector3(x,y,z),btVector3(dx,dy,dz),t);
	PhysicsComponent* obj = (PhysicsComponent*)(t.m_collisionObject->getUserPointer());
	if(obj)
	{
		if(pos)
		{
			pos[0] = t.m_hitPointWorld.x();
			pos[1] = t.m_hitPointWorld.y();
			pos[2] = t.m_hitPointWorld.z();
		}
		if(normal)
		{
			normal[0] = t.m_hitNormalWorld.x();
			normal[1] = t.m_hitNormalWorld.y();
			normal[2] = t.m_hitNormalWorld.z();
		}
		return obj->owner()->worldId();
	}
	return 0;
}
	//void collisionCallback(btBroadphasePair& collisionPair, btCollisionDispatcher& dispatcher, btDispatcherInfo& dispatchInfo)
	//{
	//	dispatcher.defaultNearCallback(collisionPair, dispatcher, dispatchInfo);		
	//	PhysicsComponent* obj1 = ((PhysicsComponent*)((btCollisionObject*) collisionPair.m_pProxy0->m_clientObject)->getUserPointer());
	//	PhysicsComponent* obj2 = ((PhysicsComponent*)((btCollisionObject*) collisionPair.m_pProxy1->m_clientObject)->getUserPointer());		
	//			
	//	GameEvent collisionEvent1(GameEvent::E_COLLISION, GameEventData( (int) obj2->owner()->worldId()), obj1);
	//	GameEvent collisionEvent2(GameEvent::E_COLLISION, GameEventData( (int) obj1->owner()->worldId()), obj2);
	//	obj1->owner()->executeEvent(&collisionEvent1);
	//	obj2->owner()->executeEvent(&collisionEvent2);
	//}
