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
#ifndef GAMEENGINE_SCENEGRAPH_H_
#define GAMEENGINE_SCENEGRAPH_H_

#include <GameEngine/config.h>

#ifdef PLATFORM_WIN
#	 ifdef GAMESCENEGRAPHCOMPONENT_EXPORTS
#       define SCENEGRAPHPLUGINEXP extern "C" __declspec( dllexport )
#	 else
#       define SCENEGRAPHPLUGINEXP extern "C" __declspec( dllimport )
#    endif
#else
#	 define SCENEGRAPHPLUGINEXP 
#endif

namespace GameEngine
{

	/** \addtogroup GameSceneGraphComponent
	 * 
	 * The scene graph component plugin provides an interface to the Horde3D scene graph. It will check the
	 * scene graph transformation of all entities with a Horde3D representation and sends E_SET_TRANSFORMATION events to all other
	 * components if the transformation has been changed. Note that transformation changes done within the GameEngine won't be 
	 * send again. So if a component has changed the transformation of an entity using E_SET_TRANSFORMATION this event will be used 
	 * instead of creating a new one within the SceneGraphComponent
	 *
	 * @{
	 */

	/**
	 * Returns the world transformation of the specified entity
	 */
	SCENEGRAPHPLUGINEXP const float* getEntityTransformation(unsigned int entityWorldID);

	/**
	 * Sends an E_SET_TRANSFORMATION event to the Scenegraph component of the given entity
	 */
	SCENEGRAPHPLUGINEXP void setEntityTransformation(unsigned int entityWorldID, float* trans);

	SCENEGRAPHPLUGINEXP void setEntityTranslation(unsigned int entityWorldID, float x, float y, float z);

	/**
	 * Sends an E_SET_ROTATION event to the Scenegraph component of the given entity
	 */
	SCENEGRAPHPLUGINEXP void setEntityRotation(unsigned int entityWorldID, float x, float y, float z);

	/**
	 * Sends an E_SET_SCLAE event to the Scenegraph component of the given entity
	 */
	SCENEGRAPHPLUGINEXP void setEntityScale(unsigned int entityWorldID, float x, float y, float z);

	/**
	 * Translates the entity along it's local coordinate axis
	 */
	SCENEGRAPHPLUGINEXP void translateEntityLocal(unsigned int entityWorldID, float x, float y, float z);

	/**
	 * Translates the entity along the world's coordinate axis
	 */
	SCENEGRAPHPLUGINEXP void translateEntityGlobal(unsigned int entityWorldID, float x, float y, float z);
	 
	/**
	 * Rotate the entity about it's local coordinate axis
	 */
	SCENEGRAPHPLUGINEXP void rotateEntityLocal(unsigned int entityWorldID, float x, float y, float z);

	/**
	 * Returns the Horde3D ID of the entity
	 */
	SCENEGRAPHPLUGINEXP int entitySceneGraphID( unsigned int entityWorldID );

	/**
	 * \brief Sets the Horde3D ID of the scenegraph component
	 * 
	 * Does not remove the node from the scenegraph
	 * @param entityWorldID the id of the GameEntity that contains the scenegraph component
	 * @param sceneGraphID the new scenegraph id of the component
	 */
	SCENEGRAPHPLUGINEXP void setEntitySceneGraphID( unsigned int entityWorldID, int sceneGraphID );

	/**
	 * Returns the Entity World ID for the given HordeID
	 */
	SCENEGRAPHPLUGINEXP int sceneGraphEntityID( int hordeID );

	/**
	 * Render scene graph 
	 */
	SCENEGRAPHPLUGINEXP void renderSceneGraph();

		/**
	 * Updates the scene manager to check for transformation changes done outside of the GameEngine
	 */
	SCENEGRAPHPLUGINEXP void updateSceneGraph();

	/**
	 * Gets the horde id of the currently active camera 
	 */
	SCENEGRAPHPLUGINEXP int getActiveCamera();

	/**
	 * Sets the current camera to given horde scene node (if valid)
	 */
	SCENEGRAPHPLUGINEXP void setActiveCamera( int hordeID );

	/**
	 * Sends an E_MORPH_TARGET event to the Scenegraph component of the given entity
	 */
	SCENEGRAPHPLUGINEXP void setMorphTarget( unsigned int entityWorldID, const char* target, float weight);

	/**
	 * Enables or deactivates rendering for the entity in Horde
	 */
	SCENEGRAPHPLUGINEXP void setVisible( unsigned int entityWorldID, bool enable);

	/**
	 * Checks the attachment of the given horde node for an attachment and creates the corresponding entity and components
	 */
	SCENEGRAPHPLUGINEXP void loadHorde3DAttachment( int hordeID );

	/**
	 * Sets a new PartentNode for a Node
	 */
	SCENEGRAPHPLUGINEXP void setParentNode(unsigned int entityWorldIDChild, unsigned int entityWorldIDNewParent, const char* childInNewParent);

	/**
	 * Casts a ray from the provided screen coordinates and returns the name of the node hit. Coords contains the coordinates the node was hit at
	 */
	SCENEGRAPHPLUGINEXP const char* pickNodeWithIntersectionCoords(float nwx, float nwy, float* coords);

	/*! @}*/

}

#endif