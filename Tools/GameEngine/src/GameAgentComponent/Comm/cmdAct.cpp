
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
    
#include "cmdAct.h"

#include "fbAnimation.h"
#include "fbGaze.h"
#include "fbTTS.h"

#include "CommComponent.h"
#include "StringTokenizer.h"
#include "../utils.h"

#include "../AgentManager.h"
#include "../GameEngine_Agent.h"
#include "GameEngine/GameEngine_Sapi.h"

using namespace std;

cmdAct::cmdAct()
{}

cmdAct::cmdAct(CommComponent* comp) : Command(comp)
{	
	//** define keyword
	utils::strcpy( "act", m_keyword, 16 );

	//** Variable initialization
	m_tts_ID = 0;

	//** Register attributes
	m_attributes.push_back( new CommandAttribute("agent",		AttributeType::INTEGER,		&m_agent_aID, 0, 0) );	

	m_attributes.push_back( new CommandAttribute("gaze",		AttributeType::INTEGER,		&m_gazeTarget_aID, 0, &m_doGazeByID) );
	m_attributes.push_back( new CommandAttribute("gaze",		AttributeType::VEC3F,		&m_gazeTarget_pos, 0, &m_doGazeByLocation) );
	m_attributes.push_back( new CommandAttribute("gazespd",		AttributeType::FLOAT,		&m_gazeSpeed, 0, 0) );
	m_attributes.push_back( new CommandAttribute("gazedur",		AttributeType::FLOAT,		&m_gazeDuration, 0, 0) );

	m_attributes.push_back( new CommandAttribute("nod",			AttributeType::INTEGER,		&m_nodReps, 0, &m_doNod) );
	m_attributes.push_back( new CommandAttribute("nodext",		AttributeType::FLOAT,		&m_nodExtent, 0, 0) );
	m_attributes.push_back( new CommandAttribute("nodspd",		AttributeType::FLOAT,		&m_nodSpeed, 0, 0) );
	m_attributes.push_back( new CommandAttribute("noddur",		AttributeType::FLOAT,		&m_nodDuration, 0, 0) );

	m_attributes.push_back( new CommandAttribute("shake",		AttributeType::INTEGER,		&m_shakeReps, 0, &m_doShake) );
	m_attributes.push_back( new CommandAttribute("shakeext",	AttributeType::FLOAT,		&m_shakeExtent, 0, 0) );
	m_attributes.push_back( new CommandAttribute("shakespd",	AttributeType::FLOAT,		&m_shakeSpeed, 0, 0) );
	m_attributes.push_back( new CommandAttribute("shakedur",	AttributeType::FLOAT,		&m_shakeDuration, 0, 0) );

	m_attributes.push_back( new CommandAttribute("tts",			AttributeType::STRING,		&m_tts, c_MaxTTSLength, &m_doTTS) );

	m_attributes.push_back( new CommandAttribute("animclr",		AttributeType::NONE,		0, 0, &m_doAnimationClear) );

	//it is possible to call several animations per command
	for(int i=0; i< c_MaxNrAnimsPerMsg; i++)
	{
		m_attributes.push_back( new CommandAttribute("anim",		AttributeType::INTEGER,		&m_animationLID[i], 0, &m_doAnimationByID[i]) );
		m_attributes.push_back( new CommandAttribute("anim",		AttributeType::STRING,		&m_animationLName[i], c_MaxAnimNameSize, &m_doAnimationByName[i]) );
		m_attributes.push_back( new CommandAttribute("animspd",		AttributeType::FLOAT,		&m_animationSpeed[i], 0, 0) );
		m_attributes.push_back( new CommandAttribute("animse",		AttributeType::FLOAT,		&m_animationSE[i], 0, 0) );
		m_attributes.push_back( new CommandAttribute("animreps",	AttributeType::INTEGER,		&m_animationReps[i], 0, 0) );
		m_attributes.push_back( new CommandAttribute("animstartn",	AttributeType::STRING,		&m_animationStartNode[i], c_MaxNodeNameSize, 0) );
		m_attributes.push_back( new CommandAttribute("animfile",	AttributeType::STRING,		&m_animationFile[i], c_MaxAnimFileSize, &m_doAnimationByFile[i]) );
		m_attributes.push_back( new CommandAttribute("animsync",	AttributeType::STRING,		&m_animationSyncWord[i], c_MaxSyncWordSize, 0) );
	}
}

cmdAct::~cmdAct()
{
	m_attributes.clear();
}

void cmdAct::execute()
{
	//process ids
	if(m_agent_aID < 0)
	{
		error("unknown agent");
		return;
	}
	int agent_eID = AgentManager::instance()->getEntityID(m_agent_aID);
	if(agent_eID < 0)
	{
		error("unknown agent");
		return;
	}

	//** TTS
	if(m_doTTS)
	{	
		GameEngine::speak(agent_eID, (const char*) m_tts);
		m_tts_ID++;
		m_comp->addFeedbackNode( new fbTTS( m_comp->getSocketEntityID(), agent_eID, m_tts_ID ) );
	}

	//** Gaze
	if(m_doGazeByID)
	{
		int gazeTarget_eID = AgentManager::instance()->getEntityID(m_gazeTarget_aID);
		if(gazeTarget_eID < 0)
		{
			error("unknown gaze target");
			return;
		}

		m_gaze_ID = GameEngine::Agent_gazeE( agent_eID, gazeTarget_eID, m_gazeSpeed, m_gazeDuration );
		m_comp->addFeedbackNode( new fbGaze( m_comp->getSocketEntityID(), agent_eID, m_gaze_ID ) );
	}

	if(m_doGazeByLocation)
	{
		m_gaze_ID = GameEngine::Agent_gazeP( agent_eID, m_gazeTarget_pos.x, m_gazeTarget_pos.y, m_gazeTarget_pos.z, m_gazeSpeed, m_gazeDuration );
		m_comp->addFeedbackNode( new fbGaze( m_comp->getSocketEntityID(), agent_eID, m_gaze_ID ) );
	}

	//** Head nod
	if(m_doNod)
	{
		GameEngine::Agent_headNod( agent_eID, m_nodExtent, m_nodReps, m_nodSpeed, m_nodDuration );
	}

	//** Head shake
	if(m_doShake)
	{
		GameEngine::Agent_headShake( agent_eID, 0, m_shakeExtent, m_shakeReps, m_shakeSpeed, m_shakeDuration );
	}

	//** Animations
	for(unsigned int i=0; i< c_MaxNrAnimsPerMsg; i++)
	{
		if(m_doAnimationByID[i])
		{	
			m_animation_ID = GameEngine::Agent_playAnimationI(agent_eID, m_animationLID[i], m_animationSpeed[i], m_animationSE[i], m_animationReps[i], m_animationStartNode[i], m_animationSyncWord[i]);
			m_comp->addFeedbackNode( new fbAnimation( m_comp->getSocketEntityID(), agent_eID, m_animation_ID ) );
		}
	
		if(m_doAnimationByName[i])
		{
			m_animation_ID = GameEngine::Agent_playAnimationN(agent_eID, m_animationLName[i], m_animationSpeed[i], m_animationSE[i], m_animationReps[i], m_animationStartNode[i], m_animationSyncWord[i]);
			m_comp->addFeedbackNode( new fbAnimation( m_comp->getSocketEntityID(), agent_eID, m_animation_ID ) );
		}

		if(m_doAnimationByFile[i])
		{
			m_animation_ID = GameEngine::Agent_playAnimationF(agent_eID, m_animationFile[i], Agent_AnimType::GESTURE, m_animationSpeed[i], m_animationSE[i], m_animationReps[i], m_animationStartNode[i], m_animationSyncWord[i]);
			m_comp->addFeedbackNode( new fbAnimation( m_comp->getSocketEntityID(), agent_eID, m_animation_ID ) );
		}
	}
}

void cmdAct::reset()
{
	m_agent_aID = -1;
	m_animation_ID = 0;
	m_gaze_ID = 0;

	m_doAnimationClear = false;
	m_doTTS = false;
	m_doGazeByID = false;	
	m_doGazeByLocation = false;
	m_doNod = false;
	m_doShake = false;

	m_gazeSpeed = -1;
	m_gazeDuration = Config::getParamF(Agent_Param::DfltGazeDuration_F);

	m_nodReps = -1;
	m_nodSpeed = -1;
	m_nodExtent = -1;
	m_nodDuration = -1;

	m_shakeReps = -1;
	m_shakeSpeed = -1;
	m_shakeExtent = -1;
	m_shakeDuration = -1;

	for(unsigned int i=0; i< c_MaxNrAnimsPerMsg; i++)
	{		
		//clear flags
		m_doAnimationByFile[i] = false;
		m_doAnimationByName[i] = false;
		m_doAnimationByID[i] = false;

		//set attribute parameter defaults
		m_animationSpeed[i] = -1;
		m_animationSE[i] = -1;
		m_animationReps[i] = -1;
		m_animationStartNode[i][0] = '\0';
		m_animationSyncWord[i][0] = '\0';
		m_animationFile[i][0] = '\0';
	}
}