// *************************************************************************************************
//
// Horde3D Sound Extension is made available under the MIT License.
// --------------------------------------
//
// Copyright (c) 2008-2010 Ulf Nilsson TŠnnstršm
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

#include <al.h>
#ifdef PLATFORM_WIN
#include <alext.h>
#endif

#include "manager.h"

#include "egModules.h"
#include "egCom.h"

#ifndef WIN32
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#endif

#include "utDebug.h"


using namespace Horde3D;

namespace Horde3DSound {

// =================================================================================================
// Class SoundManager
// =================================================================================================

SoundManager SoundManager::_instance;

void SoundManager::init()
{
	_openDeviceName = "";
	_openDevice = 0x0;
	_openContext = 0x0;
	_activeListener = 0x0;

	enumerateDevices();
}

void SoundManager::release()
{
	if( _openDevice != 0x0)
	{
		closeDevice();
	}
}

void SoundManager::enumerateDevices()
{
	//clear the vector from any previous devices
	_devices.clear();

	const ALCchar *deviceList = 0x0;

	if( alcIsExtensionPresent( 0x0, "ALC_ENUMERATE_ALL_EXT" ) == AL_TRUE )
		deviceList = alcGetString( 0x0, ALC_ALL_DEVICES_SPECIFIER );
	else if( alcIsExtensionPresent( 0x0, "ALC_ENUMERATION_EXT" ) == AL_TRUE )
		deviceList = alcGetString( 0x0, ALC_DEVICE_SPECIFIER );

	//each device in the list is separated by a single NULL character and the list is terminated by
	//two NULL characters
	while( *deviceList != 0x0 )
	{
		_devices.push_back( deviceList );
		deviceList += strlen( deviceList ) + 1;
	}

	if( _devices.empty() )
	{
		Modules::log().writeWarning( "Unable to get a list of available sound devices" );
	}
}

void SoundManager::registerDecoder( determineCodecFunc determineFunc, decoderFactoryFunc factoryFunc )
{
	_decoders[determineFunc] = factoryFunc;
}

SoundDecoder *SoundManager::getDecoder( const char *data, size_t size )
{
	SoundDecoder *decoder = 0x0;
	std::map< determineCodecFunc, decoderFactoryFunc >::iterator itr;

	for( itr = _decoders.begin(); itr != _decoders.end(); itr++ )
	{
		//use the determineCodecFunc to check if the decoder can decode the audio file
		if( itr->first( data, size ) )
		{
			//we got the right decoder, use it's factoryFunc to create an instance of it and break the loop
			decoder = itr->second();
			break;
		}
	}

	return decoder;
}

void SoundManager::releaseDecoder( SoundDecoder *decoder )
{
	if( decoder == 0x0 )
		return;

	decoder->release();
	delete decoder;
	decoder = 0x0;
}

bool SoundManager::openDevice( const char *device )
{
	if( _openDevice != 0x0 )
	{
		Modules::log().writeWarning( "Trying to open a new sound device while one already is open" );
		return false;
	}

	_openDevice = alcOpenDevice( device );

	if( _openDevice == 0x0 )
	{
		checkALCError( 0x0, "opening device '%s'", device != 0x0? device : "NULL" );
		closeDevice();
		return false;
	}

	_openContext = alcCreateContext( _openDevice, 0x0 );

	if( _openContext == 0x0 )
	{
		checkALCError( _openDevice, "creating context" );
		closeDevice();
		return false;
	}

	if( alcMakeContextCurrent( _openContext ) == AL_FALSE )
	{
		checkALCError( _openDevice, "activating context" );
		closeDevice();
		return false;
	}

	//try to get the name of the newly opened device
	if( alcIsExtensionPresent( 0x0, "ALC_ENUMERATE_ALL_EXT" ) == AL_TRUE )
		_openDeviceName = alcGetString( _openDevice, ALC_ALL_DEVICES_SPECIFIER );
	else if( alcIsExtensionPresent( 0x0, "ALC_ENUMERATION_EXT" ) == AL_TRUE )
		_openDeviceName = alcGetString( _openDevice, ALC_DEVICE_SPECIFIER );
	else
		_openDeviceName = "";

	Modules::log().writeInfo( "Successfully initialized OpenAL '%s' using '%s'", alGetString( AL_VERSION ), _openDeviceName.c_str() );

	//check if the x-ram extension is present
	if( alIsExtensionPresent( "EAX-RAM" ) == AL_TRUE )
	{
		//the sound data will be automatically be stored in the x-ram so we don't need
		//to do anything, just print out the amount of x-ram available
		Modules::log().writeInfo( "Sound device has %iMB X-RAM", alGetInteger( alGetEnumValue( "AL_EAX_RAM_SIZE" ) ) / ( 1024 * 1024 ) );
	}

	return true;
}

void SoundManager::closeDevice()
{
	alcMakeContextCurrent( 0x0 );
	alcDestroyContext( _openContext );
	alcCloseDevice( _openDevice );

	_openDeviceName = "";
	_openDevice = 0x0;
	_openContext = 0x0;
}

const char *SoundManager::getOpenDevice()
{
	return _openDevice != 0x0? _openDeviceName.c_str() : 0x0;
}

const char *SoundManager::queryDevice( int index )
{
	if( index < 0 || (unsigned)index >= _devices.size() )
		return 0x0;

	return _devices[index].c_str();
}

SceneNode *SoundManager::getActiveListener()
{
	return _activeListener;
}

void SoundManager::setActiveListener( ListenerNode *listener )
{
	if( _activeListener != 0x0 )
		_activeListener->deactivate();

	_activeListener = listener;

	if( listener != 0x0 )
		listener->activate();
}

bool SoundManager::checkALCError( ALCdevice *device, const char *description, ... )
{
	std::string errorString;
	ALenum error = ALC_NO_ERROR;

	if( (error = alcGetError( device )) != ALC_NO_ERROR ) 
	{
		switch( error )
		{
		case ALC_INVALID_DEVICE:
			errorString = "ALC_INVALID_DEVICE";
			break;
		case ALC_INVALID_CONTEXT:
			errorString = "ALC_INVALID_CONTEXT";
			break;
		case ALC_INVALID_ENUM:
			errorString = "ALC_INVALID_ENUM";
			break;
		case ALC_INVALID_VALUE:
			errorString = "ALC_INVALID_VALUE";
			break;
		case ALC_OUT_OF_MEMORY:
			errorString = "ALC_OUT_OF_MEMORY";
			break;
		default:
			errorString = "unknown error";
			break;
		}

		va_list args;
		va_start( args, description );

		char textBuffer[2048];
		vsnprintf( textBuffer, sizeof( textBuffer ), description, args );

		va_end( args );

		Modules::log().writeWarning( "%s : %s", errorString.c_str(), textBuffer );
		return false;
	}

	return true;
}

bool SoundManager::checkALError( const char *description, ... )
{
	std::string errorString;
	ALenum error = AL_NO_ERROR;

	if( (error = alGetError()) != AL_NO_ERROR ) 
	{
		switch( error )
		{
		case AL_INVALID_NAME:
			errorString = "AL_INVALID_NAME";
			break;
		case AL_INVALID_ENUM:
			errorString = "AL_INVALID_ENUM";
			break;
		case AL_INVALID_VALUE:
			errorString = "AL_INVALID_VALUE";
			break;
		case AL_INVALID_OPERATION:
			errorString = "AL_INVALID_OPERATION";
			break;
		case AL_OUT_OF_MEMORY:
			errorString = "AL_OUT_OF_MEMORY";
			break;
		default:
			errorString = "unknown error";
			break;
		}

		va_list args;
		va_start( args, description );

		char textBuffer[2048];
		vsnprintf( textBuffer, sizeof( textBuffer ), description, args );

		va_end( args );

		Modules::log().writeWarning( "%s : %s", errorString.c_str(), textBuffer );
		return false;
	}

	return true;
}

} // namespace