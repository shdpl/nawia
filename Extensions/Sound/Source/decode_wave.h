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

#ifndef _Horde3DSound_decode_wave_H_
#define _Horde3DSound_decode_wave_H_

#include "decode.h"

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

#endif // _Horde3DSound_decode_wave_H_