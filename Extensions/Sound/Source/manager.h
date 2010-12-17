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

#ifndef _Horde3DSound_manager_H_
#define _Horde3DSound_manager_H_

#include <string>
#include <vector>
#include <map>

#include <alc.h>

#include "decode.h"
#include "listener.h"


namespace Horde3DSound {

// =================================================================================================
// Class SoundManager
// =================================================================================================

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

	Horde3D::SceneNode *getActiveListener();
	void setActiveListener( ListenerNode *listener );

	bool checkALCError( ALCdevice *device, const char *description, ... );
	bool checkALError( const char *description, ... );

protected:

	SoundManager() { }
};

} // namespace
#endif // _Horde3DSound_manager_H_