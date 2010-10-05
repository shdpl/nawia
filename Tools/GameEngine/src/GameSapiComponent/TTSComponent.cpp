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

const float avgDuration[22] = 
{ 169, 86, 89, 84, 78, 60, 77, 69, 93, 90, 31, 81, 87, 100, 102, 122, 93, 85, 92, 90, 83, 80 };	

GameComponent* TTSComponent::createComponent( GameEntity* owner )
{
	return new TTSComponent( owner );
}

TTSComponent::TTSComponent(GameEntity *owner) : GameComponent(owner, "Sapi"), m_pVoice(0), 
m_curViseme(0), m_prevViseme(0), m_visemeChanged(false), m_visemeBlendFacPrev(1.0f),
m_isSpeaking(false), m_FACSmapping(false), m_useDistanceModel(false), m_dist(0), m_rollOff(1.0f)
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
		m_visemeBlendFacPrev = minf( minf( 1.0f, 2.0f - m_visemeBlendFac), m_visemeBlendFac );
		m_visemeBlendFac = 0;
		m_visemeChanged = false;
	}

	// Calculate interpolation
	float step = (1.0f / GameEngine::FPS() * 1000) / (avgDuration[m_curViseme]) ;
	m_visemeBlendFac += step;
	m_visemeBlendFacPrev -= step;

	if( m_prevViseme != 0 )
	{		
		// Fade out previous viseme
		if( !m_FACSmapping )
		{
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
		else
		{
			float val = minf( m_visemeBlendFacPrev, maxf( 1.0f - m_visemeBlendFac, 0.0f ) );
			if (val <= 0.0f )
				resetPreviousViseme();
			else
			{
				setViseme( visemeMapping[m_prevViseme], val );
			}
		}
	}

	if( m_curViseme != 0 )
	{
		if( !m_FACSmapping )
		{
			MorphTarget morphTargetData(visemeMapping[m_curViseme], minf( 1.0f, m_visemeBlendFac ) );
			if( m_visemeBlendFac > 1.0f )
				morphTargetData.Value = maxf( 2.0f - m_visemeBlendFac, 0.0f );
			//printf(" Curr vis: %s, %.4f\n", visemeMapping[m_curViseme], morphTargetData.Value);
			GameEvent event(GameEvent::E_MORPH_TARGET, &morphTargetData, this);
			if (m_owner->checkEvent(&event)) m_owner->executeEvent(&event);
		}
		else
		{
			float val = minf( 1.0f, m_visemeBlendFac );
			if( m_visemeBlendFac > 1.0f )
				val = maxf( 2.0f - m_visemeBlendFac, 0.0f );
			setViseme( visemeMapping[m_curViseme], val );
			if( m_visemeBlendFac > 2.0f ) 
				m_curViseme = 0;
		}
		if( m_visemeBlendFac > 2.0f ) 
			m_curViseme = 0;
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
	const char* voice = description->getAttribute("voice", "Microsoft Sam");
	if( !init() )
		GameLog::errorMessage("TTSComponent: Failed to initialize Microsoft Text-To-Speech Api");
	else if( !setVoice(voice) )
		GameLog::errorMessage("TTSComponent: Failed setting voice '%s'",voice);

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
		GameLog::errorMessage("Error initializing TTS: Voice not found:", voice);
		return false;
	}

	// Set voice
	hr = m_pVoice->SetVoice( pToken );
	pToken->Release();
	pEnum->Release();
	return hr == S_OK;	
}

void TTSComponent::speak(const char* text, int sentenceID /*=-1*/)
{
#ifdef PRINT_INFO
	printf("TTSComponent::speak(%s, %d)", text, sentenceID);
#endif
	if( !m_pVoice )
	{
		GameLog::errorMessage("No voice initialized");
	}
	else if (text == 0 || strlen(text) == 0)
	{
		m_isSpeaking = false;
	}
	else
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
			m_sentenceID = sentenceID;			
			m_isSpeaking = true;
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
					m_pVoice->Speak( unicodestr, SPF_ASYNC | SPF_PURGEBEFORESPEAK | SPF_IS_XML, NULL );
					m_startSpeaking = GameEngine::currentTimeStamp();
					m_sentenceID = sentenceID;
					m_isSpeaking = true;
				}
				::SysFreeString(unicodestr);
			}
		}
	}
	if (!m_isSpeaking)
	{
		GameEvent event(GameEvent::E_SPEAKING_STOPPED, &GameEventData(sentenceID), this);
		if (m_owner->checkEvent(&event))
			m_owner->executeEvent(&event);	
	}
}

void TTSComponent::resetPreviousViseme()
{
	if( m_prevViseme != 0 )
	{
		if( !m_FACSmapping )
		{
			MorphTarget morphTargetData(visemeMapping[m_prevViseme], 0);
			// Reset visemes
			GameEvent event(GameEvent::E_MORPH_TARGET, &morphTargetData, this);		
			if (m_owner->checkEvent(&event))
				m_owner->executeEvent(&event);
		}
		else
		{
			setViseme( visemeMapping[m_prevViseme], 0 );
		}
		m_prevViseme = 0;
		//printf("Reseted prev viseme\n");
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
				obj->m_visemeChanged = true;
				obj->resetPreviousViseme();
				obj->m_prevViseme = obj->m_curViseme;
				obj->m_curViseme = e.Viseme();
				// Update volume every viseme
				if (obj->m_useDistanceModel)
					obj->calcVolumeFromDistance();
				break;
			}
		case SPEI_TTS_BOOKMARK:
			{
				const WCHAR * name = e.BookmarkName();
				char * value = new char[255];
				sprintf_s(value, 255, "%ls", name);
				// Send event
				GameEvent event(GameEvent::SP_BOOKMARK, &GameEventData(value), obj);
				if (obj->m_owner->checkEvent(&event))
					obj->m_owner->executeEvent(&event);			
				break;
			}

		case SPEI_END_INPUT_STREAM:
			{
				char * sentence = new char[255];
				sprintf_s(sentence, 255, "%ls", obj->m_currentSentence.c_str());
				// Send event
				GameEvent event(GameEvent::E_SPEAKING_STOPPED, &GameEventData(sentence), obj);
				if (obj->m_owner->checkEvent(&event))
					obj->m_owner->executeEvent(&event);			
				//obj->m_sentenceID = -1;
				// TODO: Konsistenz für m_isSpeaking
				obj->m_isSpeaking = false;
				break;
			}
		case SPEI_START_INPUT_STREAM:
			{
				char * sentence = new char[255];
				sprintf_s(sentence, 255, "%ls", obj->m_currentSentence.c_str());
				// Send event
				GameEvent event(GameEvent::E_SPEAKING_STARTED, &GameEventData(sentence), obj);
				if (obj->m_owner->checkEvent(&event))
					obj->m_owner->executeEvent(&event);			
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
					char * word = new char[255];
					sprintf_s(word, 255, "%ls", wstr.c_str());
					// Send event
					GameEvent event(GameEvent::SP_SPOKEN_WORD, &GameEventData(word), obj);
					if (obj->m_owner->checkEvent(&event))
						obj->m_owner->executeEvent(&event);			
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

void TTSComponent::setViseme( const string viseme, const float weight )
{
	map<int, float> oldAUs = m_FACSvisemes[m_curFACSViseme];
	map<int, float>::iterator iterOldAUs;

	map<int, float> newAUs = m_FACSvisemes[viseme];
	map<int, float>::iterator iterNewAUs;

	// resetting old morph targets
	for( iterOldAUs = oldAUs.begin(); iterOldAUs != oldAUs.end(); iterOldAUs++ )
	{
		char buffer[10];
		sprintf_s( buffer, 10, "AU_%02i", (*iterOldAUs).first );
		string au( buffer );

		MorphTarget morphTargetData( au.c_str(), newAUs[(*iterOldAUs).first] * weight );
		GameEvent event( GameEvent::E_MORPH_TARGET, &morphTargetData, this );
		if( m_owner->checkEvent( &event ) )
		{
			m_owner->executeEvent( &event );
		}

		// Special treatment for AU27
		if( (*iterOldAUs).first == 27 )
		{
			MorphTarget morphTargetData( "bottom_au_27", newAUs[(*iterOldAUs).first] * weight );
			GameEvent event( GameEvent::E_MORPH_TARGET, &morphTargetData, this );
			if( m_owner->checkEvent( &event ) )
			{
				m_owner->executeEvent( &event );
			}

			MorphTarget morphTargetData2( "bottomgums_au_27", newAUs[(*iterOldAUs).first] * weight );
			GameEvent event2( GameEvent::E_MORPH_TARGET, &morphTargetData2, this );
			if( m_owner->checkEvent( &event2 ) )
			{
				m_owner->executeEvent( &event2 );
			}
		}
	}

	// setting new morph targets
	for( iterNewAUs = newAUs.begin(); iterNewAUs != newAUs.end(); iterNewAUs++ )
	{
		char buffer[10];
		sprintf_s( buffer, 10, "AU_%02i", (*iterNewAUs).first);
		string au( buffer );

		if( oldAUs[(*iterNewAUs).first] == 0 )
		{
			MorphTarget morphTargetData( au.c_str(), (*iterNewAUs).second * weight );
			GameEvent event( GameEvent::E_MORPH_TARGET, &morphTargetData, this );
			if ( m_owner->checkEvent( &event ) )
			{
				m_owner->executeEvent( &event );
			}

			// Special treatment for AU27
			if( (*iterNewAUs).first == 27 )
			{
				MorphTarget morphTargetData( "bottom_au_27", (*iterNewAUs).second * weight );
				GameEvent event( GameEvent::E_MORPH_TARGET, &morphTargetData, this );
				if( m_owner->checkEvent( &event ) )
				{
					m_owner->executeEvent( &event );
				}

				MorphTarget morphTargetData2( "bottomgums_au_27", (*iterNewAUs).second * weight );
				GameEvent event2( GameEvent::E_MORPH_TARGET, &morphTargetData2, this );
				if( m_owner->checkEvent( &event2 ) )
				{
					m_owner->executeEvent( &event2 );
				}
			}
		}
	}

	m_curFACSViseme = viseme;
	m_curFACSWeight = weight;
}

void TTSComponent::calcVolumeFromDistance()
{
	// Update distance
	m_owner->executeEvent(m_getDistanceEvent);
	// Calculate and set volume (between 0 and 100) by a simple distance model
	m_pVoice->SetVolume((unsigned short) minf(100.0f, (1000.0f / (0.00001f + m_rollOff * m_dist)) + 0.5f));
	//m_pVoice->SetVolume(maxf(0.0f, (100.0f - 20.0f * log10(1.0f + m_dist))));
}