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
#include "SceneGraph.h"

#include <GameEngine/GameLog.h>
#include <GameEngine/GameEntity.h>
#include <GameEngine/GameModules.h>
#include <GameEngine/GameComponentRegistry.h>
#include <GameEngine/GameWorld.h>


#include <vector>
#include <algorithm>

#include <XMLParser/utXMLParser.h>

#include "SceneGraphComponent.h"

#include <gl/gl.h>

// Uncomment to print the time taken for each component loading from xml of each entity
//#define MEASURE_COMPONENT_LOADING

#ifdef MEASURE_COMPONENT_LOADING
#include <GameEngine/GameEngine.h>
#endif

using namespace std;

struct UpdateNode
{ 		
	void operator()(SceneGraphComponent* ptr) const
	{
		ptr->update();
	}
};

SceneGraphManager* SceneGraphManager::m_instance = 0x0;

SceneGraphManager* SceneGraphManager::instance()
{
	if( m_instance == 0x0 )
		m_instance = new SceneGraphManager();
	return m_instance;
}

void SceneGraphManager::release()
{
	delete m_instance;
	m_instance = 0x0;
}

SceneGraphManager::SceneGraphManager() : GameComponentManager(), m_activeCam(0), m_nextCam(0)
{
	memset(m_cameraProjMat, 0, sizeof(m_cameraProjMat));
}


void SceneGraphManager::addComponent(SceneGraphComponent* node)
{
	std::vector<SceneGraphComponent*>::iterator iter = find(m_sceneGraphComponents.begin(), m_sceneGraphComponents.end(), node);
	if (iter == m_sceneGraphComponents.end())
		m_sceneGraphComponents.push_back(node);
}

void SceneGraphManager::removeComponent(SceneGraphComponent* node)
{
	std::vector<SceneGraphComponent*>::iterator iter = find(m_sceneGraphComponents.begin(), m_sceneGraphComponents.end(), node);
	if (iter != m_sceneGraphComponents.end())
		m_sceneGraphComponents.erase(iter);
}

void SceneGraphManager::render()
{
	if (m_activeCam != 0)
	{
		h3dRender(m_activeCam);				
		h3dFinalizeFrame();
		// Clear last rendered overlays --> If you want to keep them, you need to redraw them every frame!
		// But needed to be able to draw overlay in the other components
		h3dClearOverlays();

		// Reset OpenGL camera so other components can render their content too
		const float* cameraTrans = 0; 
		h3dGetNodeTransMats(m_activeCam, 0, &cameraTrans);
		if (cameraTrans)
		{
			Matrix4f transMat(cameraTrans);
			h3dGetCameraProjMat(m_activeCam, m_cameraProjMat);
			glMatrixMode(GL_PROJECTION);		
			glLoadMatrixf(m_cameraProjMat);
			glMatrixMode(GL_MODELVIEW);		
			glLoadMatrixf(transMat.inverted().x);
		}
	}
}

void SceneGraphManager::update()
{
	if( !m_newSceneNodes.empty() )
	{
		//// Init attachments
		GameLog::logMessage("Searching for attachments...");
		int attachments = 0;
		int ignoredAttachments = 0;
		while( !m_newSceneNodes.empty() )
		{
			int nodes = h3dFindNodes( m_newSceneNodes.top(), "", H3DNodeTypes::Undefined );
			//Save the find results locally  because h3dGetNodeFindResult() is not safe
			int *findResult = static_cast<int *>(alloca(nodes * sizeof(int)));
			for (int i = 0; i < nodes; ++i)
				findResult[i] = h3dGetNodeFindResult(i);

			for (int i = 0; i < nodes; ++i)
			{				
				const char* xmlText = h3dGetNodeParamStr( findResult[i], H3DNodeParams::AttachmentStr );
				if (xmlText && strlen(xmlText) > 0) 
				{
					// Create a new GameEntity based on the attachment settings
					unsigned int id = createGameEntity( xmlText, findResult[i] );
					if (id > 0)
						++attachments;
					else
						++ignoredAttachments;
				}
			}
			m_newSceneNodes.pop();
		}
		if (attachments > 0)
			GameLog::logMessage("%d game entities created from attachments", attachments);
		else
			GameLog::warnMessage("Found no attachments!");
		if (ignoredAttachments > 0)
			GameLog::logMessage("Ignored %d attachments as they had a wrong type or invalid content", ignoredAttachments);
	}

	if (m_activeCam != m_nextCam)
	{
		// Update to the new camera
		m_activeCam = m_nextCam;
		int camWorldID = findEntity(m_activeCam);
		GameModules::gameWorld()->executeEvent(
		&GameEvent(GameEvent::E_ACTIVE_CAM_CHANGE, &GameEventData(camWorldID), 0x0) );
	}
	else if (m_activeCam == 0)
	{
		// But if we don't have an active camera yet, get the first available
		int cams = h3dFindNodes( H3DRootNode, "", H3DNodeTypes::Camera );
		if( cams > 0 )
			setActiveCam(h3dGetNodeFindResult(0));
	}

	// Force Update in Horde3D to make sure the transform flags of the scene nodes are up-to-date
	float minX, minY, minZ, maxX, maxY, maxZ;
	h3dGetNodeAABB(H3DRootNode, &minX, &minY, &minZ, &maxX, &maxY, &maxZ);
	// Update the gameengine transformations of the scene node components
	for_each(m_sceneGraphComponents.begin(), m_sceneGraphComponents.end(), UpdateNode());
}

unsigned int SceneGraphManager::createGameEntity( const char *xmlText, int hordeID )
{
	XMLResults results;
	// parse node attachment
	XMLNode attachment = XMLNode::parseString(xmlText, 0, &results);
	if (results.error == eXMLErrorNone)
	{
		const char* attachmentType = attachment.getAttribute("type");
		if (attachmentType == 0)
			GameLog::warnMessage("Attachment has no type attribute, trying to load it as of type 'GameEngine'.");
		else if (strcmp(attachmentType, "GameEngine") != 0)
		{
			// Other attachment type, so ignore it
			return 0;
		}
		const char* entityName = attachment.getAttribute("name");
		if (entityName == 0)
		{
			entityName = h3dGetNodeParamStr(hordeID, H3DNodeParams::NameStr );
			if (entityName != 0 && strlen(entityName) > 0)
				GameLog::warnMessage("Attachment contains no name attribute, trying to use the Horde3D name: '%s'!",  entityName);
			else
			{
				entityName = "unnamed";
				GameLog::warnMessage("The Attachment contains no name attribute and the entity has no Hord3D name, now calling it 'unnamed'!");
			}
		}
		EntityID entityID = entityName;

		GameEntity* entity = GameModules::gameWorld()->createEntity(entityID);
		
		if (entity)
		{
			SceneGraphComponent* sceneGraphComponent = new SceneGraphComponent( entity );
			sceneGraphComponent->setHordeID( hordeID );
			sceneGraphComponent->setMaxTrajection((float)atof(attachment.getAttribute("maxTrajection", "1.#INF")));

#ifdef MEASURE_COMPONENT_LOADING
			float time = GameEngine::currentTimeStamp();
			printf("Entity '%s' loading:\n", entity->id().c_str());
#endif
			const int childNodes = attachment.nChildNode();
			for( int i = 0; i < childNodes; ++i )
			{
				XMLNode& node = attachment.getChildNode(i);
				GameComponent* component = GameModules::componentRegistry()->createComponent(node.getName(), entity);
				if( component ) component->loadFromXml( &node );
				else GameLog::warnMessage( "No plugin found to handle '%s' nodes", node.getName() );
#ifdef MEASURE_COMPONENT_LOADING
				float newTime = GameEngine::currentTimeStamp();
				printf("\tComponent %s: %.4f\n", node.getName(), newTime- time);
				time = newTime;
#endif
			}
#ifdef MEASURE_COMPONENT_LOADING
			printf(" ...finished\n");
#endif
			return entity->worldId();
		}
	}
	else
		GameLog::errorMessage("Error '%s' in line %d column %d when reading Attachment\n%s\n", 
			XMLNode::getError(results.error), results.nLine, results.nColumn, xmlText);
	return 0;
}

int SceneGraphManager::findEntity( int hordeID )
{
	std::vector<SceneGraphComponent*>::iterator iter = m_sceneGraphComponents.begin();
	const std::vector<SceneGraphComponent*>::iterator end = m_sceneGraphComponents.end();
	while( iter != end )
	{
		if( (*iter)->hordeId() == hordeID )
		{
			return (*iter)->owner()->worldId();
		}
		++iter;
	}
	return 0;
}

void SceneGraphManager::setActiveCam(int cameraID)
{
	m_nextCam = cameraID;
}

void SceneGraphManager::getCameraProjectionMatrix(float* matrix)
{
	if (matrix)
	{
		memcpy(matrix, m_cameraProjMat, sizeof(float) * 16);
	}
}