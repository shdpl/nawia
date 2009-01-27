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

#ifndef _Horde3DSound_decode_vorbis_H_
#define _Horde3DSound_decode_vorbis_H_

#include <vorbis/vorbisfile.h>
#include <vorbis/codec.h>

#include "decode.h"

namespace Horde3DSound
{
	struct VorbisMemoryFile
	{
		char *data;
		size_t size;
		size_t sizeRead;
	};

	class VorbisDecoder : public SoundDecoder
	{
	public:
		static size_t VorbisRead( void *ptr, size_t byteSize, size_t sizeToRead, void *datasource );
		static int VorbisSeek( void *datasource, ogg_int64_t offset, int whence );
		static int VorbisClose( void *datasource );
		static long VorbisTell( void *datasource );

		static bool determineCodec( const char *data, size_t size );
		static SoundDecoder *factoryFunc();

		VorbisDecoder();

		const char *init( const char *data, size_t size, SoundInfo &info );
		void release();

		size_t decodeData( char *buffer, size_t size );
	private:
		bool _initialized;
		VorbisMemoryFile _vorbisData;

		OggVorbis_File _vorbisFile;
	};
}

#endif // _Horde3DSound_decode_vorbis_H_