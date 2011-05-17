// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007
// Programmers: Volker Wiendl, Nikolaus Bee
// 
// This file is part of the GameEngine of the University of Augsburg
// 
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************
//
#include "TTSComponent.h"

#include "TTSManager.h"

#include <GameEngine/GameEngine.h>
#include <GameEngine/GameLog.h>
#include <GameEngine/GameEntity.h>


#include <XMLParser/utXMLParser.h>

#include <time.h>

using namespace std;

// Uncomment to print words that are spoken
//#define PRINT_INFO

#ifdef PRINT_INFO
#include <iostream>
#endif


// http://www.digitalcuriosity.com/VocaliseTTS/SimpleCharacterTutorial_1.htm
// http://udn.epicgames.com/Two/ImpersonatorHeadRigging
/*const float visemeMapping[22] = {
0,		// SP_VISEME_0 = 0,    // Silence
20,		// SP_VISEME_1,        // AE, AX, AH
20,		// SP_VISEME_2,        // AA
20,		// SP_VISEME_3,        // AO
90,		// SP_VISEME_4,        // EY, EH, UH		// ??
20,		// SP_VISEME_5,        // ER
150,	// SP_VISEME_6,        // y, IY, IH, IX
60,		// SP_VISEME_7,        // w, UW
40,		// SP_VISEME_8,        // OW
150,	// SP_VISEME_9,        // AW
50,		// SP_VISEME_10,       // OY
20,		// SP_VISEME_11,       // AY
150,	// SP_VISEME_12,       // h
140,	// SP_VISEME_13,       // r
110,	// SP_VISEME_14,       // l
70,		// SP_VISEME_15,       // s, z
80,		// SP_VISEME_16,       // SH, CH, JH, ZH
100,	// SP_VISEME_17,       // TH, DH
90,		// SP_VISEME_18,       // f, v
70,		// SP_VISEME_19,       // d, t, n
150,	// SP_VISEME_20,       // k, g, NG
120		// SP_VISEME_21,       // p, b, m
};*/


const char *visemeMapping[22] = {
	"-none-",							// SP_VISEME_0 = 0,		// Silence
	"ae_ax_ah_aa_ao_er_ay",		// SP_VISEME_1,			// AE, AX, AH
	"ae_ax_ah_aa_ao_er_ay",		// SP_VISEME_2,			// AA
	"ae_ax_ah_aa_ao_er_ay",		// SP_VISEME_3,			// AO
	"ey_eh_uh",					// SP_VISEME_4,			// EY, EH, UH
	"ae_ax_ah_aa_ao_er_ay",		// SP_VISEME_5,			// ER
	"aw_y_iy_ih_ix_h_k_g_ng",		// SP_VISEME_6,			// y, IY, IH, IX
	"w_uw",						// SP_VISEME_7,			// w, UW
	"ow",							// SP_VISEME_8,			// OW
	"aw_y_iy_ih_ix_h_k_g_ng",		// SP_VISEME_9,			// AW
	"oy",							// SP_VISEME_10,		// OY
	"ae_ax_ah_aa_ao_er_ay",		// SP_VISEME_11,		// AY
	"aw_y_iy_ih_ix_h_k_g_ng",		// SP_VISEME_12,		// h
	"r",							// SP_VISEME_13,		// r
	"l",	//TODO					// SP_VISEME_14,		// l
	"s_z_t_d_n",					// SP_VISEME_15,		// s, z
	"sh_ch_jh_zh",					// SP_VISEME_16,		// SH, CH, JH, ZH
	"th_dh",						// SP_VISEME_17,		// TH, DH
	"f_v",							// SP_VISEME_18,		// f, v
	"s_z_t_d_n",					// SP_VISEME_19,		// d, t, n
	"aw_y_iy_ih_ix_h_k_g_ng",		// SP_VISEME_20,		// k, g, NG
	"p_b_m"						// SP_VISEME_21,		// p, b, m
};

//const float avgDuration[22] = 
//{ 169, 86, 89, 84, 78, 60, 77, 69, 93, 90, 31, 81, 87, 100, 102, 122, 93, 85, 92, 90, 83, 80 };	

GameComponent* TTSComponent::createComponent( GameEntity* owner )
{
	return new TTSComponent( owner );
}

TTSComponent::TTSComponent(GameEntity *owner) : GameComponent(owner, "Sapi"), m_pVoice(0), 
m_curViseme(0), m_prevViseme(0), m_visemeChanged(false), m_visemeBlendFacPrev(1.0f),
m_isSpeaking(false), m_FACSmapping(false), m_useDistanceModel(false), m_dist(0), m_rollOff(1.0f),
m_lastTimeStamp(0)
{
	owner->addListener(GameEvent::E_SPEAK, this);
	owner->addListener(GameEvent::SP_TTS_PAUSE, this);
	owner->addListener(GameEvent::SP_TTS_RESUME, this);
	owner->addListener(GameEvent::SP_TTS_SKIP, this);
	owner->addListener(GameEvent::E_SET_VOICE, this);
	CoInitializeEx(NULL, COINIT_MULTITHREADED);
	TTSManager::instance()->addComponent(this);

	m_getDistanceEvent = new GameEvent(GameEvent::E_GET_SOUND_DISTANCE, GameEventData(&m_dist), this);
}

TTSComponent::~TTSComponent()
{
	TTSManager::instance()->removeComponent(this);
	if (m_pVoice) m_pVoice->Release();
	CoUninitialize();
	delete m_getDistanceEvent;
}

bool TTSComponent::init()
{
	// don't initialize if already allocated
	if (m_pVoice)
		return true;

	if( FAILED( CoCreateInstance( CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void **)&m_pVoice ) ) ) 
		return false;

	if( FAILED( m_pVoice->SetInterest( 
		SPFEI( SPEI_VISEME ) | SPFEI( SPEI_END_INPUT_STREAM ) | SPFEI(SPEI_START_INPUT_STREAM) | SPFEI(SPEI_SENTENCE_BOUNDARY) | SPFEI( SPEI_WORD_BOUNDARY ) | SPFEI( SPEI_TTS_BOOKMARK ),
		SPFEI( SPEI_VISEME ) | SPFEI( SPEI_END_INPUT_STREAM ) | SPFEI(SPEI_START_INPUT_STREAM) | SPFEI(SPEI_SENTENCE_BOUNDARY) | SPFEI( SPEI_WORD_BOUNDARY ) | SPFEI( SPEI_TTS_BOOKMARK ) ) ) ) 
		return false;


	if( FAILED( m_pVoice->SetNotifyCallbackFunction( sapiEvent, (WPARAM) this, 0 ) ) ) 
		return false;

	
	//Setting alert boundary of TTS Voice
	if( FAILED( m_pVoice->SetAlertBoundary( SPEI_VISEME ) ) ) 
		return false;
	
	return true;
}

void TTSComponent::update()
{
	if (m_pVoice == 0 )	return;

	if( m_visemeChanged )
	{
		updateVisemes();
		m_visemeChanged = false;
	}
}


void TTSComponent::executeEvent(GameEvent *event)
{
	switch(event->id())
	{
	case GameEvent::E_SPEAK:
		speak(static_cast<const char*>(event->data()));
		break;
	case GameEvent::E_SET_VOICE:
		setVoice(static_cast<const char*>(event->data()));
		break;
	case GameEvent::SP_TTS_PAUSE:
		//printf("Received Pause Command from ScenePlayer"); 
		m_pVoice->Pause();
		//setVoice(static_cast<const char*>(event->data()));
		break;

	case GameEvent::SP_TTS_SKIP:
	{
		HRESULT hr = S_FALSE;	
		int number = *static_cast<int*>(event->data());
		hr = m_pVoice->Skip(L"SENTENCE",number,0);
	}
		break;
	case GameEvent::SP_TTS_RESUME:
		//printf("Received Pause Command from ScenePlayer"); 
		m_pVoice->Resume();
		//setVoice(static_cast<const char*>(event->data()));
		break;
	}
}


void TTSComponent::loadFromXml(const XMLNode* description)
{
	if( !init() )
		GameLog::errorMessage("TTSComponent: Failed to initialize Microsoft Text-To-Speech Api");

	const char* voice = description->getAttribute("voice", "Microsoft Sam");
	setVoice(voice);

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

	int childCount = description->nChildNode("Sentence");
	for (int i = 0; i < childCount; ++i)
	{
		const XMLNode& sentenceNode = description->getChildNode("Sentence", i);
		string tag(sentenceNode.getAttribute("tag", "random"));

		const char* text = sentenceNode.getText();
		int lenA = lstrlenA(text);
		if (lenA > 0)
		{
			int lenW;
			BSTR unicodestr = 0;
			lenW = ::MultiByteToWideChar(CP_ACP, 0, text, lenA, 0, 0);
			if (lenW > 0)
			{
				// Check whether conversion was successful
				unicodestr = ::SysAllocStringLen(0, lenW);
				::MultiByteToWideChar(CP_ACP, 0, text, lenA, unicodestr, lenW);		
				m_sentences[tag].push_back(wstring(unicodestr));
			}
			::SysFreeString(unicodestr);
		}
	}
	if (childCount > 0)
		srand((unsigned int) time(0x0));

	// SoundComponent needed to get distance from active sound listener
	m_useDistanceModel = _stricmp(description->getAttribute("useDistanceModel", "false"),"true") == 0
		|| _stricmp(description->getAttribute("useDistanceModel", "false"),"1") == 0;

	m_rollOff = (float) atof(description->getAttribute("rollOff", "1.0"));

	const char* volume = description->getAttribute("volume");
	if (volume && m_pVoice)
	{

		m_pVoice->SetVolume((unsigned short) atoi(volume));
	}
}

bool TTSComponent::setVoice(const char* voice)
{
	// Enumerate voice tokens with desired name as attribute 
	IEnumSpObjectTokens *pEnum;
	HRESULT hr = S_FALSE;
	std::string voiceString = "Name=";
	voiceString+=voice;
	int lenA = (int) voiceString.length();
	int lenW;
	BSTR unicodestr;
	// get length for new string
	lenW = ::MultiByteToWideChar(CP_ACP, 0, voiceString.c_str(), lenA, 0, 0);
	if (lenW > 0)
	{
		// Check whether conversion was successful
		unicodestr = ::SysAllocStringLen(0, lenW);
		::MultiByteToWideChar(CP_ACP, 0, voiceString.c_str(), lenA, unicodestr, lenW);
		hr = SpEnumTokens( SPCAT_VOICES, unicodestr, NULL, &pEnum );
	}
	::SysFreeString(unicodestr);
	if( hr != S_OK ) 
	{
		GameLog::errorMessage("SpEnumTokens failed");
		return false;
	}

	// Get the closest token
	ISpObjectToken *pToken;
	hr = pEnum->Next( 1, &pToken, NULL );
	if(  hr != S_OK ) 
	{
		pEnum->Release();
		GameLog::errorMessage("TTSComponent: Failed setting voice (not found?): '%s'", voice);
		return false;
	}

	// Set voice
	hr = m_pVoice->SetVoice( pToken );
	pToken->Release();
	pEnum->Release();
	return hr == S_OK;	
}

void TTSComponent::speak(const char* text)
{
#ifdef PRINT_INFO
	printf("TTSComponent::speak(%s, %d)", text, sentenceID);
#endif
	if( !m_pVoice )
	{
		GameLog::errorMessage("No voice initialized");
	}
	else
	{
		if (m_isSpeaking)
		{
			// Already speaking, so stop current sentence
			// Sapi has no stop function, but speak with a null sentence and 
			// the flag SPF_PURGEBEFORESPEAK set has the same meaning
			// Note that this would be done anyway with the next speak call, but
			// we also want a sentence to be aborted if the argument text is null or empty
			m_pVoice->Speak(NULL, SPF_ASYNC | SPF_PURGEBEFORESPEAK, NULL); 
			m_isSpeaking = false;
			// Stop visemes
			m_visemeBlendFacPrev = 0.0f;
			m_visemeBlendFac = 0.0f;
			updateVisemes();
			// Send stopped event
			GameEvent event(GameEvent::E_SPEAKING_STOPPED, &GameEventData(m_currentSentence.c_str()), this);
			if (m_owner->checkEvent(&event))
				m_owner->executeEvent(&event);
		}

		if (text != 0 && strlen(text) > 0)
		{
			if (m_useDistanceModel)
				calcVolumeFromDistance();

		
			// Try to find text as tag
			SentenceIterator iter = m_sentences.find(string(text));
			if (iter != m_sentences.end())
			{
				// This seems to be a tag, so speak it directly
				std::vector<wstring>& sentences = iter->second;
				m_currentSentence = sentences[ rand() % sentences.size()];
				m_startSpeaking = GameEngine::currentTimeStamp();
				m_pVoice->Speak( m_currentSentence.c_str(), SPF_ASYNC | SPF_PURGEBEFORESPEAK, NULL );
				m_isSpeaking = true;
				m_visemeBlendFacPrev = 0.0f;
				m_visemeBlendFac = 0.1f;
				m_visemeChanged = true;
			}
			else
			{

				int lenA = lstrlenA(text);
				if (lenA > 0)
				{
					int lenW;
					BSTR unicodestr = 0;
					lenW = ::MultiByteToWideChar(CP_ACP, 0, text, lenA, 0, 0);
					if (lenW > 0)
					{
						// Check whether conversion was successful
						unicodestr = ::SysAllocStringLen(0, lenW);
						::MultiByteToWideChar(CP_ACP, 0, text, lenA, unicodestr, lenW);		
						//ULONG numSkipped = 0;
						//m_pVoice->Skip(L"SENTENCE", 100, &numSkipped);
						m_currentSentence = unicodestr;
						// TODO: maybe don't always set the Flag SPF_IS_XML, but only if necessary
						m_pVoice->Speak( unicodestr, SPF_ASYNC | SPF_PURGEBEFORESPEAK | SPF_IS_XML, NULL );
						m_startSpeaking = GameEngine::currentTimeStamp();
						m_isSpeaking = true;
						m_visemeBlendFacPrev = 0.0f;
						m_visemeBlendFac = 0.1f;
						m_visemeChanged = true;
					}
					::SysFreeString(unicodestr);
				}
			}
		}
	}
	if (!m_isSpeaking)
	{
		// Speaking failed for that sentence, so send a message about that
		// Not sure if this is wanted when text is null or empty
		GameEvent event(GameEvent::E_SPEAKING_STOPPED, &GameEventData(text), this);
		if (m_owner->checkEvent(&event))
			m_owner->executeEvent(&event);	
	}
}

void TTSComponent::resetPreviousViseme()
{
	if (m_prevViseme != 0 && m_visemeBlendFacPrev != 0)
	{
		//printf("Viseme not completely blended out, value: %.3f!\n", m_visemeBlendFacPrev);
		m_visemeBlendFacPrev = 0;
		updateVisemes();
	}
}

void TTSComponent::sapiEvent(WPARAM wParam, LPARAM lParam)
{
	TTSComponent* obj = (TTSComponent*) wParam;
	CSpEvent e;  

	while( e.GetFrom( obj->m_pVoice ) == S_OK )
	{		
		switch( e.eEventId )
		{
		case SPEI_VISEME:
			{
				obj->resetPreviousViseme(); // TODO: sending events from a different thread might crash the app
				obj->m_prevViseme = obj->m_curViseme;
				obj->m_curViseme = e.Viseme();
				obj->m_visemeBlendFacPrev = obj->m_visemeBlendFac;
				obj->m_visemeBlendFac = 0.1f;
				obj->m_visemeChanged = true;
				// Update volume every viseme
				if (obj->m_useDistanceModel)
					obj->calcVolumeFromDistance();
				break;
			}
		case SPEI_TTS_BOOKMARK:
			{
				const WCHAR * name = e.BookmarkName();
				char * value = new char[1024];
				sprintf_s(value, 1024, "%ls", name);
				// Send event
				GameEvent event(GameEvent::SP_BOOKMARK, &GameEventData(value), obj);
				if (obj->m_owner->checkEvent(&event))
					obj->m_owner->executeEvent(&event);
				delete[] value;
				break;
			}

		case SPEI_END_INPUT_STREAM:
			{
				char * sentence = new char[1024];
				sprintf_s(sentence, 1024, "%ls", obj->m_currentSentence.c_str());
				printf("Speaking now stopped: %s\n", sentence);
				// Send event
				GameEvent event(GameEvent::E_SPEAKING_STOPPED, &GameEventData(sentence), obj);
				if (obj->m_owner->checkEvent(&event))
					obj->m_owner->executeEvent(&event);			
				obj->m_isSpeaking = false;
				obj->m_visemeChanged = true;
				obj->m_visemeBlendFacPrev = 0;
				obj->m_visemeBlendFac = 0;
				delete[] sentence;
				break;
			}
		case SPEI_START_INPUT_STREAM:
			{
				char * sentence = new char[1024];
				sprintf_s(sentence, 1024, "%ls", obj->m_currentSentence.c_str());
				// Send event
				GameEvent event(GameEvent::E_SPEAKING_STARTED, &GameEventData(sentence), obj);
				if (obj->m_owner->checkEvent(&event))
					obj->m_owner->executeEvent(&event);
				delete[] sentence;
				break;
			}		
		case SPEI_WORD_BOUNDARY:
			{
				ULONG start, end;
				start = e.InputWordPos();
				end = e.InputWordLen();
				if (start < obj->m_currentSentence.size())
				{
					wstring wstr(obj->m_currentSentence.substr(start, end));
					char * word = new char[1024];
					sprintf_s(word, 1024, "%ls", wstr.c_str());
					// Send event
					GameEvent event(GameEvent::SP_SPOKEN_WORD, &GameEventData(word), obj);
					if (obj->m_owner->checkEvent(&event))
						obj->m_owner->executeEvent(&event);
					delete[] word;
				}
#ifdef PRINT_INFO
				if (start < obj->m_currentSentence.size())
					std::wcout << GameEngine::timeStamp()-obj->m_startSpeaking << ": " << obj->m_currentSentence.substr(start, end) << std::endl;
#endif

				break;
			}
		
		}
	}
}

bool TTSComponent::isSpeaking()
{
	return m_isSpeaking;
}

void TTSComponent::calcVolumeFromDistance()
{
	// Update distance
	m_owner->executeEvent(m_getDistanceEvent);
	// Calculate and set volume (between 0 and 100) by a simple distance model
	m_pVoice->SetVolume((unsigned short) minf(100.0f, (1000.0f / (0.00001f + m_rollOff * m_dist)) + 0.5f));
	//m_pVoice->SetVolume(maxf(0.0f, (100.0f - 20.0f * log10(1.0f + m_dist))));
}

void TTSComponent::updateVisemes()
{
	if (m_FACSmapping)
	{
		// Morphtarget should be set instantly (duration = 0), else there is an additional morphtarget animation created every frame
		MorphTargetAnimation morphTargetAnimData( visemeMapping[m_curViseme], m_visemeBlendFac, 0 );
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

	if (m_visemeBlendFacPrev == 0)
	{
		// Previous viseme has been faded out
		m_prevViseme = 0;
	}
}

void TTSComponent::run()
{
	// update visemes
	if(m_isSpeaking)
	{		
		// Calculate interpolation

		// Blend in at a specified speed as we don't know any duration
		// TODO: use different speeds for each viseme or make it configurable?
		const float speed = 4.0f; // --> blend current in from 0 to 1 in 250 ms, blend previous out form 1 to 0 in 125 ms
		float timeStep = GameEngine::timeStamp() - m_lastTimeStamp;

		if (m_visemeBlendFac < 1.0f)
		{
			// blend current viseme in
			m_visemeBlendFac +=  speed * timeStep;
			// blend previous viseme out, double speed
			m_visemeBlendFacPrev -=  2.0f * speed * timeStep;
			m_visemeBlendFac = clamp(m_visemeBlendFac, 0, 1.0f);
			m_visemeBlendFacPrev = clamp(m_visemeBlendFacPrev, 0, 1.0f);
			m_visemeChanged = true;
		}

		// Old version: Calculate interpolation using average duration
		//float step = (1.0f / GameEngine::FPS() * 1000) / (avgDuration[m_curViseme]) ;
		//m_visemeBlendFac += step;
		//m_visemeBlendFacPrev -= step;
	}

	m_lastTimeStamp = GameEngine::timeStamp();
}