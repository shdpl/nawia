
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
    
#include "AnimationComponent.h"
#include "../AgentManager.h"

#include <GameEngine/GameLog.h>
#include <GameEngine/GameEntity.h>
#include <GameEngine/GameEvent.h>
#include "GameEngine/GameEngine_Scenegraph.h"
#include <XMLParser/utXMLParser.h>

#include "../Config.h"

#include <string>

GameComponent* AnimationComponent::createComponent( GameEntity* owner )
{
	return new AnimationComponent( owner );
}

AnimationComponent::AnimationComponent(GameEntity* owner) : GameComponent(owner, "AgentComponent/Animation")
{
	AgentManager::instance()->addComponent(this);
	
	//register event listeners	
	owner->addListener(GameEvent::SP_SPOKEN_WORD, this);

	owner->addListener(GameEvent::AG_ANIM_PLAY, this);
	owner->addListener(GameEvent::AG_ANIM_STOP, this);
	owner->addListener(GameEvent::AG_ANIM_CLEAR, this);
	owner->addListener(GameEvent::AG_ANIM_GET_STATUS, this);
	owner->addListener(GameEvent::AG_ANIM_SET_EXTENT, this);
	owner->addListener(GameEvent::AG_ANIM_SET_SPEED, this);
	owner->addListener(GameEvent::AG_ANIM_SET_STROKES, this);

	m_stillAnimationLayer = 0;
	m_gender = Agent_Gender::FEMALE;

	m_eID = owner->worldId();
	m_hID = GameEngine::entitySceneGraphID(m_eID);

	m_speed = Config::getParamF(Agent_Param::DfltAnimSpeed_F);
	m_extent = Config::getParamF(Agent_Param::DfltAnimSE_F);
	m_strokeReps = Config::getParamI(Agent_Param::DfltAnimReps_I);

	//create the stages
	for(int i=0; i< c_MaxNumAnimStages; i++)
		m_stages.push_back(new Stage(m_hID, i));
}

AnimationComponent::~AnimationComponent()
{
	//release queued animations map. For this we must also free the space taken by the words
	std::map<const char*, Animation*, utils::mapstrcmp>::iterator q_iter = m_queuedAnimations.begin();
	if(q_iter != m_queuedAnimations.end())
	{
		killAnimation(q_iter->second);
		q_iter->second = 0;

		//remove animation for queue
		free((void *)(q_iter->first));
		++q_iter;
	}
	
	//release layers
	std::list<Layer*>::iterator l_iter = m_layers.begin();
	while(l_iter != m_layers.end())
	{		
		killAnimation((*l_iter)->getStage()->getAnimation());
		delete (*l_iter);
		l_iter = m_layers.erase(l_iter);
	}

	//release still animation layer
	if(m_stillAnimationLayer != 0)
	{
		delete m_stillAnimationLayer;
		m_stillAnimationLayer = 0;
	}

	//release stages
	std::vector<Stage*>::iterator s_iter = m_stages.begin();
	while(s_iter != m_stages.end())
	{
		delete (*s_iter);
		++s_iter;
	}

	AgentManager::instance()->removeComponent(this);
}

void AnimationComponent::executeEvent(GameEvent *event)
{
	switch(event->id())
	{
		//Word Boundary event
		case GameEvent::SP_SPOKEN_WORD:
		{
			// Get event data
			const char *data = static_cast<const char *>(event->data());

			//look if the spoken word is associated with an animation
			std::map<const char*, Animation*, utils::mapstrcmp>::iterator iter = m_queuedAnimations.find(data);
			if(iter != m_queuedAnimations.end() && iter->second != 0)
			{
				startAnimation( iter->second );

				//remove animation for queue
				free((void *)(iter->first));
				iter->second = 0;
				m_queuedAnimations.erase(iter);
			}
			break;
		}

		case GameEvent::AG_ANIM_PLAY:
		{
			// Get event data
			AgentAnimationData* data = static_cast<AgentAnimationData*>(event->data());
			
			switch( data->m_sourceType )
			{
				case AgentAnimationData::AnimationFile:
				{
					data->m_returnI = playAnimationF( data->m_sourceS, (Agent_AnimType::List)data->m_animType, data->m_speed, data->m_spatialExtent, data->m_strokeReps, (char*)data->m_startNode, (char*)data->m_syncWord );
					break;
				}
				case AgentAnimationData::AnimationName:
				{
					data->m_returnI = playAnimationN( data->m_sourceS, data->m_speed, data->m_spatialExtent, data->m_strokeReps, (char*)data->m_startNode, (char*)data->m_syncWord );
					break;
				}
				case AgentAnimationData::AnimationID:
				{
					data->m_returnI = playAnimationI( data->m_sourceI, data->m_speed, data->m_spatialExtent, data->m_strokeReps, (char*)data->m_startNode, (char*)data->m_syncWord );
					break;
				}
				case AgentAnimationData::AnimationResource:
				{
					data->m_returnI = playAnimationR( data->m_sourceI, (Agent_AnimType::List)data->m_animType, data->m_speed, data->m_spatialExtent, data->m_strokeReps, (char*)data->m_startNode, (char*)data->m_syncWord );
					break;
				}		
			}
			break;
		}
		case GameEvent::AG_ANIM_CLEAR:
		{
			clear();
			break;
		}
		case GameEvent::AG_ANIM_GET_STATUS:
		{
			// Get event data
			AgentAnimationData* data = static_cast<AgentAnimationData*>(event->data());
			data->m_returnI = getAnimationStatus(data->m_playbackID);
			break;
		}
		case GameEvent::AG_ANIM_STOP:
		{
			// Get event data
			AgentAnimationData* data = static_cast<AgentAnimationData*>(event->data());
			forceAnimationStop(data->m_playbackID); //disabled
			break;
		}
		case GameEvent::AG_ANIM_GET_EXTENT:
		{
			// Get event data
			AgentAnimationData* data = static_cast<AgentAnimationData*>(event->data());
			if(data->m_playbackID < 0)
				data->m_returnF = getAnimationExtent();
			else
				data->m_returnF = getAnimationExtent(data->m_playbackID);
			break;
		}
		case GameEvent::AG_ANIM_GET_SPEED:
		{
			// Get event data
			AgentAnimationData* data = static_cast<AgentAnimationData*>(event->data());
			if(data->m_playbackID < 0)
				data->m_returnF = getAnimationSpeed();
			else
				data->m_returnF = getAnimationSpeed(data->m_playbackID);
			break;
		}
		case GameEvent::AG_ANIM_GET_STROKES:
		{
			// Get event data
			AgentAnimationData* data = static_cast<AgentAnimationData*>(event->data());
			if(data->m_playbackID < 0)
				data->m_returnI = getAnimationStrokeReps();
			else
				data->m_returnI = getAnimationStrokeReps(data->m_playbackID);
			break;
		}
		case GameEvent::AG_ANIM_SET_EXTENT:
		{
			// Get event data
			AgentAnimationData* data = static_cast<AgentAnimationData*>(event->data());
			if(data->m_playbackID < 0)
				setAnimationExtent(data->m_valueF);
			else
				setAnimationExtent(data->m_playbackID, data->m_valueF);
			break;
		}
		case GameEvent::AG_ANIM_SET_SPEED:
		{
			// Get event data
			AgentAnimationData* data = static_cast<AgentAnimationData*>(event->data());
			if(data->m_playbackID < 0)
				setAnimationSpeed(data->m_valueF);
			else
				setAnimationSpeed(data->m_playbackID, data->m_valueF);
			break;
		}
		case GameEvent::AG_ANIM_SET_STROKES:
		{
			// Get event data
			AgentAnimationData* data = static_cast<AgentAnimationData*>(event->data());
			if(data->m_playbackID < 0)
				setAnimationStrokeReps(data->m_valueI);
			else
				setAnimationStrokeReps(data->m_playbackID, data->m_valueI);
			break;
		}
	}
}

void AnimationComponent::loadFromXml(const XMLNode* node)
{
	/*
	 * Agent parameters
	 */
	if( (node->getAttribute("gender") != 0) 
	 && (strcmp(node->getAttribute("gender"), "") != 0)
	 && (strcmp(node->getAttribute("gender"), "male") == 0 || strcmp(node->getAttribute("gender"), "female") == 0 ))
	{
		m_gender = utils::str2gender(node->getAttribute("gender"));
	}

	/*
	 * Animation parameters
	 */
	XMLNode* animation = &node->getChildNode( "Animation", 0 );
	if(!animation->isEmpty())
	{
		if( (animation->getAttribute("stillAnim") != 0) 
		 && (strcmp(animation->getAttribute("stillAnim"), "") != 0) )
		{
			loadStillAnimation((char *)animation->getAttribute("stillAnim"));
		}
		else
			m_stillAnimationLayer = 0;	

		if( (animation->getAttribute("speed") != 0) 
		 && (strcmp(animation->getAttribute("speed"), "") != 0) )
		{
			m_speed = (float)atof(animation->getAttribute("speed"));
		}	

		if( (animation->getAttribute("spatialExtent") != 0) 
		 && (strcmp(animation->getAttribute("spatialExtent"), "") != 0) )
		{
			m_extent = (float)atof(animation->getAttribute("spatialExtent"));
		}	

		if( (animation->getAttribute("strokeReps") != 0) 
		 && (strcmp(animation->getAttribute("strokeReps"), "") != 0) )
		{
			m_strokeReps = atoi(animation->getAttribute("strokeReps"));
		}
	}
}

void AnimationComponent::update()
{
	//update layers
	std::list<Layer*>::iterator iter = m_layers.begin();
	while(iter != m_layers.end())
	{
		(*iter)->update();

		//check for animations that are about to end
		if((*iter)->getLastStatusChange() == LayerStatus::BLENDOUT)
			processAnimationEnding((*iter)->getStage()->getAnimation());
		
		//delete inactive layers
		if(!(*iter)->isActive())
		{
			delete (*iter);
			iter = m_layers.erase(iter);
		}
		else
			++iter;
	}

	//delete permanently occluded layers
	deleteOccludedLayers();
	//it is important we update the IDs of the layers so they are in sync with their position in the list (highest ID = top(last) position)
	updateLayerIDs();
	//compute spatial extent of the top animation (the currently visible one)
	computeSpatialExtent();

	//update still animation
	if(m_stillAnimationLayer != 0)
		m_stillAnimationLayer->update();	
}

int AnimationComponent::playAnimationI(int id, float speed, float spatialExtent, int strokeRepetitions, char *startNode, char *syncWord)
{
	Animation* a = loadAnimationI(id, startNode);
	if(a == 0)
		return -1;

	if(speed >= 0) a->setSpeed(speed);
	else a->setSpeed(m_speed);

	if(spatialExtent >= 0) a->setSpatialExtent(spatialExtent);
	else a->setSpatialExtent(m_extent);
	
	if(strokeRepetitions >= 0) a->setNumStrokeRepetitions(strokeRepetitions);
	else a->setNumStrokeRepetitions(m_strokeReps);

	bool result = true;
	if(syncWord == 0 || strcmp(syncWord, "") == 0)
		result = startAnimation(a);
	else
		result = syncAnimationStart(a, syncWord);

	return (result) ? a->getPlaybackID() : -2;
}

int AnimationComponent::playAnimationN( const char* name, float speed, float spatialExtent, int strokeRepetitions, char* startNode, char* syncWord )
{
	Animation* a = loadAnimationN(name, startNode);
	if(a == 0)
		return -1;

	if(speed >= 0) a->setSpeed(speed);
	else a->setSpeed(m_speed);

	if(spatialExtent >= 0) a->setSpatialExtent(spatialExtent);
	else a->setSpatialExtent(m_extent);
	
	if(strokeRepetitions >= 0) a->setNumStrokeRepetitions(strokeRepetitions);
	else a->setNumStrokeRepetitions(m_strokeReps);

	bool result = true;
	if(syncWord == 0 || strcmp(syncWord, "") == 0)
		result = startAnimation(a);
	else
		result = syncAnimationStart(a, syncWord);

	return (result) ? a->getPlaybackID() : -2;
}

int AnimationComponent::playAnimationF( const char* file, Agent_AnimType::List type, float speed, float spatialExtent, int strokeRepetitions, char* startNode, char* syncWord )
{
	Animation* a = loadAnimationF(file, startNode, type);
	if(a == 0)
		return -1;

	if(speed >= 0) a->setSpeed(speed);
	else a->setSpeed(m_speed);

	if(spatialExtent >= 0) a->setSpatialExtent(spatialExtent);
	else a->setSpatialExtent(m_extent);
	
	if(strokeRepetitions >= 0) a->setNumStrokeRepetitions(strokeRepetitions);
	else a->setNumStrokeRepetitions(m_strokeReps);

	bool result = true;
	if(syncWord == 0 || strcmp(syncWord, "") == 0)
		result = startAnimation(a);
	else
		result = syncAnimationStart(a, syncWord);

	return (result) ? a->getPlaybackID() : -2;
}

int AnimationComponent::playAnimationR( int resource, Agent_AnimType::List type, float speed, float spatialExtent, int strokeRepetitions, char* startNode, char* syncWord )
{
	Animation* a = loadAnimationR(resource, startNode, type);
	if(a == 0)
		return -1;

	if(speed >= 0) a->setSpeed(speed);
	else a->setSpeed(m_speed);

	if(spatialExtent >= 0) a->setSpatialExtent(spatialExtent);
	else a->setSpatialExtent(m_extent);
	
	if(strokeRepetitions >= 0) a->setNumStrokeRepetitions(strokeRepetitions);
	else a->setNumStrokeRepetitions(m_strokeReps);

	bool result = true;
	if(syncWord == 0 || strcmp(syncWord, "") == 0)
		result = startAnimation(a);
	else
		result = syncAnimationStart(a, syncWord);

	return (result) ? a->getPlaybackID() : -2;
}

void AnimationComponent::forceAnimationStop(int playbackID)
{
	std::list<Layer*>::reverse_iterator riter = m_layers.rbegin();
	while(riter != m_layers.rend())
	{
		if((*riter)->getStage()->getAnimation()->getPlaybackID() == playbackID)
		{
			(*riter)->blendOut();
		}
		++riter;
	}
}

Animation* AnimationComponent::loadAnimationF(const char* filename, const char* startNode, Agent_AnimType::List type)
{
	AnimationData* data = AnimationData::getInstance( filename );
	data->addFile( new AnimationFile(m_gender, filename) );
	data->setType(type);

	return loadAnimationD( data, startNode );
}

Animation* AnimationComponent::loadAnimationR(int resource, const char* startNode, Agent_AnimType::List type)
{
	char resource_str[16];
	_itoa_s(resource, resource_str, 16, 10);

	AnimationData* data = AnimationData::getInstance( (std::string("Res_") + std::string(resource_str)).c_str() );
	data->setType(type);

	Animation* anim = new Animation(m_hID, data, startNode);
	anim->setResource( resource );

	return anim;
}

Animation* AnimationComponent::loadAnimationN(const char* name, const char* startNode)
{
	AnimationData* d = AnimationData::getInstance(name);
	return loadAnimationD( d, startNode );
}

Animation* AnimationComponent::loadAnimationI(unsigned int id, const char* startNode)
{
	AnimationData* d = AnimationData::getInstance(id);
	return loadAnimationD( d, startNode );
}

Animation* AnimationComponent::loadAnimationD(AnimationData* data, const char* startNode)
{
	bool result;

	//check data content
	if(data == 0 || !data->isValid())
		return 0;

	//load animation
	Animation* anim = new Animation(m_hID, data, startNode);	
	result = anim->loadFile( m_gender );
	if(!result)	
	{
		killAnimation(anim);
		return 0;
	}

	//if(data->getExtPreparation() != 0)
	//{
	//	//we must load the preparation before the actual animation
	//	Animation* prep = new Animation(m_hID, data->getExtPreparation(), startNode);
	//	//we queue up the storke after the prep
	//	prep->setNextAnimation( anim );

	//	result = prep->loadFile( m_gender );
	//	if(!result)	
	//	{
	//		killAnimation(anim);
	//		killAnimation(prep);
	//		return 0;
	//	}

	//	//we return the prep as it is the first one that should be started
	//	return prep;
	//}
	//return the animation so it the caller can start it
	return anim;
}

void AnimationComponent::loadStillAnimation(const char* filename)
{
	//** create still animation
	char id_str[16];
	//the name of the animation has to include the agent id to avoid identical animations
	_itoa_s(m_eID, id_str, 16, 10);

	AnimationData* stillData = AnimationData::getInstance( (std::string("stillAnim") + std::string(id_str)).c_str() );	
	stillData->setID(-1);
	stillData->addFile(new AnimationFile(m_gender, filename));
	stillData->setType( Agent_AnimType::STILL );

	Animation* a = new Animation(m_hID, stillData, 0);
	a->loadFile(m_gender);

	//** grab a stage
	Stage* s = getStage();
	//lock it so it can't be used by other layers
	s->lock();

	//** create a layer
	m_stillAnimationLayer = new Layer(m_hID, (int)m_layers.size());
	m_stillAnimationLayer->setup(a, s);
}

bool AnimationComponent::startAnimation(Animation *newAnim)
{
	/*
	 * Compute Retraction
	 */
	//if the current visible newAnimation has a defined external retraction, we must load it before this newAnim
	Animation* visibleAnim = (m_layers.size() > 0) ? m_layers.back()->getStage()->getAnimation() : 0;

	bool visibleAnimIsActive = visibleAnim != 0 && visibleAnim->isActive();
	bool visibleAnimHasRet = visibleAnim != 0 && visibleAnim->getData()->getExtRetraction() != 0;

	if( visibleAnimIsActive && visibleAnimHasRet )
	{
		Animation* ret;
		ret = loadAnimationD( visibleAnim->getData()->getExtRetraction(), 0 );
		if(ret == 0)
			return false;
		//queue up the newAnimation after the retraction
		ret->setNextAnimation( newAnim );

		//conitnue with the retraction
		newAnim = ret;
	}
	/*
	 * Compute Preparation
	 */
	bool newAnimHasPrep = newAnim->getData()->getExtPreparation() != 0;
	bool prepAlreadyLoaded = visibleAnim != 0 && newAnimHasPrep && (visibleAnim->getID() == newAnim->getData()->getExtPreparation()->getID());
	if( newAnimHasPrep && !prepAlreadyLoaded )
	{
		//we must load the preparation before the actual animation
		Animation* prep = loadAnimationD( newAnim->getData()->getExtPreparation(), 0 );
		if(prep == 0)
			return false;
		//we queue up the storke after the prep
		prep->setNextAnimation( newAnim );

		//we return the prep as it is the first one that should be started
		newAnim = prep;
	}

	//stages are a limited resource, we need to search for one that is available
	Stage* stage = getStage();
	if(stage == 0)
	{
		killAnimation(newAnim);
		newAnim = 0;
		return false;
	}

	//we place each new newAnimation on a higher layer and as we increase the weight of that layer, the newAnimation will be blended in
	Layer* layer = createLayer();
	layer->setup(newAnim, stage);

	return true;
}

void AnimationComponent::processAnimationEnding(Animation *anim)
{
	bool animIsVisible = m_layers.back()->getStage()->getAnimation()->equals(anim);
	if(!animIsVisible)
		return;

	//if there is a running animation with a defined posture that is just below this one, visibility wise, 
	//we need to start its preparation as it'll become visible again after this anim finishes
	Animation* nextVisibleAnim = (m_layers.size() > 1) ? (*( --( --(m_layers.end()) ) ))->getStage()->getAnimation() : 0;

	bool nextVisibleAnimIsActive = nextVisibleAnim != 0 && nextVisibleAnim->isActive();	
	bool nextVisibleAnimHasPrep = nextVisibleAnim != 0 && nextVisibleAnim->getData()->getExtPreparation() != 0;

	bool animHasSuccessor = anim->getNextAnimation() != 0;
	bool animIsPrepOrRet = anim->getType() == Agent_AnimType::PREPARATION || anim->getType() == Agent_AnimType::RETRACTION;

	if(animHasSuccessor)
	{
		startAnimation(anim->getNextAnimation());
	}
	else if( nextVisibleAnimIsActive && nextVisibleAnimHasPrep && !animIsPrepOrRet )
	{
		Animation* prep = loadAnimationD( nextVisibleAnim->getData()->getExtPreparation(), 0 );
		if(prep != 0)
			startAnimation(prep);
	}
}

bool AnimationComponent::syncAnimationStart(Animation *anim, const char* syncWord)
{
	char *_syncWord = (char *)malloc(64 * sizeof(char));
	utils::strcpy(syncWord, _syncWord, 64);

	m_queuedAnimations[_syncWord] = anim;

	return true;
}

Stage* AnimationComponent::getStage()
{
	//seach for a free stage
	for(unsigned int i=0; i< m_stages.size(); i++)
	{
		if(m_stages[i]->isFree())
			return m_stages[i];
	}

	//if we find none, then we'll look for the oldest, inactive and unlocked stage
	for(unsigned int i=0; i< m_stages.size(); i++)
	{
		if(!m_stages[i]->isActive() && !m_stages[i]->isLocked())
		{
			//we need to free up any resources related to this stage before we can reuse it
			freeStage(m_stages[i]);
			return m_stages[i];
		}
	}

	//if we still didn't find a stage, return 0 to signal that all stages are full
	return 0;	
}

Layer* AnimationComponent::createLayer()
{
	//we create the layer and place it at the top of the other layers
	Layer* l = new Layer( m_hID, (int)m_layers.size() );
	m_layers.push_back(l);

	//now we must alter the id of the still animation layer so it remains the top layer
	m_stillAnimationLayer->setID(l->getID() +1);

	return l;
}

void AnimationComponent::deleteOccludedLayers()
{
	if(m_layers.size() < 2)
		return;

	//find highest layer with an active posture, the ground layer
	std::list<Layer*>::reverse_iterator riter = m_layers.rbegin();
	while(riter != m_layers.rend())
	{
		if((*riter)->getStage()->getAnimation()->getType() == Agent_AnimType::POSTURE && (*riter)->getStatus() == LayerStatus::MAIN)
		{
			//everything that's below this layer is permanently occluded
			break;
		}
		++riter;
	}

	if(riter != m_layers.rend() && (*riter)->getID() != 0)
	{
		//delete all layers below the ground layer
		std::list<Layer*>::iterator d_iter = m_layers.begin();
		std::list<Layer*>::iterator d_iter_end = riter.base();
		--d_iter_end;

		while(d_iter != d_iter_end)
		{
			delete (*d_iter);
			d_iter = m_layers.erase(d_iter);
		}
	}
}

void AnimationComponent::updateLayerIDs()
{
	//now we need to sync the layer "positions" with their IDs
	unsigned int id = 0;
	std::list<Layer*>::iterator iter = m_layers.begin();
	while(iter != m_layers.end())
	{
		(*iter)->setID(id);
		++id;
		++iter;
	}
}

void AnimationComponent::freeStage(Stage* s)
{
	bool foundLayers = false;
	std::list<Layer*>::iterator iter = m_layers.begin();
	while(iter != m_layers.end())
	{
		if((*iter)->getStage()->getID() == s->getID())
		{
			delete *iter;
			iter = m_layers.erase(iter);
			foundLayers = true;
		}
		else
			++iter;
	}

	if(!foundLayers)
		s->free();
}

void AnimationComponent::computeSpatialExtent()
{
	//compute spatial extent based on the top layer (the visible one)
	if(m_layers.size() > 0)
	{
		if(!m_layers.back()->getStage()->getAnimation()->getData()->isCustomizable())
		{
			//in this case we play the animation normally, so we set the still animation layer's weight to 0
			m_stillAnimationLayer->setWeight( 0.0f );
		}
		else
		{
			//we set the weight of the still animation so that it occludes (1- specialExtent) of the animation weight
			m_stillAnimationLayer->setWeight( 1.0f - m_layers.back()->getStage()->getAnimation()->getSpatialExtent() );
		}
	}
}

void AnimationComponent::killAnimation(Animation* anim)
{
	if(anim == 0)
		return;

	if(anim->getNextAnimation() != 0)
		killAnimation(anim->getNextAnimation());

	//delete animation only if it is not under a stage's management
	if(findAnimationP(anim->getPlaybackID()) == 0)
		delete anim;
}

float AnimationComponent::getAnimationExtent(int playbackID)
{
	Animation* a = findAnimationP(playbackID);
	if(a!=0)
		return a->getSpatialExtent();

	return -1;
}

float AnimationComponent::getAnimationExtent()
{
	return m_extent;
}

float AnimationComponent::getAnimationSpeed(int playbackID)
{
	Animation* a = findAnimationP(playbackID);
	if(a!=0)
		return a->getSpeed();

	return -1;
}

float AnimationComponent::getAnimationSpeed()
{
	return m_speed;
}

int AnimationComponent::getAnimationStrokeReps(int playbackID)
{
	Animation* a = findAnimationP(playbackID);
	if(a!=0)
		return a->getNumStrokeRepetitions();

	return -1;
}

int AnimationComponent::getAnimationStrokeReps()
{
	return m_strokeReps;
}

void AnimationComponent::setAnimationExtent(int playbackID, float extent)
{
	Animation* a = findAnimationP(playbackID);
	if(a!=0)
		a->setSpatialExtent(extent);
}

void AnimationComponent::setAnimationExtent(float extent)
{
	m_extent = extent;
}

void AnimationComponent::setAnimationSpeed(int playbackID, float speed)
{
	Animation* a = findAnimationP(playbackID);
	if(a!=0)
		a->setSpeed(speed);
}

void AnimationComponent::setAnimationSpeed(float speed)
{
	m_speed = speed;
}

void AnimationComponent::setAnimationStrokeReps(int playbackID, unsigned int reps)
{
	Animation* a = findAnimationP(playbackID);
	if(a!=0)
		a->setNumStrokeRepetitions(reps);
}

void AnimationComponent::setAnimationStrokeReps(unsigned int reps)
{
	m_strokeReps = reps;
}

Animation* AnimationComponent::findAnimationP(int playbackID)
{
	std::list<Layer*>::reverse_iterator riter = m_layers.rbegin();
	while(riter != m_layers.rend())
	{
		if((*riter)->getStage()->getAnimation()->getPlaybackID() == playbackID)
		{
			return (*riter)->getStage()->getAnimation();
		}
		++riter;
	}

	return 0;
}

Animation* AnimationComponent::findAnimationT(Agent_AnimType::List type)
{
	std::list<Layer*>::reverse_iterator riter = m_layers.rbegin();
	while(riter != m_layers.rend())
	{
		if((*riter)->getStage()->getAnimation()->getType() == type)
		{
			return (*riter)->getStage()->getAnimation();
		}
		++riter;
	}

	return 0;
}

Animation* AnimationComponent::findAnimationI(unsigned int id)
{
	std::list<Layer*>::reverse_iterator riter = m_layers.rbegin();
	while(riter != m_layers.rend())
	{
		if((*riter)->getStage()->getAnimation()->getID() == id)
		{
			return (*riter)->getStage()->getAnimation();
		}
		++riter;
	}

	return 0;
}

Agent_AnimStatus::List AnimationComponent::getAnimationStatus(int playbackID)
{
	Animation* a = findAnimationP(playbackID);
	if(a!=0)
		return a->getStatus();
	else
		return Agent_AnimStatus::ANIM_NOT_FOUND;

}

void AnimationComponent::clear()
{
	//release queued animations map. For this we must also free the space taken by the words
	std::map<const char*, Animation*, utils::mapstrcmp>::iterator q_iter = m_queuedAnimations.begin();
	if(q_iter != m_queuedAnimations.end())
	{
		killAnimation(q_iter->second);
		q_iter->second = 0;

		//remove animation for queue
		free((void *)(q_iter->first));		
		
		q_iter = m_queuedAnimations.erase(q_iter);
	}
	
	//release layers
	std::list<Layer*>::iterator l_iter = m_layers.begin();
	while(l_iter != m_layers.end())
	{
		killAnimation((*l_iter)->getStage()->getAnimation());
		l_iter = m_layers.erase(l_iter);
	}
}

int AnimationComponent::getEntityID()
{
	return m_eID;
}

int AnimationComponent::getHordeID()
{
	return m_hID;
}
        