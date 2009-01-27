// *************************************************************************************************
//
// Horde3D Sound Extension
// --------------------------------------
// Copyright (C) 2008 Ulf Nilsson Tännström
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

#ifndef _Horde3DSound_decode_wave_H_
#define _Horde3DSound_decode_wave_H_

#include "decode.h"

namespace Horde3DSound
{
	class WaveDecoder : public SoundDecoder
	{
	private:
		//returns the offset where the chunk starts (not including the chunk's name and size) or -1 if not found
		//chunkSize will be set to the chunk's remaining size from the returned offset
		static size_t findChunk( const char *buffer, size_t bufferSize, const char chunkName[4], size_t &chunkSize );
	public:
		static bool determineCodec( const char *data, size_t size );
		static SoundDecoder *factoryFunc();

		WaveDecoder();

		const char *init( const char *data, size_t size, SoundInfo &info );
		void release();

		size_t decodeData( char *buffer, size_t size );
	private:
		bool _initialized;

		char *_data;
		size_t _size;
		size_t _sizeRead;
	};
}

#endif // _Horde3DSound_decode_wave_H_