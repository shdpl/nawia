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

#include "soundResource.h"
#include "manager.h"

namespace Horde3D
{
	Resource *SoundResource::factoryFunc( const std::string &name, int flags )
	{
		return new SoundResource( name, flags );
	}

	SoundResource::SoundResource( const std::string &name, int flags ) :
		Resource( RST_SoundResource, name, flags )
	{
		alGenBuffers( 1, &_buffer );
		SoundManager::instance()->checkALError( "generating buffer for Sound resource '%s'", _name.c_str() );

		initDefault();
	}

	SoundResource::~SoundResource()
	{
		alDeleteBuffers( 1, &_buffer );
		SoundManager::instance()->checkALError( "deleting buffer for Sound resource '%s'", _name.c_str() );

		release();
	}

	void SoundResource::initDefault()
	{
		_soundInfo.samplingRate = 0;
		_soundInfo.bitDepth = 0;
		_soundInfo.channels = 0;
		_soundInfo.bitRate = 0;
		_soundInfo.runtime = 0.0f;
	}

	void SoundResource::release()
	{
	}

	bool SoundResource::raiseError( const std::string &msg )
	{
		//reset
		release();
		initDefault();

		Modules::log().writeError( "Sound resource '%s': %s", _name.c_str(), msg.c_str() );

		return false;
	}

	bool SoundResource::load( const char *data, int size )
	{
		if( !Resource::load( data, size ) )
			return false;

		SoundDecoder *decoder = SoundManager::instance()->getDecoder( data, (size_t)size );

		if( decoder == 0x0 )
			return raiseError( "failed to retrieve decoder" );

		const char *error;

		if( ( error = decoder->init( data, size, _soundInfo ) ) != 0x0 )
		{
			SoundManager::instance()->releaseDecoder( decoder );
			return raiseError( "failed to initialize decoder : " + std::string( error ) );
		}

		//calculate the size needed to store the decoded sound data
		size_t sizeNeeded = (size_t)( _soundInfo.runtime * ( _soundInfo.samplingRate * ( _soundInfo.bitDepth / 8 ) * _soundInfo.channels ) );

		char *decodedData = new char[sizeNeeded];
		size_t sizeDecoded = decoder->decodeData( decodedData, sizeNeeded );

		//we are done decoding, release the decoder
		SoundManager::instance()->releaseDecoder( decoder );

		ALenum format = 0;

		if( _soundInfo.bitDepth == 8 )
		{
			switch( _soundInfo.channels )
			{
			case 1:
				format = AL_FORMAT_MONO8;
				break;
			case 2:
				format = AL_FORMAT_STEREO8;
				break;
			case 4:
				format = alGetEnumValue( "AL_FORMAT_QUAD8" );
				break;
			case 6:
				format = alGetEnumValue( "AL_FORMAT_51CHN8" );
				break;
			case 7:
				format = alGetEnumValue( "AL_FORMAT_61CHN8" );
				break;
			case 8:
				format = alGetEnumValue( "AL_FORMAT_71CHN8" );
				break;
			}
		}
		else if( _soundInfo.bitDepth == 16 )
		{
			switch( _soundInfo.channels )
			{
			case 1:
				format = AL_FORMAT_MONO16;
				break;
			case 2:
				format = AL_FORMAT_STEREO16;
				break;
			case 4:
				format = alGetEnumValue( "AL_FORMAT_QUAD16" );
				break;
			case 6:
				format = alGetEnumValue( "AL_FORMAT_51CHN16" );
				break;
			case 7:
				format = alGetEnumValue( "AL_FORMAT_61CHN16" );
				break;
			case 8:
				format = alGetEnumValue( "AL_FORMAT_71CHN16" );
				break;
			}
		}

		if( !format )
		{
			delete[] decodedData;
			return raiseError( "sound has invalid bitdepth or unsupported number of channels" );
		}

		//fill the buffer with our decoded sound data
		alBufferData( _buffer, format, decodedData, (ALsizei)sizeDecoded, (ALsizei)_soundInfo.samplingRate );
		SoundManager::instance()->checkALError( "filling buffer with data for Sound resource '%s'", _name.c_str() );

		delete[] decodedData;

		return true;
	}

	int SoundResource::getElemCount( int elem )
	{
		switch( elem )
		{
		case SoundResParams::SamplingRate:
		case SoundResParams::BitDepth:
		case SoundResParams::Channels:
		case SoundResParams::BitRate:
		case SoundResParams::Runtime:
			return 1;
		default:
			return Resource::getElemCount( elem );
		}
	}

	int SoundResource::getElemParamI( int elem, int elemIdx, int param )
	{
		switch( param )
		{
		case SoundResParams::SamplingRate:
			return _soundInfo.samplingRate;
		case SoundResParams::BitDepth:
			return _soundInfo.bitDepth;
		case SoundResParams::Channels:
			return _soundInfo.channels;
		case SoundResParams::BitRate:
			return _soundInfo.bitRate;		
		default:
			return Resource::getElemParamI( elem, elemIdx, param );
		}
	}
	
	float SoundResource::getElemParamF( int elem, int elemIdx, int param, int compIdx )
	{
		if( elem == SoundResParams::SoundElem )
		{
			switch( param )
			{
			case SoundResParams::Runtime:
				return _soundInfo.runtime;
			default:
				return Resource::getElemParamF( elem, elemIdx, param, compIdx );
			}
		}
		return Resource::getElemParamF( elem, elemIdx, param, compIdx );
	}


	ALuint SoundResource::getBuffer()
	{
		return _buffer;
	}
}