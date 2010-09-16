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
// ****************************************************************************************
//

// ****************************************************************************************
//
// GameEngine Agent Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************   
#ifndef AGENTANIMCOMPONENT_H_
#define AGENTANIMCOMPONENT_H_

#include <GameEngine/config.h>
#include <GameEngine/GameComponent.h>
#include <GameEngine/GameEvent.h>

#include "AnimationNode.h"
#include "StillAnimationNode.h"
#include "AnimationData.h"
#include "AnimationBlending.h"
#include "config.h"

#include "GameEngine_AgentAnim.h"

///char array compare function for the map
struct charcmp
{
	bool operator()(const char* a, const char* b) const
	{
		return (std::strcmp(a,b) < 0);
	}
};

class AgentAnimComponent : public GameComponent
{
public:
	///debug monitors
	float db_monitor1;

	///vector containing all active or asleep animation nodes
	std::vector<AnimationNode*> m_animations;
	///vector containing animation data extracted from GestureLexicon
	std::vector<AnimationData*> m_animationData;
	///map containing queued-up animations (because of TTS sync)
	std::map<const char*, AnimationNode*, charcmp> m_queuedAnimations;

	///counter for currently active postures
	int nr_postures;
	///counter for currently active animations
	int anim_count;
	///flag indicating if there are any active postures
	bool postures_loaded;
	
	///current weight of active postures
	float posture_weight;
	///maximum weight of postures (due to SE or similiar)
	float max_posture_weight;
	///posture weight before a posture blending process
	float preblend_posture_weight;
	///maximum animation weight for this agent (due to SE or similiar)
	float model_max_weight;
	///flag indicating if a blending is required
	int blend;
	///flag indicating whether an idle animation has been looaded
	bool idleAnimStarted;
	///local still animation node
	StillAnimationNode* stillAnim;

	///h3d node of the local model
	int m_model;

	///precise loop time counter
	double loopTime;

	static GameComponent*  createComponent( GameEntity* owner );
	AgentAnimComponent(GameEntity* owner);
	virtual ~AgentAnimComponent();
	bool checkEvent(GameEvent* event);
	void executeEvent(GameEvent* event);
	void loadFromXml(const XMLNode* description);

	void update();

	///Loads, initializes and starts the playback of the specified animation on the local agent
	int loadAnim( AnimationData* data, char* mask, char* syncWord );	
	///Loads, initializes and starts the playback of the specified animation on the local agent
	int loadAnimByFile( const char* anim_file, int type, char* mask, char* syncWord );	
	///Loads, initializes and starts the playback of the specified animation on the local agent
	int loadAnimByID( int anim_id, int type, char* mask, char* syncWord );
	///Loads, initializes and starts the playback of the specified animation on the local agent
	int loadAnimByName( const char* anim_name, int type, char* mask, char* syncWord );
	///Loads, initializes and starts the playback of the specified animation on the local agent
	int loadAnimByRes( int anim_res, int type, char* mask, char* syncWord );

	///Loads and initializes but does not start the playback of the specified animation on the local agent
	int preloadAnim( AnimationData* data, char* mask);
	///Loads and initializes but does not start the playback of the specified animation on the local agent
	int preloadAnimByFile( const char* anim_file, int type, char* mask);
	///Loads and initializes but does not start the playback of the specified animation on the local agent
	int preloadAnimByID( int anim_id, int type, char* mask);
	///Loads and initializes but does not start the playback of the specified animation on the local agent
	int preloadAnimByName( const char* anim_name, int type, char* mask);
	///Loads and initializes but does not start the playback of the specified animation on the local agent
	int preloadAnimByRes( int anim_res, int type, char* mask );

	/**
	 * Updates all loaded animations
	 */
	void updateAllAnim();

	/**
	 * Update a single animation
	 * @param animNode pointer to the animation that should be updated
	 */
	void updateAnim( AnimationNode* animNode );

	/**
	 * Sets the Spacial Extent attribute on all animations of a charcter
	 * @param extent the new value of the Spacial Extent attribute. Can be "low", "medium" or "normal"
	 * @param change_now flag that says if the changes should be instant or starting iwth the next animation.
	 */
	void setExtent( const char* extent, bool change_now );

	/**
	 * Sets the Spacial Extent attribute on all animations of a charcter
	 * @param extent the new value of the Spacial Extent attribute represented by an integer from 0 to 10,
	 *               where 0 is the highest (normal) spacial extent and 10 is the lowest spacial extent (still)
	 * @param change_now flag that says if the changes should be instant or starting iwth the next animation.
	 */
	void setExtent( unsigned int extent, bool change_now );
	
	/**
	 * Sets the Speed attribute on all animations of a charcter
	 * @param speed the new value of the Speed attribute. Can be "low", "normal" or "high"
	 */
	void setSpeed( const char* speed );

	/**
	 * Sets the Speed attribute on all animations of a charcter
	 * @param model the model of the character on which to set a new Speed attribute.
	 * @param speed the new value of the Speed attribute. Can be "low", "normal" or "high"
	 */
	void setSpeed( float speed );

	/**
	 * Sets the Speed attribute on a single animation.
	 * @param anim_id the id of the animation to be altered.
	 * @param speed Can be "low", "normal" or "high
	 */
	void setSpeedOnAnim( unsigned int anim_id, const char* speed );

	/**
	 * Sets the Speed attribute on a single animation.
	 * @param anim_id the id of the animation to be altered.
	 * @param speed the new value of the Speed attribute represented by a float value from 0 to 2 (or more),
	 *              where 0 is the lowest speed (still) and 2 is double speed.
	 */
	void setSpeedOnAnim( unsigned int anim_id, float speed );

	/**
	 * Terminates an animation and unloads it
	 * @param anim pointer to the AnimationNode to be terminated
	 */
	void killAnim( AnimationNode* anim );

	/**
	 * removes and deletes all animations from a stage
	 */
	void clearStage(int stage);
	/**
	 * removes and deletes all animations for this agent
	 */
	void clearAllStages();

	///returns the idle animation
	AnimationNode* findIdleAnim();
	///returns the status of the specified animation
	Agent_AnimStatus::List getAnimStatus( AnimationNode* anim );
	///returns the animation node with the specified id
	AnimationNode* getAnimNode( int anim_id );
	///returns the animation that has the specified value for the noCustomization flag
	AnimationNode* getAnimNodeWithNoCust( bool noCustomization );

private:
	///gender of the local agent ("male" or "female")
	char m_gender[8];
	///culture of the local agent
	char m_culture[16];
	
	///animation playback speed of the local agent
	float model_anim_scale;

	///next available animation stage
	int m_nextFreeAnimStage;
	///next available animation id
	int m_nextAnimID;
	
	///Gesture-to-gesture animation blending process
	AnimationBlending* m_blend_gg;
	///Posture-to-gesture animation blending process
	AnimationBlending* m_blend_pg;
	///Gesture-to-posture animation blending process
	AnimationBlending* m_blend_gp;
	///Gesture-to-idle animation blending process
	AnimationBlending* m_blend_gi;

	///flag: blending between postures
	bool BLEND_BETWEEN_POSTURES;
	///flag: completely deleting animations after they finish or become inactive rather then putting them asleep
	bool DELETE_ANIM_ON_FINISH;
	///flag: blending between animations (also makes system ignore animation decomposition in prep, stroke, retraction)
	bool LINEAR_ANIM_BLENDING_ENABLED;
	///flag: blending between strokes of animations
	bool LINEAR_STROKE_BLENDING_ENABLED;
	///flag: fading for additive animations
	bool ADDITIVE_ANIM_FADE_ENABLED;

	bool startTimeSet;
	double time;

	///processes GestureLexicon
	bool processAnimDB(XMLNode db);

	///starts the specified animation
	void startAnim( AnimationNode *animNode );
	///starts the specified additive animation
	void startAdditiveAnim( AnimationNode *animNode );
	///loads an animation file and saves and initializes the animation node
	int loadAnimationFile( AnimationData* data, char* mask);

	///returns the value of the local blending semaphore
	bool getLock();
	///counts the active and/or inactive animations currently unde this agent's contorl
	int countAnimations( bool onlyActiveAnims );

	void toLowerCase( char* c_str );
};


#endif
        