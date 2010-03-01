// *************************************************************************************************
//
// Horde3D
//   Next-Generation Graphics Engine
// --------------------------------------
// Copyright (C) 2006-2009 Nicolas Schulz
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************

#include "egAnimation.h"
#include "egModules.h"
#include "egCom.h"
#include <string.h>

#include "utDebug.h"

using namespace std;


// =================================================================================================
// Animation Resource
// =================================================================================================

AnimationResource::AnimationResource( const string &name, int flags ) :
	Resource( ResourceTypes::Animation, name, flags )
{
	initDefault();	
}


AnimationResource::~AnimationResource()
{
	release();
}


Resource *AnimationResource::clone()
{
	AnimationResource *res = new AnimationResource( "", _flags );

	*res = *this;
	
	return res;
}


void AnimationResource::initDefault()
{
	_numFrames = 0;
}


void AnimationResource::release()
{
	_entities.clear();
}


bool AnimationResource::raiseError( const string &msg )
{
	// Reset
	release();
	initDefault();

	Modules::log().writeError( "Animation resource '%s': %s", _name.c_str(), msg.c_str() );
	
	return false;
}


bool AnimationResource::load( const char *data, int size )
{
	if( !Resource::load( data, size ) ) return false;

	// Make sure header is available
	if( size < 8 )
		return raiseError( "Invalid animation resource" );
	
	char *pData = (char *)data;
	
	// Check header and version
	char id[4];
	memcpy( &id, pData, 4 ); pData += 4;
	if( id[0] != 'H' || id[1] != '3' || id[2] != 'D' || id[3] != 'A' )
		return raiseError( "Invalid animation resource" );
	
	uint32 version;
	memcpy( &version, pData, sizeof( uint32 ) ); pData += sizeof( uint32 );
	if( version != 2 && version != 3 )
		return raiseError( "Unsupported version of animation resource" );
	
	// Load animation data
	uint32 numEntities;
	memcpy( &numEntities, pData, sizeof( uint32 ) ); pData += sizeof( uint32 );
	memcpy( &_numFrames, pData, sizeof( uint32 ) ); pData += sizeof( uint32 );

	_entities.resize( numEntities );

	for( uint32 i = 0; i < numEntities; ++i )
	{
		char name[256], compressed = 0;
		AnimResEntity &entity = _entities[i];
		
		memcpy( name, pData, 256 ); pData += 256;
		entity.name = name;
		
		// Animation compression
		if( version == 3 )
		{
			memcpy( &compressed, pData, sizeof( char ) ); pData += sizeof( char ); 
		}

		entity.frames.resize( compressed ? 1 : _numFrames );
		for( uint32 j = 0; j < (compressed ? 1 : _numFrames); ++j )
		{
			Frame &frame = entity.frames[j];

			memcpy( &frame.rotQuat.x, pData, sizeof( float ) ); pData += sizeof( float );
			memcpy( &frame.rotQuat.y, pData, sizeof( float ) ); pData += sizeof( float );
			memcpy( &frame.rotQuat.z, pData, sizeof( float ) ); pData += sizeof( float );
			memcpy( &frame.rotQuat.w, pData, sizeof( float ) ); pData += sizeof( float );

			memcpy( &frame.transVec.x, pData, sizeof( float ) ); pData += sizeof( float );
			memcpy( &frame.transVec.y, pData, sizeof( float ) ); pData += sizeof( float );
			memcpy( &frame.transVec.z, pData, sizeof( float ) ); pData += sizeof( float );

			memcpy( &frame.scaleVec.x, pData, sizeof( float ) ); pData += sizeof( float );
			memcpy( &frame.scaleVec.y, pData, sizeof( float ) ); pData += sizeof( float );
			memcpy( &frame.scaleVec.z, pData, sizeof( float ) ); pData += sizeof( float );

			// Prebake transformation matrix for fast animation path
			frame.bakedTransMat.scale( frame.scaleVec.x, frame.scaleVec.y, frame.scaleVec.z );
			frame.bakedTransMat = Matrix4f( frame.rotQuat ) * frame.bakedTransMat;
			frame.bakedTransMat.translate( frame.transVec.x, frame.transVec.y, frame.transVec.z );
		}

		if( !entity.frames.empty() )
			entity.firstFrameInvTrans = entity.frames[0].bakedTransMat.inverted();
	}
	
	return true;
}


int AnimationResource::getElemCount( int elem )
{
	switch( elem )
	{
	case AnimationResData::EntityElem:
		return (int)_entities.size();
	default:
		return Resource::getElemCount( elem );
	}
}


int AnimationResource::getElemParamI( int elem, int elemIdx, int param )
{
	switch( elem )
	{
	case AnimationResData::EntityElem:
		switch( param )
		{
		case AnimationResData::EntFrameCountI:
			return _numFrames;
		}
		break;
	}

	return Resource::getElemParamI( elem, elemIdx, param );
}


AnimResEntity *AnimationResource::findEntity( const string &name )
{
	for( uint32 i = 0; i < _entities.size(); ++i )
	{
		if( _entities[i].name == name ) return &_entities[i];
	}

	return 0x0;
}


// =================================================================================================
// Animation Controller
// =================================================================================================

AnimationController::AnimationController() :
	_dirty( false )
{
	_animStages.resize( MaxNumAnimStages, 0x0 );
	_activeStages.reserve( MaxNumAnimStages );
}


AnimationController::~AnimationController()
{
	for( uint32 i = 0; i < _animStages.size(); ++i )
		delete _animStages[i];
}


void AnimationController::clearNodeList()
{
	_nodeList.clear();
}


void AnimationController::registerNode( IAnimatableNode *node )
{
	AnimCtrlNode ctrlNode;
	ctrlNode.node = node;

	_nodeList.push_back( ctrlNode );

	for( uint32 i = 0; i < _animStages.size(); ++i )
	{
		if( _animStages[i] != 0x0 ) mapAnimRes( (uint32)_nodeList.size() - 1, i );
	}
}


void AnimationController::mapAnimRes( uint32 node, uint32 stage )
{
	static std::string maskStart, maskEnd;
	
	_dirty = true;
	
	AnimationResource *animRes = _animStages[stage]->anim;
	if( animRes == 0x0 )
	{	
		_nodeList[node].animEntities[stage] = 0x0;
		return;
	}

	// Animation mask
	bool includeNode = true;

	if( _animStages[stage]->startNode != "" )
	{
		includeNode = false;
		
		IAnimatableNode *animNode = _nodeList[node].node;
		while( animNode != 0x0 )
		{
			if( animNode->getANName() == _animStages[stage]->startNode )
			{
				includeNode = true;
				break;
			}
			animNode = animNode->getANParent();
		}
	}
	
	// Find node in animation resource if not masked out
	if( includeNode )
		_nodeList[node].animEntities[stage] = animRes->findEntity( _nodeList[node].node->getANName() );
	else
		_nodeList[node].animEntities[stage] = 0x0;
}


void AnimationController::updateActiveList()
{
	_activeStages.resize( 0 );
	
	// Create list of active blend stages that is sorted by layers (higher layers first)
	for( uint32 i = 0, s = (uint32)_animStages.size(); i < s; ++i )
	{
		if( _animStages[i] != 0x0 && !_animStages[i]->additive && _animStages[i]->anim != 0x0 )
		{
			bool inserted = false;
			for( uint32 j = 0, s = (uint32)_activeStages.size(); j < s; ++j )
			{
				if( _animStages[i]->layer >= _animStages[_activeStages[j]]->layer )
				{
					_activeStages.insert( _activeStages.begin() + j, i );
					inserted = true;
					break;
				}
			}

			if( !inserted ) _activeStages.push_back( i );
		}
	}
	
	// Add additive animations at the end
	for( uint32 i = 0, s = (uint32)_animStages.size(); i < s; ++i )
	{
		if( _animStages[i] != 0x0 && _animStages[i]->additive && _animStages[i]->anim != 0x0 )
		{
			_activeStages.push_back( i );
		}
	}
}


bool AnimationController::setupAnimStage( int stage, AnimationResource *anim, int layer,
                                          const string &startNode, bool additive )
{
	if( (unsigned)stage >= _animStages.size() )
	{	
		Modules::setError( "Invalid stage in h3dSetupModelAnimStage" );
		return false;
	}
	
	AnimStage *curStage = _animStages[stage];
	if( anim == 0x0 )
	{
		// Erase stage
		if( curStage != 0x0 )
		{
			delete _animStages[stage]; _animStages[stage] = 0x0;
		}
		
		_dirty = true;
	    updateActiveList();
		return true;
	}
	else if( curStage != 0x0 )
	{
		// Reset stage
		if( curStage->anim != 0x0 ) curStage->anim = 0x0;
	}
	else
	{
		// Create stage
		_animStages[stage] = new AnimStage();
		curStage = _animStages[stage];
	}
	
	curStage->anim = anim;
	curStage->layer = layer;
	curStage->startNode = startNode;
	curStage->additive = additive;

	for( size_t i = 0, s = _nodeList.size(); i < s; ++i )
		mapAnimRes( (uint32)i, stage );

	updateActiveList();
	return setAnimParams( stage, 0.0f, 1.0f );
}


bool AnimationController::setAnimParams( int stage, float time, float weight )
{
	if( (unsigned)stage > _animStages.size() )
	{	
		Modules::setError( "Invalid stage in h3dSetModelAnimParams" );
		return false;
	}

	AnimStage *curStage = _animStages[stage];
	if( curStage == 0x0 || curStage->anim == 0x0 ) return false;

	curStage->animTime = time;
	curStage->weight = weight;

	// Reset ignore animation flag
	for( size_t i = 0, s = _nodeList.size(); i < s; ++i )
		_nodeList[i].node->getANIgnoreAnimRef() = false;

	_dirty = true;
	
	return true;
}


bool AnimationController::animate()
{
	if( !_dirty || _activeStages.empty() ) return false;

	Quaternion nodeRotQuat;
	Vec3f nodeTransVec, nodeScaleVec;
	
	Timer *timer = Modules::stats().getTimer( EngineStats::AnimationTime );
	if( Modules::config().gatherTimeStats ) timer->setEnabled( true );
	
	// Animate
	for( size_t i = 0, s = _nodeList.size(); i < s; ++i )
	{
		// Ignore animation if node transformation was set manually
		if( _nodeList[i].node->getANIgnoreAnimRef() )
		{
			_nodeList[i].node->getANIgnoreAnimRef() = false;
			continue;
		}
		
		// Fast path
		if( Modules::config().fastAnimation && _activeStages.size() == 1 )
		{
			uint32 firstStage = _activeStages[0];
			AnimResEntity *animEnt = _nodeList[i].animEntities[firstStage];
			if( animEnt != 0x0 && !animEnt->frames.empty() )
			{
				uint32 frame = (uint32)ftoi_t( _animStages[firstStage]->animTime ) % animEnt->frames.size();
				if( animEnt->frames.size() == 1 ) frame = 0;  // Animation compression
				_nodeList[i].node->getANRelTransRef() = animEnt->frames[frame].bakedTransMat;
			}
			continue;
		}

		// Standard path
		bool nodeUpdated = false;
		float layerWeightSum = 0.0f, remainingWeight = 1.0f;
		int prevLayer = 0;

		for( size_t j = 0, s = _activeStages.size(); j < s; ++j )
		{
			uint32 stageIdx = _activeStages[j];
			AnimStage &curStage = *_animStages[stageIdx];

			// Check if layer has changed
			if( j == 0 || curStage.layer != prevLayer )
			{
				remainingWeight *= 1.0f - minf( layerWeightSum, 1.0f );
				
				// Find layer weight sum
				layerWeightSum = curStage.weight;
				for( size_t k = j + 1, s = _activeStages.size(); k < s; ++k )
				{
					if( _animStages[_activeStages[k]]->layer == curStage.layer )
						layerWeightSum += _animStages[_activeStages[k]]->weight;
					else
						break;
				}
				
				prevLayer = curStage.layer;
			}
			
			AnimResEntity *animEnt = _nodeList[i].animEntities[stageIdx];
			if( animEnt == 0x0 || layerWeightSum < Math::Epsilon ) continue;
			
			uint32 numFrames = (uint32)animEnt->frames.size();
			if( numFrames > 0 )
			{
				// Normalize weight and apply to remaining weight
				float weight = (curStage.weight / layerWeightSum) * remainingWeight;

				// Find frames
				uint32 f0 = ftoi_t( curStage.animTime );
				float amount = curStage.animTime - f0;
				f0 = f0 % numFrames;
				uint32 f1 = f0 + 1;
				if( f1 > numFrames - 1 ) f1 = numFrames - 1;
				if( numFrames == 1 ) f0 = f1 = 0;	// Animation compression

				// Assign data of first frame
				Frame &frame0 = animEnt->frames[f0];
				Vec3f transVec( frame0.transVec );
				Vec3f scaleVec( frame0.scaleVec );
				Quaternion rotQuat( frame0.rotQuat );

				// Inter-frame interpolation
				if( !Modules::config().fastAnimation )
				{
					Frame &frame1 = animEnt->frames[f1];
					transVec = transVec.lerp( frame1.transVec, amount );
					scaleVec = scaleVec.lerp( frame1.scaleVec, amount );
					rotQuat = rotQuat.nlerp( frame1.rotQuat, amount );
				}

				if( curStage.additive )
				{
					// Additive animations are only applied if there is some other animation before
					if( nodeUpdated )
					{
						// Add the difference to the first frame of the animation
						Frame &firstFrame = animEnt->frames[0];
					
						nodeRotQuat *= firstFrame.rotQuat.inverted() * rotQuat;
						nodeTransVec += transVec - firstFrame.transVec;
						nodeScaleVec.x *= 1 / firstFrame.scaleVec.x * scaleVec.x;
						nodeScaleVec.y *= 1 / firstFrame.scaleVec.y * scaleVec.y;
						nodeScaleVec.z *= 1 / firstFrame.scaleVec.z * scaleVec.z;
					}
				}
				else
				{
					if( !nodeUpdated )
					{
						nodeRotQuat = rotQuat;
						nodeTransVec = transVec;
						nodeScaleVec = scaleVec;
					}
					else
					{
						// Interpolate between current state and animation
						nodeRotQuat = nodeRotQuat.nlerp( rotQuat, weight );
						nodeTransVec = nodeTransVec.lerp( transVec, weight );
						nodeScaleVec = nodeScaleVec.lerp( scaleVec, weight );
					}
				}

				nodeUpdated = true;
			}
		}

		// Build matrix from animation data
		if( nodeUpdated )
		{
			Matrix4f mat( Math::NO_INIT );
			Matrix4f::fastMult43( mat, Matrix4f( nodeRotQuat ),
				Matrix4f::ScaleMat( nodeScaleVec.x, nodeScaleVec.y, nodeScaleVec.z ) );
			Matrix4f::fastMult43( _nodeList[i].node->getANRelTransRef(),
				Matrix4f::TransMat( nodeTransVec.x, nodeTransVec.y, nodeTransVec.z ), mat );
		}
	}

	timer->setEnabled( false );

	_dirty = false;
	return true;
}
