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
		const char* entityID;

		if(entityWorldIDNewParent > 0)
		{
			GameEntity* entity = GameModules::gameWorld()->entity(entityWorldIDNewParent);	
			entityID = entity->id().c_str();
		}
		else
		{
			entityID = "Root";
		}
		
		Attach attachData = Attach(childInNewParent,entityID);
		sendEvent(entityWorldIDChild,&GameEvent(GameEvent::E_SET_NODE_PARENT,&attachData,0));
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

	SCENEGRAPHPLUGINEXP void setVisible( unsigned int entityWorldID, bool enable )
	{
		sendEvent( entityWorldID, &GameEvent( GameEvent::E_SET_ENABLED, &enable, 0 ) );
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
		H3DNode node = h3dutPickNode(SceneGraphManager::instance()->getActiveCam(), nwx, nwy);
		
		if (coords) h3dGetCastRayResult(0, 0, 0, coords);
		
		node = h3dGetNodeParent( node );
		return h3dGetNodeParamStr( node, H3DNodeParams::NameStr );
	}

}

