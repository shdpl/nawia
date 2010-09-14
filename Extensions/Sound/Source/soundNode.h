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

#ifndef _Horde3DSound_soundNode_H_
#define _Horde3DSound_soundNode_H_

#include <string>
#include <map>
#include <cfloat> //for FLT_MAX

#include <al.h>

#include "egScene.h"

#include "soundResource.h"

namespace Horde3D
{
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

	struct SoundNodeTpl : public SceneNodeTpl
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

	class SoundNode : public SceneNode
	{
	protected:
		ALuint _source;
		SoundResource *_soundRes;

		SoundNode( const SoundNodeTpl &soundTpl );
	public:
		~SoundNode();

		static SceneNodeTpl *parsingFunc( std::map< std::string, std::string > &attribs );
		static SceneNode *factoryFunc( const SceneNodeTpl &nodeTpl );

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
}

#endif // _Horde3DSound_soundNode_H_