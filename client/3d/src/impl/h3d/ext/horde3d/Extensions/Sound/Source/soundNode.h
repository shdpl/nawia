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

#ifndef _Horde3DSound_soundNode_H_
#define _Horde3DSound_soundNode_H_

#include <string>
#include <map>
#include <cfloat> //for FLT_MAX

#include <al.h>

#include "egScene.h"

#include "soundResource.h"


namespace Horde3DSound {

// =================================================================================================
// Class SoundNode
// =================================================================================================

const int SNT_SoundNode = 202;

struct SoundNodeParams
{
	enum List
	{
		SoundRes = 21000,
		Gain,
		Pitch,
		Offset,
		Loop,
		MaxDistance,
		RolloffFactor,
		ReferenceDistance,
		MinGain,
		MaxGain
	};
};

// =================================================================================================

struct SoundNodeTpl : public Horde3D::SceneNodeTpl
{
	PSoundResource soundRes;
	bool play;
	bool loop;
	float gain;
	float pitch;
	float offset;
	float maxDistance;
	float rolloffFactor;
	float referenceDistance;
	float minGain;
	float maxGain;

	SoundNodeTpl( const std::string &name, SoundResource *res ) :
		SceneNodeTpl( SNT_SoundNode, name ),
		soundRes( res ),
		play( false ),
		loop( false ),
		gain( 1.0f ),
		pitch( 1.0f ),
		offset( 0.0f ),
		maxDistance( FLT_MAX ),
		rolloffFactor( 1.0f ),
		referenceDistance( 1.0f ),
		minGain( 0.0f ),
		maxGain( 1.0f )
	{
	}
};

// =================================================================================================

class SoundNode : public Horde3D::SceneNode
{
protected:

	ALuint _source;
	SoundResource *_soundRes;

	SoundNode( const SoundNodeTpl &soundTpl );

public:

	~SoundNode();

	static Horde3D::SceneNodeTpl *parsingFunc( std::map< std::string, std::string > &attribs );
	static Horde3D::SceneNode *factoryFunc( const Horde3D::SceneNodeTpl &nodeTpl );

	float getParamF( int param, int compIdx );
	void setParamF( int param, int compIdx, float value );
	int getParamI( int param );
	void setParamI( int param, int value );

	void onPostUpdate();

	bool isPlaying();

	void play();
	void pause();
	void rewind();
};

} // namespace
#endif // _Horde3DSound_soundNode_H_
