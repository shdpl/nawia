// *************************************************************************************************
//
// Horde3D Sound Extension is made available under the MIT License.
// --------------------------------------
//
// Copyright (c) 2008-2010 Ulf Nilsson T�nnstr�m
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// *************************************************************************************************

#include "listener.h"
#include <al.h>

#include "egModules.h"
#include "utPlatform.h"
#include "utMath.h"

#include "manager.h"

#include "utDebug.h"


using namespace Horde3D;

namespace Horde3DSound {

// =================================================================================================
// Class ListenerNode
// =================================================================================================

ListenerNode::ListenerNode( const ListenerNodeTpl &listenerTpl ) :
	SceneNode( listenerTpl ),
	_gain( listenerTpl.gain ),
	_dopplerFactor( listenerTpl.dopplerFactor ),
	_speedOfSound( listenerTpl.speedOfSound )
{
	if( listenerTpl.active )
	{
		SoundManager::instance()->setActiveListener( this );
	}
}

ListenerNode::~ListenerNode()
{
	if( SoundManager::instance()->getActiveListener() == this )
	{
		SoundManager::instance()->setActiveListener( 0x0 );
	}
}

SceneNodeTpl *ListenerNode::parsingFunc( std::map< std::string, std::string > &attribs )
{
	std::map< std::string, std::string >::iterator itr;
	ListenerNodeTpl *listenerTpl = new ListenerNodeTpl( "" );

	itr = attribs.find( "active" );
	if( itr != attribs.end() )
	{
		if ( _stricmp( itr->second.c_str(), "true" ) == 0 || _stricmp( itr->second.c_str(), "1" ) == 0 )
			listenerTpl->active = true;
	}

	itr = attribs.find( "gain" );
	if( itr != attribs.end() )
	{
		listenerTpl->gain = (float)atof( itr->second.c_str() );

		if( listenerTpl->gain < 0.0f )
			listenerTpl->gain = 0.0f;
	}

	itr = attribs.find( "dopplerFactor" );
	if( itr != attribs.end() )
	{
		listenerTpl->dopplerFactor = (float)atof( itr->second.c_str() );

		if( listenerTpl->dopplerFactor < 0.0f )
			listenerTpl->dopplerFactor = 0.0f;
	}

	itr = attribs.find( "speedOfSound" );
	if( itr != attribs.end() )
	{
		listenerTpl->speedOfSound = (float)atof( itr->second.c_str() );

		if( listenerTpl->speedOfSound < 0.0f )
			listenerTpl->speedOfSound = 0.0f;
	}

	return listenerTpl;
}

SceneNode *ListenerNode::factoryFunc( const SceneNodeTpl &nodeTpl )
{
	if( nodeTpl.type != SNT_ListenerNode )
		return 0x0;

	return new ListenerNode( *(ListenerNodeTpl *)&nodeTpl );
}

float ListenerNode::getParamF( int param, int compIdx )
{
	switch( param )
	{
	case ListenerNodeParams::MasterGain:
		return _gain;
	case ListenerNodeParams::DopplerFactor:
		return _dopplerFactor;
	case ListenerNodeParams::SpeedOfSound:
		return _speedOfSound;
	default:
		return SceneNode::getParamF( param, compIdx );
	}
}

void ListenerNode::setParamF( int param, int compIdx, float value )
{
	switch( param )
	{
	case ListenerNodeParams::MasterGain:
		_gain = value;

		if( _gain < 0.0f )
			_gain = 0.0f;

		//only set the master gain if we are active
		if( SoundManager::instance()->getActiveListener() == this )
			alListenerf( AL_GAIN, _gain );

		return;
	case ListenerNodeParams::DopplerFactor:
		_dopplerFactor = value;

		if( _dopplerFactor < 0.0f )
			_dopplerFactor = 0.0f;

		//only set the the doppler factor if we are active
		if( SoundManager::instance()->getActiveListener() == this )
			alDopplerFactor( _dopplerFactor );

		return;
	case ListenerNodeParams::SpeedOfSound:
		_speedOfSound = value;

		if( _speedOfSound < 0.0f )
			_speedOfSound = 0.0f;

		//only set the the speed of sound if we are active
		if( SoundManager::instance()->getActiveListener() == this )
			alSpeedOfSound( _speedOfSound );

		return;
	default:
		SceneNode::setParamF( param, compIdx, value );
	}
}

void ListenerNode::onPostUpdate()
{
	//this gets called after absolute transformation has been updated

	//make sure we are the active listener before updating position and orientation
	if( SoundManager::instance()->getActiveListener() == this )
		updatePositionAndOrientation();
}

void ListenerNode::activate()
{
	alListenerf( AL_GAIN, _gain );
	alDopplerFactor( _dopplerFactor );
	alSpeedOfSound( _speedOfSound );

	updatePositionAndOrientation();
}

void ListenerNode::deactivate()
{
}

void ListenerNode::updatePositionAndOrientation()
{
	//get absolute transformation of node, by default OpenAL uses absolute transformations
	const float *absMatPtr;
	getTransMatrices( 0x0, &absMatPtr );
	Matrix4f absMat( absMatPtr );

	Vec3f trans, rot, scale;
	absMat.decompose( trans, rot, scale );
	alListener3f( AL_POSITION, trans.x, trans.y, trans.z );

	//remove translation
	absMat.x[12] = 0;
	absMat.x[13] = 0;
	absMat.x[14] = 0;

	Vec3f forward = ( absMat * Vec3f( 0, 0, -1 ) ).normalized();
	Vec3f up = ( absMat * Vec3f( 0, 1, 0 ) ).normalized();

	float orientation[6];
	orientation[0] = forward.x;
	orientation[1] = forward.y;
	orientation[2] = forward.z;
	orientation[3] = up.x;
	orientation[4] = up.y;
	orientation[5] = up.z;

	alListenerfv( AL_ORIENTATION, orientation );
}

} // namespace