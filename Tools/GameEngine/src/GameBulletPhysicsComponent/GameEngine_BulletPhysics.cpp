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
// GameEngine Core of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "GameEngine_BulletPhysics.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameWorld.h>
#include <GameEngine/GameModules.h>

#include "Physics.h"
#include "PhysicsComponent.h"

namespace GameEngine
{
	BULLETPHYSICSPLUGINEXP bool physicsShapeRenderingEnabled()
	{
		return Physics::instance()->shapeRenderingEnabled();
	}

	BULLETPHYSICSPLUGINEXP void setPhysicsShapeRenderingEnabled(bool enabled)
	{
		Physics::instance()->setShapeRenderingEnabled(enabled);
	}

	BULLETPHYSICSPLUGINEXP bool physicsEnabled() { return Physics::instance()->enabled(); }
	
	BULLETPHYSICSPLUGINEXP void setPhysicsEnabled(bool enabled)
	{
		Physics::instance()->setEnabled(enabled);
	}

	BULLETPHYSICSPLUGINEXP void resetPhysics()
	{
		Physics::instance()->reset();
	}

	BULLETPHYSICSPLUGINEXP void renderPhysics()
	{
		bool flag = Physics::instance()->shapeRenderingEnabled();
		Physics::instance()->setShapeRenderingEnabled(true);
		Physics::instance()->render();
		Physics::instance()->setShapeRenderingEnabled(flag);
	}

	BULLETPHYSICSPLUGINEXP void setEntityPhysicsEnabled(unsigned int entityID, bool enabled)
	{
		PhysicsComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityID);		
		if( entity && ( component = static_cast<PhysicsComponent*>(entity->component("BulletPhysics")) ) != 0 )
			component->setEnabled(enabled);
	}

	BULLETPHYSICSPLUGINEXP void applyEntityPhysicsForce(const char* entityID, float x, float y, float z, float dx, float dy, float dz)
	{
		PhysicsComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityID);		
		if( entity && ( component = static_cast<PhysicsComponent*>(entity->component("BulletPhysics")) ) != 0 )
			component->applyForce(x, y, z, dx, dy, dz);
	}	

	BULLETPHYSICSPLUGINEXP void applyEntityPhysicsImpulse(const char* entityID, float x, float y, float z, float dx, float dy, float dz)
	{
		PhysicsComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityID);		
		if( entity && ( component = static_cast<PhysicsComponent*>(entity->component("BulletPhysics")) ) != 0 )
			component->applyImpulse(x, y, z, dx, dy, dz);
	}	

	BULLETPHYSICSPLUGINEXP void resetEntityPhysicsForces(const char* entityID)
	{
		PhysicsComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityID);		
		if( entity && ( component = static_cast<PhysicsComponent*>(entity->component("BulletPhysics")) ) != 0 )
			component->resetForce();
	}	
}

