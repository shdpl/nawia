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

SceneGraphComponent::SceneGraphComponent( GameEntity* owner) : GameComponent(owner, "Horde3D"), m_hordeID(0),
m_terrainGeoRes(0)
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
	//printf("ID added %d\n", hordeID);
	SceneGraphManager::instance()->addComponent( this );
}

SceneGraphComponent::~SceneGraphComponent()
{
	delete[] m_transformation;
	if (m_hordeID != 0 && Horde3D::getNodeType(m_hordeID) != SceneNodeTypes::Undefined)
		Horde3D::removeNode(m_hordeID);	
	SceneGraphManager::instance()->removeComponent(this);
	unloadTerrainGeoRes();
}

void SceneGraphComponent::setHordeID( NodeHandle id )
{
	m_hordeID = id;

	if( id != 0 )
	{
		const float* t = 0x0;
		Horde3D::getNodeTransformMatrices(id, 0, &t);
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
			setTransformation( m_transformation );
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
		Horde3D::setModelMorpher(m_hordeID, static_cast<MorphTarget*>(event->data())->Name, static_cast<MorphTarget*>(event->data())->Value);
		break;
	case GameEvent::E_ACTIVATE_CAM:
		if (Horde3D::getNodeType(m_hordeID) == SceneNodeTypes::Camera)
			SceneGraphManager::instance()->setActiveCam( m_hordeID );
		break;
	case GameEvent::E_SETUP_ANIM:
		{
			SetupAnim* data = static_cast<SetupAnim*>(event->data());
			Horde3D::setupModelAnimStage(m_hordeID, data->Stage, data->ResourceID, data->Mask, data->Additive);
		}
		break;
	case GameEvent::E_SET_ANIM_FRAME:
		{
			const SetAnimFrame* const data = static_cast<SetAnimFrame*>(event->data());			
			Horde3D::setModelAnimParams(m_hordeID, data->Stage, data->Time, data->Weight);			
		}
		break;
	case GameEvent::E_SET_ENABLED:
		setVisible(*static_cast<bool*>(event->data()));
		break;
	}
}

void SceneGraphComponent::update()
{
	// Check if transformation has been changed (e.g. by a transformation change of a parent node)
	if ( Horde3D::checkNodeTransformFlag( m_hordeID, true ) )
	{
		// Update the locally stored global transformation 
		const float* absTrans = 0;
		Horde3D::getNodeTransformMatrices(m_hordeID, 0, &absTrans);
		memcpy(m_transformation, absTrans, sizeof(m_transformation) * 16);

		GameEvent event(GameEvent::E_SET_TRANSFORMATION, GameEventData(m_transformation, 16), this);
		m_owner->executeEvent(&event);		
	}
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
		Horde3D::getNodeTransformMatrices(m_hordeID, 0, &trans);
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
	const float* parentMat = 0;
	// since the event transformation is absolute we have to create a relative transformation matrix for Horde3D
	Horde3D::getNodeTransformMatrices(Horde3D::getNodeParent(m_hordeID), 0, &parentMat);		
	if (parentMat) Horde3D::setNodeTransformMatrix(m_hordeID, (Matrix4f(parentMat).inverted() * Matrix4f(transformation)).x);
	// ensure reset of Horde3D transformation flag since we have updated it from the GameEngine and such don't need to be informed 
	// when calling SceneGraphComponent::update() (note that the node transformed flag will be set again if someone else will update
	// the transformation from outside, so this way of avoiding unnecessary updates should be safe)
	Horde3D::checkNodeTransformFlag( m_hordeID, true );
	//printf("SceneGraphComponent::setTransformation\n\t %.3f, %.3f, %.3f\n", transformation[12], transformation[13], transformation[14]);	

}

void SceneGraphComponent::getMeshData(MeshData* data)
{
	ResHandle geoResource = 0;
	int vertexOffset = 0;
	int indexOffset = 0;
	switch(Horde3D::getNodeType(m_hordeID))
	{
	case SceneNodeTypes::Mesh:
		geoResource = Horde3D::getNodeParami(Horde3D::getNodeParent(m_hordeID), ModelNodeParams::GeometryRes);
		data->NumVertices = Horde3D::getNodeParami(m_hordeID, MeshNodeParams::VertREnd) - Horde3D::getNodeParami(m_hordeID, MeshNodeParams::VertRStart) + 1;
		data->NumTriangleIndices = Horde3D::getNodeParami(m_hordeID, MeshNodeParams::BatchCount);		
		data->VertRStart = Horde3D::getNodeParami(m_hordeID, MeshNodeParams::VertRStart);
		vertexOffset = Horde3D::getNodeParami(m_hordeID, MeshNodeParams::VertRStart) * 3;
		indexOffset = Horde3D::getNodeParami(m_hordeID, MeshNodeParams::BatchStart);
		break;
	case SceneNodeTypes::Model:
		geoResource = Horde3D::getNodeParami(m_hordeID, ModelNodeParams::GeometryRes);
		data->NumVertices = Horde3D::getResourceParami(geoResource, GeometryResParams::VertexCount);
		data->NumTriangleIndices = Horde3D::getResourceParami(geoResource, GeometryResParams::IndexCount);		
		break;
	case SNT_TerrainNode:
		unloadTerrainGeoRes();
		geoResource = Horde3DTerrain::createGeometryResource( 
			m_hordeID, 
			Horde3D::getNodeParamstr( m_hordeID, SceneNodeParams::Name ), 
			Horde3D::getNodeParamf( m_hordeID, TerrainNodeParams::MeshQuality ) );		
		data->NumVertices = Horde3D::getResourceParami(geoResource, GeometryResParams::VertexCount);
		data->NumTriangleIndices = Horde3D::getResourceParami(geoResource, GeometryResParams::IndexCount);		
		m_terrainGeoRes = geoResource;
		break;
	}
	data->VertexBase = (const float*) Horde3D::getResourceData(geoResource, GeometryResParams::VertexData);
	if( data->VertexBase ) data->VertexBase += vertexOffset;
	data->TriangleBase = (unsigned int*) Horde3D::getResourceData(geoResource, GeometryResParams::IndexData);
	if( data->TriangleBase ) data->TriangleBase += indexOffset;

	//data->TriangleMode = Horde3D::getResourceParami(geoResource, GeometryResParams::TriangleMode);
}

void SceneGraphComponent::translateLocal(const Vec3f* translation)
{
	Matrix4f trans(m_transformation);
	Vec3f t( (trans * *translation) );
	trans.x[12] = t.x;
	trans.x[13] = t.y;
	trans.x[14] = t.z;
	GameEvent event(GameEvent::E_SET_TRANSFORMATION, GameEventData(trans.x, 16), 0);
	if (m_owner->checkEvent(&event))
		// Synchronize component transformations
		m_owner->executeEvent(&event);
}

void SceneGraphComponent::translateGlobal(const Vec3f* translation)
{
	Matrix4f trans(m_transformation);
	trans.x[12] += translation->x;
	trans.x[13] += translation->y;
	trans.x[14] += translation->z;
	GameEvent event(GameEvent::E_SET_TRANSFORMATION, GameEventData(trans.x, 16), 0);
	if (m_owner->checkEvent(&event))
		// Synchronize component transformations
		m_owner->executeEvent(&event);
}

void SceneGraphComponent::setScale(const Vec3f *scale)
{
	Vec3f tr,rotation,sc;
	Matrix4f(m_transformation).decompose(tr,rotation,sc);	
	
	Matrix4f trans = Matrix4f::ScaleMat( scale->x, scale->y, scale->z );
	trans = trans * Matrix4f(Quaternion(rotation.x, rotation.y, rotation.z));
	trans.translate(m_transformation[12], m_transformation[13], m_transformation[14]);
	
	GameEvent event(GameEvent::E_SET_TRANSFORMATION, GameEventData(trans.x, 16), 0);
	if (m_owner->checkEvent(&event))
		// Synchronize component transformations
		m_owner->executeEvent(&event);
}


void SceneGraphComponent::rotate(const Vec3f* rotation)
{
	Matrix4f trans( Matrix4f(m_transformation) * Matrix4f(Quaternion(degToRad(rotation->x), degToRad(rotation->y), degToRad(rotation->z))) );
	// Create event without sender attribute, such the scenegraph component will be updated using executeEvent too
	GameEvent event(GameEvent::E_SET_TRANSFORMATION, &GameEventData(trans.x, 16), 0);
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
	GameEvent event(GameEvent::E_SET_TRANSFORMATION, &GameEventData(trans.x, 16), 0);
	// Check if the new transformation can be set
	if (m_owner->checkEvent(&event))
		// Synchronize component transformations
		m_owner->executeEvent(&event);
}
void SceneGraphComponent::setParentNode(const Attach* data)
{
	NodeHandle otherNode;
	int nodes;
	
	if(strcmp(data->EntityID,"Root") == 0 )
	{
		otherNode = RootNode;
	}
	else
	{
		nodes = Horde3D::findNodes( RootNode, data->EntityID, SceneNodeTypes::Model );
		otherNode = Horde3D::getNodeFindResult(0);
	}
	
	
	if(strcmp(data->Child,"") !=0 )
	{
		nodes = Horde3D::findNodes( otherNode, data->Child, SceneNodeTypes::Undefined );
		NodeHandle child = Horde3D::getNodeFindResult(0);
	
		Horde3D::setNodeParent(m_hordeID, child);
	}
	else
	{
		Horde3D::setNodeParent(m_hordeID, otherNode);
	}

	Horde3D::setNodeTransform(m_hordeID,data->Tx,data->Ty, data->Tz,
		data->Rx, data->Ry, data->Rz,
		data->Sx, data->Sy, data->Sz);

	update();
}

void SceneGraphComponent::attach(const Attach* data)
{
	//Assuming the entity has the same name as the node it is attached to
	int nodes = Horde3D::findNodes( RootNode, data->EntityID, SceneNodeTypes::Model );
	NodeHandle otherNode = Horde3D::getNodeFindResult(0);

	nodes = Horde3D::findNodes( m_hordeID, data->Child, SceneNodeTypes::Undefined );
	NodeHandle child = Horde3D::getNodeFindResult(0);

	// Proposal: create a SET_NODE_PARENT event, send this event to the data->EntityID using GameEngine::sendEvent
	Horde3D::setNodeParent(otherNode, child);
	
	Horde3D::setNodeTransform(otherNode,data->Tx,data->Ty, data->Tz,
		data->Rx, data->Ry, data->Rz,
		data->Sx, data->Sy, data->Sz);
}

void SceneGraphComponent::setVisible(bool visible)
{
	Horde3D::setNodeActivation(m_hordeID, visible);
}

void SceneGraphComponent::unloadTerrainGeoRes()
{
	if( m_terrainGeoRes != 0 )
	{
		Horde3D::removeResource( m_terrainGeoRes );
		Horde3D::releaseUnusedResources();
		m_terrainGeoRes = 0;
	}
}
