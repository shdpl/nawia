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
#ifndef GAMEENGINE_SCENEGRAPH_H_
#define GAMEENGINE_SCENEGRAPH_H_

#include <GameEngine/config.h>

#ifdef PLATFORM_WIN
#	 ifdef GAMESCENEGRAPHCOMPONENT_EXPORTS
#       define SCENEGRAPHAPI __declspec( dllexport )
#	 else
#       define SCENEGRAPHAPI __declspec( dllimport )
#    endif
#else
#	 define SCENEGRAPHAPI
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
	SCENEGRAPHAPI const float* getEntityTransformation(unsigned int entityWorldID);

	/**
	 * Sends an E_SET_TRANSFORMATION event to the Scenegraph component of the given entity
	 */
	SCENEGRAPHAPI void setEntityTransformation(unsigned int entityWorldID, float* trans);

	SCENEGRAPHAPI void setEntityTranslation(unsigned int entityWorldID, float x, float y, float z);

	/**
	 * Sends an E_SET_ROTATION event to the Scenegraph component of the given entity
	 */
	SCENEGRAPHAPI void setEntityRotation(unsigned int entityWorldID, float x, float y, float z);

	/**
	 * Sends an E_SET_SCLAE event to the Scenegraph component of the given entity
	 */
	SCENEGRAPHAPI void setEntityScale(unsigned int entityWorldID, float x, float y, float z);

	/**
	 * Translates the entity along it's local coordinate axis
	 */
	SCENEGRAPHAPI void translateEntityLocal(unsigned int entityWorldID, float x, float y, float z);

	/**
	 * Translates the entity along the world's coordinate axis
	 */
	SCENEGRAPHAPI void translateEntityGlobal(unsigned int entityWorldID, float x, float y, float z);
	 
	/**
	 * Rotate the entity about it's local coordinate axis
	 */
	SCENEGRAPHAPI void rotateEntityLocal(unsigned int entityWorldID, float x, float y, float z);

	/**
	 * Returns the Horde3D ID of the entity
	 */
	SCENEGRAPHAPI int entitySceneGraphID( unsigned int entityWorldID );

	/**
	 * \brief Sets the Horde3D ID of the scenegraph component
	 * 
	 * Does not remove the node from the scenegraph
	 * @param entityWorldID the id of the GameEntity that contains the scenegraph component
	 * @param sceneGraphID the new scenegraph id of the component
	 */
	SCENEGRAPHAPI void setEntitySceneGraphID( unsigned int entityWorldID, int sceneGraphID );

	/**
	 * Returns the Entity World ID for the given HordeID
	 */
	SCENEGRAPHAPI int sceneGraphEntityID( int hordeID );

	/**
	 * Render scene graph 
	 */
	SCENEGRAPHAPI void renderSceneGraph();

		/**
	 * Updates the scene manager to check for transformation changes done outside of the GameEngine
	 */
	SCENEGRAPHAPI void updateSceneGraph();

	/**
	 * Gets the horde id of the currently active camera 
	 */
	SCENEGRAPHAPI int getActiveCamera();

	/**
	 * Sets the current camera to given horde scene node (if valid)
	 */
	SCENEGRAPHAPI void setActiveCamera( int hordeID );

	/**
	 * Sends an E_MORPH_TARGET event to the Scenegraph component of the given entity
	 */
	SCENEGRAPHAPI void setMorphTarget( unsigned int entityWorldID, const char* target, float weight);

	/**
	 * Enables or deactivates rendering for the entity in Horde
	 */
	SCENEGRAPHAPI void setVisible( unsigned int entityWorldID, bool enable);

	/**
	 * Checks the attachment of the given horde node for an attachment and creates the corresponding entity and components
	 */
	SCENEGRAPHAPI void loadHorde3DAttachment( int hordeID );

	/**
	 * Sets a new PartentNode for a Node
	 */
	SCENEGRAPHAPI void setParentNode(unsigned int entityWorldIDChild, unsigned int entityWorldIDNewParent, const char* childInNewParent);

	/**
	 * Casts a ray from the provided screen coordinates and returns the name of the node hit. Coords contains the coordinates the node was hit at
	 */
	SCENEGRAPHAPI const char* pickNodeWithIntersectionCoords(float nwx, float nwy, float* coords);

	/**
	 * returns whether the entity given by the entityID is currently visible through the active cam
	 */ 
	SCENEGRAPHAPI bool getEntityVisiblitiy(unsigned int entityID);
	/**
	 * returns the bounding box of the entity
	*/
	SCENEGRAPHAPI void getEntityBoundingBox(unsigned int entityID, float* minX, float* minY, float* minZ, float* maxX, float* maxY, float* maxZ);

	/*! @}*/

}

#endif