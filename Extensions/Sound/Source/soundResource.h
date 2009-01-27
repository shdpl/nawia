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

#ifndef _Horde3DSound_soundResource_H_
#define _Horde3DSound_soundResource_H_

#include <string>

#include <al.h>

#include "egResource.h"

#include "decode.h"

namespace Horde3DSound
{
	const int RST_SoundResource = 200;

	struct SoundResParams
	{
		enum List
		{
			SamplingRate = 20000,
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

		int getParami( int param );
		bool setParami( int param, int value );
		float getParamf( int param );
		bool setParamf( int param, float value );

		ALuint getBuffer();
	};

	typedef SmartResPtr< SoundResource > PSoundResource;
}

#endif // _Horde3DSound_soundResource_H_