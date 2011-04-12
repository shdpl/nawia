// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************
//


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

	SCENEGRAPHAPI int entitySceneGraphID( unsigned int entityWorldID )
	{
		GameEntity* entity = GameModules::gameWorld()->entity( entityWorldID );
		if( entity )
		{
			SceneGraphComponent* component = static_cast<SceneGraphComponent*>(entity->component("Horde3D"));
			if ( component ) return component->hordeId();
		}		
		return 0;
	}

	SCENEGRAPHAPI void setEntitySceneGraphID( unsigned int entityWorldID, int sceneGraphID )
	{
		GameEntity* entity = GameModules::gameWorld()->entity( entityWorldID );
		if( entity )
		{
			SceneGraphComponent* component = static_cast<SceneGraphComponent*>( entity->component("Horde3D") );
			if ( component ) return component->setHordeID(sceneGraphID);
		}		
	}

	SCENEGRAPHAPI int sceneGraphEntityID( int hordeID )
	{
		return SceneGraphManager::instance()->findEntity( hordeID );
	}


	SCENEGRAPHAPI const float* getEntityTransformation(unsigned int entityWorldID)
	{
		SceneGraphComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if (entity && ( component = static_cast<SceneGraphComponent*>(entity->component("Horde3D")) ) != 0)
			return component->getTransformation();		
		else
			return 0;
	}

	SCENEGRAPHAPI void setEntityTransformation(unsigned int entityWorldID, float* trans)
	{
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_SET_TRANSFORMATION, &GameEventData(trans, 16), 0));
	}	

	SCENEGRAPHAPI void setEntityTranslation(unsigned int entityWorldID, float x, float y, float z)
	{
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_SET_TRANSLATION, &Vec3fData(x, y, z), 0));
	}

	SCENEGRAPHAPI void setEntityRotation(unsigned int entityWorldID, float x, float y, float z)
	{
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_SET_ROTATION, &Vec3fData( x,y,z ), 0));
	}

	SCENEGRAPHAPI void setEntityScale(unsigned int entityWorldID, float x, float y, float z)
	{
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_SET_SCALE, &Vec3fData( x,y,z ), 0));
	}

	SCENEGRAPHAPI void translateEntityLocal(unsigned int entityWorldID, float x, float y, float z)
	{		
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_TRANSLATE_LOCAL, &Vec3fData( x,y,z ), 0));
	}

	SCENEGRAPHAPI void translateEntityGlobal(unsigned int entityWorldID, float x, float y, float z)
	{		
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_TRANSLATE_GLOBAL, &Vec3fData( x,y,z ), 0));
	}

	SCENEGRAPHAPI void rotateEntityLocal(unsigned int entityWorldID, float x, float y, float z)
	{		
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_ROTATE_LOCAL, &Vec3fData( x,y,z ), 0));
	}

	SCENEGRAPHAPI void setParentNode(unsigned int entityWorldIDChild, unsigned int entityWorldIDNewParent,const char* childInNewParent)
	{	
		Attach attachData = Attach(childInNewParent, entityWorldIDNewParent);
		sendEvent(entityWorldIDChild,&GameEvent(GameEvent::E_SET_NODE_PARENT,&attachData,0));
	}

	SCENEGRAPHAPI void updateSceneGraph()
	{
		SceneGraphManager::instance()->update();
	}

	SCENEGRAPHAPI int getActiveCamera()
	{
		return SceneGraphManager::instance()->getActiveCam();
	}

	SCENEGRAPHAPI void setActiveCamera( int activeCam )
	{
		SceneGraphManager::instance()->setActiveCam( activeCam );
	}

	SCENEGRAPHAPI void setMorphTarget(unsigned int entityWorldID, const char* target, float weight)
	{
		sendEvent(entityWorldID, &GameEvent(GameEvent::E_MORPH_TARGET, &MorphTarget(target,weight), 0));
	}

	SCENEGRAPHAPI void setVisible( unsigned int entityWorldID, bool enable )
	{
		sendEvent( entityWorldID, &GameEvent( GameEvent::E_SET_ENABLED, &enable, 0 ) );
	}

	SCENEGRAPHAPI void renderSceneGraph()
	{
		SceneGraphManager::instance()->run();
	}

	SCENEGRAPHAPI void loadHorde3DAttachment( int hordeID )
	{
		SceneGraphManager::instance()->addNewHordeNode( hordeID );
	}

	SCENEGRAPHAPI const char* pickNodeWithIntersectionCoords(float nwx, float nwy, float* coords)
	{
		H3DNode node = h3dutPickNode(SceneGraphManager::instance()->getActiveCam(), nwx, nwy);
		
		if (coords) h3dGetCastRayResult(0, 0, 0, coords);
		
		while(node != 0 && h3dGetNodeType(node) != H3DNodeTypes::Model)
		{
			node = h3dGetNodeParent( node );
		}		
		
		if (node != 0)
			return h3dGetNodeParamStr( node, H3DNodeParams::NameStr );
		return "";
	}

	SCENEGRAPHAPI bool getEntityVisiblitiy(unsigned int entityID)
	{
		SceneGraphComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityID);
		if (entity && ( component = static_cast<SceneGraphComponent*>(entity->component("Horde3D")) ) != 0)
			return component->getVisibility();
		return false;
	}

	SCENEGRAPHAPI void getEntityBoundingBox(unsigned int entityID, float* minX, float* minY, float* minZ, float* maxX, float* maxY, float* maxZ)
	{
		SceneGraphComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(entityID);
		if (entity && ( component = static_cast<SceneGraphComponent*>(entity->component("Horde3D")) ) != 0)
			component->getBoundingBox(minX, minY, minZ, maxX, maxY, maxZ);
	}

}

