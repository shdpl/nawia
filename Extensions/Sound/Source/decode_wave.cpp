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

#include "egModules.h"
#include "egCom.h"

#include "decode_wave.h"

#ifndef WIN32
#include <string.h>
#endif


	size_t WaveDecoder::findChunk( const char *buffer, size_t bufferSize, const char chunkName[4], size_t &chunkSize )
	{
		bool found = false;
		size_t offset = 12; //the first chunk starts at 12
		unsigned long size = 0;

		while( !found && offset + 8 <= bufferSize )
		{
			//get the chunk's size
			memcpy( &size, &buffer[offset + 4], 4 );

			if( strncmp( &buffer[offset], chunkName, 4 ) == 0 )
			{
				//we found the right chunk!
				chunkSize = size;
				found = true;
				break;
			}
			else
			{
				offset += size + 8;
			}
		}

		//+8 to not include the chunk's name and size
		if( found )
			return offset + 8;

		return -1;
	}

	bool WaveDecoder::determineCodec( const char *data, size_t size )
	{
		if( strncmp( &data[0], "RIFF", 4 ) == 0 && strncmp( &data[8], "WAVE", 4 ) == 0 )
		{
			//it appears to be a valid wave file, but make sure it's in PCM format
			size_t offset, chunkSize;

			//make sure we found the "fmt " chunk
			if( ( offset = findChunk( data, size, "fmt ", chunkSize ) ) != -1 )
			{
				unsigned short audioFormat = 0;
				//the audio format is right at the start of the "fmt " chunk
				memcpy( &audioFormat, &data[offset], 2 );

				//check if the wave is indeed in PCM format
				if( audioFormat == 1 )
				{
					return true;
				}
			}
		}

		return false;
	}

	SoundDecoder *WaveDecoder::factoryFunc()
	{
		return new WaveDecoder();
	}

	WaveDecoder::WaveDecoder()
	{
		_initialized = false;
		_data = 0x0;
	}

	const char *WaveDecoder::init( const char *data, size_t size, SoundInfo &info )
	{
		size_t offset, chunkSize;

		if( ( offset = findChunk( data, size, "fmt ", chunkSize ) ) == -1 )
			return "couldn't find the \"fmt \" chunk";

		unsigned short channels = 0;
		unsigned long samplingRate = 0;
		unsigned long byteRate = 0;
		unsigned short bitDepth = 0;
		memcpy( &channels, &data[offset + 2], 2 );
		memcpy( &samplingRate, &data[offset + 4], 4 );
		memcpy( &byteRate, &data[offset + 8], 4 );
		memcpy( &bitDepth, &data[offset + 14], 2 );

		info.samplingRate = samplingRate;
		info.bitDepth = bitDepth;
		info.channels = channels;
		info.bitRate = byteRate * 8;

		if( ( offset = findChunk( data, size, "data", chunkSize ) ) == -1 )
			return "couldn't find the \"data\" chunk";

		//calculate the sound's runtime
		info.runtime = (float)chunkSize / (float)( samplingRate * ( bitDepth / 8 ) * channels );

		_data = new char[chunkSize];
		memcpy( _data, &data[offset], chunkSize );
		_size = chunkSize;
		_sizeRead = 0;

		_initialized = true;
		return 0x0;
	}

	void WaveDecoder::release()
	{
		_initialized = false;

		delete[] _data;
		_data = 0x0;
	}

	size_t WaveDecoder::decodeData( char *buffer, size_t size )
	{
		if( !_initialized )
		{
			Horde3D::Modules::log().writeError( "Trying to decode sound using an uninitialized wave decoder" );
			return 0;
		}

		size_t sizeToRead = size;
		size_t sizeLeft = _size - _sizeRead;

		if( sizeToRead > sizeLeft )
			sizeToRead = sizeLeft;

		memcpy( buffer, _data + _sizeRead, sizeToRead );
		_sizeRead += sizeToRead;

		return sizeToRead;
	}
