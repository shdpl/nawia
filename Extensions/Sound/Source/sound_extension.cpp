// *************************************************************************************************
//
// Horde3D Sound Extension is made available under the MIT License.
// --------------------------------------
//
// Copyright (c) 2008-2010 Ulf Nilsson Tännström
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

#include "sound_extension.h"
#include "utPlatform.h"
#include "egModules.h"
#include "egCom.h"

#include "manager.h"
#include "listener.h"
#include "soundResource.h"
#include "soundNode.h"

#include "decode_vorbis.h"
#include "decode_wave.h"

#include "utDebug.h"


// Internal extension interface
namespace Horde3DSound {

using namespace Horde3D;


// =================================================================================================
// Class ExtSound
// =================================================================================================

const char *ExtSound::getName()
{
	return "Sound";
}

bool ExtSound::init()
{
	Modules::resMan().registerType( RST_SoundResource, "Sound", 0x0, 0x0, SoundResource::factoryFunc );

	Modules::sceneMan().registerType( SNT_ListenerNode, "Listener", ListenerNode::parsingFunc, ListenerNode::factoryFunc, 0x0 );
	Modules::sceneMan().registerType( SNT_SoundNode, "Sound", SoundNode::parsingFunc, SoundNode::factoryFunc, 0x0 );

	SoundManager::instance()->init();
	SoundManager::instance()->registerDecoder( VorbisDecoder::determineCodec, VorbisDecoder::factoryFunc );
	SoundManager::instance()->registerDecoder( WaveDecoder::determineCodec, WaveDecoder::factoryFunc );

	return true;
}

void ExtSound::release()
{
	SoundManager::instance()->release();
}

} // namespace


// Public C API
namespace Horde3DSound {

std::string safeStr( const char *str )
{
	if ( str != 0x0 )
		return str;
	else
		return "";
}

struct H3DDistanceModels
{
	enum List
	{
		None = 0,
		InverseDistance,
		InverseDistanceClamped,
		LinearDistance,
		LinearDistanceClamped,
		ExponentDistance,
		ExponentDistanceClamped
	};
};

DLLEXP bool h3dOpenDevice( const char *device )
{
	return SoundManager::instance()->openDevice( device );
}

DLLEXP void h3dCloseDevice()
{
	SoundManager::instance()->closeDevice();
}

DLLEXP const char *h3dGetOpenDevice()
{
	return SoundManager::instance()->getOpenDevice();
}

DLLEXP const char *h3dQueryDevice( int index )
{
	return SoundManager::instance()->queryDevice( index );
}

DLLEXP H3DDistanceModels::List h3dGetDistanceModel()
{
	switch( alGetInteger( AL_DISTANCE_MODEL ) )
	{
	case AL_INVERSE_DISTANCE:
		return H3DDistanceModels::InverseDistance;
	case AL_INVERSE_DISTANCE_CLAMPED:
		return H3DDistanceModels::InverseDistanceClamped;
	case AL_LINEAR_DISTANCE:
		return H3DDistanceModels::LinearDistance;
	case AL_LINEAR_DISTANCE_CLAMPED:
		return H3DDistanceModels::LinearDistanceClamped;
	case AL_EXPONENT_DISTANCE:
		return H3DDistanceModels::ExponentDistance;
	case AL_EXPONENT_DISTANCE_CLAMPED:
		return H3DDistanceModels::ExponentDistanceClamped;
	default:
		return H3DDistanceModels::None;
	}
}

DLLEXP void h3dSetDistanceModel( H3DDistanceModels::List model )
{
	switch( model )
	{
	case H3DDistanceModels::None:
		alDistanceModel( AL_NONE );
		return;
	case H3DDistanceModels::InverseDistance:
		alDistanceModel( AL_INVERSE_DISTANCE );
		return;
	case H3DDistanceModels::InverseDistanceClamped:
		alDistanceModel( AL_INVERSE_DISTANCE_CLAMPED );
		return;
	case H3DDistanceModels::LinearDistance:
		alDistanceModel( AL_LINEAR_DISTANCE );
		return;
	case H3DDistanceModels::LinearDistanceClamped:
		alDistanceModel( AL_LINEAR_DISTANCE_CLAMPED );
		return;
	case H3DDistanceModels::ExponentDistance:
		alDistanceModel( AL_EXPONENT_DISTANCE );
		return;
	case H3DDistanceModels::ExponentDistanceClamped:
		alDistanceModel( AL_EXPONENT_DISTANCE_CLAMPED );
		return;
	default:
		Modules::setError( "Invalid elem, param or component in h3dSetDistanceModel" );
		return;
	}
}

DLLEXP int h3dAddListenerNode( int parent, const char *name )
{
	SceneNode *parentNode = Modules::sceneMan().resolveNodeHandle( parent );

	if( parentNode == 0x0 )
	{
		Modules::log().writeDebugInfo( "Invalid parent node handle %i in addListenerNode", parent );
		return 0;
	}

	Modules::log().writeInfo( "Adding Listener node '%s'", safeStr( name ).c_str() );

	ListenerNodeTpl tpl( safeStr( name ) );
	SceneNode *sn = Modules::sceneMan().findType( SNT_ListenerNode )->factoryFunc( tpl );

	return Modules::sceneMan().addNode( sn, *parentNode );
}

DLLEXP int h3dGetActiveListener()
{
	if( SoundManager::instance()->getActiveListener() == 0x0 )
		return 0;
	else
		return SoundManager::instance()->getActiveListener()->getHandle();
}

DLLEXP bool h3dSetActiveListener( int listenerNode )
{
	SceneNode *sn = Modules::sceneMan().resolveNodeHandle( listenerNode );

	if( sn != 0x0 && sn->getType() != SNT_ListenerNode )
	{
		Modules::log().writeDebugInfo( "Invalid Listener node %i in setActiveListener", listenerNode );
		return false;
	}

	Modules::log().writeInfo( "Setting active Listener node to '%s'", sn != 0x0? sn->getName().c_str() : "NULL");
	SoundManager::instance()->setActiveListener( (ListenerNode *)sn );

	return true;
}

DLLEXP int h3dAddSoundNode( int parent, const char *name, ResHandle soundRes )
{
	SceneNode *parentNode = Modules::sceneMan().resolveNodeHandle( parent );

	if( parentNode == 0x0 )
	{
		Modules::log().writeDebugInfo( "Invalid parent node handle %i in addSoundNode", parent );
		return 0;
	}

	Resource *res = Modules::resMan().resolveResHandle( soundRes );

	if( res == 0x0 || res->getType() != RST_SoundResource )
	{
		Modules::log().writeDebugInfo( "Invalid Sound resource %i in addSoundNode", soundRes );
		return 0;
	}

	Modules::log().writeInfo( "Adding Sound node '%s'", safeStr( name ).c_str() );

	SoundNodeTpl tpl( safeStr( name ), (SoundResource *)res );
	SceneNode *sn = Modules::sceneMan().findType( SNT_SoundNode )->factoryFunc( tpl );

	return Modules::sceneMan().addNode( sn, *parentNode );
}

DLLEXP bool h3dIsSoundPlaying( int soundNode )
{
	SceneNode *sn = Modules::sceneMan().resolveNodeHandle( soundNode );

	if( sn == 0x0 || sn->getType() != SNT_SoundNode )
	{
		Modules::log().writeDebugInfo( "Invalid Sound node %i in isSoundPlaying", soundNode );
		return false;
	}

	return ((SoundNode *)sn)->isPlaying();
}

DLLEXP void h3dPlaySound( int soundNode )
{
	SceneNode *sn = Modules::sceneMan().resolveNodeHandle( soundNode );

	if( sn == 0x0 || sn->getType() != SNT_SoundNode )
	{
		return Modules::log().writeDebugInfo( "Invalid Sound node %i in playSound", soundNode );
	}

	((SoundNode *)sn)->play();
}

DLLEXP void h3dPauseSound( int soundNode )
{
	SceneNode *sn = Modules::sceneMan().resolveNodeHandle( soundNode );

	if( sn == 0x0 || sn->getType() != SNT_SoundNode )
	{
		return Modules::log().writeDebugInfo( "Invalid Sound node %i in pauseSound", soundNode );
	}

	((SoundNode *)sn)->pause();
}

DLLEXP void h3dRewindSound( int soundNode )
{
	SceneNode *sn = Modules::sceneMan().resolveNodeHandle( soundNode );

	if( sn == 0x0 || sn->getType() != SNT_SoundNode )
	{
		return Modules::log().writeDebugInfo( "Invalid Sound node %i in rewindSound", soundNode );
	}

	bool wasPlaying = ((SoundNode *)sn)->isPlaying();

	((SoundNode *)sn)->rewind();

	if( wasPlaying )
		((SoundNode *)sn)->play();
}

} // namespace
