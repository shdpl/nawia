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
// GameEngine SceneGraph Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "GameEngine_SceneGraph.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameWorld.h>
#include <GameEngine/GameModules.h>
#include <Horde3D/Horde3DUtils.h>

#include "SceneGraph.h"
#include "SceneGraphComponent.h"

namespace GameEngine
{
	void sendEvent(unsigned int entityWorldID, GameEvent* event)
	{
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if (entity && entity->checkEvent(event))
			entity->executeEvent(event);
	}

	SCENEGRAPHPLUGINEXP int entitySceneGraphID( unsigned int entityWorldID )
	{
		GameEntity* entity = GameModules::gameWorld()->entity( entityWorldID );
		if( entity )
		{
			SceneGraphComponent* component = static_cast<SceneGraphComponent*>(entity->component("Horde3D"));
			if ( component ) return component->hordeId();
		}		
		return 0;
	}

	SCENEGRAPHPLUGINEXP void setEntitySceneGraphID( unsigned int entityWorldID, int sceneGraphID )
	{
		GameEntity* entity = GameModules::gameWorld()->entity( entityWorldID );
		if( entity )
		{
			SceneGraphComponent* component = static_cast<SceneGraphComponent*>( entity->component("Horde3D") );
			if ( component ) return component->setHordeID(sceneGraphID);
		}		
	}

	SCENEGRAPHPLUGINEXP int sceneGraphEntityID( int hordeID )
	{
		return SceneGraphManager::instance()->findEntity( hordeID );
	}


	SCENEGRAPHPLUGINEXP const float* getEntityTransformation(unsigned int entityWorldID)
	{
		SceneGraphComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if (entity && ( component = static_cast<SceneGraphComponent*>(entity->component("Horde3D")) ) != 0)
			return component->getTransformation();		
		else
			return 0;
	}

	SCENEGRAPHPLUGINEXP void setEntityTransformation(unsigned int entityWorldID, float* trans)
	{
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_SET_TRANSFORMATION, &GameEventData(trans, 16), 0));
	}	

	SCENEGRAPHPLUGINEXP void setEntityTranslation(unsigned int entityWorldID, float x, float y, float z)
	{
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_SET_TRANSLATION, &Vec3fData(x, y, z), 0));
	}

	SCENEGRAPHPLUGINEXP void setEntityRotation(unsigned int entityWorldID, float x, float y, float z)
	{
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_SET_ROTATION, &Vec3fData( x,y,z ), 0));
	}

	SCENEGRAPHPLUGINEXP void setEntityScale(unsigned int entityWorldID, float x, float y, float z)
	{
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_SET_SCALE, &Vec3fData( x,y,z ), 0));
	}

	SCENEGRAPHPLUGINEXP void translateEntityLocal(unsigned int entityWorldID, float x, float y, float z)
	{		
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_TRANSLATE_LOCAL, &Vec3fData( x,y,z ), 0));
	}

	SCENEGRAPHPLUGINEXP void translateEntityGlobal(unsigned int entityWorldID, float x, float y, float z)
	{		
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_TRANSLATE_GLOBAL, &Vec3fData( x,y,z ), 0));
	}

	SCENEGRAPHPLUGINEXP void rotateEntityLocal(unsigned int entityWorldID, float x, float y, float z)
	{		
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_ROTATE_LOCAL, &Vec3fData( x,y,z ), 0));
	}

	SCENEGRAPHPLUGINEXP void setParentNode(unsigned int entityWorldIDChild, unsigned int entityWorldIDNewParent,const char* childInNewParent)
	{
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldIDNewParent);
		Attach attach(childInNewParent,entity->id().c_str());
		sendEvent(entityWorldIDChild,&GameEvent(GameEvent::E_SET_NODE_PARENT,&attach,0));
	}

	SCENEGRAPHPLUGINEXP void updateSceneGraph()
	{
		SceneGraphManager::instance()->update();
	}

	SCENEGRAPHPLUGINEXP int getActiveCamera()
	{
		return SceneGraphManager::instance()->getActiveCam();
	}

	SCENEGRAPHPLUGINEXP void setActiveCamera( int activeCam )
	{
		SceneGraphManager::instance()->setActiveCam( activeCam );
	}

	SCENEGRAPHPLUGINEXP void setMorphTarget(unsigned int entityWorldID, const char* target, float weight)
	{
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_MORPH_TARGET, &MorphTarget(target,weight), 0));
	}

	SCENEGRAPHPLUGINEXP void renderSceneGraph()
	{
		SceneGraphManager::instance()->run();
	}

	SCENEGRAPHPLUGINEXP void loadHorde3DAttachment( int hordeID )
	{
		SceneGraphManager::instance()->addNewHordeNode( hordeID );
	}

	SCENEGRAPHPLUGINEXP const char* pickNodeWithIntersectionCoords(float nwx, float nwy, float* coords)
	{
		NodeHandle node = Horde3DUtils::pickNode(SceneGraphManager::instance()->getActiveCam(), nwx, nwy);
		
		if (coords) Horde3D::getCastRayResult(0, 0, 0, coords);
		
		node = Horde3D::getNodeParent( node );
		return Horde3D::getNodeParamstr( node, SceneNodeParams::Name );
	}

}

