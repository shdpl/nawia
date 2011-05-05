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
// Copyright (C) 2007 Volker Wiendl and Felix Kistler
// 
// ****************************************************************************************
#include "SoundComponent.h"

#include "SoundManager.h"
#include "SoundListenerComponent.h"
#include "SoundResourceManager.h"
#include <GameEngine/GameEngine.h>
#include <GameEngine/GameLog.h>
#include <GameEngine/GameEvent.h>
#include <GameEngine/GameEntity.h>

#include <XMLParser/utXMLParser.h>

#include <al.h>
#include <alc.h>

#include <string>

#include <time.h>

using namespace std;

const float SoundComponent::OFF = 0.0f;

const char *visemeMapping[22] = {
	"-none-",					// SP_VISEME_0 = 0,		// x (Silence)
	"ae_ax_ah_aa_ao_er_ay",		// SP_VISEME_1,			// AE, AY, AH
	"ae_ax_ah_aa_ao_er_ay",		// SP_VISEME_2,			// AA
	"ae_ax_ah_aa_ao_er_ay",		// SP_VISEME_3,			// AO
	"ey_eh_uh",					// SP_VISEME_4,			// EY, EH, UH
	"ae_ax_ah_aa_ao_er_ay",		// SP_VISEME_5,			// ER
	"aw_y_iy_ih_ix_h_k_g_ng",	// SP_VISEME_6,			// y, IY, IH
	"w_uw",						// SP_VISEME_7,			// w, UW
	"ow",						// SP_VISEME_8,			// OW
	"aw_y_iy_ih_ix_h_k_g_ng",	// SP_VISEME_9,			// AW
	"oy",						// SP_VISEME_10,		// OY
	"ae_ax_ah_aa_ao_er_ay",		// SP_VISEME_11,		// AY
	"aw_y_iy_ih_ix_h_k_g_ng",	// SP_VISEME_12,		// h
	"r",						// SP_VISEME_13,		// r
	"l",	//TODO				// SP_VISEME_14,		// l
	"s_z_t_d_n",				// SP_VISEME_15,		// s, z
	"sh_ch_jh_zh",				// SP_VISEME_16,		// SH, CH, ZH, j
	"th_dh",					// SP_VISEME_17,		// TH, DH
	"f_v",						// SP_VISEME_18,		// f, v
	"s_z_t_d_n",				// SP_VISEME_19,		// d, t, n
	"aw_y_iy_ih_ix_h_k_g_ng",	// SP_VISEME_20,		// k, g, NG
	"p_b_m"						// SP_VISEME_21,		// p, b, m
};

GameComponent* SoundComponent::createComponent( GameEntity* owner )
{
	return new SoundComponent( owner );
}

SoundComponent::SoundComponent(GameEntity *owner) : GameComponent(owner, "Sound3D"), m_buffer(NULL), 
	m_lastTimeStamp(0), m_sourceID(0), m_startTimestamp(0.0f), m_curViseme(0), m_changedBlending(false), m_time(0),
	m_prevViseme(0), m_visemeBlendFacPrev(1.0f), m_visemeBlendFac(1.0f), m_visemeIndex(-1), m_isSpeaking(false),
	m_bufferCount(0), m_resourceID(0), m_stream(false), m_gain(0.0f), m_initialGain(0.0f), m_FACSmapping(false),
	m_soundInterrupted(false), m_speakingPausedAt(0), m_currentPriority(0)
{
	owner->addListener(GameEvent::E_SET_ENABLED, this);
	owner->addListener(GameEvent::E_SET_SOUND_GAIN, this);	
	owner->addListener(GameEvent::E_SET_SOUND_LOOP, this);
	owner->addListener(GameEvent::E_SET_SOUND_FILE, this);
	owner->addListener(GameEvent::E_SET_TRANSFORMATION, this);
	owner->addListener(GameEvent::E_SET_TRANSLATION, this);
	owner->addListener(GameEvent::E_SET_PHONEMES_FILE, this);
	owner->addListener(GameEvent::E_GET_SOUND_DISTANCE, this);
	owner->addListener(GameEvent::E_SET_SOUND_WITH_USER_DATA, this);
	owner->addListener(GameEvent::E_SET_SOUND_OFFSET, this);
	owner->addListener(GameEvent::E_PLAY_SOUND, this);
	owner->addListener(GameEvent::E_PAUSE_SOUND, this);
	owner->addListener(GameEvent::E_STOP_SOUND, this);

	SoundManager::instance()->addComponent(this);
}

SoundComponent::~SoundComponent()
{
	SoundManager::instance()->removeComponent(this);
	// Remove the current resource
	if( m_resourceID != 0 )
		SoundResourceManager::instance()->removeResource( m_resourceID );

	// And the tagged ones
	SoundFileIterator iter;
	SoundFileIterator end = m_taggedSoundFiles.end();
	for (iter = m_taggedSoundFiles.begin(); iter != end; ++iter)
	{
		std::vector<std::pair<int, int>>::iterator resIter;
		std::vector<std::pair<int, int>>::iterator resEnd = iter->second.end();
		for (resIter = iter->second.begin(); resIter != resEnd; ++resIter)
		{
			// Remove sound resource
			if (resIter->first == m_resourceID)
				// But not again the current resource
				m_resourceID = 0;
			else
				SoundResourceManager::instance()->removeResource(resIter->first);
			// And phoneme resource
			SoundResourceManager::instance()->removePhonemesFile(resIter->second);
		}
	}	

	
	delete[] m_buffer;
}

void SoundComponent::executeEvent(GameEvent *event)
{
	switch(event->id())
	{
	case GameEvent::E_SET_ENABLED:
		setEnabled(*static_cast<const bool*>(event->data()));
		break;
	case GameEvent::E_SET_SOUND_GAIN:
		setGain(*static_cast<const float*>(event->data()));
		break;
	case GameEvent::E_SET_SOUND_LOOP:
		setLoop(*static_cast<const bool*>(event->data()));
		break;
	case GameEvent::E_SET_SOUND_FILE:
		setSoundFile(static_cast<const char*>(event->data()));
		break;
	case GameEvent::E_SET_PHONEMES_FILE:
		loadPhonemesFile(static_cast<const char*>(event->data()));
		break;
	case GameEvent::E_SET_TRANSFORMATION:
		{
			const float* absTrans = static_cast<const float*>(event->data());
			m_pos.x = absTrans[12]; m_pos.y = absTrans[13]; m_pos.z = absTrans[14];
		}
		break;
	case GameEvent::E_SET_TRANSLATION:
		{
			Vec3f* pos = static_cast<Vec3f*>(event->data());
			m_pos = *pos;
		}
		break;
	case GameEvent::E_GET_SOUND_DISTANCE:
		{
			float* dist = static_cast<float*>(event->data());
			*dist = getDistanceToListener();
		}
		break;
	case GameEvent::E_SET_SOUND_WITH_USER_DATA:
		{
			const SoundResourceData* resData = (SoundResourceData*) event->data();
			setSoundFromUserData(resData->m_userData, resData->m_dataSize, resData->m_samplesPerSec, resData->m_bitsPerSample, resData->m_numChannels);
		}
		break;
	case GameEvent::E_SET_SOUND_OFFSET:
		setOffset(*static_cast<const bool*>(event->data()));
		break;
	case GameEvent::E_PLAY_SOUND:
		setEnabled(true);
		break;
	case GameEvent::E_PAUSE_SOUND:
		pause();
		break;
	case GameEvent::E_STOP_SOUND:
		setEnabled(false);
		break;
	}
}

void SoundComponent::loadFromXml(const XMLNode* description)
{
	const char* file = description->getAttribute("file");
	if (file)
		GameLog::logMessage("Loading Sound file: %s", file);

	Matrix4f trans;
	m_owner->executeEvent(&GameEvent(GameEvent::E_TRANSFORMATION, &GameEventData( (float*) trans.x, 16 ), this));
	m_oldPos = m_pos = Vec3f(trans.x[12], trans.x[13], trans.x[14]);
	m_lastTimeStamp = GameEngine::timeStamp();

	// stream attribute currently only has influence on ogg files
	bool stream = _stricmp(description->getAttribute("stream", "true"),"true")==0 || _stricmp(description->getAttribute("stream", "1"),"1")==0;

	// To set the gain correctly at loading
	// You should not change the following order
	if (file)
		setSoundFile(file, !stream);
	setGain(static_cast<float>(atof(description->getAttribute("gain", "0.5"))));
	setLoop(_stricmp(description->getAttribute("loop", "false"),"true")==0 || _stricmp(description->getAttribute("loop", "false"),"1")==0);
	setMaxDist(static_cast<float>(atof(description->getAttribute("maxdist", "9999.0"))));
	setRefDist(static_cast<float>(atof(description->getAttribute("refdist", "15.0"))));
	setPitch(static_cast<float>(atof(description->getAttribute("pitch", "1.0"))));
	setRollOff(static_cast<float>(atof(description->getAttribute("rolloff", "1.0"))));	
	setOffset(static_cast<float>(atof(description->getAttribute("offset", "0"))));

	const char* pFile = description->getAttribute("phonemes");
	if( pFile )
	{
		unsigned int rID = SoundResourceManager::instance()->addPhonemesFile(pFile);
		SoundResourceManager::instance()->getVisemes(rID, &m_visemes);
	}

	const char* visemefile = description->getAttribute( "visemefile" );
	if( visemefile != 0 )
	{
		m_FACSmapping = true;

		XMLNode xmlNode = XMLNode::openFileHelper( visemefile, "Visemes" );
		int n = xmlNode.nChildNode( "Viseme" );

		for( int i = 0; i < n; i++ )
		{
			XMLNode fe = xmlNode.getChildNode( "Viseme", i );
			string name( fe.getAttribute( "name" ) );

			int k = fe.nChildNode( "AU" );
			map<int, float> auValues;
			for( int j = 0; j < k; j++ )
			{
				auValues[atoi( fe.getChildNode( "AU", j ).getAttribute( "id" ) )] = (float) atof( fe.getChildNode( "AU", j ).getAttribute( "value" ) );
			}
			m_FACSvisemes[name] = auValues;
		}
	}

	int childCount = description->nChildNode("SoundFile");
	for (int i = 0; i < childCount; ++i)
	{
		const XMLNode& sentenceNode = description->getChildNode("SoundFile", i);
		string tag(sentenceNode.getAttribute("tag", "random"));

		const char* fileName = sentenceNode.getAttribute("file");
		if (fileName)
		{
			// preload sound file
			int resourceID = SoundResourceManager::instance()->addResource(fileName, true);
			if (resourceID  != 0)
			{
				int phonemeResource = 0;
				const char* phonemesfile = sentenceNode.getAttribute("phonemes");
				// And phonemes
				if (phonemesfile)
				{
					phonemeResource = SoundResourceManager::instance()->addPhonemesFile(phonemesfile);
				}
				m_taggedSoundFiles[tag].push_back(std::make_pair<int, int>(resourceID, phonemeResource));
			}
		}
	}
	if (childCount > 0)
		srand((unsigned int) time(0x0));

	bool enabled = _stricmp(description->getAttribute("autoStart", "1"),"0")!=0 && _stricmp(description->getAttribute("autoStart", "1"),"false")!=0;
	setEnabled(enabled);
}

void SoundComponent::update()
{
	if (m_changedBlending)
	{
		updateVisemes();
		m_changedBlending = false;
	}

	if (m_visemeIndex == -1)
	{
		// visemes have been stopped
		if (m_visemeBlendFac > 0 || m_visemeBlendFacPrev > 0)
		{
			m_visemeBlendFac = 0;
			m_visemeBlendFacPrev = 0;
			updateVisemes();
		}
		m_curViseme = 0;
	}
	if (m_visemeBlendFacPrev == 0)
	{
		// Previous viseme has been faded out
		m_prevViseme = 0;
	}

	if(m_isSpeaking && m_speakingPausedAt <= 0 && m_visemes[m_visemeIndex].m_end < m_time)
	{
		// Viseme ended

		// Reset the old viseme if not already done
		if (m_prevViseme != 0 && m_visemeBlendFacPrev != 0)
		{
			//printf("Viseme not completely blended out, value: %.3f!\n", m_visemeBlendFacPrev);
			m_visemeBlendFacPrev = 0;
			updateVisemes();
		}

		// Go to next viseme
		m_visemeIndex++;

		// But skip rhemes/themes
		while (m_visemeIndex < (int)m_visemes.size()
			&& (m_visemes[m_visemeIndex].m_index == 100 || m_visemes[m_visemeIndex].m_index == 101))
		{
			GameEvent rtheme(GameEvent::SP_RHEME_START, NULL, NULL);
			if(m_visemes[m_visemeIndex].m_index == 100)
				rtheme = GameEvent(GameEvent::SP_THEME_START, NULL, NULL);	
			m_owner->executeEvent(&rtheme);

			m_visemeIndex++;
		}

		// End of text 	
		if( m_visemeIndex == (int)m_visemes.size() )
		{	
			// Sentence ended
			if( m_loop )
			{
				// Sound loops
				// Switch current viseme to previous
				m_prevViseme = m_curViseme;
				m_visemeBlendFacPrev = m_visemeBlendFac;
				m_visemeBlendFac = 0.0f;
				//..and start visemes again
				m_startTimestamp = GameEngine::timeStamp();
				m_time = 0;
				m_visemeIndex = 0;
				m_curViseme = m_visemes[m_visemeIndex].m_index;
				m_isSpeaking = true;
				m_changedBlending = true;
			}
			else
				stopVisemes();
		}
		else
		{
			// Switch current viseme to previous
			m_prevViseme = m_curViseme;
			m_visemeBlendFacPrev = m_visemeBlendFac;
			//printf("Copied to BlendFacPrev: %.2f\n", m_visemeBlendFacPrev);
			m_visemeBlendFac = 0.0f;
			// And set new viseme
			m_curViseme = m_visemes[m_visemeIndex].m_index;
		}
	}
}

void SoundComponent::run()
{
	float deltaT = 1.0f / (GameEngine::timeStamp() - m_lastTimeStamp);
	m_vel = (m_pos - m_oldPos) * deltaT;
	m_oldPos = m_pos;

	if( m_sourceID != 0 && m_stream)
		SoundResourceManager::instance()->updateBuffer(m_sourceID, m_resourceID);

	// update visemes
	if( !m_visemes.empty() && m_isSpeaking && m_speakingPausedAt <= 0)
	{
		// Calculate interpolation
		float timeStep = (GameEngine::timeStamp() - m_lastTimeStamp) * 1000.0f;

		// Calc current viseme
		m_time = (int)( ( GameEngine::timeStamp() - m_startTimestamp ) * 1000 );
		float passedPercent, speed;
		if (m_visemes[m_visemeIndex].m_duration < 250)
		{
			// Less than 200 ms so only blend in at a specified speed (maximum 3/4 blended in)
			speed = 0.008f; // = 2.0f / 250.0f;
			passedPercent = clamp(float(m_time - m_visemes[m_visemeIndex].m_start) / 666.667f, 0, 1.0f);
		}
		else
		{
			// complete blending
			speed = 2.0f / m_visemes[m_visemeIndex].m_duration;
			passedPercent = clamp(float(m_time - m_visemes[m_visemeIndex].m_start) / float(m_visemes[m_visemeIndex].m_duration), 0, 1.0f);	
		}

		m_changedBlending = false;
		if (passedPercent < 0.5f)
		{
			// blend current viseme in until 0.5 of time passed
			//m_visemeBlendFac =  2.0f * passedPercent;			
			m_visemeBlendFac +=  speed * timeStep;
			// blend previous viseme out until 0.25 of time has passed
			//m_visemeBlendFacPrev = clamp((1.0f - passedPercent * 4.0f), 0, 1.0f);
			m_visemeBlendFacPrev -=  2.0f * speed * timeStep;
			m_visemeBlendFac = clamp(m_visemeBlendFac, 0, 1.0f);
			m_visemeBlendFacPrev = clamp(m_visemeBlendFacPrev, 0, 1.0f);
			m_changedBlending = true;
		}
		else if (passedPercent >= 0.5f && passedPercent <= 0.75f && m_visemeBlendFac < 1.0f)
		{
			m_visemeBlendFac = 1.0f;
			//resetPreviousViseme();
			m_visemeBlendFacPrev = 0.0f;
			m_changedBlending = true;
		}
		else if (passedPercent > 0.75f)
		{
			// blend out current viseme to the half value
			//m_visemeBlendFac = ((1.0f - passedPercent)  * 2.0f) + 0.5f;
			m_visemeBlendFac -=  2.0f * speed * timeStep;
			m_visemeBlendFac = clamp(m_visemeBlendFac, 0, 1.0f);
			//resetPreviousViseme();
			m_visemeBlendFacPrev = 0.0f;
			m_changedBlending = true;
		}

		//printf("PassedPercent: %.2f, Step: %.2f, BlendFac: %.2f, BlendFacPrev: %.2f\n", passedPercent, timeStep, m_visemeBlendFac, m_visemeBlendFacPrev);

		//m_visemeBlendFac = 1 - (m_visemes[m_visemeIndex].m_end - (float)time) / m_visemes[m_visemeIndex].m_duration + 0.6f;
		//m_visemeBlendFac = clamp(m_visemeBlendFac, 0.6f, 1.0f) / 2.0f;

		//printf("Visemetime: %d", time);
	}

	m_lastTimeStamp = GameEngine::timeStamp();
}

void SoundComponent::setEnabled(bool enable)
{	
	if(enable)
	{
		if (m_gain == OFF)
		{
			m_gain = m_initialGain;

			// If we have a stream we need to reload it
			if( m_stream && m_resourceID != 0)
				SoundResourceManager::instance()->reloadResource(m_resourceID);
		}
		else
		{
			// Resume if paused
			resume();
		}
	}	
	else if( !enable )
	{
		m_gain = OFF;
		m_soundInterrupted = false;
	}
}

void SoundComponent::setGain(const float gain)
{
	if( gain == OFF )
	{
		// Users only wants to disable the sound
		setEnabled(false);
		return;
	}
	else if( m_gain == OFF )
		// Users sets the gain of a disabled sound
		// so enable it first
		setEnabled(true);

	// now we set the current gain
	// and the gain for returning after disabled status
	m_initialGain = m_gain = gain;
}

void SoundComponent::setLoop(const bool loop)
{
	m_loop = loop;
}

void SoundComponent::pause()
{
	if (isPlaying())
	{
		alSourcePause( m_sourceID );
		if (m_isSpeaking)
			m_speakingPausedAt = GameEngine::timeStamp() - m_startTimestamp;
	}
}

void SoundComponent::resume()
{
	if (isPaused())
	{
		alSourcePlay( m_sourceID );
		if (m_isSpeaking)
		{
			m_startTimestamp = GameEngine::timeStamp() - m_speakingPausedAt;
			m_speakingPausedAt = 0;
		}
	}
}


bool SoundComponent::isPlaying()
{
	int state = 0;
	if (m_sourceID != 0)
		alGetSourcei( m_sourceID, AL_SOURCE_STATE, &state );
	return state == AL_PLAYING;
}

bool SoundComponent::isPaused()
{
	int state = 0;
	if (m_sourceID != 0)
		alGetSourcei( m_sourceID, AL_SOURCE_STATE, &state );
	return state == AL_PAUSED;
}

void SoundComponent::setPitch(const float x)
{
	m_pitch = x;
}

void SoundComponent::setOffset(const float offset)
{
	// Setting the offset needs special handling as it disturbs already playing sounds
	bool wasPlaying = isPlaying();
	if (wasPlaying)
		pause();
	m_offset = offset;
	if (wasPlaying)
	{
		alSourcef( m_sourceID, AL_SEC_OFFSET, (offset>0) ? offset : 0);
		resume();
	}
}

void SoundComponent::setRollOff(const float value)
{
	m_rollOff = value;
}
void SoundComponent::setMaxDist(const float maxDist)
{
	m_maxDist = maxDist;
}
void SoundComponent::setRefDist(const float value)
{
	m_reference_dist = value;
}

bool SoundComponent::setSoundFromUserData(const char* data, int dataSize, int samplesPerSec, int bitsPerSample, int numChannels)
{
	// Clear all old data
	stopVisemes();
	unsigned int oldRes = m_resourceID;
	bool oldStream = m_stream;
	// Old stream can be removed anyway
	if( oldStream )
	{
		if( m_sourceID != 0 )
			SoundManager::instance()->stopSound( this, true );
		if( oldRes != 0 )
			SoundResourceManager::instance()->removeResource(oldRes);
	}
	m_resourceID = SoundResourceManager::instance()->addUserResource(data, dataSize, samplesPerSec, bitsPerSample, numChannels);

	if (m_resourceID != 0)
	{
		int newBufferCount = SoundResourceManager::instance()->getBufferCount(m_resourceID);
		if (m_bufferCount != newBufferCount)
		{
			m_bufferCount = newBufferCount;
			delete[] m_buffer;
			m_buffer = new unsigned int[m_bufferCount];
		}
		memcpy(m_buffer, SoundResourceManager::instance()->getBuffer(m_resourceID), m_bufferCount * sizeof(unsigned int));
		m_stream = SoundResourceManager::instance()->isStream(m_resourceID); 


		//Old stream already removed
		if (!oldStream)
		{
			// Sound will be played another time
			// Only reference counter has to be decremented
			// Because it was incremented by addResource
			if (m_resourceID == oldRes)
				SoundResourceManager::instance()->removeResource(oldRes);
			// Stop old sound if different
			else
			{
				if (m_sourceID != 0)
					SoundManager::instance()->stopSound(this, true);
				if (oldRes != 0)
					SoundResourceManager::instance()->removeResource(oldRes);
			}
		}

		// Don't start the sound immediately
		m_gain= OFF;
		return true;
	}

	GameLog::errorMessage("Error loading sound with user data");
	return false;
}

bool SoundComponent::setSoundFile(const char* fileName, bool forceNoStream /*= false*/)
{
	// Stop old Visemes
	stopVisemes();

	unsigned int oldRes = m_resourceID;
	bool oldStream = m_stream;
	// Old stream can be removed anyway
	if( oldStream )
	{
		if( m_sourceID != 0 )
			SoundManager::instance()->stopSound( this, true );
		if( oldRes != 0 )
			SoundResourceManager::instance()->removeResource(oldRes);
	}

	// Check for tagged sound files
	SoundFileIterator iter = m_taggedSoundFiles.find(string(fileName));
	if (iter != m_taggedSoundFiles.end())
	{
		// This seems to be a tag, so play the sound file directly
		std::pair<int, int> resources = iter->second[ rand() % iter->second.size()];
		m_resourceID = resources.first;
		m_visemes.clear();
		SoundResourceManager::instance()->getVisemes(resources.second, &m_visemes);
	}
	else
		m_resourceID = SoundResourceManager::instance()->addResource(fileName, forceNoStream);

	if (m_resourceID != 0)
	{
		int newBufferCount = SoundResourceManager::instance()->getBufferCount(m_resourceID);
		if (m_bufferCount != newBufferCount)
		{
			m_bufferCount = newBufferCount;
			delete[] m_buffer;
			m_buffer = new unsigned int[m_bufferCount];
		}
		memcpy(m_buffer, SoundResourceManager::instance()->getBuffer(m_resourceID), m_bufferCount * sizeof(unsigned int));
		m_stream = SoundResourceManager::instance()->isStream(m_resourceID); 

		//Old stream already removed
		if (!oldStream)
		{
			// Sound will be played another time
			// Only reference counter has to be decremented
			// Because it was incremented by addResource
			if (m_resourceID == oldRes)
				SoundResourceManager::instance()->removeResource(oldRes);
			// Stop old sound if different
			else
			{
				if (m_sourceID != 0)
					SoundManager::instance()->stopSound(this, true);
				if (oldRes != 0)
					SoundResourceManager::instance()->removeResource(oldRes);
			}
		}
		m_gain= m_initialGain;
		return true;
	}
	else
		GameLog::errorMessage("Error loading sound: %s", fileName);
	return false;
}

bool SoundComponent::loadPhonemesFile(const char* fileName)
{
	// Stop the visemes as we are reloading our container
	// Stop old Visemes
	stopVisemes();
	// Delete old visemes
	m_visemes.clear();
	// Load visemes
	unsigned int resID = SoundResourceManager::instance()->addPhonemesFile(fileName);
	SoundResourceManager::instance()->getVisemes(resID, &m_visemes);
	return resID != 0;
}



void SoundComponent::startVisemes()
{
	if( !m_visemes.empty() )
	{
		m_startTimestamp = GameEngine::timeStamp();
		m_time = 0;
		m_visemeIndex = 0;

		m_curViseme = m_visemes[m_visemeIndex].m_index;
		m_visemeBlendFacPrev = 0.0f;
		m_visemeBlendFac = 0.0f;
		m_isSpeaking = true;
		m_speakingPausedAt = 0;
	}
}

void SoundComponent::stopVisemes()
{
	if( !m_visemes.empty() )
	{
		// Set both blend facs
		m_visemeBlendFacPrev = 0;
		m_visemeBlendFac = 0;
		m_changedBlending = true;

		m_startTimestamp = 0.0f;
		m_time = 0;
		m_visemeIndex = -1;
		m_isSpeaking = false;
		m_speakingPausedAt = 0;
	}
}

float SoundComponent::getDistanceToListener()
{
	SoundListenerComponent* listener = SoundManager::instance()->activeListener();
	if (listener)
		return (m_pos - listener->m_listenerPos).length();
	return 0.0f;
}

void SoundComponent::updateVisemes()
{
	if (m_FACSmapping)
	{
		//Property data(visemeMapping[m_curViseme], m_visemeBlendFac);
		//GameEvent event(GameEvent::FACS_SET_EXPRESSION, &data, this);
		//m_owner->executeEvent(&event);

		MorphTargetAnimation morphTargetAnimData( visemeMapping[m_curViseme], m_visemeBlendFac, 0.06f );
		GameEvent event( GameEvent::E_SET_FACS, &morphTargetAnimData, this );
		m_owner->executeEvent( &event );
	}
	else
	{
		// Set new morphtarget values for current viseme
		MorphTarget morphTargetData(visemeMapping[m_curViseme], m_visemeBlendFac);
		GameEvent event(GameEvent::E_MORPH_TARGET, &morphTargetData, this);		
		if (m_owner->checkEvent(&event))
			m_owner->executeEvent(&event);
		
		// And the previous one
		MorphTarget morphTargetData2(visemeMapping[m_prevViseme], m_visemeBlendFacPrev);
		GameEvent event2(GameEvent::E_MORPH_TARGET, &morphTargetData2, this);		
		if (m_owner->checkEvent(&event2))
			m_owner->executeEvent(&event2);
	}
}

size_t SoundComponent::getSerializedState(char* state) {
	char* out = state;
	memcpy(out, &m_gain, sizeof(float));			out+=sizeof(float);
	memcpy(out, &m_initialGain, sizeof(float));		out+=sizeof(float);
	memcpy(out, &m_loop, sizeof(bool));				out+=sizeof(bool);

	return out - state;
}

void SoundComponent::setSerializedState(const char* state, size_t length) {
	if (length != 2 * sizeof(float) + sizeof(bool))
		return;

	memcpy(&m_gain, state, sizeof(float));			state+=sizeof(float);
	memcpy(&m_initialGain, state, sizeof(float));	state+=sizeof(float);
	memcpy(&m_loop, state, sizeof(bool));			state+=sizeof(bool);
}