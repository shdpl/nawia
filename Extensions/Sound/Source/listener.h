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

#ifndef _Horde3DSound_listener_H_
#define _Horde3DSound_listener_H_

#include <stdlib.h>
#include <string>
#include <cstring>
#include <map>

#include "egScene.h"


#ifndef ALC_ALL_DEVICES_SPECIFIER
# define ALC_ALL_DEVICES_SPECIFIER     0x1013
#endif

namespace Horde3DSound {

// =================================================================================================
// Class ListenerNode
// =================================================================================================

const int SNT_ListenerNode = 201;

struct ListenerNodeParams
{
	enum List
	{
		MasterGain = 20000,
		DopplerFactor,
		SpeedOfSound,
	};
};

// =================================================================================================

struct ListenerNodeTpl : public Horde3D::SceneNodeTpl
{
	bool active;
	float gain;
	float dopplerFactor;
	float speedOfSound;

	ListenerNodeTpl( const std::string &name ) :
		SceneNodeTpl( SNT_ListenerNode, name ),
		active( false ),
		gain( 1.0f ),
		dopplerFactor( 1.0f ),
		speedOfSound( 343.3f )
	{
	}
};

// =================================================================================================

class ListenerNode : public Horde3D::SceneNode
{
protected:

	float _gain;
	float _dopplerFactor;
	float _speedOfSound;

	ListenerNode( const ListenerNodeTpl &listenerTpl );

public:

	~ListenerNode();

	static Horde3D::SceneNodeTpl *parsingFunc( std::map< std::string, std::string > &attribs );
	static Horde3D::SceneNode *factoryFunc( const Horde3D::SceneNodeTpl &nodeTpl );

	float getParamF( int param, int compIdx );
	void setParamF( int param, int compIdx, float value );

	void onPostUpdate();

	void activate();
	void deactivate();

	void updatePositionAndOrientation();
};

} // namespace
#endif // _Horde3DSound_listener_H_
