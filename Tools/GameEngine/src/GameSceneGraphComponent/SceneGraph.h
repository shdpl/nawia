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
#ifndef SCENEGRAPHMANAGER_H_
#define SCENEGRAPHMANAGER_H_

#include <GameEngine/GameComponentManager.h>
#include <vector>
#include <stack>

class SceneGraphComponent;

class SceneGraphManager : public GameComponentManager
{
public:

	static SceneGraphManager* instance();
	static void release();


	/**
	 * Adds a SceneGraphComponent to the scene graph manager
	 * @param node
	 * @return AddOn* pointer to a  SceneGraphComponent
	 */
	void addComponent(SceneGraphComponent* node);

	/**
	 * Removes the node from the scenegraph
	 * @param object pointer to the instance that should be removed
	 */
	void removeComponent(SceneGraphComponent* node);

	/**
	 * 
	 */
	void run() {}

	/**
	 * Renders the scene through Horde3D
	 */
	void render();

	/**
	 * Checks for transformation changes on scene graph nodes
	 */
	void update();

	/**
	 * If a new scene has been loaded we have to check for attached components
	 * this has to be done after the call to loadScene since other components might want to
	 * check for their settings in the scene file first
	 */
	void addNewHordeNode(int newSceneNode) { m_newSceneNodes.push( newSceneNode ); }


	void setActiveCam( int cameraID );

	int getActiveCam() { return m_activeCam; }

	/**
	* Creates a new GameEntity based on the given XML data 
	* @param xmlText data for game entity
	* @param node a scene graph id within Horde3D's scene graph (optional)
	*/
	unsigned int createGameEntity( const char *xmlText, int hordeID );


	int findEntity( int hordeID );

private:
	SceneGraphManager();
	~SceneGraphManager() {}

	static SceneGraphManager*			m_instance;

	int									m_activeCam;
	int									m_nextCam;
	std::vector<SceneGraphComponent*>	m_sceneGraphComponents;	
	std::stack<int>						m_newSceneNodes;

};

#endif