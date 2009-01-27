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

#ifndef _Horde3DSound_listener_H_
#define _Horde3DSound_listener_H_

#include <string>
#include <map>

#include "egScene.h"

namespace Horde3DSound
{
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

	struct ListenerNodeTpl : public SceneNodeTpl
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

	class ListenerNode : public SceneNode
	{
	protected:
		float _gain;
		float _dopplerFactor;
		float _speedOfSound;

		ListenerNode( const ListenerNodeTpl &listenerTpl );
	public:
		~ListenerNode();

		static SceneNodeTpl *parsingFunc( std::map< std::string, std::string > &attribs );
		static SceneNode *factoryFunc( const SceneNodeTpl &nodeTpl );

		float getParamf( int param );
		bool setParamf( int param, float value );

		void onPostUpdate();

		void activate();
		void deactivate();

		void updatePositionAndOrientation();
	};
}

#endif // _Horde3DSound_listener_H_