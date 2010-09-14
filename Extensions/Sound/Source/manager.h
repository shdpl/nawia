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

#ifndef _Horde3DSound_manager_H_
#define _Horde3DSound_manager_H_

#include <string>
#include <vector>
#include <map>

#include <alc.h>

#include "decode.h"
#include "listener.h"

namespace Horde3D
{
	class SoundManager
	{
	private:
		static SoundManager _instance;

		std::vector< std::string > _devices;
		std::map< determineCodecFunc, decoderFactoryFunc > _decoders;

		std::string _openDeviceName;
		ALCdevice *_openDevice;
		ALCcontext *_openContext;

		ListenerNode *_activeListener;
	public:
		static SoundManager *instance()
		{
			return &_instance;
		}

		void init();
		void release();

		void enumerateDevices();
		void registerDecoder( determineCodecFunc determineFunc, decoderFactoryFunc factoryFunc );

		SoundDecoder *getDecoder( const char *data, size_t size );
		void releaseDecoder( SoundDecoder *decoder );

		bool openDevice( const char *device );
		void closeDevice();

		const char *getOpenDevice();
		const char *queryDevice( int index );

		SceneNode *getActiveListener();
		void setActiveListener( ListenerNode *listener );

		bool checkALCError( ALCdevice *device, const char *description, ... );
		bool checkALError( const char *description, ... );
	protected:
		SoundManager() { }
	};
}

#endif // _Horde3DSound_manager_H_