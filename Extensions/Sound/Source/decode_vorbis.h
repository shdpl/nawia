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

#ifndef _Horde3DSound_decode_vorbis_H_
#define _Horde3DSound_decode_vorbis_H_

#include <vorbis/vorbisfile.h>
#include <vorbis/codec.h>

#include "decode.h"


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

#endif // _Horde3DSound_decode_vorbis_H_