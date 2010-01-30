// *************************************************************************************************
//
// Horde3D Sound Extension
// --------------------------------------
// Copyright (C) 2008-2009 Ulf Nilsson Tännström
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

#include "egModules.h"
#include "egCom.h"
#include "utPlatform.h"
#include "utMath.h"

#include "soundNode.h"
#include "manager.h"

	SoundNode::SoundNode( const SoundNodeTpl &soundTpl ) :
		SceneNode( soundTpl ),
		_soundRes( soundTpl.soundRes )
	{
		alGenSources( 1, &_source );
		SoundManager::instance()->checkALError( "generating source for Sound node '%s'", _name.c_str() );

		alSourcei( _source, AL_BUFFER, _soundRes->getBuffer() );
		alSourcei( _source, AL_LOOPING, soundTpl.loop? AL_TRUE : AL_FALSE );
		alSourcef( _source, AL_GAIN, soundTpl.gain );
		alSourcef( _source, AL_PITCH, soundTpl.pitch );
		alSourcef( _source, AL_SEC_OFFSET, soundTpl.offset );
		alSourcef( _source, AL_MAX_DISTANCE, soundTpl.maxDistance );
		alSourcef( _source, AL_ROLLOFF_FACTOR, soundTpl.rolloffFactor );
		alSourcef( _source, AL_REFERENCE_DISTANCE, soundTpl.referenceDistance );
		alSourcef( _source, AL_MIN_GAIN, soundTpl.minGain );
		alSourcef( _source, AL_MAX_GAIN, soundTpl.maxGain );

		SoundManager::instance()->checkALError( "setting initial values for Sound node '%s'", _name.c_str() );

		if( soundTpl.play )
			play();
	}

	SoundNode::~SoundNode()
	{
		alSourceStop( _source );
		alDeleteSources( 1, &_source );
		SoundManager::instance()->checkALError( "deleting source for Sound node '%s'", _name.c_str() );

		_soundRes = 0x0;
	}

	SceneNodeTpl *SoundNode::parsingFunc( std::map< std::string, std::string > &attribs )
	{
		bool result = true;
		SoundNodeTpl *soundTpl = new SoundNodeTpl( "", 0x0 );
		std::map< std::string, std::string >::iterator itr;

		itr = attribs.find( "sound" );
		if( itr != attribs.end() )
		{
			ResHandle res = Modules::resMan().addResource( RST_SoundResource, itr->second, 0, false );

			if( res != 0 )
				soundTpl->soundRes = (SoundResource *)Modules::resMan().resolveResHandle( res );
			else
				result = false;
		}
		else
		{
			result = false;
		}

		itr = attribs.find( "play" );
		if( itr != attribs.end() )
		{
			if ( _stricmp( itr->second.c_str(), "true" ) == 0 || _stricmp( itr->second.c_str(), "1" ) == 0 )
				soundTpl->play = true;

		}
		itr = attribs.find( "loop" );
		if( itr != attribs.end() )
		{
			if ( _stricmp( itr->second.c_str(), "true" ) == 0 || _stricmp( itr->second.c_str(), "1" ) == 0 )
				soundTpl->loop = true;
		}

		itr = attribs.find( "gain" );
		if( itr != attribs.end() )
		{
			soundTpl->gain = (float)atof( itr->second.c_str() );

			if( soundTpl->gain < 0.0f )
				soundTpl->gain = 0.0f;
		}

		itr = attribs.find( "pitch" );
		if( itr != attribs.end() )
		{
			soundTpl->pitch = (float)atof( itr->second.c_str() );

			if( soundTpl->pitch < 0.5f )
				soundTpl->pitch = 0.5f;
			else if( soundTpl->pitch > 2.0f )
				soundTpl->pitch = 2.0f;
		}

		itr = attribs.find( "offset" );
		if( itr != attribs.end() )
		{
			soundTpl->offset = (float)atof( itr->second.c_str() );

			if( soundTpl->offset < 0.0f )
				soundTpl->offset = 0.0f;
		}

		itr = attribs.find( "maxDistance" );
		if( itr != attribs.end() )
		{
			soundTpl->maxDistance = (float)atof( itr->second.c_str() );

			if( soundTpl->maxDistance < 0.0f )
				soundTpl->maxDistance = 0.0f;
		}

		itr = attribs.find( "rolloffFactor" );
		if( itr != attribs.end() )
		{
			soundTpl->rolloffFactor = (float)atof( itr->second.c_str() );

			if( soundTpl->rolloffFactor < 0.0f )
				soundTpl->rolloffFactor = 0.0f;
		}

		itr = attribs.find( "referenceDistance" );
		if( itr != attribs.end() )
		{
			soundTpl->referenceDistance = (float)atof( itr->second.c_str() );

			if( soundTpl->referenceDistance < 0.0f )
				soundTpl->referenceDistance = 0.0f;
		}

		itr = attribs.find( "minGain" );
		if( itr != attribs.end() )
		{
			soundTpl->minGain = (float)atof( itr->second.c_str() );

			if( soundTpl->minGain < 0.0f )
				soundTpl->minGain = 0.0f;
		}

		itr = attribs.find( "maxGain" );
		if( itr != attribs.end() )
		{
			soundTpl->maxGain = (float)atof( itr->second.c_str() );

			if( soundTpl->maxGain < 0.0f )
				soundTpl->maxGain = 0.0f;
		}

		if( !result )
		{
			delete soundTpl;
			soundTpl = 0x0;
		}

		return soundTpl;
	}

	SceneNode *SoundNode::factoryFunc( const SceneNodeTpl &nodeTpl )
	{
		if( nodeTpl.type != SNT_SoundNode )
			return 0x0;

		return new SoundNode( *(SoundNodeTpl *)&nodeTpl );
	}

	float SoundNode::getParamF( int param, int compIdx )
	{
		float value = 0.0f;

		switch( param )
		{
		case SoundNodeParams::Gain:
			alGetSourcef( _source, AL_GAIN, &value );
			return value;
		case SoundNodeParams::Pitch:
			alGetSourcef( _source, AL_PITCH, &value );
			return value;
		case SoundNodeParams::Offset:
			alGetSourcef( _source, AL_SEC_OFFSET, &value );
			return value;
		case SoundNodeParams::MaxDistance:
			alGetSourcef( _source, AL_MAX_DISTANCE, &value );
			return value;
		case SoundNodeParams::RolloffFactor:
			alGetSourcef( _source, AL_ROLLOFF_FACTOR, &value );
			return value;
		case SoundNodeParams::ReferenceDistance:
			alGetSourcef( _source, AL_REFERENCE_DISTANCE, &value );
			return value;
		case SoundNodeParams::MinGain:
			alGetSourcef( _source, AL_MIN_GAIN, &value );
			return value;
		case SoundNodeParams::MaxGain:
			alGetSourcef( _source, AL_MAX_GAIN, &value );
			return value;
		default:
			return SceneNode::getParamF( param, compIdx );
		}
	}

	void SoundNode::setParamF( int param, int compIdx, float value )
	{
		bool wasPlaying = false;

		switch( param )
		{
		case SoundNodeParams::Gain:
			if( value < 0.0f )
				alSourcef( _source, AL_GAIN, 0.0f );
			else
				alSourcef( _source, AL_GAIN, value );

			return;
		case SoundNodeParams::Pitch:
			if( value < 0.5f )
				alSourcef( _source, AL_PITCH, 0.5f );
			else if( value > 2.0f )
				alSourcef( _source, AL_PITCH, 2.0f );
			else
				alSourcef( _source, AL_PITCH, value );

			return;
		case SoundNodeParams::Offset:
			//pause the sound before setting the offset so we don't get any sound artifacts
			wasPlaying = isPlaying();
			pause();

			if( value < 0.0f )
				alSourcef( _source, AL_SEC_OFFSET, 0.0f );
			else
				alSourcef( _source, AL_SEC_OFFSET, value );

			if( wasPlaying )
				play();

			return;
		case SoundNodeParams::MaxDistance:
			if( value < 0.0f )
				alSourcef( _source, AL_MAX_DISTANCE, 0.0f );
			else
				alSourcef( _source, AL_MAX_DISTANCE, value );

			return;
		case SoundNodeParams::RolloffFactor:
			if( value < 0.0f )
				alSourcef( _source, AL_ROLLOFF_FACTOR, 0.0f );
			else
				alSourcef( _source, AL_ROLLOFF_FACTOR, value );

			return;
		case SoundNodeParams::ReferenceDistance:
			if( value < 0.0f )
				alSourcef( _source, AL_REFERENCE_DISTANCE, 0.0f );
			else
				alSourcef( _source, AL_REFERENCE_DISTANCE, value );

			return;
		case SoundNodeParams::MinGain:
			if( value < 0.0f )
				alSourcef( _source, AL_MIN_GAIN, 0.0f );
			else
				alSourcef( _source, AL_MIN_GAIN, value );

			return;
		case SoundNodeParams::MaxGain:
			if( value < 0.0f )
				alSourcef( _source, AL_MAX_GAIN, 0.0f );
			else
				alSourcef( _source, AL_MAX_GAIN, value );

			return;
		default:
			SceneNode::setParamF( param, compIdx, value );
		}
	}

	int SoundNode::getParamI( int param )
	{
		int value;

		switch( param )
		{
		case SoundNodeParams::SoundRes:
			return _soundRes != 0x0? _soundRes->getHandle() : 0;
		case SoundNodeParams::Loop:
			alGetSourcei( _source, AL_LOOPING, &value );
			return value;
		default:
			return SceneNode::getParamI( param );
		}
	}

	void SoundNode::setParamI( int param, int value )
	{
		Resource *res;
		bool wasPlaying;

		switch( param )
		{
		case SoundNodeParams::SoundRes:
			res = Modules::resMan().resolveResHandle( value );

			if( res == 0x0 || res->getType() != RST_SoundResource )
			{
				Modules::log().writeDebugInfo( "Invalid Sound resource for Sound node %i", _handle );
				return;
			}

			//pause the sound before changing buffers so we don't get any sound artifacts
			wasPlaying = isPlaying();
			alSourceStop( _source );

			_soundRes = (SoundResource *)res;
			alSourcei( _source, AL_BUFFER, _soundRes->getBuffer() );
			SoundManager::instance()->checkALError( "attaching buffer from Sound resource '%s' to Sound node '%s'", _soundRes->getName().c_str(), _name.c_str() );

			if( wasPlaying )
				play();

			return;
		case SoundNodeParams::Loop:
			alSourcei( _source, AL_LOOPING, value? AL_TRUE : AL_FALSE );
			return;
		default:
			return SceneNode::setParamI( param, value );
		}
	}

	void SoundNode::onPostUpdate()
	{
		//this gets called after absolute transformation has been updated

		const float *absMatPtr;
		getTransMatrices( 0x0, &absMatPtr );
		Matrix4f absMat( absMatPtr );

		Vec3f trans, rot, scale;
		absMat.decompose( trans, rot, scale );

		alSource3f( _source, AL_POSITION, trans.x, trans.y, trans.z );
	}

	bool SoundNode::isPlaying()
	{
		int state;
		alGetSourcei( _source, AL_SOURCE_STATE, &state );

		return state == AL_PLAYING;
	}

	void SoundNode::play()
	{
		alSourcePlay( _source );
	}

	void SoundNode::pause()
	{
		alSourcePause( _source );
	}

	void SoundNode::rewind()
	{
		alSourceRewind( _source );
	}
