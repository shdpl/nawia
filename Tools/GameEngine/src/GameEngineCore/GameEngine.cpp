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
// GameEngine Core Library of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************

#include "GameEngine.h"

#include "GameWorld.h"
#include "GameEntity.h"
#include "GameLog.h"

#include "GameModules.h"
#include "GamePlugInManager.h"
#include "GameComponentRegistry.h"
#include "TimingManager.h"

#include <XmlParser/utXmlParser.h>
#include <direct.h>


namespace GameEngine
{
	/// Global variables
	bool Initialized		   = false;		
	
	bool checkXMLParseResult(const XMLResults& results)
	{
		switch (results.error)
		{
		case eXMLErrorNone:
			return true;
		default:
			GameLog::errorMessage("Parsing error in line %d column %d: %s", results.nLine, results.nColumn, XMLNode::getError(results.error));
			return false;
		}
	}

	/***********      Initialization of a new  Scene *********/
	GAMEENGINE_API bool init()
	{
		if (Initialized)
		{
			GameLog::warnMessage("%s, Line %d: GameEngine already initialized", __FILE__, __LINE__);
			return false;
		}
		
		if( !GameModules::plugInManager()->init() )
			return false;

		Initialized = true;
		return true;
	}
	GAMEENGINE_API void release()
	{
		Initialized = false;
		GameModules::release();
		GameLog::close();
	}


	GAMEENGINE_API void update()
	{

		// Update all components depending on the time
		TimingManager::update();

		/***
		 *   Update Component managers
		 ***/
		GameModules::componentRegistry()->updateComponentManagers();
		
		/**
		 * Reset all collision states before collision events will be sent by the Physics
		 */
		//CollisionManager::update();

		//DynamidManager::update();

		//// Update Keyboard State
		//Keyboard::update();

		////Update Sound
		//Sound::update();

	}

	GAMEENGINE_API size_t componentNames(char* names, size_t size)
	{
		return GameModules::componentRegistry()->componentNames( names, size );
	}

	GAMEENGINE_API float FPS()
	{
		return TimingManager::FPS();
	}


	GAMEENGINE_API float timeStamp()
	{
		return TimingManager::timeStamp();
	}


	GAMEENGINE_API float currentTimeStamp()
	{
		return TimingManager::currentTimeStamp();
	}

	GAMEENGINE_API bool loadScene(const char* sceneFile)
	{
		if (sceneFile == 0) return false;

		// get path of file loaded
		std::string fileNameStr = sceneFile;
		size_t lastSeparator1 = fileNameStr.find_last_of( '/' );
		size_t lastSeparator2 = fileNameStr.find_last_of( '\\' );		
		if (lastSeparator1 != std::string::npos || lastSeparator2 != std::string::npos )
		{
			size_t index = max( (int) lastSeparator1, (int) lastSeparator2 );
			// change working directory to directory containing the scene file
			_chdir(fileNameStr.substr(0, index).c_str());
			fileNameStr = fileNameStr.substr(index+1);
		}

		//// Read XML content of scn file
		XMLResults results;
		XMLNode scene = XMLNode::parseFile(fileNameStr.c_str(), "Configuration", &results);
		if (checkXMLParseResult(results) && !scene.isEmpty())
		{				
			GameModules::plugInManager()->loadScene( fileNameStr.c_str() );				

			// Load extras
			XMLNode& extras(scene.getChildNode("Extras"));
			if (!extras.isEmpty())
			{
				int childs = extras.nChildNode("GameEntity");
				for (int i = 0; i < childs; ++i)
				{
					XMLNode extra(extras.getChildNode("GameEntity", i));
					// Load extra nodes
					int size;
					char* data = extra.createXMLString(0, &size);
					createGameEntity( data );
					free(data);
				}				
			}
		}
		else
		{				
			GameLog::errorMessage("Error loading scene file %s\n", sceneFile);
			return false;
		}
		TimingManager::reset();
		// Update to initialize attached entities
		GameModules::componentRegistry()->updateComponentManagers();
		return true;
	}

	GAMEENGINE_API unsigned int createGameEntity( const char *xmlText )
	{
		if (xmlText == 0 || strlen(xmlText) == 0)
			return 0;

		XMLResults results;
		// parse node attachment
		XMLNode attachment = XMLNode::parseString(xmlText, "GameEntity", &results);
		if (results.error == eXMLErrorNone)
		{
			const char* entityName = attachment.getAttribute("name");
			if (entityName == 0)
			{
				GameLog::errorMessage("%s, Line %d: The Attachment contains no name attribute!", __FILE__, __LINE__ );
				return 0;
			}
			EntityID entityID = entityName;
			
			GameEntity* entity = GameModules::gameWorld()->createEntity(entityID);
	
			
			const int childNodes = attachment.nChildNode();
			for( int i = 0; i < childNodes; ++i )
			{
				XMLNode& node = attachment.getChildNode(i);
				GameComponent* component = GameModules::componentRegistry()->createComponent(node.getName(), entity);
				if( component ) component->loadFromXml( &node );
				else GameLog::errorMessage( "No plugin found to handle '%s' nodes", node.getName() );
			}
			// TODO Extras
			return entity->worldId();
		}
		else
			GameLog::errorMessage("Error reading GameEntity\n%s\n", xmlText);
		return 0;
	}


	GAMEENGINE_API void removeGameEntity( unsigned int entityWorldID)
	{
		GameModules::gameWorld()->releaseEntity(entityWorldID);			
	}

	GAMEENGINE_API void renameGameEntity( unsigned int entityWorldID, const char* newEntityName )
	{
		GameModules::gameWorld()->renameEntity(entityWorldID, newEntityName);		
	}

	GAMEENGINE_API unsigned int entityWorldID( const char* entityID )
	{
		return GameModules::gameWorld()->entityID(entityID);
	}

	GAMEENGINE_API const char* entityName(unsigned int worldID)
	{
		GameEntity* t = GameModules::gameWorld()->entity(worldID);
		if(t)
		{
			return t->id().c_str();
		}
		return "";
	}
	GAMEENGINE_API bool setComponentData(unsigned int entityWorldID, const char* componentID, const char* xmlData)
	{
		GameEntity* entity = GameModules::gameWorld()->entity(entityWorldID);
		if (entity)
		{
			GameComponent* component = entity->component(componentID);
			if (xmlData != 0) // create or reload component if xmldata is valid
			{
				if (component == 0)
				{
					component = GameModules::componentRegistry()->createComponent(componentID, entity);
					if( component == 0x0 ) return false;
				}
				XMLResults pResults;
				XMLNode componentData = XMLNode::parseString(xmlData, 0, &pResults);
				if (checkXMLParseResult(pResults) && !componentData.isEmpty())
					component->loadFromXml(&componentData);
			}
			else // remove component if xmldata is a null pointer
				delete component;
			return true;
		}
		else
			return false;
	}
}
