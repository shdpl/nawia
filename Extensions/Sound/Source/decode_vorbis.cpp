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

#include "decode_vorbis.h"

#ifndef WIN32
#include <string.h>
#endif


	ov_callbacks vorbisCallbacks =
	{
		VorbisDecoder::VorbisRead,
		VorbisDecoder::VorbisSeek,
		VorbisDecoder::VorbisClose,
		VorbisDecoder::VorbisTell
	};

	size_t VorbisDecoder::VorbisRead( void *destination, size_t byteSize, size_t sizeToRead, void *datasource )
	{
		VorbisMemoryFile *vorbisData = (VorbisMemoryFile *)datasource;
		size_t actualSizeToRead = sizeToRead * byteSize;
		size_t sizeLeft = vorbisData->size - vorbisData->sizeRead;

		if( actualSizeToRead > sizeLeft )
			actualSizeToRead = sizeLeft;

		if( actualSizeToRead > 0 )
		{
			memcpy( destination, vorbisData->data + vorbisData->sizeRead, actualSizeToRead );
			vorbisData->sizeRead += actualSizeToRead;
		}

		return actualSizeToRead;
	}

	int VorbisDecoder::VorbisSeek( void *datasource, ogg_int64_t offset, int whence )
	{
		VorbisMemoryFile *vorbisData = (VorbisMemoryFile *)datasource;

		switch( whence )
		{
		case SEEK_SET:
			if( offset > vorbisData->size )
				vorbisData->sizeRead = vorbisData->size;
			else
				vorbisData->sizeRead = (size_t)offset;

			break;
		case SEEK_CUR:
			if( offset > vorbisData->size - vorbisData->sizeRead )
				vorbisData->sizeRead = vorbisData->size;
			else
				vorbisData->sizeRead += (size_t)offset;

			break;
		case SEEK_END:
			vorbisData->sizeRead = vorbisData->size + 1;
			break;
		};

		return 0;
	}

	int VorbisDecoder::VorbisClose( void *datasource )
	{
		return 0;
	}

	long VorbisDecoder::VorbisTell( void *datasource )
	{
        return (long)((VorbisMemoryFile *)datasource)->sizeRead;
	}

	bool VorbisDecoder::determineCodec( const char *data, size_t size )
	{
		VorbisMemoryFile vorbisData;
		vorbisData.data = (char *)data;
		vorbisData.size = size;
		vorbisData.sizeRead = 0;

		OggVorbis_File vorbisFile;

		if( ov_test_callbacks( &vorbisData, &vorbisFile, 0x0, 0, vorbisCallbacks ) < 0 )
		{
			//it's not a vorbis file, clean up and return false
			ov_clear( &vorbisFile );
			return false;
		}

		ov_clear( &vorbisFile );
		return true;
	}

	SoundDecoder *VorbisDecoder::factoryFunc()
	{
		return new VorbisDecoder();
	}

	VorbisDecoder::VorbisDecoder()
	{
		_initialized = false;
		_vorbisData.data = 0x0;
	}

	const char *VorbisDecoder::init( const char *data, size_t size, SoundInfo &info )
	{
		_vorbisData.data = new char[size];
		memcpy( _vorbisData.data, data, size );
		_vorbisData.size = size;
		_vorbisData.sizeRead = 0;

		if( ov_open_callbacks( &_vorbisData, &_vorbisFile, 0x0, 0, vorbisCallbacks ) < 0 )
			return "ov_open_callbacks failed";

		vorbis_info *vorbisInfo = ov_info( &_vorbisFile, -1 );

		info.samplingRate = vorbisInfo->rate;
		//vorbis uses floating-point bit-depth but we read it as 16bits
		info.bitDepth = 16;
		info.channels = vorbisInfo->channels;
		info.bitRate = ov_bitrate( &_vorbisFile, -1 );
		info.runtime = (float)ov_time_total( &_vorbisFile, -1 );

		_initialized = true;
		return 0x0;
	}

	void VorbisDecoder::release()
	{
		_initialized = false;

		ov_clear( &_vorbisFile );

		delete[] _vorbisData.data;
		_vorbisData.data = 0x0;
	}

	size_t VorbisDecoder::decodeData( char *buffer, size_t size )
	{
		if( !_initialized )
		{
			Horde3D::Modules::log().writeError( "Trying to decode sound using an uninitialized vorbis decoder" );
			return 0;
		}

		long result;
		int currentSection;
		size_t sizeRead = 0;

		while( sizeRead < size )
		{
			//4th arg is little/big endian, 0 is for little and 1 for big
			//5th arg is word size (bit-depth). Possible arguments are 1 for 8-bit samples, or 2 or 16-bit samples. Typical value is 2.
			//6th arg is for signed or unsigned data. 0 for unsigned, 1 for signed. Typically 1.
			result = ov_read( &_vorbisFile, buffer + sizeRead, (int)( size - sizeRead ), 0, 2, 1, &currentSection );

			if( result > 0 )
			{
				sizeRead += result;
			}
			else if( result == 0 )
			{
				//reached end of file
				break;
			}
			else
			{
				Horde3D::Modules::log().writeDebugInfo( "Recieved error code %i when decoding vorbis data", result );
				break;
			}
		}

		return sizeRead;
	}
