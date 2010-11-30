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

#ifndef _Horde3DSound_soundResource_H_
#define _Horde3DSound_soundResource_H_

#include <string>

#include <al.h>

#include "egResource.h"

#include "decode.h"

namespace Horde3D
{

	const int RST_SoundResource = 200;

	struct SoundResParams
	{
		enum List
		{
			SoundElem = 20000,
			SamplingRate,
			BitDepth,
			Channels,
			BitRate,
			Runtime
		};
	};

	class SoundResource : public Resource
	{
	private:
		ALuint _buffer;
		SoundInfo _soundInfo;

		bool raiseError( const std::string &msg );
	public:
		static Resource *factoryFunc( const std::string &name, int flags );

		SoundResource( const std::string &name, int flags );
		~SoundResource();

		void initDefault();
		void release();
		bool load( const char *data, int size );

		int getElemCount( int elem );
		int getElemParamI( int elem, int elemIdx, int param );	
		float getElemParamF( int elem, int elemIdx, int param, int compIdx );

		ALuint getBuffer();
	};

	typedef SmartResPtr< SoundResource > PSoundResource;

}

#endif // _Horde3DSound_soundResource_H_