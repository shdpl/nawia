
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

#include "Animation.h"
#include "Horde3D/Horde3D.h"
#include "Horde3D/Horde3DUtils.h"
#include "GameEngine/GameLog.h"
#include "GameEngine/GameEngine.h"

#include "../utils.h"
#include <fstream>
#include <string>

unsigned int Animation::s_nextPlaybackID = 0;

Animation::Animation(int agent_hID, AnimationData *data, const char *startNode) : m_data(data), m_agent_hID(agent_hID), m_loop(false), m_frame(0),
m_isActive(false), m_isFinished(false), m_numFrames(-1), m_nextAnimation(0), m_linkedAnimation(0), m_spatialExtent(1), m_timer(0),
m_speed(1), m_resource(0), m_currentStrokeReps(0), m_targetStrokeReps(0), m_status(Agent_AnimStatus::UNKNOWN), m_file(0)
{
	if(startNode != 0)
		utils::strcpy(startNode, m_startNode, c_MaxNodeNameSize);
	else
		m_startNode[0] = '\0';

	if(data->getType() == Agent_AnimType::POSTURE || data->getType() == Agent_AnimType::STILL)
		m_loop = true;
	else
		m_loop = false;

	//compute playback id
	m_playbackID = s_nextPlaybackID;
	s_nextPlaybackID++;
}

Animation::~Animation()
{
	h3dUnloadResource(m_resource);

	if(m_timer != 0)
	{
		delete m_timer;
		m_timer = 0;
	}
}

bool Animation::loadFile(Agent_Gender::List gender)
{
	m_file = m_data->getFile(gender);
	std::string filename(m_file->getFilename());

	int resource = h3dAddResource( H3DResTypes::Animation, m_file->getFilename(), 0 );
	if(h3dIsResLoaded(resource))
	{
		// if the resource is already loaded, we'll create a duplicate for this animation to use
		resource = h3dCloneResource(resource, 0);
		setResource(resource);
		return true;
	}

	//find animation path
	std::string path = h3dutGetResourcePath(H3DResTypes::Animation);		
	if ( path.size() > 0 && path[path.size()-1] != '\\' && path[path.size()-1] != '/' )
		path += '/';

	//Open file
	std::ifstream inf( (path + filename).c_str(), std::ios::binary );
	if( inf ) // Resource file found
	{
		// Find size of resource file
		inf.seekg( 0, std::ios::end );
		const int size = inf.tellg();
		// Copy resource file to memory
		char *data = new char[size + 1];
		inf.seekg( 0 );
		inf.read( data, size );
		inf.close();
		// Null-terminate buffer - this is important for XML parsers 
		data[size] = '\0';		
		
		// Load Resource
		h3dLoadResource( resource, data, size );
		setResource(resource);

		delete[] data;
		data = 0;

		return true;
	}
	else
	{
		//file not found
		GameLog::errorMessage( "Animation %s failed to load - file not found", m_file->getFilename() );
		return false;
	}
}

void Animation::setResource(int resource)
{
	m_resource = resource;

	//intialize animation parameters
	m_numFrames = h3dGetResParamI(m_resource, H3DAnimRes::EntityElem, 0, H3DAnimRes::EntFrameCountI);

	//if no stroke information was given we'll define the whole animation as beeing the stroke
	if(m_file->getStrokeStart() < 0 || m_file->getStrokeEnd() < 0)
	{
		m_file->setForm(0, m_numFrames-1);
	}
}

void Animation::update()
{
	if(!isActive())
		return;

	//** compute current frame
	//compute length of the last frame in seconds
	double frametime = m_timer->grabElapsedTime(); //the length of the last frame in seconds

	//compute the actual fps of the animation
	//the fps can be altered by the animation speed (so a 30fps animation with speed=2 will actually have 60fps)
	double animFPS;
	if(m_data->isCustomizable())
		animFPS = m_data->getFPS() * m_speed;
	else
		animFPS = m_data->getFPS();

	//set the frame
	//m_frame = (float)((double)m_frame + (animFPS * frametime));
	m_frame = (float)((double)m_frame + (animFPS / GameEngine::FPS()));
	//debug
	//m_frame += 0.25f;

	//** compute storke repetitions
	if(m_data->isCustomizable() && (m_frame >= m_file->getStrokeEnd()) && (m_currentStrokeReps < m_targetStrokeReps))
	{
		m_frame = (float)m_file->getStrokeStart();
		m_currentStrokeReps++;
	}

	//** check for finish
	if(m_frame > m_numFrames -1 && !m_loop)
	{
		//animation has finished
		m_isFinished = true;
		m_frame = (float)(m_numFrames -1);
		deactivate();
	}
}

void Animation::activate()
{
	m_isActive = true;
	m_isFinished = false;

	m_status = Agent_AnimStatus::ACTIVE;	

	//start timer
	if(m_timer != 0)
	{
		delete m_timer;
		m_timer = 0;
	}
	m_timer = new Timer();
}

void Animation::deactivate()
{
	m_isActive = false;

	if(hasFinished())
		m_status = Agent_AnimStatus::FINISHED;
	else
		m_status = Agent_AnimStatus::INACTIVE;
}

void Animation::reset()
{
	m_frame = 0;
	m_currentStrokeReps = 0;
}

bool Animation::equals( Animation *a )
{
	if(a == 0)
		return false;

	return (m_playbackID == a->getPlaybackID());
}

bool Animation::isActive()
{
	return m_isActive;
}

bool Animation::isFinishing()
{
	return (m_isFinished) || ((m_frame > m_file->getStrokeEnd()) && (m_currentStrokeReps == m_targetStrokeReps) && !m_loop);
}

bool Animation::hasFinished()
{
	return m_isFinished;
}

AnimationData* Animation::getData()
{
	return m_data;
}

const char* Animation::getStartNode()
{
	return m_startNode;
}

float Animation::getCurrentFrame()
{
	return m_frame;
}

float Animation::getSpeed()
{
	return m_speed;
}

int Animation::getNumStrokeRepetitions()
{
	return (int)m_targetStrokeReps;
}

int Animation::getID()
{
	return m_data->getID();
}

unsigned int Animation::getPlaybackID()
{
	return m_playbackID;
}

Animation* Animation::getNextAnimation()
{
	return m_nextAnimation;
}

int Animation::getNumFrames(bool withStrokeRepetitions)
{
	if(withStrokeRepetitions)
		return (m_numFrames + m_targetStrokeReps* (m_file->getStrokeEnd() - m_file->getStrokeStart()));
	else
		return m_numFrames;
}

int Animation::getResource()
{
	return m_resource;
}

float Animation::getSpatialExtent()
{
	return m_spatialExtent;
}

Agent_AnimType::List Animation::getType()
{
	return m_data->getType();
}

Agent_AnimStatus::List Animation::getStatus()
{
	return m_status;
}

AnimationFile* Animation::getFile()
{
	return m_file;
}

void Animation::setNextAnimation(Animation* next)
{
	m_nextAnimation = next;
}

void Animation::setSpeed(float speed)
{
	m_speed = speed;
}

void Animation::setSpatialExtent(float se)
{
	m_spatialExtent = se;
}

void Animation::setNumStrokeRepetitions(unsigned int reps)
{
	m_targetStrokeReps = reps;
}


