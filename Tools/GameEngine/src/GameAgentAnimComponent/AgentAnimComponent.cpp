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
#include "AgentAnimComponent.h"
#include "AgentAnimManager.h"
#include "GameEngine_AgentAnim.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameLog.h>
#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEngine_SceneGraph.h>
#include <GameEngine/GameEvent.h>

#include <Horde3D/Horde3DUtils.h>
#include <Horde3D/Horde3D.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <time.h>

#include <XMLParser/utXMLParser.h>

using namespace std;


GameComponent* AgentAnimComponent::createComponent( GameEntity* owner )
{
	return new AgentAnimComponent( owner );
}

AgentAnimComponent::AgentAnimComponent(GameEntity* owner) : GameComponent(owner, "AgentAnimComponent")
{
	AgentAnimManager::instance()->addComponent(this);

	//register event listeners	
	owner->addListener(GameEvent::SP_SPOKEN_WORD, this);
	
	m_model = GameEngine::entitySceneGraphID( m_owner->worldId() );
	DELETE_ANIM_ON_FINISH = true;
	LINEAR_ANIM_BLENDING_ENABLED = true; //TODO: check usage of this flags
	LINEAR_STROKE_BLENDING_ENABLED = true; //TODO: check usage of this flags
	ADDITIVE_ANIM_FADE_ENABLED = true;
	
	//each agent gets MaxNumAnimStages stages
	//we reserve the first stage (#0) for the still anim
	m_nextFreeAnimStage = 1;
	m_nextAnimID = 0;

	model_max_weight = 1.0f;
	posture_weight = 0.01f;
	model_anim_scale = 1;

	m_animations.reserve(MaxNumAnimStages);

	//blend is requiered for a proper blending between old and newly loaded animations
	blend = -1;
	m_blend_gg = 0;
	m_blend_pg = 0;
	m_blend_gp = 0;
	m_blend_gi = 0;

	anim_count = 0;
	postures_loaded = false;
	idleAnimStarted = false;
}

AgentAnimComponent::~AgentAnimComponent()
{
	//Kill animations
	vector<AnimationNode*>::iterator iter = m_animations.begin();
	while ( iter != m_animations.end() )
	{		
		killAnim( *iter );
		++iter;
	}
	m_animations.clear();
	//m_animations.~vector();
	
	//Kill other animations
	if(stillAnim != 0)
	{
		//h3dUnloadResource( stillAnimNode_1->anim_res );
		h3dRemoveResource( stillAnim->anim_res );
		delete stillAnim;
		stillAnim = 0;
	}

	//delete animationdata
	vector<AnimationData*>::iterator iter2 = m_animationData.begin();
	while ( iter2 != m_animationData.end() )
	{		
		delete (*iter2);
		(*iter2) = 0;
		++iter2;
	}	
	m_animationData.clear();
	//m_animationData.~vector();

	//delete queuedAnimations
	map<const char*, AnimationNode*, charcmp>::iterator iter3 = m_queuedAnimations.begin();
	while ( iter3 != m_queuedAnimations.end() )
	{
		free((void *)(iter3->first));
		if(iter3->second != 0)
		{
			delete iter3->second;
			iter3->second = 0;
		}
		++iter3;
	}	
	m_queuedAnimations.clear();
	//m_queuedAnimations.~map();
	
	AgentAnimManager::instance()->removeComponent(this);
}

void AgentAnimComponent::executeEvent(GameEvent *event)
{
	switch(event->id())
	{
		//Word Boundary event
		case GameEvent::SP_SPOKEN_WORD:
		{
			// Get event data
			const char *data = static_cast<const char *>(event->data());
			
			if(AGENTANIMDEBUG)
				printf("[db]%s spoke word \t'%s'\r\n", m_owner->id().c_str(), data);

			//look if the spoken word is associated with an animation
			map<const char*, AnimationNode*, charcmp>::iterator iter = m_queuedAnimations.find(data);
			if(iter != m_queuedAnimations.end() && iter->second != 0)
			{
				//start the queued animation
				iter->second->sleep = false;
				iter->second->finished = false;
				iter->second->frame = iter->second->stroke_start;
				iter->second->setWeight(0, model_max_weight);

				if(iter->second->mask == 0 || strcmp(iter->second->mask, "") == 0)
					startAnim( iter->second );
				else 
					startAdditiveAnim( iter->second );

				//remove animation for queue
				free((void *)(iter->first));
				iter->second = 0;
				m_queuedAnimations.erase(iter);
			}
			break;
		}
	}
}

bool AgentAnimComponent::checkEvent(GameEvent *event)
{
	return true;
}

void AgentAnimComponent::loadFromXml(const XMLNode* node)
{
	/*
	 * still animation
	 */
	if( (node->getAttribute("stillAnim") != 0) 
	 && (strcmp(node->getAttribute("stillAnim"), "") != 0) )
	{
		//Create still animation (spacial extent control)
		stillAnim = new StillAnimationNode( m_model, -1, (char *)node->getAttribute("stillAnim"), 0 ); //stage = 0
		stillAnim->anim_res = h3dAddResource( H3DResTypes::Animation, stillAnim->file, 0 );
		stillAnim->loop = true;
		stillAnim->setWeight(0.0f, 0.0f);

		// Load resources		
		h3dutLoadResourcesFromDisk( AnimationResourcePath );

		//Add still animations
		h3dSetupModelAnimStage( m_model, stillAnim->stage, stillAnim->anim_res, 2, "", false ); //layer = 2
	}
	else
		stillAnim = 0;

	/*
	 * agent parameters
	 */
	if( (node->getAttribute("gender") != 0) 
	 && (strcmp(node->getAttribute("gender"), "") != 0)
	 && (strcmp(node->getAttribute("gender"), "male") == 0 || strcmp(node->getAttribute("gender"), "female") == 0 ))
	{
		strcpy_s(m_gender, node->getAttribute("gender"));
		toLowerCase(m_gender);
	}
	if( (node->getAttribute("culture") != 0) 
	 && (strcmp(node->getAttribute("culture"), "") != 0) )
	{
		strcpy_s(m_culture, node->getAttribute("culture"));
		toLowerCase(m_culture);
	}

	/*
	 * animation database (gesture lexicon)
	 */
	if( (node->getAttribute("AnimationLexicon") != 0) 
	 && (strcmp(node->getAttribute("AnimationLexicon"), "") != 0) )
	{
		processAnimDB(XMLNode::openFileHelper( node->getAttribute("AnimationLexicon"), "AnimationLexicon" ));
	}
	else
		GameLog::errorMessage( "AgentAnim: error parsing animation lexicon (file not found?). Loading animations will only be available by filename" );
}

bool AgentAnimComponent::processAnimDB(XMLNode db)
{
	//** Parse gesture data
	int n = db.nChildNode( "Gesture" );
	for(int i = 0; i<n; i++)
	{
		XMLNode *gnode = &db.getChildNode( "Gesture", i );

		//ID, Name
		XMLNode *idnode = &gnode->getChildNode("ID", 0);
		XMLNode *namenode = &gnode->getChildNode("Name", 0);
		if(idnode->isEmpty() || namenode->isEmpty())
			return false;

		AnimationData* animdata = 
			new AnimationData(	(int)atoi(idnode->getText()),
								namenode->getText(), 
								Agent_AnimType::AAT_GESTURE );
		
		//stroke start/end
		XMLNode *formnode = &gnode->getChildNode("Form", 0);
		if(formnode->isEmpty() || formnode->getChildNode("StrokeStart",0).isEmpty() || formnode->getChildNode("StrokeEnd",0).isEmpty())
			return false;

		//stroke repetitions
		int stroke_reps = 1;
		if(!formnode->getChildNode("StrokeReps",0).isEmpty())
			stroke_reps = atoi(formnode->getChildNode( "StrokeReps",0 ).getText());

		animdata->setForm(	(float)atof(formnode->getChildNode( "StrokeStart",0 ).getText()),
							(float)atof(formnode->getChildNode( "StrokeEnd",0 ).getText()),
							stroke_reps);
		
		//Filenames
		int numfiles = gnode->nChildNode("Filename");
		if(numfiles <= 0)
			return false;

		XMLNode *filenode;

		for(int j=0; j< numfiles; j++)
		{
			filenode = &gnode->getChildNode("Filename", j);
			animdata->addFile( new AnimationFile( filenode->getAttribute("gender"), filenode->getAttribute("culture"), filenode->getText() ));
		}

		XMLNode *restrictnode = &gnode->getChildNode("Restriction", 0);
		std::string nocust("noCustomization"); 
		if(!restrictnode->isEmpty() && restrictnode->getText() != 0 )
			if (std::string( restrictnode->getText() ).find(nocust) != std::string::npos)
				animdata->noCustomization = true;


		m_animationData.push_back( animdata );
	}
	
	//** Parse posture data
	n = db.nChildNode( "Posture" );
	for(int i = 0; i<n; i++)
	{
		XMLNode *pnode = &db.getChildNode( "Posture", i );

		//ID, Name
		XMLNode *idnode = &pnode->getChildNode("ID", 0);
		XMLNode *namenode = &pnode->getChildNode("Name", 0);
		if(idnode->isEmpty() || namenode->isEmpty())
			return false;

		AnimationData* animdata = 
			new AnimationData(	(int)atoi(idnode->getText()),
								namenode->getText(), 
								Agent_AnimType::AAT_POSTURE );

		
		//Filenames
		int numfiles = pnode->nChildNode("Files");
		if(numfiles <= 0)
			return false;

		XMLNode *filenode, *partnode;		
		animdata->posture_prep = new AnimationData( -1, namenode->getText(), Agent_AnimType::AAT_POSTURE_PART );
		animdata->posture_stroke = new AnimationData( -1, namenode->getText(), Agent_AnimType::AAT_POSTURE );
		animdata->posture_ret = new AnimationData( -1, namenode->getText(), Agent_AnimType::AAT_POSTURE_PART );
		for(int j=0; j< numfiles; j++)
		{
			filenode = &pnode->getChildNode("Files", j);
			//Preparation
			partnode = &filenode->getChildNode("Preperation", 0);
			if(partnode->isEmpty())
				return false;
			animdata->posture_prep->addFile( new AnimationFile( filenode->getAttribute("gender"), filenode->getAttribute("culture"), partnode->getText() ));
			animdata->posture_prep->setForm( atof(partnode->getAttribute("blendIn")), atof(partnode->getAttribute("blendOut")), 1);
			animdata->posture_prep->parent = animdata;

			//Stroke
			partnode = &filenode->getChildNode("Stroke", 0);
			if(partnode->isEmpty())
				return false;
			animdata->posture_stroke->addFile( new AnimationFile( filenode->getAttribute("gender"), filenode->getAttribute("culture"), partnode->getText() ));
			animdata->posture_stroke->parent = animdata;

			//Retraction
			partnode = &filenode->getChildNode("Retraction", 0);
			if(partnode->isEmpty())
				return false;
			animdata->posture_ret->addFile( new AnimationFile( filenode->getAttribute("gender"), filenode->getAttribute("culture"), partnode->getText() ));			
			animdata->posture_ret->setForm( atof(partnode->getAttribute("blendIn")), atof(partnode->getAttribute("blendOut")), 1);
			animdata->posture_ret->parent = animdata;
		}

		XMLNode *restrictnode = &pnode->getChildNode("Restriction", 0);
		std::string nocust("noCustomization"); 
		if(!restrictnode->isEmpty() && restrictnode->getText() != 0 )
			if (std::string( restrictnode->getText() ).find(nocust) != std::string::npos)
				animdata->noCustomization = true;


		m_animationData.push_back( animdata );
	}
	return true;
}

void AgentAnimComponent::update()
{
	if(!startTimeSet) 
	{
		time = clock();
		startTimeSet = true;
	}
	//Calculate time per loop
	loopTime = clock() - time;
	time = clock();

	updateAllAnim();
}

int AgentAnimComponent::loadAnimationFile( AnimationData* data, char* mask )
{
	/*
	 * Check for existance of the animation file
	 */
	const char* anim_file = data->getFilename(m_gender, m_culture);
	if(anim_file == 0)
	{
		GameLog::errorMessage( "Animation failed to load - incompatible animation or bad animation data" );
		return -1;
	}

	string file_in = anim_file;
	
	file_in = "animations/" + file_in;
	ifstream inf( file_in.c_str(), ios::binary );
	if( !inf ) 
	{
		inf.close();
		//return -7; //file not found
		//GameLog::errorMessage( "Animation failed to load - file not found" );
	}
	else inf.close();

	H3DRes old_res = 0;

	/*
	 * Computing stage allocation
	 */
	int _stage = 0;
	int _layer = 0;
	
	//if we used up all animation stages, we start rewriting them
	if(m_nextFreeAnimStage > MaxNumAnimStages -1)
	{
		m_nextFreeAnimStage = 1;
	}
	_stage = m_nextFreeAnimStage;
	clearStage(_stage);

	if(mask == 0 || strcmp(mask, "") == 0) //normal animaiton
		_layer = 0;
	else //additive animation
		_layer = 1;

	/*
	 * Generating new animation node
	 */
	AnimationNode* animNode;

	//Check if the animation has already been loaded
	vector<AnimationNode*>::iterator iter = m_animations.begin();
	const vector<AnimationNode*>::iterator end = m_animations.end();
	while ( iter != end )
	{
		if( *iter == NULL ) 
		{
			++iter; continue;
		}
		else if(( strcmp((*iter)->file, anim_file) == 0 )
				&&( (*iter)->model == m_model )
				&&( ((*iter)->mask == mask) || ((*iter)->mask != 0 && mask != 0 && strcmp((*iter)->mask, mask) == 0 )) )
		{
			//** The animation has been loaded previously on this model

			//if the old animation is still running, there is no need to load it again
			if(!(*iter)->sleep)
			{
				//check if the animation is in a blend-out process
				//in this case we abort
				bool blending = false;
				if(m_blend_gg != 0)
					if((*iter)->id == m_blend_gg->A_id) 
					{
						m_blend_gg->forceBlendFinish_gg(false);
						blending = true;
					}
				if(m_blend_gp != 0)
					if((*iter)->id == m_blend_gp->A_id) 
					{
						m_blend_gp->forceBlendFinish_gp(false);
						blending = true;
					}
				if(m_blend_gi != 0)
					if((*iter)->id == m_blend_gi->A_id) 
					{
						m_blend_gi->forceBlendFinish_gi(false);
						blending = true;
					}
				if((*iter)->fade != 0)
					if((*iter)->fade->fade_direction < 0) 
					{
						(*iter)->fade->forceFadeFinish(false);
						blending = true;
					}

				if (!blending) return -1;
			}

			//otherwise, wake up old anim and we're done
			animNode = (*iter);
			animNode->sleep = false;
			animNode->finished = false;
			animNode->frame = animNode->stroke_start;
			animNode->setWeight(0);

			animNode->setType(data->type);

			return animNode->id;
		}

		++iter;
	}
	
	animNode = new AnimationNode( m_model, m_nextAnimID, anim_file, _stage, data );
	animNode->setType(data->type);
	animNode->setMask(mask);
	animNode->anim_res = old_res;
	animNode->setNoCustomization(data->noCustomization);
	animNode->setSpeed(model_anim_scale);
	
	/*
	 * Set up the animation stage
	 */
	//load animation resource
	if(animNode->anim_res == 0)
	{
		//If resource hasn't been loaded
		animNode->anim_res = h3dAddResource( H3DResTypes::Animation, animNode->file, 0 );		
		h3dutLoadResourcesFromDisk( AnimationResourcePath );
	}

	//setup animation stage
	h3dSetupModelAnimStage( animNode->model, animNode->stage, animNode->anim_res, _layer, animNode->mask, false );
	//force an immediate update with 0 weight
	h3dSetModelAnimParams( animNode->model, animNode->stage, 0, 0 );

	/*
	 * Configure additional animation parameters
	 */
	float frame_count = (float)h3dGetResParamI( animNode->anim_res, H3DAnimRes::EntityElem, 0, H3DAnimRes::EntFrameCountI );
	//check if animation was successfully read
	if(frame_count <= 0)
	{
		//proceed with 1-frame anim or quit ?
		//animNode->max_frame = 1;
		GameLog::errorMessage( "Animation %s failed to load properly - error reading meta information", animNode->file );
		return -1;
	}

	animNode->max_frame = frame_count -1;

	//scale the max_frame
	//animNode->max_frame = (int)(animNode->max_frame *(1.0f/animNode->getSpeed())); 

	//define stroke
	animNode->stroke_start = (data->stroke_start < 0) ? 0 : data->stroke_start;
	animNode->stroke_end = (data->stroke_end < 0) ? animNode->max_frame : data->stroke_end;

	animNode->setStrokeReps(data->stroke_reps);
	
	if(LINEAR_STROKE_BLENDING_ENABLED)
		animNode->frame = animNode->stroke_start;

	//Adapt the blening speed to the length of the animation
	AnimationBlending::BLENDING_SPEED_GP = AnimationBlending::BLENDING_SPEED; 
	while(animNode->stroke_end <= 2.0f * 35.0f / AnimationBlending::BLENDING_SPEED_GP)
		AnimationBlending::BLENDING_SPEED_GP *= 2;


	/*
	 * Set up animation system
	 */
	m_nextFreeAnimStage++;
	m_nextAnimID++;

	//check memory usage
	if( (int)m_animations.size() <= animNode->id ) m_animations.resize(1 + (animNode->id * 2));

	//add new node to vector
	m_animations[animNode->id] = animNode;

	return animNode->id;
}

int AgentAnimComponent::preloadAnim( AnimationData* data, char* mask )
{
	DELETE_ANIM_ON_FINISH = false;

	//load animation
	int id = loadAnim( data, mask, 0 );
	
	if (id >= 0)
	{
		//put it asleep
		m_animations[id]->sleep = true;
		m_animations[id]->setWeight(0.0f);
		m_animations[id]->frame = 0.0f;
	}
	return id;
}

int AgentAnimComponent::preloadAnimByFile( const char* anim_file, int type, char* mask )
{
	//first we need to create a "dummy" AnimationData	
	AnimationData *adata = new AnimationData(-1, anim_file, type);
	adata->setForm(	-1, -1, 1);	
	adata->addFile( new AnimationFile(m_gender, m_culture, anim_file) );
	m_animationData.push_back( adata );

	return preloadAnim( adata, mask );
}

int AgentAnimComponent::preloadAnimByID( int anim_id, int type, char* mask )
{
	for(unsigned int i=0; i<m_animationData.size(); i++)
	{
		if(m_animationData[i]->id == anim_id)
		{
			m_animationData[i]->type = type;
			return preloadAnim( m_animationData[i], mask );
		}
	}
	return -1;
}

int AgentAnimComponent::preloadAnimByName( const char* anim_name, int type, char* mask )
{
	for(unsigned int i=0; i<m_animationData.size(); i++)
	{
		if(strcmp(m_animationData[i]->name, anim_name) == 0)
		{
			m_animationData[i]->type = type;
			return preloadAnim( m_animationData[i], mask );
		}
	}
	return -1;
}

int AgentAnimComponent::preloadAnimByRes( int anim_res, int type, char* mask )
{
	//TODO
	const char* anim_file = "";

	//first we need to create a "dummy" AnimationData
	AnimationData adata(-1, anim_file, type);
	adata.addFile(new AnimationFile(m_gender, m_culture, anim_file));

	return preloadAnim( &adata, mask );
}

int AgentAnimComponent::loadAnim( AnimationData* data, char* mask, char* syncWord )
{
	int id, id_prep, id_stroke, id_ret;
	if(data->type == Agent_AnimType::AAT_POSTURE)
	{
		if(data->posture_prep == 0 || data->posture_stroke == 0 || data->posture_ret == 0)
			return -1;
		//we load the prep
		id_prep = loadAnimationFile( data->posture_prep, 0 ); //additive postures are disabled for now
		if(id_prep < 0)
			return -1;

		//load the stroke
		id_stroke = loadAnimationFile( data->posture_stroke, 0 ); //additive postures are disabled for now
		if(id_stroke < 0)
			return -1;

		//..but we put it asleep for now
		m_animations[id_stroke]->sleep = true;
		m_animations[id_stroke]->setWeight(0.0f);

		//load the ret
		id_ret = loadAnimationFile( data->posture_ret, 0 ); //additive postures are disabled for now
		if(id_ret < 0)
			return -1;

		//.. but we put it asleep for now
		m_animations[id_ret]->sleep = true;
		m_animations[id_ret]->setWeight(0.0f);

		//link the nodes together
		m_animations[id_prep]->definePosture(m_animations[id_prep], m_animations[id_stroke], m_animations[id_ret]);
		m_animations[id_stroke]->definePosture(m_animations[id_prep], m_animations[id_stroke], m_animations[id_ret]);
		m_animations[id_ret]->definePosture(m_animations[id_prep], m_animations[id_stroke], m_animations[id_ret]);
		//define the chain
		m_animations[id_prep]->nextAnim = m_animations[id_stroke];

		//proceed with the prep
		id = id_prep;
	}
	else
	{
		//load animation
		id = loadAnimationFile( data, mask );
	}
	
	if (id >= 0)
	{
		//check if we need to synchronize the animaiton with a spoken word
		if(syncWord != 0)
		{
			//we put it asleep for now
			m_animations[id]->sleep = true;
			m_animations[id]->setWeight(0.0f);
			m_animations[id]->frame = 0.0f;
			
			char *_syncWord = (char *)malloc(64 * sizeof(char));
			strcpy_s(_syncWord, 64, syncWord);

			m_queuedAnimations[_syncWord] = m_animations[id];
		}
		else
		{
			if(mask == 0 || strcmp(mask, "") == 0)
				startAnim( m_animations[id] );
			else 
				startAdditiveAnim( m_animations[id] );
		}
	}
	return id;
}

int AgentAnimComponent::loadAnimByFile( const char* anim_file, int type, char* mask, char* syncWord )
{
	//first we need to create a "dummy" AnimationData	
	AnimationData *adata = new AnimationData(-1, anim_file, type);
	adata->setForm(	-1, -1, 1);	
	adata->addFile( new AnimationFile(m_gender, m_culture, anim_file) );
	m_animationData.push_back( adata );

	return loadAnim( adata, mask, syncWord );
}

int AgentAnimComponent::loadAnimByID( int anim_id, int type, char* mask, char* syncWord )
{
	for(unsigned int i=0; i<m_animationData.size(); i++)
	{
		if(m_animationData[i]->id == anim_id)
		{
			m_animationData[i]->type = type;
			return loadAnim( m_animationData[i], mask, syncWord );
		}
	}
	return -1;
}

int AgentAnimComponent::loadAnimByName( const char* anim_name, int type, char* mask, char* syncWord )
{
	for(unsigned int i=0; i<m_animationData.size(); i++)
	{
		if(strcmp(m_animationData[i]->name, anim_name) == 0)
		{
			m_animationData[i]->type = type;
			return loadAnim( m_animationData[i], mask, syncWord );
		}
	}
	return -1;
}

int AgentAnimComponent::loadAnimByRes( int anim_res, int type, char* mask, char* syncWord )
{
	//TODO
	const char* anim_file = "";

	//first we need to create a "dummy" AnimationData
	AnimationData adata(-1, anim_file, type);
	adata.addFile(new AnimationFile(m_gender, m_culture, anim_file));

	return loadAnim( &adata, mask, syncWord );
}

void AgentAnimComponent::startAnim( AnimationNode *animNode )
{
	if(animNode == NULL)
		return;

	animNode->sleep = false;

	//check if there is a posture running on this agent
	AnimationNode* aPosture = getAnimNode(Agent_AnimType::AAT_POSTURE, 0);
	if(aPosture != 0 
		&& animNode->getType() != Agent_AnimType::AAT_POSTURE 
		&& animNode->getType() != Agent_AnimType::AAT_POSTURE_PART 
		&& aPosture != animNode)
	{
		//we put this animation asleep
		animNode->sleep = true;
		animNode->setWeight(0.0f);
		animNode->frame = 0.0f;

		//prepare the retraction
		int ret_id = loadAnimationFile( aPosture->data->parent->posture_ret, 0 );
		if(ret_id < 0)
			return;
		aPosture->posture_ret = m_animations[ret_id];

		//queue it up after the posture retraction
		aPosture->posture_ret->nextAnim = animNode;

		//start the posture retraction animation		
		startAnim(aPosture->posture_ret);

		return;
	}

	//compute playback weight of animations
	//if there is a single anim, we don't blend to it
	animNode->setWeight((countAnimations(true) == 1) ? model_max_weight : 0.0f); 

	//Modify the weight of the still anim
	if(stillAnim != 0)
		stillAnim->updateWeight(animNode->getNoCustomization());

	//We need to blend to the new animation
	blend = animNode->id;

	if(animNode->loop) idleAnimStarted = true;
	if(animNode->doNotDie) nr_postures++;

	if(LINEAR_ANIM_BLENDING_ENABLED && !animNode->doNotDie)
	{
		//force immediate stage update (otherwise the animation will get initialized with a different weight value then it's supposed to (?)
		h3dSetModelAnimParams(animNode->model, animNode->stage, animNode->frame, animNode->getWeight());
	}
}

void AgentAnimComponent::startAdditiveAnim( AnimationNode *animNode )
{
	if(animNode == NULL)
		return;

	//compute playback weight of animations
	animNode->setWeight(1.0f);

	//We don't blend with the additive animation
	blend = -1;

	if(LINEAR_ANIM_BLENDING_ENABLED && !animNode->doNotDie)
	{
		//force immediate stage update (otherwise the animation will get initialized with a different weight value then it's supposed to (?)
		h3dSetModelAnimParams(animNode->model, animNode->stage, animNode->frame, 0);
	}

	//initialize an animation fade-in
	if(ADDITIVE_ANIM_FADE_ENABLED)
		animNode->fade = new AnimationBlending( this, animNode->id, 0.0f, 1.0f );
}

void AgentAnimComponent::updateAllAnim()
{
	//set posture weight
	//if we had some active animaitons
	if(anim_count > nr_postures)
		posture_weight = 0.0f;
	else
		posture_weight = max_posture_weight;

	if(m_blend_gg != 0 && m_blend_gg->running)
		m_blend_gg->blend_gg();
	if(m_blend_pg != 0 && m_blend_pg->running)
		m_blend_pg->blend_pg();
	if(m_blend_gp != 0 && m_blend_gp->running)
		m_blend_gp->blend_gp();
	if(m_blend_gi != 0 && m_blend_gi->running)
		m_blend_gi->blend_gi();
	
	anim_count = 0;
	vector<AnimationNode*>::iterator iter = m_animations.begin();
	const vector<AnimationNode*>::iterator end = m_animations.end();
	while ( iter != end )
	{
		if( *iter == NULL  ) 
		{
			++iter;	continue;
		}
		anim_count++;

		//** Animation blending (morphing)
		//** Blending between gestures

		//    (If we need to blend) AND (this is not the anim we are blending to) 
		//AND (the anim is not already asleep)
		//AND (this is no posture)
		//AND (this is not an additive animation)
		if(*iter != 0
		&& (blend != -1) && (blend != (*iter)->id)
		&& !((*iter)->getWeight() == 0.0f)
		&& !((*iter)->doNotDie)
		&& ((*iter)->mask == 0 || strcmp((*iter)->mask, "") == 0))
			{
				if(LINEAR_ANIM_BLENDING_ENABLED)
				{
					if(m_blend_gg != 0)
					{
						m_blend_gg->forceBlendFinish_gg();
						m_blend_gg->~AnimationBlending();
						delete m_blend_gg;
						m_blend_gg = 0;
					}
					if(*iter != 0)
						m_blend_gg = new AnimationBlending( this, (*iter)->id, blend, max_posture_weight );
					posture_weight = 0.0f;
					
					//abort all other blending processes
					if(m_blend_gp != 0 && m_blend_gp->running) m_blend_gp->forceBlendFinish_gp();
					if(m_blend_pg != 0 && m_blend_pg->running) m_blend_pg->forceBlendFinish_pg();
					if(m_blend_gi != 0 && m_blend_gi->running) m_blend_gi->forceBlendFinish_gi();
				}
				else 
				{
					(*iter)->setWeight(0.0f);
					(*iter)->sleep = true;
					(*iter)->frame = 0;
				}
				blend = -1;					
			}
		//If we did not blend between gestures, perhaps we need to blend between a posture and a gesture
		//** Blending from posture to gesture
		if(*iter != 0 && blend != -1 && nr_postures > 0 && (*iter)->id == blend)
		{
			if(LINEAR_ANIM_BLENDING_ENABLED)
			{
				if(m_blend_pg != 0)
				{
					m_blend_pg->forceBlendFinish_pg();
					m_blend_pg->~AnimationBlending();
					delete m_blend_pg;
					m_blend_pg = 0;
				}
				m_blend_pg = new AnimationBlending( this, -1, blend, max_posture_weight );			
			}
			blend = -1;					
		}

		//** process fading
		if(*iter != 0 && (*iter)->fade != 0)
		{
			if((*iter)->fade->running)
			{
				(*iter)->fade->fade();
				
				//check to see if fading didn't delete animation node
				if(*iter == NULL)
				{
					++iter; continue;
				}
			}
			else
			{
				delete (*iter)->fade;
				(*iter)->fade = 0;
			}
		}

		//Even if the animation is asleep, we have to update its stage
		//unless this is a gesture used in an ongoing blending process
		if(*iter != 0 && (*iter)->sleep 
		&& (m_blend_gp == 0 || (*iter)->id != m_blend_gp->A_id )) 
		{
			if( (*iter)->doNotDie )
			{
				//if this is a posture
				SetAnimFrame setAnimFrame((*iter)->stage, (*iter)->frame, posture_weight);
				GameEvent event(GameEvent::E_SET_ANIM_FRAME, &setAnimFrame, 0);
				m_owner->executeEvent(&event);
				//h3dSetModelAnimParams((*iter)->model, (*iter)->stage, (*iter)->frame, posture_weight);
				++iter; continue;
			}
			anim_count--;
			
			SetAnimFrame setAnimFrame((*iter)->stage, (*iter)->frame, 0);
			GameEvent event(GameEvent::E_SET_ANIM_FRAME, &setAnimFrame, 0);
			m_owner->executeEvent(&event);
			//h3dSetModelAnimParams((*iter)->model, (*iter)->stage, (*iter)->frame, 0);
			++iter; continue;
		}
		
		updateAnim( *iter );
		++iter;
	}

	//if we didn't blend untill now, we won't blend at all
	blend = -1;
	
	
	//check the still animation
	if((stillAnim != 0)	&& !getLock())
	//if(stillAnim != 0)
	{
		//Ensure that at least 1 animation has a positive weight
		if(anim_count == 0)
		{
			stillAnim->setWeight(1.0f);
		}
		//if the postures are not active at this moment (due to a gesture that's beeing rendered) then use the still anim normally
		//otherwise, if postures are active, the influence of still animaiton must be removed
		else if(posture_weight == 0.0f)
		{			
			stillAnim->updateWeight(getAnimNodeWithNoCust(true) != 0);
		}
		else
		{
			stillAnim->setWeight(0.0f);
		}
	}
	
	//Update the "still animation"
	if(stillAnim != 0)
		updateAnim( stillAnim );
}



void AgentAnimComponent::updateAnim( AnimationNode* animNode )
{
	if(animNode == 0 || animNode->sleep)
		return;

	if( ((animNode->frame *animNode->getSpeed() <= animNode->getTotalFrameCount()) && !animNode->finished) || animNode->loop )
	{
		SetAnimFrame setAnimFrame(animNode->stage, (float)animNode->frame *animNode->getSpeed(), animNode->getWeight());
		GameEvent event(GameEvent::E_SET_ANIM_FRAME, &setAnimFrame, 0);
		m_owner->executeEvent(&event);
		//h3dSetModelAnimParams( animNode->model, animNode->stage, (float)animNode->frame *animNode->getSpeed(), animNode->getWeight());
		
		if(AGENTANIMDEBUG)
		{
			//print still anim info
			if(animNode->stage == DEBUG_followanimstage && animNode->weight != db_monitor1)
				printf( "[db]anim%d @ %d -> w: %.2f\n", animNode->stage, (int)animNode->frame, animNode->getWeight() );		
			if(animNode->stage == DEBUG_followanimstage)
				db_monitor1 = animNode->getWeight();		
		}

		//stroke repetitions
		if((animNode->getStrokeReps() > 1)
		&& ( animNode->frame *animNode->getSpeed() >= animNode->stroke_end )) //has this stroke finished ?
		{
			animNode->setStrokeReps(animNode->getStrokeReps() - 1);
			animNode->frame = animNode->stroke_start;
		}

		//fade out additve animations
		if(ADDITIVE_ANIM_FADE_ENABLED
		&& (animNode->mask != 0 && strcmp(animNode->mask, "") != 0)//this is an additive animation
		//&& animNode->frame *animNode->getSpeed() >= animNode->stroke_end - 35.0f *animNode->getSpeed() / AnimationBlending::BLENDING_SPEED_GP //simply false
		&& animNode->frame *animNode->getSpeed() >= animNode->stroke_end //keeps stroke intact, blending occurs only in retraction phase
		&& animNode->frame *animNode->getSpeed() >= animNode->getTotalFrameCount() - 35.0f *animNode->getSpeed() / AnimationBlending::BLENDING_SPEED_GP //depending on retraction length, blending may influence stroke
		//&& (animNode->fade == 0 || !animNode->fade->running) //if we're not already fading
		&& !animNode->loop && !animNode->doNotDie) //no idle anim or posture 
		{
			//if we are already fading, check to see if we're fading in the right direction
			//otherwise, kill current fade and replace it with a correct one
			if(animNode->fade != 0 && animNode->fade->fade_direction != -1 && animNode->fade->fade_to != 0.0f && animNode->weight > 0.0f)
			{
				animNode->fade->forceFadeFinish(false);
				delete animNode->fade;
				animNode->fade = new AnimationBlending(this, animNode->id, animNode->weight, 0.0f );
			}
		}

		//blend out this animation and others back in
		else if(LINEAR_STROKE_BLENDING_ENABLED 
		//&& animNode->frame *animNode->getSpeed() >= animNode->stroke_end - 35.0f *animNode->getSpeed() / AnimationBlending::BLENDING_SPEED_GP //simply false
		&& animNode->frame *animNode->getSpeed() >= animNode->stroke_end //keeps stroke intact, blending occurs only in retraction phase
		&& animNode->frame *animNode->getSpeed() >= animNode->getTotalFrameCount() - 35.0f *animNode->getSpeed() / AnimationBlending::BLENDING_SPEED_GP
		&& (m_blend_gp == 0 || !m_blend_gp->running) //no blending whatsoever is active
		&& (m_blend_gg == 0 || !m_blend_gg->running)
		&& (m_blend_gi == 0 || !m_blend_gi->running)
		&& !animNode->loop && !animNode->doNotDie //no idle anim or posture
		&& (animNode->mask == 0 || strcmp(animNode->mask, "") == 0)) //this is not an additive animation
		{
			if( animNode->nextAnim != 0 )
			{
				//blend to the next animation in the chain
				if(m_blend_gg != 0)
				{
					m_blend_gg->forceBlendFinish_gp();
					m_blend_gg->~AnimationBlending();
					delete m_blend_gg;
					m_blend_gg = 0;
				}
				animNode->nextAnim->sleep = false;
				m_blend_gg = new AnimationBlending( this, animNode->id, animNode->nextAnim->id, max_posture_weight );
			}			
			else if( findIdleAnim() && animNode->getType() != Agent_AnimType::AAT_POSTURE_PART)
			{
				AnimationNode* idle = findIdleAnim();
				//if the idle is actually a posture, we need to blend to its prep first
				if(idle->getType() == Agent_AnimType::AAT_POSTURE)
				{
					//load the prep
					int id_prep = loadAnimationFile( idle->data->parent->posture_prep, 0 );
					if(id_prep >= 0)
					{
						idle->posture_prep = m_animations[id_prep];
						idle->posture_prep->nextAnim = idle;
						//startAnim(m_animations[id_prep]);

						if(m_blend_gg != 0)
						{
							m_blend_gg->forceBlendFinish_gp();
							m_blend_gg->~AnimationBlending();
							delete m_blend_gg;
							m_blend_gg = 0;
						}
						idle->posture_prep->sleep = false;
						m_blend_gg = new AnimationBlending( this, animNode->id, idle->posture_prep->id, max_posture_weight );
					}
				}
				else
				{
					if(m_blend_gi != 0)
					{
						m_blend_gi->forceBlendFinish_gi();
						m_blend_gi->~AnimationBlending();
						delete m_blend_gi;
						m_blend_gi = 0;
					}
					m_blend_gi = new AnimationBlending( this, animNode->id, idle->id, max_posture_weight );
				}
			}
		}

		animNode->frame += (float)(35 * loopTime/CLOCKS_PER_SEC);
		//animNode->frame += (float)(35 * 0.1f);
		
	}
	//The animation has finished
	else if(!animNode->doNotDie) 
	{
		//this animation has finished
		animNode->finished = true;

		//Modifying weight of still animations
		if(stillAnim != 0)
			stillAnim->updateWeight(false);

		//check if we need a blend out
		if(LINEAR_ANIM_BLENDING_ENABLED || LINEAR_STROKE_BLENDING_ENABLED)
		{
			//blend to the next animation in the chain (if we're not already doing that)
			if((m_blend_gg == 0 || m_blend_gg->A_id != animNode->id) && animNode->nextAnim > 0)
			{
				if(m_blend_gg != 0)
				{
					m_blend_gg->forceBlendFinish_gp();
					m_blend_gg->~AnimationBlending();
					delete m_blend_gg;
					m_blend_gg = 0;
				}
				animNode->nextAnim->sleep = false;
				m_blend_gg = new AnimationBlending( this, animNode->id, animNode->nextAnim->id, max_posture_weight );
			}
			//blend back to idle (if we're not already doing that)
			else if((m_blend_gi == 0 || m_blend_gi->A_id != animNode->id) && findIdleAnim() && animNode->getType() != Agent_AnimType::AAT_POSTURE_PART)
			{
				AnimationNode* idle = findIdleAnim();
				//if the idle is actually a posture, we need to blend to its prep first
				if(idle->getType() == Agent_AnimType::AAT_POSTURE)
				{
					//load the prep
					int id_prep = loadAnimationFile( idle->data->parent->posture_prep, 0 );
					if(id_prep >= 0)
					{
						idle->posture_prep = m_animations[id_prep];
						idle->posture_prep->nextAnim = idle;
						//startAnim(m_animations[id_prep]);

						if(m_blend_gg != 0)
						{
							m_blend_gg->forceBlendFinish_gp();
							m_blend_gg->~AnimationBlending();
							delete m_blend_gg;
							m_blend_gg = 0;
						}
						idle->posture_prep->sleep = false;
						m_blend_gg = new AnimationBlending( this, animNode->id, idle->posture_prep->id, max_posture_weight );
					}
				}
				else
				{
					if(m_blend_gi != 0)
					{
						m_blend_gi->forceBlendFinish_gi();
						m_blend_gi->~AnimationBlending();
						delete m_blend_gi;
						m_blend_gi = 0;
					}
					m_blend_gi = new AnimationBlending( this, animNode->id, idle->id, max_posture_weight );
				}
			}
		}
		
		//Never kill an animation that's part of a blending process.
		//Leave that to the blending system
		else if( (m_blend_gp == 0 || animNode->id != m_blend_gp->A_id)
			  && (m_blend_gi == 0 || animNode->id != m_blend_gi->A_id) )
		{
			killAnim( animNode );
			if( findIdleAnim() )
			{
				AnimationNode* idle = findIdleAnim();
				idle->setWeight(model_max_weight);
				idle->sleep = false;
			}
		}
	}
	//If the animation finsihes and it's marked "doNotDie" we put it asleep
	else
	{
		animNode->finished = true;
		animNode->sleep = true;
		animNode->frame = (float)animNode->getTotalFrameCount();
	}

}

void AgentAnimComponent::setExtent(const char* extent, bool change_now)
{
	if(stillAnim == 0 || extent == 0)
		return;

	if(strcmp(extent, "normal") == 0)
	{
		model_max_weight = 1.0f;
		stillAnim->setMaxWeight(0.0f);
		if(change_now)
			stillAnim->updateWeight(false);
	}
	else if(strcmp(extent, "medium") == 0)
	{
		model_max_weight = 0.8f;
		stillAnim->setMaxWeight(0.2f);
		if(change_now)
			stillAnim->updateWeight(getAnimNodeWithNoCust(true) != 0);
	}
	else if(strcmp(extent, "low") == 0)
	{
		model_max_weight = 0.6f;
		stillAnim->setMaxWeight(0.4f);
		if(change_now)
			stillAnim->updateWeight(getAnimNodeWithNoCust(true) != 0);
	}
	else if(strcmp(extent, "still") == 0)
	{
		model_max_weight = 0.0f;
		stillAnim->setMaxWeight(1.0f);
		if(change_now)
			stillAnim->updateWeight(getAnimNodeWithNoCust(true) != 0);
	}
}

void AgentAnimComponent::setExtent(unsigned int extent, bool change_now)
{
	if(stillAnim == 0)
		return;

	model_max_weight = 1.0f - ((float)extent/10.0f);
	stillAnim->setMaxWeight((float)extent/10.0f);
	if(change_now)
		stillAnim->updateWeight(getAnimNodeWithNoCust(true) != 0);
}

void AgentAnimComponent::setSpeed(const char* speed)
{
	if(speed == 0)
		return;

	if(strcmp(speed, "high") == 0)
	{
		model_anim_scale = 1.2f;
	}
	else if(strcmp(speed, "normal") == 0)
	{
		model_anim_scale = 0.8f;
	}
	else if(strcmp(speed, "low") == 0)
	{
		model_anim_scale = 0.5f;
	}
}

void AgentAnimComponent::setSpeed(float speed)
{
	model_anim_scale = speed;
}


void AgentAnimComponent::setSpeedOnAnim(unsigned int anim_id, const char* speed)
{	
	if(m_animations.size() < anim_id || m_animations.at(anim_id) == 0 || speed == 0)
		return;

	if(strcmp(speed, "high") == 0)
	{
		m_animations[anim_id]->setSpeed(1.2f);
	}
	else if(strcmp(speed, "normal") == 0)
	{
		m_animations[anim_id]->setSpeed(0.8f);
	}
	else if(strcmp(speed, "low") == 0)
	{
		m_animations[anim_id]->setSpeed(0.5f);
	}
}


void AgentAnimComponent::setSpeedOnAnim(unsigned int anim_id, float speed)
{
	if(m_animations.size() < anim_id || m_animations.at(anim_id) == 0)
		return;

	m_animations[anim_id]->setSpeed(speed);
}


void AgentAnimComponent::killAnim( AnimationNode* anim )
{
	if(anim == NULL) return;
	
	//delete corresponding blending copy
	if(m_blend_gg != 0)
	{
		if(anim->id == m_blend_gg->A_id) {m_blend_gg->A = 0; m_blend_gg->A_id = -1;}
		if(anim->id == m_blend_gg->B_id) {m_blend_gg->B = 0; m_blend_gg->B_id = -1;}
	}
	if(m_blend_pg != 0)
	{
		if(anim->id == m_blend_pg->A_id) {m_blend_pg->A = 0; m_blend_pg->A_id = -1;}
		if(anim->id == m_blend_pg->B_id) {m_blend_pg->B = 0; m_blend_pg->B_id = -1;}
	}
	if(m_blend_gp != 0)
	{
		if(anim->id == m_blend_gp->A_id) {m_blend_gp->A = 0; m_blend_gp->A_id = -1;}
		if(anim->id == m_blend_gp->B_id) {m_blend_gp->B = 0; m_blend_gp->B_id = -1;}
	}
	if(m_blend_gi != 0)
	{
		if(anim->id == m_blend_gi->A_id) {m_blend_gi->A = 0; m_blend_gi->A_id = -1;}
		if(anim->id == m_blend_gi->B_id) {m_blend_gi->B = 0; m_blend_gi->B_id = -1;}
	}

	//delete animation or put it asleep?
	if(DELETE_ANIM_ON_FINISH)
	{
		anim->setWeight(0.0f);
		//alter stage counter
		if( anim->stage == (m_nextFreeAnimStage - 1) ) m_nextFreeAnimStage--;
		
		//clear stage /* buggy in beta4 ? */
		h3dSetupModelAnimStage( anim->model, anim->stage, 0, 0, "", false );
		h3dRemoveResource( anim->anim_res );
		//fill the gap in the animations vector
		m_animations[anim->id] = NULL;
		
		//delete anim
		delete anim;
		anim = 0;
	}
	else
	{
		anim->frame = 0.0f;
		anim->setWeight(0.0f);
		anim->sleep = true;
	}
}

//Returns last laoded idle animation
AnimationNode* AgentAnimComponent::findIdleAnim()
{
	AnimationNode *idle = 0;
	vector<AnimationNode*>::iterator iter = m_animations.begin();
	const vector<AnimationNode*>::iterator end = m_animations.end();
	while ( iter != end )
	{
		if( *iter == NULL )
		{
			++iter; continue;
		}
		if( (*iter)->loop )
		{
			idle = *iter;
		}
		++iter;
	}
	return idle;
}

void AgentAnimComponent::clearAllStages()
{
	//make sure all animations will get deleted
	bool deleteAnims = DELETE_ANIM_ON_FINISH;
	DELETE_ANIM_ON_FINISH = true;

	vector<AnimationNode*>::iterator iter = m_animations.begin();
	const vector<AnimationNode*>::iterator end = m_animations.end();
	while ( iter != end )
	{
		if( *iter == NULL )
		{
			++iter; continue;
		}
		
		killAnim(*iter);
		++iter;
	}

	DELETE_ANIM_ON_FINISH = deleteAnims;
}

void AgentAnimComponent::clearStage(int stage)
{
	//make sure all animations will get deleted
	bool deleteAnims = DELETE_ANIM_ON_FINISH;
	DELETE_ANIM_ON_FINISH = true;

	vector<AnimationNode*>::iterator iter = m_animations.begin();
	const vector<AnimationNode*>::iterator end = m_animations.end();
	while ( iter != end )
	{
		if( *iter == NULL )
		{
			++iter; continue;
		}
		if( (*iter)->stage == stage )
		{
			killAnim(*iter);
		}
		++iter;
	}

	DELETE_ANIM_ON_FINISH = deleteAnims;
}

bool AgentAnimComponent::getLock()
{
	if(
	   (m_blend_gp == 0 || !m_blend_gp->running)
	&& (m_blend_gg == 0 || !m_blend_gg->running)
	&& (m_blend_gi == 0 || !m_blend_gi->running)
	&& (m_blend_pg == 0 || !m_blend_pg->running))
		return false;

	return true;
}

int AgentAnimComponent::countAnimations( bool onlyActiveAnims )
{
	int cnt = 0;
	vector<AnimationNode*>::iterator iter = m_animations.begin();
	const vector<AnimationNode*>::iterator end = m_animations.end();
	while ( iter != end )
	{
		if( *iter == NULL )
		{
			++iter; continue;
		}
		
		if( !(*iter)->sleep || !onlyActiveAnims )
			cnt++;

		++iter;
	}

	return cnt;
}

AnimationNode* AgentAnimComponent::getAnimNode( int anim_id )
{
	vector<AnimationNode*>::iterator iter = m_animations.begin();
	const vector<AnimationNode*>::iterator end = m_animations.end();
	while ( iter != end )
	{
		if( *iter == NULL )
		{
			++iter; continue;
		}
		
		if( (*iter)->id == anim_id )
			return *iter;

		++iter;
	}
	return 0;
}

AnimationNode* AgentAnimComponent::getAnimNode( Agent_AnimType::List type, int i )
{
	vector<AnimationNode*>::iterator iter = m_animations.begin();
	const vector<AnimationNode*>::iterator end = m_animations.end();
	while ( iter != end )
	{
		if( *iter == NULL )
		{
			++iter; continue;
		}
		
		if( (*iter)->getType() == type )
		{
			if(i == 0)
				return *iter;
			else
				i--;
		}

		++iter;
	}
	return 0;
}

AnimationNode* AgentAnimComponent::getAnimNodeWithNoCust( bool noCustomization )
{

	vector<AnimationNode*>::iterator iter = m_animations.begin();
	const vector<AnimationNode*>::iterator end = m_animations.end();
	while ( iter != end )
	{
		if( *iter == NULL )
		{
			++iter; continue;
		}
		
		//noCustomization
		if( (*iter)->getNoCustomization() == noCustomization 
		&& !(*iter)->isAsleep() && !(*iter)->isFinished())
			return *iter;

		++iter;
	}
	return 0;
}

Agent_AnimStatus::List AgentAnimComponent::getAnimStatus( AnimationNode* anim )
{
	if(anim == 0)						return Agent_AnimStatus::AAS_ANIM_NOT_FOUND;

	if(anim->sleep && !anim->doNotDie)	return Agent_AnimStatus::AAS_ASLEEP;

	if(anim->sleep && anim->doNotDie)	return Agent_AnimStatus::AAS_ASLEEP_AT_LASTFRAME;

	if(anim->finished)					return Agent_AnimStatus::AAS_FINISHED;

	if((anim->fade != 0)&&(anim->fade->running))
										return Agent_AnimStatus::AAS_FADING;

	if(anim->frame < anim->getTotalFrameCount())	return Agent_AnimStatus::AAS_ACTIVE;

	return Agent_AnimStatus::AAS_UNKNOWN;
}

void AgentAnimComponent::toLowerCase( char* c_str )
{
	for(unsigned int i=0; i< strlen(c_str); i++)
		c_str[i] = tolower(c_str[i]);
}


        