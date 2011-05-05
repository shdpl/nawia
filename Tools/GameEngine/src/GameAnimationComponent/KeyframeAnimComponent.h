// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************
//


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

	float getAnimLength( const char* animation, float speed = 0);

	float getAnimSpeed( const char* animation );

	int getJobCount()
	{
		return int(m_animationRegistry.size());
	};
	int getJobID(std::string animName);

	size_t getSerializedState(char* state);

	void setSerializedState(const char* state, size_t length);

private:
	void release();

	void setupAnim(AnimationSetup* command);

	void updateAnim(AnimationUpdate* command);

	AnimationControl::StageController*						m_stageControllers;

	std::map<std::string, AnimationControl::Animation*>		m_animations;

	std::vector<AnimationControl::AnimationJob*>			m_animationRegistry;

	std::vector<AnimationUpdate>							m_pendingAnimUpdates;

	const int												MAX_STAGES;

	// needed on a networking KeyframeAnimComponent
	float*													m_initTimestamps;	// saves the timestamp an animation was initiated
};

#endif
