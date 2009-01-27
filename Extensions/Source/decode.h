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

#ifndef _Horde3DSound_decode_H_
#define _Horde3DSound_decode_H_

/*
HOWTO: implement an audio decoder

First step is to create a new class inheriting from the SoundDecoder class and implement the init and decodeData functions.
You will also need to implement two more functions, which follows the decoderFactoryFunc and determineCodecFunc typedef.

Here is an example on how a decoder class could look like:

	class MyDecoder : public SoundDecoder
	{
	private:
		//some variables to store the audio file and keep track on how much we've read from it
		char *_data;
		size_t _size;
		size_t _sizeRead;
	public:
		//our factory function
		static SoundDecoder *factoryFunc()
		{
			return new MyDecoder();
		}

		static bool determineCodec( const char *data, size_t size )
		{
			//here we check for any unique identifiers or any other way to detect if
			//the specified audio file can be decoded using this decoder



			if( strncmp( data[0], "mycodec_identifier", 18 ) == 0 )
				return true;

			return false;
		}

		const char *init( const char *data, size_t size, SoundInfo &info )
		{
			//fill info with the sound's properties
			//below is just an example on what values these could have, but you
			//will need to parse the sound file to get the right values
			info.samplingRate = 44100;
			info.bitDepth = 16;
			info.channels = 1;
			info.bitRate = 1840000;
			info.runtime = 192.5;

			//copy the audio file so we can decode the data later on
			_data = new char[size];
			memcpy( _data, &data[offset], size );
			_size = size;
			_sizeRead = 0;

			//we didn't fail, so we return NULL
			return 0x0;
		}

		void release()
		{
			//make sure to release any allocated resources
			delete[] _data;
			_data = 0x0;
		}

		size_t decodeData( char *buffer, size_t size ) = 0;
		{
			//first we make sure we aren't trying to read more data than we have left
			size_t sizeToRead = size;
			size_t sizeLeft = _size - _sizeRead;

			if( sizeToRead > sizeLeft )
				sizeToRead = sizeLeft;

			//here you would need to actually decode the audio file first and then copy
			//it to the buffer, but for the example i will just copy the encoded audio
			//data straight off

			memcpy( buffer, _data + _sizeRead, sizeToRead );
			_sizeRead += sizeToRead;

			//return the size read
			return sizeToRead;
		}
	};


The final step is to register the decoder using SoundManager::instance()->registerDecoder in the initExtension function found in extension.cpp
Note that registering the decoder needs to be done after SoundManager::instance()->init has been called.
*/

namespace Horde3DSound
{
	struct SoundInfo
	{
		int samplingRate; //in Hz
		int bitDepth;
		int channels;
		int bitRate; //average bitrate
		float runtime;
	};

	class SoundDecoder
	{
	public:
		//data contains the audio file to decode later on and size contains it's size
		//the data should be stored so the audio file can be decoded from any point between the init and release functions are called
		//you will have to fill the info param with the audio file's properties
		//should return NULL on success or the error encountered on failure
		virtual const char *init( const char *data, size_t size, SoundInfo &info ) = 0;

		//called before the object is destroyed, should be used to free any resources allocated
		virtual void release()
		{
		}

		//buffer is the where the decoded audio data should go and size contains the wanted size to decode
		//should return the how much audio data could be decoded, can return less than the wanted size if an error occurred or end of file was reached
		virtual size_t decodeData( char *buffer, size_t size ) = 0;
	};

	//should return a pointer to an instance of your decoder class
	typedef SoundDecoder *(*decoderFactoryFunc)();
	//the function is used for determining if the decoder can decode the specified audio file
	//first param contains the audio file and second param contains it's size
	//should return true if the decoder can decode the specified audio file, otherwise false
	typedef bool (*determineCodecFunc)( const char *, size_t );
}

#endif // _Horde3DSound_decode_H_