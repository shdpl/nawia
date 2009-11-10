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
#include "SceneGraphComponent.h"

#include <GameEngine/GameLog.h>
#include <GameEngine/GameEvent.h>
#include <GameEngine/GameWorld.h>
#include <GameEngine/GameModules.h>
#include <GameEngine/GameEntity.h>

#include <XMLParser/utXMLParser.h>

#include <Horde3D/Horde3D.h>
#include <Horde3D/Horde3DTerrain.h>

#include "SceneGraph.h"

GameComponent* SceneGraphComponent::createComponent( GameEntity* owner )
{
	return new SceneGraphComponent( owner );
}

SceneGraphComponent::SceneGraphComponent( GameEntity* owner) : GameComponent(owner, "Horde3D"), 
	m_hordeID(0), m_visibilityFlag(0), m_terrainGeoRes(0)
{
	// Initialize Memory for transformation
	m_transformation = new float[16];

	owner->addListener(GameEvent::E_SET_TRANSFORMATION, this);
	owner->addListener(GameEvent::E_TRANSFORMATION, this);
	owner->addListener(GameEvent::E_TRANSLATE_LOCAL, this);
	owner->addListener(GameEvent::E_TRANSLATE_GLOBAL, this);
	owner->addListener(GameEvent::E_ROTATE_LOCAL, this);
	owner->addListener(GameEvent::E_MESH_DATA, this);
	owner->addListener(GameEvent::E_MORPH_TARGET, this);
	owner->addListener(GameEvent::E_SET_ROTATION, this);
	owner->addListener(GameEvent::E_SET_SCALE, this);
	owner->addListener(GameEvent::E_ACTIVATE_CAM, this);
	owner->addListener(GameEvent::E_SETUP_ANIM, this);
	owner->addListener(GameEvent::E_SET_ANIM_FRAME, this);
	owner->addListener(GameEvent::E_SET_TRANSLATION, this);
	owner->addListener(GameEvent::E_SET_NODE_PARENT, this);
	owner->addListener(GameEvent::E_ATTACH, this);
	owner->addListener(GameEvent::E_COLLISION, this);
	owner->addListener(GameEvent::E_SET_ENABLED, this);
	owner->addListener(GameEvent::E_GET_ACTIVE_CAM, this);
	owner->addListener(GameEvent::E_VISIBILITY, this);
	//printf("ID added %d\n", hordeID);
	SceneGraphManager::instance()->addComponent( this );
}

SceneGraphComponent::~SceneGraphComponent()
{
	delete[] m_transformation;
	if (m_hordeID != 0 && h3dGetNodeType(m_hordeID) != H3DNodeTypes::Undefined)
		h3dRemoveNode(m_hordeID);	
	SceneGraphManager::instance()->removeComponent(this);
	unloadTerrainGeoRes();
}

void SceneGraphComponent::setHordeID( H3DNode id )
{
	m_hordeID = id;

	if( id != 0 )
	{
		const float* t = 0x0;
		h3dGetNodeTransMats(id, 0, &t);
		// Copy absolute transformation of scene graph resource to the member variable
		if( t != 0x0 )
			memcpy(m_transformation, t, sizeof(m_transformation) * 16);
		else
			GameLog::errorMessage("Error retrieving absolute transformation matrix for HordeID %d", id);
	}
}

void SceneGraphComponent::executeEvent(GameEvent *event)
{
	switch (event->id())
	{
	case GameEvent::E_SET_TRANSFORMATION:
		setTransformation(static_cast<const float*>(event->data()));
		break;
	case GameEvent::E_TRANSFORMATION:
		memcpy(static_cast<float*>(event->data()), m_transformation, sizeof(m_transformation) * 16);
		break;
	case GameEvent::E_SET_TRANSLATION:
		{
			Vec3f* translation = static_cast<Vec3f*>(event->data());
			m_transformation[12] = translation->x;
			m_transformation[13] = translation->y;
			m_transformation[14] = translation->z;
			sendTransformation();
		}
		break;
	case GameEvent::E_SET_SCALE:
		setScale(static_cast<Vec3f*>(event->data()));
		break;
	case GameEvent::E_MESH_DATA:
		getMeshData(static_cast<MeshData*>(event->data()));
		break;
	case GameEvent::E_TRANSLATE_LOCAL:
		translateLocal(static_cast<Vec3f*>(event->data()));
		break;
	case GameEvent::E_TRANSLATE_GLOBAL:
		translateGlobal(static_cast<Vec3f*>(event->data()));
		break;
	case GameEvent::E_ROTATE_LOCAL:
		rotate(static_cast<Vec3f*>(event->data()));
		break;
	case GameEvent::E_SET_ROTATION:
		setRotation(static_cast<Vec3f*>(event->data()));
		break;
	case GameEvent::E_ATTACH:
		attach(static_cast<Attach*>(event->data()));
		break;	
	case GameEvent::E_SET_NODE_PARENT:
		setParentNode(static_cast<Attach*>(event->data()));
		break;
	case GameEvent::E_MORPH_TARGET:
		h3dSetModelMorpher(m_hordeID, static_cast<MorphTarget*>(event->data())->Name, static_cast<MorphTarget*>(event->data())->Value);
		break;
	case GameEvent::E_ACTIVATE_CAM:
		if (h3dGetNodeType(m_hordeID) == H3DNodeTypes::Camera)
			SceneGraphManager::instance()->setActiveCam( m_hordeID );
		break;
	case GameEvent::E_SETUP_ANIM:
		{
			SetupAnim* data = static_cast<SetupAnim*>(event->data());
			h3dSetupModelAnimStage(m_hordeID, data->Stage, data->ResourceID, 0, data->Mask, data->Additive);
		}
		break;
	case GameEvent::E_SET_ANIM_FRAME:
		{
			const SetAnimFrame* const data = static_cast<SetAnimFrame*>(event->data());			
			h3dSetModelAnimParams(m_hordeID, data->Stage, data->Time, data->Weight);			
		}
		break;
	case GameEvent::E_SET_ENABLED:
		setEnabled(*static_cast<bool*>(event->data()));
		break;
	case GameEvent::E_VISIBILITY:
		{
			bool* visible = static_cast<bool*>(event->data());
			if (visible)
				*visible = getVisibility();
		}
		break;
	case GameEvent::E_GET_ACTIVE_CAM:
		if (SceneGraphManager::instance()->getActiveCam() == m_hordeID)
		{
			unsigned int* id = static_cast<unsigned int*>(event->data());
			if (id)
				*id = m_owner->worldId();
		}
		break;
	}
}

void SceneGraphComponent::update()
{
	// Check if transformation has been changed (e.g. by a transformation change of a parent node)
	if ( h3dCheckNodeTransFlag( m_hordeID, true ) )
	{
		// Update the locally stored global transformation 
		const float* absTrans = 0;
		h3dGetNodeTransMats(m_hordeID, 0, &absTrans);
		memcpy(m_transformation, absTrans, sizeof(m_transformation) * 16);

		GameEvent event(GameEvent::E_SET_TRANSFORMATION, GameEventData(m_transformation, 16), this);
		m_owner->executeEvent(&event);		
	}
	m_visibilityFlag = 0;
}

void SceneGraphComponent::loadFromXml( const XMLNode* description )
{
	const char* id = description->getAttribute("id", "0");
	int newID = atoi(id);
	
	// Remove component
	if( newID == 0 && m_hordeID != 0)
	{
		m_hordeID = newID;
		SceneGraphManager::instance()->removeComponent(this);
		GameLog::errorMessage( " No valid Horde3D ID for SceneGraphComponent in entity '%s'", m_owner->id().c_str() );	
	}
	// Change component
	else if ( m_hordeID != 0 && m_hordeID != newID )
	{
		GameLog::errorMessage(" Warning: The scene graph component for entity '%s' has been already initialized with '%d' Untested behavior!", m_owner->id().c_str(), m_hordeID);

	}
	//
	if( newID != 0 )
	{
		m_hordeID = newID;
		const float* trans = 0;
		h3dGetNodeTransMats(m_hordeID, 0, &trans);
		if( trans )
		{
			SceneGraphManager::instance()->addComponent(this);
			memcpy( m_transformation, trans, sizeof( float ) * 16 );
		}
		else
		{
			m_hordeID = 0;
			SceneGraphManager::instance()->removeComponent(this);
			GameLog::errorMessage("Entity '%s': The ID '%d' seems to be no valid Horde3D ID!", m_owner->id().c_str(), newID);
		}
	}
		
}

void SceneGraphComponent::setTransformation(const float *transformation)
{
	memcpy(m_transformation, transformation, sizeof(m_transformation) * 16);
	sendTransformation();
}

void SceneGraphComponent::sendTransformation()
{
	const float* parentMat = 0;
	// since the event transformation is absolute we have to create a relative transformation matrix for Horde3D
	h3dGetNodeTransMats(h3dGetNodeParent(m_hordeID), 0, &parentMat);		
	if (parentMat) h3dSetNodeTransMat(m_hordeID, (Matrix4f(parentMat).inverted() * Matrix4f(m_transformation)).x);
	// ensure reset of Horde3D transformation flag since we have updated it from the GameEngine and such don't need to be informed 
	// when calling SceneGraphComponent::update() (note that the node transformed flag will be set again if someone else will update
	// the transformation from outside, so this way of avoiding unnecessary updates should be safe)
	h3dCheckNodeTransFlag( m_hordeID, true );
	//printf("SceneGraphComponent::setTransformation\n\t %.3f, %.3f, %.3f\n", transformation[12], transformation[13], transformation[14]);	
}

void SceneGraphComponent::getMeshData(MeshData* data)
{
	H3DRes geoResource = 0;
	int vertexOffset = 0;
	int indexOffset = 0;
	switch(h3dGetNodeType(m_hordeID))
	{
	case H3DNodeTypes::Mesh:
		geoResource = h3dGetNodeParamI(h3dGetNodeParent(m_hordeID), H3DModel::GeoResI);
		data->NumVertices = h3dGetNodeParamI(m_hordeID, H3DMesh::VertREndI) - h3dGetNodeParamI(m_hordeID, H3DMesh::VertRStartI) + 1;
		data->NumTriangleIndices = h3dGetNodeParamI(m_hordeID, H3DMesh::BatchCountI);		
		data->VertRStart = h3dGetNodeParamI(m_hordeID, H3DMesh::VertRStartI);
		vertexOffset = h3dGetNodeParamI(m_hordeID, H3DMesh::VertRStartI) * 3;
		indexOffset = h3dGetNodeParamI(m_hordeID, H3DMesh::BatchStartI);
		break;
	case H3DNodeTypes::Model:
		geoResource = h3dGetNodeParamI(m_hordeID, H3DModel::GeoResI);
		data->NumVertices = h3dGetResParamI(geoResource, H3DGeoRes::GeometryElem, 0, H3DGeoRes::GeoVertexCountI);
		data->NumTriangleIndices = h3dGetResParamI(geoResource, H3DGeoRes::GeometryElem, 0, H3DGeoRes::GeoIndexCountI);		
		break;
	case H3DEXT_NodeType_Terrain:
		unloadTerrainGeoRes();
		geoResource = h3dextCreateTerrainGeoRes( 
			m_hordeID, 
			h3dGetNodeParamStr( m_hordeID, H3DNodeParams::NameStr ), 
			h3dGetNodeParamF( m_hordeID, H3DEXTTerrain::MeshQualityF, 0) );		
		data->NumVertices = h3dGetResParamI(geoResource, H3DGeoRes::GeometryElem, 0, H3DGeoRes::GeoVertexCountI);
		data->NumTriangleIndices = h3dGetResParamI(geoResource, H3DGeoRes::GeometryElem, 0, H3DGeoRes::GeoIndexCountI);		
		m_terrainGeoRes = geoResource;
		break;
	}
	float* vb = (float*)h3dMapResStream(geoResource, H3DGeoRes::GeometryElem, 0, H3DGeoRes::GeoVertPosStream, true, false);
	data->VertexBase = new float[(data->NumVertices*3)];
	memcpy(data->VertexBase, vb+vertexOffset, sizeof(float)*data->NumVertices*3);
	h3dUnmapResStream(geoResource);

	//Triangle indices, must cope with 16 bit and 32 bit
	if (h3dGetResParamI(geoResource, H3DGeoRes::GeometryElem, 0, H3DGeoRes::GeoIndices16I)) {
		unsigned short* tb = (unsigned short*)h3dMapResStream(geoResource, H3DGeoRes::GeometryElem, 0, H3DGeoRes::GeoIndexStream, true, false);
		data->TriangleBase16 = new unsigned short[data->NumTriangleIndices];
		memcpy(data->TriangleBase16, tb+indexOffset, sizeof(unsigned short)*data->NumTriangleIndices);
		h3dUnmapResStream(geoResource);
	} else {
		unsigned int* tb = (unsigned int*)h3dMapResStream(geoResource, H3DGeoRes::GeometryElem, 0, H3DGeoRes::GeoIndexStream, true, false);
		data->TriangleBase32 = new unsigned int[data->NumTriangleIndices];
		memcpy(data->TriangleBase32, tb+indexOffset, sizeof(unsigned int)*data->NumTriangleIndices);
		h3dUnmapResStream(geoResource);
	}
	//data->TriangleMode = Horde3D::getResourceParami(geoResource, GeometryResParams::TriangleMode);
}

void SceneGraphComponent::translateLocal(const Vec3f* translation)
{
	// ensure that m_transfomration is up to date
	update();

	/*Matrix4f trans(m_transformation);
	Vec3f t( (trans * *translation) );
	trans.x[12] = t.x;
	trans.x[13] = t.y;
	trans.x[14] = t.z;
	GameEvent event(GameEvent::E_SET_TRANSFORMATION, GameEventData(trans.x, 16), 0);*/
	
	Vec3f t( (Matrix4f(m_transformation) * *translation) );
	m_transformation[12] = t.x;
	m_transformation[13] = t.y;
	m_transformation[14] = t.z;
	// Send transformation to horde
	sendTransformation();
	//and to the other components
	GameEvent event(GameEvent::E_SET_TRANSFORMATION, GameEventData(m_transformation, 16), this);
	if (m_owner->checkEvent(&event))
		// Synchronize component transformations
		m_owner->executeEvent(&event);
}

void SceneGraphComponent::translateGlobal(const Vec3f* translation)
{
	// ensure that m_transfomration is up to date
	update();

	/*Matrix4f trans(m_transformation);
	trans.x[12] += translation->x;
	trans.x[13] += translation->y;
	trans.x[14] += translation->z;
	GameEvent event(GameEvent::E_SET_TRANSFORMATION, GameEventData(trans.x, 16), 0);*/

	m_transformation[12] += translation->x;
	m_transformation[13] += translation->y;
	m_transformation[14] += translation->z;
	// Send transformation to horde
	sendTransformation();
	//and to the other components
	GameEvent event(GameEvent::E_SET_TRANSFORMATION, GameEventData(m_transformation, 16), this);
	if (m_owner->checkEvent(&event))
		// Synchronize component transformations
		m_owner->executeEvent(&event);
}

void SceneGraphComponent::setScale(const Vec3f *scale)
{
	/*Vec3f tr,rotation,sc;
	Matrix4f(m_transformation).decompose(tr,rotation,sc);	
	
	Matrix4f trans = Matrix4f::ScaleMat( scale->x, scale->y, scale->z );
	trans = trans * Matrix4f(Quaternion(rotation.x, rotation.y, rotation.z));
	trans.translate(m_transformation[12], m_transformation[13], m_transformation[14]);
	
	GameEvent event(GameEvent::E_SET_TRANSFORMATION, GameEventData(trans.x, 16), 0);*/

	Vec3f tr,rotation,sc;
	Matrix4f(m_transformation).decompose(tr,rotation,sc);	
	
	Matrix4f trans = Matrix4f::ScaleMat( scale->x, scale->y, scale->z );
	trans = trans * Matrix4f(Quaternion(rotation.x, rotation.y, rotation.z));
	trans.translate(tr.x, tr.y, tr.z);
	memcpy( m_transformation, trans.x, sizeof( float ) * 16 );
	// Send transformation to horde
	sendTransformation();
	//and to the other components
	GameEvent event(GameEvent::E_SET_TRANSFORMATION, GameEventData(m_transformation, 16), this);
	if (m_owner->checkEvent(&event))
		// Synchronize component transformations
		m_owner->executeEvent(&event);
}


void SceneGraphComponent::rotate(const Vec3f* rotation)
{
	// ensure that m_transfomration is up to date
	update();

	Matrix4f trans( Matrix4f(m_transformation) * Matrix4f(Quaternion(degToRad(rotation->x), degToRad(rotation->y), degToRad(rotation->z))) );
	
	// Create event without sender attribute, such the scenegraph component will be updated using executeEvent too
	/*GameEvent event(GameEvent::E_SET_TRANSFORMATION, &GameEventData(trans.x, 16), 0);*/

	memcpy( m_transformation, trans.x, sizeof( float ) * 16 );
	// Send transformation to horde
	sendTransformation();
	//and to the other components
	GameEvent event(GameEvent::E_SET_TRANSFORMATION, &GameEventData(trans.x, 16), this);
	// Check if the new transformation can be set
	if (m_owner->checkEvent(&event))
		// Synchronize component transformations
		m_owner->executeEvent(&event);
}

void SceneGraphComponent::setRotation(const Vec3f* rotation)
{	
	Vec3f scale = Matrix4f(m_transformation).getScale();	
	Matrix4f trans = Matrix4f::ScaleMat( scale.x, scale.y, scale.z );
	trans = trans * Matrix4f(Quaternion(degToRad(rotation->x), degToRad(rotation->y), degToRad(rotation->z)));
	trans.translate(m_transformation[12], m_transformation[13], m_transformation[14]);
	
	// Create event without sender attribute, such the scenegraph component will be updated using executeEvent too
	//GameEvent event(GameEvent::E_SET_TRANSFORMATION, &GameEventData(trans.x, 16), 0);

	memcpy( m_transformation, trans.x, sizeof( float ) * 16 );
	// Send transformation to horde
	sendTransformation();
	//and to the other components
	GameEvent event(GameEvent::E_SET_TRANSFORMATION, &GameEventData(trans.x, 16), this);
	// Check if the new transformation can be set
	if (m_owner->checkEvent(&event))
		// Synchronize component transformations
		m_owner->executeEvent(&event);
}
void SceneGraphComponent::setParentNode(const Attach* data)
{
	H3DNode otherNode;
	int nodes;
	
	if(strcmp(data->EntityID,"Root") == 0 )
	{
		otherNode = H3DRootNode;
	}
	else
	{
		nodes = h3dFindNodes( H3DRootNode, data->EntityID, H3DNodeTypes::Model );
		otherNode = h3dGetNodeFindResult(0);
	}
	
	
	if(strcmp(data->Child,"") !=0 )
	{
		nodes = h3dFindNodes( otherNode, data->Child, H3DNodeTypes::Undefined );
		H3DNode child = h3dGetNodeFindResult(0);
	
		h3dSetNodeParent(m_hordeID, child);
	}
	else
	{
		h3dSetNodeParent(m_hordeID, otherNode);
	}

	h3dSetNodeTransform(m_hordeID,data->Tx,data->Ty, data->Tz,
		data->Rx, data->Ry, data->Rz,
		data->Sx, data->Sy, data->Sz);

	update();
}

void SceneGraphComponent::attach(const Attach* data)
{
	//Assuming the entity has the same name as the node it is attached to
	int nodes = h3dFindNodes(H3DRootNode, data->EntityID, H3DNodeTypes::Model );
	H3DNode otherNode = h3dGetNodeFindResult(0);

	nodes = h3dFindNodes( m_hordeID, data->Child, H3DNodeTypes::Undefined );
	H3DNode child = h3dGetNodeFindResult(0);

	// Proposal: create a SET_NODE_PARENT event, send this event to the data->EntityID using GameEngine::sendEvent
	h3dSetNodeParent(otherNode, child);
	
	h3dSetNodeTransform(otherNode,data->Tx,data->Ty, data->Tz,
		data->Rx, data->Ry, data->Rz,
		data->Sx, data->Sy, data->Sz);
}

void SceneGraphComponent::setEnabled(bool enable)
{
	h3dSetNodeActivation(m_hordeID, enable);
}

void SceneGraphComponent::unloadTerrainGeoRes()
{
	if( m_terrainGeoRes != 0 )
	{
		h3dRemoveResource( m_terrainGeoRes );
		h3dReleaseUnusedResources();
		m_terrainGeoRes = 0;
	}
}

bool SceneGraphComponent::getVisibility()
{
	if (m_visibilityFlag == 0)
	{
		if (h3dCheckNodeVisibility(hordeId(), SceneGraphManager::instance()->getActiveCam(), true, false) != -1)
			m_visibilityFlag = 1;
		else
			m_visibilityFlag = 2;
	}
	return (m_visibilityFlag == 1);
}
