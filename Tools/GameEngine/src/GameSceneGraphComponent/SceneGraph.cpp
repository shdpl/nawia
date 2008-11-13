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

SceneGraphManager::SceneGraphManager() : GameComponentManager(), m_activeCam(0) 
{

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

void SceneGraphManager::run()
{
	Horde3D::render(m_activeCam);				
}

void SceneGraphManager::update()
{
	if( !m_newSceneNodes.empty() )
	{
		//// Init attachments
		GameLog::logMessage("Searching for attachments...");
		int attachments = 0;
		while( !m_newSceneNodes.empty() )
		{
			int nodes = Horde3D::findNodes( m_newSceneNodes.top(), "", SceneNodeTypes::Undefined );
			//Save the find results locally  because Horde3D::getNodeFindResult() is not safe
			int *findResult = static_cast<int *>(alloca(nodes * sizeof(int)));
			for (int i = 0; i < nodes; ++i)
				findResult[i] = Horde3D::getNodeFindResult(i);

			for (int i = 0; i < nodes; ++i)
			{				
				const char* xmlText = Horde3D::getNodeParamstr( findResult[i], SceneNodeParams::AttachmentString );
				if (xmlText && strlen(xmlText) > 0) 
				{
					// Create a new GameEntity based on the attachment settings
					createGameEntity( xmlText, findResult[i] );
					++attachments;
				}
			}
			m_newSceneNodes.pop();
		}
		GameLog::logMessage("%d game entities created", attachments);
	}
	// If we don't have an active camera yet, get the first available
	if( m_activeCam == 0 )
	{
		int cams = Horde3D::findNodes( RootNode, "", SceneNodeTypes::Camera );
		if( cams > 0 )	m_activeCam = Horde3D::getNodeFindResult(0); 		
	}

	// Force Update in Horde3D to make sure the transform flags of the scene nodes are up-to-date
	float minX, minY, minZ, maxX, maxY, maxZ;
	Horde3D::getNodeAABB(RootNode, &minX, &minY, &minZ, &maxX, &maxY, &maxZ);
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
		const char* entityName = attachment.getAttribute("name");
		if (entityName == 0)
		{
			GameLog::errorMessage("The Attachment for the node '%s' contains no name attribute!", Horde3D::getNodeParamstr(hordeID, SceneNodeParams::Name ) );
			return 0;
		}
		EntityID entityID = entityName;

		GameEntity* entity = GameModules::gameWorld()->createEntity(entityID);
		
		SceneGraphComponent* sceneGraphComponent = new SceneGraphComponent( entity );
		sceneGraphComponent->setHordeID( hordeID );

		const int childNodes = attachment.nChildNode();
		for( int i = 0; i < childNodes; ++i )
		{
			XMLNode& node = attachment.getChildNode(i);
			GameComponent* component = GameModules::componentRegistry()->createComponent(node.getName(), entity);
			if( component ) component->loadFromXml( &node );
			else GameLog::errorMessage( "No plugin found to handle '%s' nodes", node.getName() );
		}
		return entity->worldId();
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