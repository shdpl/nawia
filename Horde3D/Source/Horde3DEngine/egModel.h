// *************************************************************************************************
//
// Horde3D
//   Next-Generation Graphics Engine
// --------------------------------------
// Copyright (C) 2006-2009 Nicolas Schulz
//
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
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

#ifndef _egModel_H_
#define _egModel_H_

#include "egPrerequisites.h"
#include "egScene.h"
#include "egAnimatables.h"
#include "egGeometry.h"
#include "egAnimation.h"
#include "egMaterial.h"
#include "utMath.h"


const uint32 MaxNumAnimStages = 16;


// =================================================================================================
// Model Node
// =================================================================================================

struct ModelNodeParams
{
	enum List
	{
		GeometryRes = 200,
		SoftwareSkinning,
		LodDist1,
		LodDist2,
		LodDist3,
		LodDist4
	};
};

// =================================================================================================

struct ModelNodeTpl : public SceneNodeTpl
{
	PGeometryResource  geoRes;
	float              lodDist1, lodDist2, lodDist3, lodDist4;
	bool               softwareSkinning;

	ModelNodeTpl( const std::string &name, GeometryResource *geoRes ) :
		SceneNodeTpl( SceneNodeTypes::Model, name ), geoRes( geoRes ), softwareSkinning( false ),
			lodDist1( Math::MaxFloat ), lodDist2( Math::MaxFloat ),
			lodDist3( Math::MaxFloat ), lodDist4( Math::MaxFloat )
	{
	}
};

// =================================================================================================

struct Morpher	// Morph modifier
{
	std::string  name;
	uint32       index;  // Index of morph target in Geometry resource
	float        weight;
};

struct AnimStage
{
	PAnimationResource  anim;
	float               animTime;
	float               blendWeight;
	std::string         startNode;
	bool                additive;
};

struct NodeListEntry
{
	AnimatableSceneNode  *node;
	AnimResEntity        *animEntities[MaxNumAnimStages];


	NodeListEntry()
	{
		node = 0x0;
		for( uint32 i = 0; i < MaxNumAnimStages; ++i ) animEntities[i] = 0x0;
	}

	NodeListEntry( AnimatableSceneNode *node )
	{
		NodeListEntry();
		this->node = node;
	}
};

// =================================================================================================

class ModelNode : public SceneNode
{
protected:

	PGeometryResource             _geometryRes;
	PGeometryResource             _baseGeoRes;	// NULL if model does not have a private geometry copy
	float                         _lodDist1, _lodDist2, _lodDist3, _lodDist4;
	std::vector< Vec4f >          _skinMatRows;
	
	uint32                        _meshCount;  // Number of meshes in _animatedNodes
	std::vector< NodeListEntry >  _nodeList;  // List of the model's meshes followed by joints
	AnimStage                     *_animStages[MaxNumAnimStages];

	std::vector< Morpher >        _morphers;
	bool                          _softwareSkinning, _skinningDirty;
	bool                          _animDirty;  // Animation has changed	
	bool                          _nodeListDirty;  // An animatable node has been attached to model
	bool                          _morpherUsed, _morpherDirty;
	
	std::vector< uint32 >         _occQueries;
	std::vector< uint32 >         _lastVisited;

	ModelNode( const ModelNodeTpl &modelTpl );
	void recreateNodeListRec( SceneNode *node, bool firstCall );
	void updateStageAnimations( uint32 stage, const std::string &startNode );
	void markMeshBBoxesDirty();

	void onPostUpdate();
	void onFinishedUpdate();

public:

	~ModelNode();
	
	static SceneNodeTpl *parsingFunc( std::map< std::string, std::string > &attribs );
	static SceneNode *factoryFunc( const SceneNodeTpl &nodeTpl );

	void recreateNodeList();
	bool setupAnimStage( int stage, uint32 animRes, const std::string &startNode, bool additive );
	bool setAnimParams( int stage, float time, float weight );
	bool setMorphParam( const std::string &targetName, float weight );

	float getParamf( int param );
	bool setParamf( int param, float value );
	int getParami( int param );
	bool setParami( int param, int value );

	bool updateGeometry();
	uint32 calcLodLevel( const Vec3f &viewPoint );

	GeometryResource *getGeometryResource() { return _geometryRes; }
	bool jointExists( uint32 jointIndex ) { return jointIndex < _skinMatRows.size() / 3; }
	void setSkinningMat( uint32 index, const Matrix4f &mat )
		{ _skinMatRows[index * 3 + 0] = mat.getRow( 0 );
		  _skinMatRows[index * 3 + 1] = mat.getRow( 1 );
		  _skinMatRows[index * 3 + 2] = mat.getRow( 2 ); }
	void markNodeListDirty() { _nodeListDirty = true; }

	friend class SceneManager;
	friend class Renderer;
};

#endif // _egModel_H_
