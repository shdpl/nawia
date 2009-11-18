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

#include <vector>

#define sq(x) (x)*(x)

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

bool checkXMLParseResult(const XMLResults& results)
{
	switch (results.error)
	{
	case eXMLErrorNone:
		return true;
	default:
		GameLog::errorMessage("Parsing error in line %d column %d: %s", results.nLine, results.nColumn, XMLNode::getError(results.error));
		return false;
	}
}

GameComponent* SoundComponent::createComponent( GameEntity* owner )
{
	return new SoundComponent( owner );
}

SoundComponent::SoundComponent(GameEntity *owner) : GameComponent(owner, "Sound3D"), m_buffer(NULL), 
m_lastTimeStamp(0), m_sourceID(0), m_startTimestamp(0.0f), m_curViseme(0), m_visemeChanged(false),
m_prevViseme(0), m_visemeBlendFac(1.0f), m_visemeBlendFacPrev(1.0f), m_visemeIndex(-1), m_isSpeaking(false),
m_bufferCount(0), m_resourceID(0), m_stream(false), m_gain(0.0f), m_initialGain(0.0f)
{
	owner->addListener(GameEvent::E_SET_ENABLED, this);
	owner->addListener(GameEvent::E_SET_SOUND_GAIN, this);	
	owner->addListener(GameEvent::E_SET_SOUND_LOOP, this);
	owner->addListener(GameEvent::E_SET_SOUND_FILE, this);
	owner->addListener(GameEvent::E_SET_TRANSFORMATION, this);
	owner->addListener(GameEvent::E_SET_TRANSLATION, this);
	owner->addListener(GameEvent::E_SET_PHONEMES_FILE, this);
	owner->addListener(GameEvent::E_GET_SOUND_DISTANCE, this);

	SoundManager::instance()->addComponent(this);
}

SoundComponent::~SoundComponent()
{
	SoundManager::instance()->removeComponent(this);
	if( m_resourceID != 0 && !m_stream )
		SoundResourceManager::instance()->removeResource( m_resourceID );

	// Clear visemes
	m_visemes.clear();	

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
		setPhonemesFile(static_cast<const char*>(event->data()));
		break;
	case GameEvent::E_SET_TRANSFORMATION:
		{
			const float* absTrans = static_cast<const float*>(event->data());
			m_x = absTrans[12]; m_y = absTrans[13]; m_z = absTrans[14];
		}
		break;
	case GameEvent::E_SET_TRANSLATION:
		{
			 Vec3f* pos = static_cast<Vec3f*>(event->data());
			 m_x = pos->x; m_y = pos->y; m_z = pos->z;
		}
		break;
	case GameEvent::E_GET_SOUND_DISTANCE:
		{
			float* dist = static_cast<float*>(event->data());
			*dist = getDistanceToListener();
		}
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
	m_x = m_tx = trans.x[12];
	m_y = m_ty = trans.x[13];
	m_z = m_tz = trans.x[14];
	m_lastTimeStamp = GameEngine::timeStamp();
	
	// To set the gain correctly at loading
	// You should not change the following order
	if (file)
		setSoundFile(file);
	setGain(static_cast<float>(atof(description->getAttribute("gain", "0.5"))));
	setLoop(_stricmp(description->getAttribute("loop", "false"),"true")==0 || _stricmp(description->getAttribute("loop", "false"),"1")==0);

	setMaxDist(static_cast<float>(atof(description->getAttribute("maxdist", "9999.0"))));
	setRefDist(static_cast<float>(atof(description->getAttribute("refdist", "15.0"))));
	setPitch(static_cast<float>(atof(description->getAttribute("pitch", "1.0"))));
	setRollOff(static_cast<float>(atof(description->getAttribute("rolloff", "1.0"))));	
	if( description->getAttribute("phonemes") )
		setPhonemesFile(description->getAttribute("phonemes"));
}

void SoundComponent::update()
{
	float deltaT = 1.0f / (GameEngine::timeStamp() - m_lastTimeStamp);
	m_velX = (m_x - m_tx) * deltaT;
	m_velY = (m_y - m_ty) * deltaT;
	m_velZ = (m_z - m_tz) * deltaT;
	m_tx = m_x; m_ty = m_y; m_tz = m_z;
	m_lastTimeStamp = GameEngine::timeStamp();

	if( m_sourceID != 0 && m_stream)
		SoundResourceManager::instance()->updateBuffer(m_sourceID, m_resourceID);
	
	// update visemes
	if( !m_visemes.empty() && m_isSpeaking)
	{
		if( m_visemeChanged )
		{	
			m_visemeBlendFacPrev = minf( minf( 1.0f, 2.0f - m_visemeBlendFac), m_visemeBlendFac );
			m_visemeBlendFac = 0;
			m_visemeChanged = false;
		}

		// Calculate interpolation
		float step = (1.0f / GameEngine::FPS() * 1000) / (m_visemes[m_visemeIndex].m_duration) ;
		m_visemeBlendFac += step;
		m_visemeBlendFacPrev -= step;

		if( m_prevViseme != 0 )
		{		
			// Fade out previous viseme
			MorphTarget morphTargetData( visemeMapping[m_prevViseme], minf( m_visemeBlendFacPrev, maxf( 1.0f - m_visemeBlendFac, 0.0f ) ) );
			if( morphTargetData.Value <= 0.0f )
				resetPreviousViseme();
			else
			{
				//printf(" Prev vis: %s, %.4f\n", visemeMapping[m_prevViseme], morphTargetData.Value);
				GameEvent event(GameEvent::E_MORPH_TARGET, &morphTargetData, this);		
				if (m_owner->checkEvent(&event)) m_owner->executeEvent(&event);
			}
		}

		if( m_curViseme != 0 )
		{
			MorphTarget morphTargetData(visemeMapping[m_curViseme], minf( 1.0f, m_visemeBlendFac ) );
			if( m_visemeBlendFac > 1.0f )
				morphTargetData.Value = maxf( 2.0f - m_visemeBlendFac, 0.0f );
			//printf(" Curr vis: %s, %.4f\n", visemeMapping[m_curViseme], morphTargetData.Value);
			GameEvent event(GameEvent::E_MORPH_TARGET, &morphTargetData, this);
			if (m_owner->checkEvent(&event)) m_owner->executeEvent(&event);
			if( m_visemeBlendFac > 2.0f ) 
				m_curViseme = 0;
		}

		// Calc current viseme
		int time = (int)( ( GameEngine::timeStamp() - m_startTimestamp ) * 1000 );
		//printf("Visemetime: %d", time);
		if( m_visemes[m_visemeIndex].m_end < time )
		{
			m_visemeChanged = true;
			resetPreviousViseme();
			m_prevViseme = m_curViseme;
			m_visemeIndex++;
			// End of text 	
			if( m_visemeIndex == m_visemes.size() )
			{	
				// Stop visemes
				stopVisemes();
				if( m_loop )
				{
					//..and start them again if sound loops
					startVisemes();
				}
			}
			if( m_isSpeaking ) m_curViseme = m_visemes[m_visemeIndex].m_index;
		}
	}
}

void SoundComponent::setEnabled(bool enabled)
{	
	if( enabled && m_gain == OFF )
	{
		m_gain = m_initialGain;
		
		// If we have a stream we need to reload it
		if( m_stream && m_resourceID != 0)
			SoundResourceManager::instance()->reloadResource(m_resourceID);
	}	
	else if( !enabled )
		m_gain = OFF;		
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
	// Auto start sound if now looping else stop
	setEnabled( loop );
}

void SoundComponent::setPitch(const float x)
{
	m_pitch = x;
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

bool SoundComponent::setSoundFile(const char* fileName)
{
	unsigned int oldRes = m_resourceID;
	bool oldStream = m_stream;
	// Old stream can be removed anyway
	if( oldStream )
	{
		if( m_sourceID != 0 )
			SoundManager::instance()->stopSoundSource( m_sourceID );
		if( oldRes != 0 )
			SoundResourceManager::instance()->removeResource(oldRes);
		m_sourceID = 0;
	}

	if ((m_resourceID = SoundResourceManager::instance()->addResource(fileName)) != 0)
	{
		int newBufferCount = SoundResourceManager::instance()->getBufferCount(m_resourceID);
		if (m_bufferCount != newBufferCount)
		{
			m_bufferCount = newBufferCount;
			delete[] m_buffer;
			m_buffer = new unsigned int[m_bufferCount];
		}
		memcpy(m_buffer, SoundResourceManager::instance()->getBuffer(m_resourceID), m_bufferCount * sizeof(int));
		m_stream = SoundResourceManager::instance()->isStream(m_resourceID); 

		m_gain= m_initialGain;
		
		//Old stream already removed
		if (!oldStream)
		{
			// Sound will be played another time
			// Only reference counter has to be decremented
			// Because it was incremented by addResource
			if (m_resourceID == oldRes)
				SoundResourceManager::instance()->removeResource(oldRes);
			// Stop old sound if different
			else {
				if (m_sourceID != 0)
					SoundManager::instance()->stopSoundSource( m_sourceID );
				if (oldRes != 0)
					SoundResourceManager::instance()->removeResource(oldRes);
				m_sourceID = 0;
			}
		}
		return true;
	}
	else
		GameLog::errorMessage("Error loading sound: %s", fileName);
	return false;
}

bool SoundComponent::setPhonemesFile(const char* fileName)
{
	// Stop old Visemes
	stopVisemes();
	// Delete old visemes
	m_visemes.clear();
	
	// If the new file name is empty, the user only wants to
	// deactivate the phonemes and we are ready
	if( _stricmp(fileName, "") == 0 )
		return true;

	// Get resource directory for phoneme file
	std::string file = SoundResourceManager::instance()->getResourceDirectory();
	file += fileName;

	// Load phonemfile
	XMLResults results;
	XMLNode phonems = XMLNode::parseFile(file.c_str(), "PhonemeTimings", &results);
	if (checkXMLParseResult(results) && !phonems.isEmpty())
	{				
		// Load visemes and timings from phonemfile
		if (!phonems.isEmpty())
		{
			int childs = phonems.nChildNode();
			for (int i = 0; i < childs; ++i)
			{
				XMLNode child(phonems.getChildNode(i));
				if(_stricmp(child.getName(),"phn")==0  ) addPhonem(&child);
				else if( _stricmp(child.getName(),"word")==0  )
				{
					int wordChilds = child.nChildNode();
					for (int j = 0; j < wordChilds; ++j)
					{
						XMLNode wordChild(child.getChildNode(j));
						if( _stricmp(wordChild.getName(),"phn")==0  ) addPhonem(&wordChild);
						else GameLog::errorMessage("Bad childnode in phonem file %s\n", fileName);
					}

				} else GameLog::errorMessage("Bad childnode in phonem file %s\n", fileName);
			}				
		}
	}
	else
	{				
		GameLog::errorMessage("Error loading phonem file %s\n", fileName);
		return false;
	}
	return true;
}

void SoundComponent::addPhonem(const XMLNode* phonem)
{
	int start = static_cast<int>(atoi(phonem->getAttribute("start","0")));
	int end = static_cast<int>(atoi(phonem->getAttribute("end","0")));
	int index = 0;
	// phonem mapping
	if( _stricmp(phonem->getAttribute("value",""), "AE")==0 ||
		_stricmp(phonem->getAttribute("value",""), "AY")==0 ||
		_stricmp(phonem->getAttribute("value",""), "AH")==0 ) index = 1;
	else if( _stricmp(phonem->getAttribute("value",""), "AA")==0 ) index=2;
	else if( _stricmp(phonem->getAttribute("value",""), "AO")==0 ) index=3;
	else if( _stricmp(phonem->getAttribute("value",""), "EY")==0 ||
		_stricmp(phonem->getAttribute("value",""), "EH")==0 ||
		_stricmp(phonem->getAttribute("value",""), "UH")==0 ) index=4;
	else if( _stricmp(phonem->getAttribute("value",""), "ER")==0 ) index=5;
	else if( _stricmp(phonem->getAttribute("value",""), "y")==0 ||
		_stricmp(phonem->getAttribute("value",""), "IY")==0 ||
		_stricmp(phonem->getAttribute("value",""), "IH")==0 ) index=6;
	else if( _stricmp(phonem->getAttribute("value",""), "w")==0 ||
		_stricmp(phonem->getAttribute("value",""), "UW")==0 ) index=7;
	else if( _stricmp(phonem->getAttribute("value",""), "OW")==0 ) index=8;
	else if( _stricmp(phonem->getAttribute("value",""), "AW")==0 ) index=9;
	else if( _stricmp(phonem->getAttribute("value",""), "OY")==0 ) index=10;
	else if( _stricmp(phonem->getAttribute("value",""), "AY")==0 ) index=11;
	else if( _stricmp(phonem->getAttribute("value",""), "h")==0 ) index=12;
	else if( _stricmp(phonem->getAttribute("value",""), "r")==0 ) index=13;
	else if( _stricmp(phonem->getAttribute("value",""), "l")==0 ) index=14;
	else if( _stricmp(phonem->getAttribute("value",""), "s")==0 ||
		_stricmp(phonem->getAttribute("value",""), "z")==0 ) index=15;
	else if( _stricmp(phonem->getAttribute("value",""), "SH")==0 ||
		_stricmp(phonem->getAttribute("value",""), "CH")==0 ||
		_stricmp(phonem->getAttribute("value",""), "j")==0 ||
		_stricmp(phonem->getAttribute("value",""), "ZH")==0 ) index=16;
	else if( _stricmp(phonem->getAttribute("value",""), "TH")==0 ||
		_stricmp(phonem->getAttribute("value",""), "DH")==0 ) index=17;
	else if( _stricmp(phonem->getAttribute("value",""), "f")==0 ||
		_stricmp(phonem->getAttribute("value",""), "v")==0 ) index=18;
	else if( _stricmp(phonem->getAttribute("value",""), "d")==0 ||
		_stricmp(phonem->getAttribute("value",""), "t")==0 ||
		_stricmp(phonem->getAttribute("value",""), "n")==0 ) index=19;
	else if( _stricmp(phonem->getAttribute("value",""), "k")==0 ||
		_stricmp(phonem->getAttribute("value",""), "g")==0 ||
		_stricmp(phonem->getAttribute("value",""), "NG")==0 ) index=20;
	else if( _stricmp(phonem->getAttribute("value",""), "p")==0 ||
		_stricmp(phonem->getAttribute("value",""), "b")==0 ||
		_stricmp(phonem->getAttribute("value",""), "m")==0 ) index=21;
	
	Viseme vis = Viseme(start, end, index);
	m_visemes.push_back(vis);
}

void SoundComponent::startVisemes()
{
	if( !m_visemes.empty() )
	{
		m_startTimestamp = GameEngine::timeStamp();
		// printf("Starting viseme at %d", m_startTimestamp);
		m_visemeIndex = 0;
		m_curViseme = m_visemes[m_visemeIndex].m_index;
		m_visemeChanged = true;
		resetPreviousViseme();
		m_isSpeaking = true;
	}
}

void SoundComponent::stopVisemes()
{
	if( !m_visemes.empty() )
	{
		m_startTimestamp = 0.0f;
		m_curViseme = 0;
		m_visemeIndex = -1;
		resetPreviousViseme();
		//Set Silence viseme
		MorphTarget morphTargetData(visemeMapping[0], 1.0);
		GameEvent event(GameEvent::E_MORPH_TARGET, &morphTargetData, this);		
		if (m_owner->checkEvent(&event))
			m_owner->executeEvent(&event);
		m_isSpeaking = false;
	}
}

void SoundComponent::resetPreviousViseme()
{
	if( m_prevViseme != 0 )
	{
		MorphTarget morphTargetData(visemeMapping[m_prevViseme], 0);
		// Reset visemes
		GameEvent event(GameEvent::E_MORPH_TARGET, &morphTargetData, this);		
		if (m_owner->checkEvent(&event))
			m_owner->executeEvent(&event);
		m_prevViseme = 0;
		//printf("Reseted prev viseme\n");
	}
}

float SoundComponent::getDistanceToListener()
{
	SoundListenerComponent* listener = SoundManager::instance()->activeListener();
	if (listener)
		return sqrtf(
			sq(m_x - listener->m_listenerPos[0]) + 
			sq(m_y - listener->m_listenerPos[1]) + 
			sq(m_z - listener->m_listenerPos[2]));

	return 0.0f;
}