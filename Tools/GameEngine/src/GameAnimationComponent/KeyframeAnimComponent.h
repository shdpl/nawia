// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or any later version.
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


// ****************************************************************************************
//
// GameEngine Core of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************

#ifndef KEYFRAMEANIMCOMPONENT_H_
#define KEYFRAMEANIMCOMPONENT_H_

#include <GameEngine/GameComponent.h>

#include <map>

namespace AnimationControl
{
	class StageController;
	struct Animation;
	class AnimationJob;
}

class KeyframeAnimComponent : public GameComponent
{
	friend class AnimationControl::AnimationJob;

public:
	static GameComponent* createComponent( GameEntity* owner );

	KeyframeAnimComponent(GameEntity *owner);
	~KeyframeAnimComponent();

	bool checkEvent(GameEvent* event) {return true;}
	void executeEvent(GameEvent* event);

	void loadFromXml(const XMLNode* description);

	void applyChanges( const float timestamp );
	void update( float timestamp );

	bool isPlaying( const char* animation );

	float getAnimLength( const char* animation );
private:
	void release();

	void setupAnim(AnimationSetup* command);

	void updateAnim(AnimationUpdate* command);

	AnimationControl::StageController*						m_stageControllers;

	std::map<std::string, AnimationControl::Animation*>		m_animations;

	std::vector<AnimationControl::AnimationJob*>			m_animationRegistry;

	std::vector<AnimationUpdate>							m_pendingAnimUpdates;

	const int												MAX_STAGES;


};

#endif
