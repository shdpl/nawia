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
// GameEngine Sound Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "SoundManager.h"

#include "SoundComponent.h"
#include "SoundListenerComponent.h"

#include <GameEngine/GameLog.h>
#include <GameEngine/GameEntity.h>
#include <GameEngine/GameModules.h>
#include <GameEngine/GameComponentRegistry.h>
#include <GameEngine/GameWorld.h>

#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>

#include <al.h>
#include <alc.h>

#define sq(x) (x)*(x)


using namespace std;

SoundManager* SoundManager::m_instance = 0x0;

SoundManager* SoundManager::instance()
{
	if( m_instance == 0x0 )
		m_instance = new SoundManager();
	return m_instance;
}

void SoundManager::release()
{
	delete m_instance;
	m_instance = 0x0;
}

SoundManager::SoundManager() : m_activeListener(0)
{
	int error_code = 0;

	//open standard device
	ALCdevice  *soundDevice = alcOpenDevice(NULL);
	if((error_code = alcGetError(soundDevice)) != AL_NO_ERROR || soundDevice == NULL) 
	{
		DisplayALError("Error creating Device: ", error_code);
		return;
	}
	//create context
	ALCcontext *soundContext = alcCreateContext(soundDevice, NULL);
	if((error_code = alcGetError(soundDevice)) != AL_NO_ERROR || soundContext == NULL) 
	{
		DisplayALError("Error creating Context: ", error_code);
		alcCloseDevice(soundDevice);
		return;
	}
	alcMakeContextCurrent(soundContext);
	printf ("Sound device: %s\n",
		alcGetString(soundDevice, ALC_DEFAULT_DEVICE_SPECIFIER));  
	//get OpenAL version
	ALint lMajor, lMinor;
	alcGetIntegerv( soundDevice, ALC_MAJOR_VERSION, 1, &lMajor );
	alcGetIntegerv( soundDevice, ALC_MINOR_VERSION, 1, &lMinor );
	printf( "\nOpenAL Version %d.%d\n", lMajor, lMinor );
	if((error_code = alcGetError(soundDevice)) != AL_NO_ERROR) 
	{
		DisplayALError("Error getting AL Version: ", error_code);
		return;
	}

	// Position of the CAM (Listener).
	float pos[] = {0.0, 0.0, 0.0};
	// Velocity of the CAM (Listener).
	float vel[] = {0.0, 0.0, 0.0};
	// Orientation of the CAM (Listener). (first 3 elements are "at", second 3 are "up" (only 1,0,-1 allowed))
	float orientation[] = {0.0, 0.0, -1.0, 0.0, 1.0, 0.0 };

	//init Cam-Pos
	alListenerfv(AL_POSITION,    pos);
	alListenerfv(AL_VELOCITY,    vel);
    alListenerfv(AL_ORIENTATION, orientation);
	if((error_code = alGetError()) != AL_NO_ERROR) 
	{
		DisplayALError("Error setting Listener Position: ", error_code);
	}

	// get all available sources
	int i=0;
	while(i++<14)
	{
		ALuint source;
		alGenSources(1, &source);
	    if ((error_code = alGetError()) != AL_NO_ERROR)
		{
			DisplayALError("Error creating source: ", error_code);
			break;
		}
		m_sources.push_back(source);
		m_sourcesAvailable.push_back(source);
	}
	//set distance model
	alDistanceModel(AL_INVERSE_DISTANCE_CLAMPED);
}

SoundManager::~SoundManager()
{	
	ALCcontext *pContext = alcGetCurrentContext();
	ALCdevice *pDevice = alcGetContextsDevice(pContext);

	alcMakeContextCurrent(NULL);
	alcDestroyContext(pContext);
	alcCloseDevice(pDevice);

	m_instance = 0;
}

void SoundManager::run()
{
	if( m_activeListener == 0x0 ) return;
	
	m_activeListener->update();
	alListenerfv(AL_POSITION,		m_activeListener->m_listenerPos);
	alListenerfv(AL_VELOCITY,		m_activeListener->m_listenerVel);
	alListenerfv(AL_ORIENTATION,    m_activeListener->m_listenerOri);
	alListenerf(AL_GAIN,			m_activeListener->m_gain);
	
	// Create Priority Queue
	typedef std::pair<float, SoundComponent*> sound;
	std::priority_queue<sound> priorityQueue;	
	
	// typedef for more readability
	typedef std::vector<SoundComponent*>::iterator soundIterator;

	// fill the priority queue
	for( soundIterator nodeIter = m_soundNodes.begin(); nodeIter < m_soundNodes.end(); nodeIter++) 
	{
		SoundComponent* node = *nodeIter;
		// Skip invalid nodes
		if( node->m_resourceID == 0)
			continue;

		node->update();

		// calculate distance between listener and sound node
		float dist = sqrt((
			sq(node->m_x - m_activeListener->m_listenerPos[0]) + 
			sq(node->m_y - m_activeListener->m_listenerPos[1]) + 
			sq(node->m_z - m_activeListener->m_listenerPos[2])));		

		//printf("posofsound %f %f %f\n",(*nodeIter)->m_pos.x,(*nodeIter)->m_pos.y,(*nodeIter)->m_pos.z );
		// check if there are sounds not playing but with allocated source
		if (node->m_sourceID != 0)
		{
			if( node->m_gain == SoundComponent::OFF ) // if gain has been set to zero during the last update iteration...
			{
				stopSoundSource(node->m_sourceID ); // ...stop the sound
				
				//stop Viseme playback
				node->stopVisemes();

				node->m_sourceID = 0;
			}
			// if the node is playing but out of scope
			if ( node->m_maxDist < dist )	
			{
				stopSoundSource(node->m_sourceID); // ...stop the sound
				//stop Viseme playback
				node->stopVisemes();

				node->m_sourceID = 0;
			}
			ALenum state = AL_STOPPED;
			if( node->m_sourceID != 0 )
				alGetSourcei(node->m_sourceID, AL_SOURCE_STATE, &state);
			// set gain of stopped sources to OFF
			if (state==AL_STOPPED)
				node->m_gain = SoundComponent::OFF;
		}				
		float priority = node->m_gain / ((dist > 0.0) ? dist : 0.00001f);
		if (priority > 0)	priorityQueue.push(sound(priority, node)); // insert it to the priority queue 
		//printf("Distance %.4f\n", dist) ;
	}

	std::vector<SoundComponent* const> playingSounds;
	int accociated = 0;
	// Configure the first m_sources.size() sounds ( maximum number of parallel sounds )
	const size_t numSources = m_sources.size();
	for (size_t i = 0; i < numSources && !priorityQueue.empty(); ++i)
	{
		SoundComponent* const node = priorityQueue.top().second;
		priorityQueue.pop(); // Remove node from queue
		if (node->m_sourceID == 0) // Should be played but not yet started
			playingSounds.push_back(node); // Push to vector for playing 
		else // Already playing
		{
			ALfloat pos[3] = {node->m_x, node->m_y, node->m_z};
			ALfloat vel[3] = {node->m_velX, node->m_velY, node->m_velZ};
			alSourcef (node->m_sourceID, AL_PITCH,				node->m_pitch);
			// alSourcef (sourceID, AL_MIN_GAIN,			0.0);
			// alSourcef (sourceID, AL_MAX_GAIN,			1.0	);
			alSourcef (node->m_sourceID, AL_GAIN,				node->m_gain);
			alSourcefv(node->m_sourceID, AL_POSITION,			pos);
			alSourcefv(node->m_sourceID, AL_VELOCITY,			vel);
			alSourcei (node->m_sourceID, AL_LOOPING,			node->m_loop ? AL_TRUE : AL_FALSE);
			alSourcef (node->m_sourceID, AL_MAX_DISTANCE,		node->m_maxDist);
			alSourcef (node->m_sourceID, AL_ROLLOFF_FACTOR,		node->m_rollOff);
			alSourcef (node->m_sourceID, AL_REFERENCE_DISTANCE,	node->m_reference_dist);
			//printf("soundparam pos: %f %f %f\n", pos[0], pos[1] , pos[2]);
			//printf("soundparam: id %i gain %f maxdist %f\n", node->m_sourceID, node->m_gain, node->m_maxDist);
		}
	}
	// Check for sounds playing, but with a priority less than the nodes in playingSounds
	while(!priorityQueue.empty() && m_sourcesAvailable.size() < playingSounds.size())
	{
		SoundComponent* const node = priorityQueue.top().second;
		priorityQueue.pop();
		if (node->m_sourceID != 0)
		{
			// ...stop the sound
			stopSoundSource(node->m_sourceID );
			node->m_sourceID = 0;
			node->m_gain = SoundComponent::OFF;

			//stop Viseme playback
			node->stopVisemes();
		}
	}

	// typedef for more readability
	typedef std::vector<SoundComponent* const>::iterator playingSoundIter;

	// play the sounds that don't have a source buffer yet
	for( playingSoundIter iter = playingSounds.begin(); iter < playingSounds.end() && !m_sourcesAvailable.empty(); iter++) 
	{

		SoundComponent* const node = *iter;
		ALfloat pos[3] = {node->m_x, node->m_y, node->m_z};
		ALfloat vel[3] = {node->m_velX, node->m_velY, node->m_velZ};
		const unsigned int sourceID = m_sourcesAvailable.back();
		m_sourcesAvailable.pop_back();
		
		//start Viseme playback
		node->startVisemes();
		
		ALenum error_code = AL_NO_ERROR;
		node->m_sourceID = sourceID; 
		if (node->m_stream)
		{
			alSourceQueueBuffers(sourceID, node->m_bufferCount, node->m_buffer);
		}
		else
		{
			alSourcei(sourceID, AL_BUFFER,	*(node->m_buffer));
		}
		/*ALint type;
		alGetSourcei(sourceID, AL_SOURCE_TYPE, &type);
		printf("Buffer type: %x", type); 
		printf("Buffer id: %u", *(node->m_buffer));*/
		if ( (error_code = alGetError()) != AL_NO_ERROR)
			DisplayALError("Error assigning buffer: ", error_code);

		//set properties
		alSourcei (sourceID, AL_SOURCE_RELATIVE,    AL_FALSE);
		alSourcef (sourceID, AL_PITCH,				node->m_pitch);
		// alSourcef (sourceID, AL_MIN_GAIN,			0.0);
		// alSourcef (sourceID, AL_MAX_GAIN,			1.0	);
		alSourcef (sourceID, AL_GAIN,				node->m_gain);
		alSourcefv(sourceID, AL_POSITION,			pos);
		alSourcefv(sourceID, AL_VELOCITY,			vel);
		alSourcei (sourceID, AL_LOOPING,			node->m_loop ? AL_TRUE : AL_FALSE);
		alSourcef (sourceID, AL_MAX_DISTANCE,		node->m_maxDist);				
		alSourcef (sourceID, AL_ROLLOFF_FACTOR,		node->m_rollOff);
		alSourcef (sourceID, AL_REFERENCE_DISTANCE,	node->m_reference_dist);
		alSourcePlay(sourceID);		
		if ( (error_code = alGetError()) != AL_NO_ERROR)
			DisplayALError("Error starting sound: ", error_code);
		//printf("soundparam pos: %f %f %f\n", pos[0], pos[1] , pos[2]);
		//printf("soundparam: id %i gain %f maxdist %f\n", sourceID, node->m_gain, node->m_maxDist);
	}
}

void SoundManager::addComponent(SoundComponent* sound)
{
	std::vector<SoundComponent*>::iterator iter = find(m_soundNodes.begin(), m_soundNodes.end(), sound);
	if (iter == m_soundNodes.end())
		m_soundNodes.push_back(sound);
}

void SoundManager::removeComponent(SoundComponent* sound)
{
	std::vector<SoundComponent*>::iterator iter = find(m_soundNodes.begin(), m_soundNodes.end(), sound);
	if (iter != m_soundNodes.end())
	{
		if( sound->m_sourceID != 0 )
		{
			stopSoundSource( sound->m_sourceID );
			sound->m_sourceID = 0;
			sound->m_gain = SoundComponent::OFF;
		}
		m_soundNodes.erase(iter);		
	}
}

void SoundManager::stopSoundSource( unsigned int sourceID )
{
	ALenum error_code = AL_NO_ERROR;
	alSourceStop(sourceID);
	if ( (error_code = alGetError()) != AL_NO_ERROR)
			DisplayALError("Error stopping sound: ", error_code);

	int queued;
	alGetSourcei(sourceID, AL_BUFFERS_QUEUED, &queued);	    
	while(queued--)
	{
		ALuint buffer;   
		alSourceUnqueueBuffers(sourceID, 1, &buffer);
		if ( (error_code = alGetError()) != AL_NO_ERROR)
			DisplayALError("Error unqueuing Buffer: ", error_code);
	}
	alSourcei( sourceID, AL_BUFFER,	AL_NONE );
	if ( (error_code = alGetError()) != AL_NO_ERROR)
			DisplayALError("Error releasing Buffer: ", error_code);
	m_sourcesAvailable.push_back(sourceID);
}

void SoundManager::DisplayALError(const char *szText, int errorcode)
{
	printf("%s %s", szText, alGetString(errorcode));
	GameLog::errorMessage("%s %s", szText, alGetString(errorcode));
}