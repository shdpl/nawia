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
#ifndef SCENEGRAPHCOMPONENT_H_
#define SCENEGRAPHCOMPONENT_H_

#include <GameEngine/GameComponent.h>

#include <Horde3D/Horde3D.h>

class Vec3f;

/**
 * \brief Horde3D scene graph representation for entities
 * 
 * To access the Horde3D scene graph nodes from within the GameEngine a specific SceneGraphComponent can be
 * added to an entity. It allows some more convenient transformation manipulation than Horde3D and represents the
 * interface to most of the node manipulation methods of Horde3D.
 * 
 * It is also responsible for the synchronisation of transformation changes done using Horde3D with other components that
 * are using the Horde3D's transformation.
 * 
 * The internal transformation of the SceneGraphComponent is always represented as the absolute world transformation matrix
 * 
 * @author Volker Wiendl
 * @date Jun 2008
 */ 
class SceneGraphComponent : public GameComponent
{

public:
	/**
	 * \brief Factory method for SceneGraphComponent
	 * 
	 * To register the component in the GameEngineCore a static factory method has to be provided,
	 * that will create a new instance of this component.
	 * 
	 * @param owner the GameEntity that will contain the newly created compoment ( must not be Null )
	 * @return a new SceneGraphComponent instance (casted to the parent class)
	 */ 
	static GameComponent* createComponent( GameEntity* owner );

	/**
	 * \brief Constructor
	 * 
	 * Creates a new SceneGraphComponent that will be a part of the given entity
	 * @param owner the GameEntity that will contain the newly created component (must not be Null)
	 */ 
	SceneGraphComponent( GameEntity* owner );
	
	/**
	 * \brief Destructor	 
	 */ 
	~SceneGraphComponent();

	/**
	 * \brief Sets the Horde ID synchronized with the component
	 * 
	 * To avoid removement of Horde3D's representation when deleting the component you can
	 * set the components horde ID to zero before deleting it.
	 * @param id the ID of the node within Horde3D's scenegraph
	 */ 
	void setHordeID( H3DNode id );

	//void init();

	/**
	 * \brief Check if event can be executed 
	 * 
	 * Returns false if the provided event should be not executed.
	 * This can be usefull if a translation event is blocked e.g. by a collision detection
	 * @param event pointer to the event to test
	 * @return true if all components accept the event, false if one of the component has catched it and 
	 * don't want it to be executed
	 */
	bool checkEvent(GameEvent* event) {return true;}

	/**
	 * \brief Executes the provided event
	 * @param event pointer to the event to execute
	 */
	void executeEvent(GameEvent* event);

	/**
	 * \brief Synchronizes the transformations between Horde3D and the GameEngine
	 * 
	 * When Horde3D's checkNodeTransformFlag method returns true the internal transformation
	 * of the component will be set to the absolute transformation of the node and a E_SET_TRANSFORMATION
	 * event will be sent to all components aggregated in this entity
	 */ 
	void update();

	/**
	 * \brief Load component from XML description
	 * 
 	 * Initializes the component from the given XML data. The XML node has to be of the following structure
	 * \code <Horde3D id="0" /> \endcode <br>
	 * when setting the id to zero the component will be removed from the entity ( but not deleted! )
	 * use the Horde3D's scenegraph id for the id attribute.
	 * 
	 * @param description a XML Node representing the data for the component ( must not be null)
	 */ 
	void loadFromXml(const XMLNode* description);
	
	/**
	 * \brief Sets the component's transformation
	 * 
	 * The transformation has to be specified in the world's coordinate system. The relative transformation for
	 * Horde3D will be calculated automatically.
	 * 
	 * @param transformation the absolute world matrix for the component
	 */ 
	void setTransformation(const float* transformation);

	/**
	 * \brief Sends the current transformation to Horde3D
	 * 
	 */ 
	void sendTransformation();

	/**
	 * \brief Get the component's transformation
	 * 	 
	 * @return the absolute world matrix of the component
	 */ 
	const float* getTransformation() { return m_transformation; };

	/**
	 * \brief Number of object collisions within the last frame
	 * 	
	 * @return 
	 */ 
	const std::vector<int>& collisionList() { return m_currentCollisions; }

	/**
	 * \brief The Horde3D id of the node
	 * 
	 * @return Horde3D's scene graph node ID
	 */ 
	int hordeId() { return m_hordeID; }
private:
	
	void getMeshData(MeshData* data);
	void translateLocal(const Vec3f* translation);
	void translateGlobal(const Vec3f* translation);
	void rotate(const Vec3f* rotation);
	void setRotation(const Vec3f* rotation);
	void setScale(const Vec3f* scale);
	void attach(const Attach* data);
	void setVisible(bool visible);
	void setParentNode(const Attach* data);

	void unloadTerrainGeoRes();

	float*				m_transformation;
	H3DNode				m_hordeID;
	std::vector<int>	m_currentCollisions;

	int					m_terrainGeoRes;
};
#endif