
// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
//
// This file is part of the GameEngine of the University of Augsburg
//
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************

// ****************************************************************************************
//
// GameEngine Agent Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2011 Ionut Damian
// 
// ****************************************************************************************
    
#ifndef AGENTCOMPONENT_ANIMATION_H_
#define AGENTCOMPONENT_ANIMATION_H_

#include <GameEngine/Config.h>
#include <GameEngine/GameComponent.h>

#include "Animation.h"
#include "AnimationData.h"
#include "Stage.h"
#include "Layer.h"

#include "../utils.h"
#include <vector>
#include <list>

class AnimationComponent : public GameComponent
{
public:
	static GameComponent*  createComponent( GameEntity* owner );

	AnimationComponent(GameEntity* owner);
	virtual ~AnimationComponent();

	bool checkEvent(GameEvent* event) { return true; }

	void executeEvent(GameEvent* event);

	void loadFromXml(const XMLNode* description);

	void update();

	// ********************
	// Interface functions
	// ********************	
	///loads an animation by id (from AnimationLexicon) and starts its playback
	int playAnimationI( int id, float speed, float spatialExtent, int strokeRepetitions, char* startNode, char* syncWord );
	///loads an animation by name (from AnimationLexicon) and starts its playback
	int playAnimationN( const char* name, float speed, float spatialExtent, int strokeRepetitions, char* startNode, char* syncWord );
	///loads an animation by file and starts its playback
	int playAnimationF( const char* file, Agent_AnimType::List type, float speed, float spatialExtent, int strokeRepetitions, char* startNode, char* syncWord );
	///loads an animation by Horde3D animation resource and starts its playback
	int playAnimationR( int resource, Agent_AnimType::List type, float speed, float spatialExtent, int strokeRepetitions, char* startNode, char* syncWord );

	///forces the termination of an animtions (DISABLED)
	void forceAnimationStop( int playbackID );

	///removes and deletes all active and queued up animations of this agent
	void clear();

	///returns the status of the specified animation
	Agent_AnimStatus::List getAnimationStatus(int playbackID);

	// ********************
	// Getter
	// ********************
	///returns local horde ID
	int getHordeID();
	///returns local entity ID
	int getEntityID();

	/**
	 * Gets the Spatial Extent attribute of the specified animation
	 * @param playbackID the playback id of the animation to be altered.
	 * @return extent the new value of the Spatial Extent attribute represented by a float between 0 and 1,
	 *               where 0 is the lowest (still) spatial extent and 1 is the highest spatial extent (normal playback)
	 */
	float getAnimationExtent(int playbackID);

	/**
	 * Gets the default animation's spatial extent of the agent
	 * @return extent the new value of the Spatial Extent attribute represented by a float between 0 and 1,
	 *               where 0 is the lowest (still) spatial extent and 1 is the highest spatial extent (normal playback)
	 */
	float getAnimationExtent();

	/**
	 * Gets the Speed attribute of a single animation.
	 * @param playbackID the playback id of the animation to be altered.
	 * @return speed the new value of the Speed attribute represented by a positive float value,
	 *              where 0 is the lowest speed (still) and 2 is double speed.
	 */
	float getAnimationSpeed(int playbackID);

	/**
	 * Gets the default animation's speed of the agent
	 * @param playbackID the playback id of the animation to be altered.
	 * @return speed the new value of the Speed attribute represented by a positive float value,
	 *              where 0 is the lowest speed (still) and 2 is double speed.
	 */
	float getAnimationSpeed();

	/**
	 * Gets the number of stroke repetitions the specified animation should do
	 * @param playbackID the playback id of the animation to be altered.
	 * @return reps number of stroke repetitions
	 */
	int getAnimationStrokeReps(int playbackID);

	/**
	 * Gets the default number of stroke repetitions an animation should do
	 * @return reps number of stroke repetitions
	 */
	int getAnimationStrokeReps();

	// ********************
	// Setter
	// ********************
	/**
	 * Sets the Spatial Extent attribute on the specified animation
	 * @param playbackID the playback id of the animation to be altered.
	 * @param extent the new value of the Spatial Extent attribute represented by a float between 0 and 1,
	 *               where 0 is the lowest (still) spatial extent and 1 is the highest spatial extent (normal playback)
	 */
	void setAnimationExtent(int playbackID, float extent);

	/**
	 * Sets the default animation's spatial extent of the agent
	 * @param extent the new value of the Spatial Extent attribute represented by a float between 0 and 1,
	 *               where 0 is the lowest (still) spatial extent and 1 is the highest spatial extent (normal playback)
	 */
	void setAnimationExtent(float extent);

	/**
	 * Sets the Speed attribute on a single animation.
	 * @param playbackID the playback id of the animation to be altered.
	 * @param speed the new value of the Speed attribute represented by a positive float value,
	 *              where 0 is the lowest speed (still) and 2 is double speed.
	 */
	void setAnimationSpeed(int playbackID, float speed);

	/**
	 * Sets the default animation's speed of the agent
	 * @param speed the new value of the Speed attribute represented by a positive float value,
	 *              where 0 is the lowest speed (still) and 2 is double speed.
	 */
	void setAnimationSpeed(float speed);

	/**
	 * Sets the number of stroke repetitions the specified animation should do
	 * @param playbackID the playback id of the animation to be altered.
	 * @param reps number of stroke repetitions
	 */
	void setAnimationStrokeReps(int playbackID, unsigned int reps);

	/**
	 * Sets the default number of stroke repetitions an animation should do
	 * @param reps number of stroke repetitions
	 */
	void setAnimationStrokeReps(unsigned int reps);

private:
	///local agent horde ID
	int m_hID;
	///local agent entity ID
	int m_eID;

	///vector of all animation stages
	std::vector<Stage*> m_stages;
	///list of active animation layers
	std::list<Layer*> m_layers;

	///map containing queued-up animations (because of TTS synchronization)
	std::map<const char*, Animation*, utils::mapstrcmp> m_queuedAnimations;

	///local still animation
	Layer* m_stillAnimationLayer;

	///the gender of this agent
	Agent_Gender::List m_gender;

	///agent-specific default value for the animation speed
	float m_speed;
	///agent-specific default value for the animation spatial extent
	float m_extent;
	///agent-specific default value for the animation stroke reptitions
	int m_strokeReps;

	// ********************
	// Animation loading
	// ********************
	///loads an animation by file
	Animation* loadAnimationF(const char* filename, const char* startNode, Agent_AnimType::List type);
	///loads an animation by horde3D resoruce
	Animation* loadAnimationR(int resource, const char* startNode, Agent_AnimType::List type);
	///loads an animation by name (from AnimationLexicon)
	Animation* loadAnimationN(const char* name, const char* startNode);
	///loads an animation by id (from AnimationLexicon)
	Animation* loadAnimationI(unsigned int id, const char* startNode);
	///loads an animation by AnimationData
	Animation* loadAnimationD(AnimationData* data, const char* startNode);

	void loadStillAnimation(const char* filename);

	// ********************
	// Animation playback
	// ********************
	///starts a loaded animation. Handles layer and stage allocation, spatial extent manipulation, posture blend-out and other
	bool startAnimation(Animation* newAnim);	
	///queues up a loaded animation to be started when syncWord gets spoken
	bool syncAnimationStart(Animation* anim, const char* syncWord);

	///prepares an animation for termination (does not terminate it). Checks for animation chains, posture re-blend-in and other
	void processAnimationEnding(Animation* anim);

	// ********************
	// Other
	// ********************
	///Destroys the animation and all its referenced animations if these animations are not managed by a stage of a layer
	void killAnimation(Animation* anim);

	/**
	 * Returns the animation with the specified playback ID. The search starts at the highest layer and proceeds downwards.
	 * This means that in case of multiple results, the newest animation will be returned
	 */
	Animation* findAnimationP(int playbackID);
	/**
	 * Returns an animation with the specified type. The search starts at the highest layer and proceeds downwards.
	 * This means that in case of multiple results, the newest animation will be returned
	 */
	Animation* findAnimationT(Agent_AnimType::List type);
	/**
	 * Returns the animation with the specified animation ID. The search starts at the highest layer and proceeds downwards.
	 * This means that in case of multiple results, the newest animation will be returned
	 */
	Animation* findAnimationI(unsigned int id);

	///returns the next available stage
	Stage* getStage();
	///frees up a stage (deletes any layers that use the stage)
	void freeStage(Stage* s);

	///creates a new layer and positions it on top of the other animation layers (but below the still animation layer)
	Layer* createLayer();
	
	///searches for permanently obscured layer and deletes them
	void deleteOccludedLayers();

	///syncs each layers position in the list with its id
	void updateLayerIDs();

	///computes changes to the stillAnimationLayer to achieve the spatial extent of the visible animation
	void computeSpatialExtent();
};

#endif
        