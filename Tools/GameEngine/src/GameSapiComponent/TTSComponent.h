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
#ifndef TTSCOMPONENT_H_
#define TTSCOMPONENT_H_

#include <GameEngine/GameComponent.h>

#include <sapi.h>
#include <sphelper.h>

#include <string>
#include <map>

/**
 * Component to enable Text-To-Speech Support provided by the Microsoft Speech API
 */
class TTSComponent : public GameComponent
{

public:
	static GameComponent* createComponent( GameEntity* owner );

	TTSComponent(GameEntity* owner);
	~TTSComponent();

	/**
	 * Will be called by the TTS component manager in every gameloop iteration to update
	 * the visemes
	 */
	void update();
	void run();

	/**
	 * Initialises the Text-To-Speech Engine
	 */
	bool init();

	bool checkEvent(GameEvent* event) { return true; }
	void executeEvent(GameEvent* event);

	void loadFromXml(const XMLNode* description);
	
	/**
	 * \brief Checks if entitiy is speaking
	 * 
	 * @todo change to event based checking 
	 * @todo the 'SPEI_END_INPUT_STREAM' event is somehow delayed (not anymore?)
	 * @return true if speaking
	 */ 
	bool isSpeaking();

private:

	// Sapi functions
	bool setVoice(const char* voice);
	void speak(const char* string);
	// Viseme functions
	void resetPreviousViseme();
	void updateVisemes();
	// Calculates the volume dependent on the current distance to the listener if activated
	void calcVolumeFromDistance();

	// SAPI call back function
	static void __stdcall sapiEvent(WPARAM wParam, LPARAM lParam);

	// The SAPI voice
	ISpVoice*		m_pVoice;

	// Viseme info
	bool			m_visemeChanged;
	int				m_prevViseme, m_curViseme;
	float			m_visemeBlendFac, m_visemeBlendFacPrev;
	float			m_lastTimeStamp;
	bool			m_FACSmapping;
	std::map<std::string, std::map<int, float>> m_FACSvisemes;

	/// To avoid restarting of the same speaking action, the current speak action will be stored as long as the associated action takes
	bool			m_isSpeaking;
	std::wstring	m_currentSentence;
	float			m_startSpeaking;

	// Sentences loaded from xml, stored by tag
	typedef std::map<std::string, std::vector<std::wstring>>::iterator SentenceIterator;
	std::map<std::string, std::vector<std::wstring>> m_sentences;

	// Listen to sound distance events for calculating the volume
	// SoundComponent needed to get distance from active sound listener
	bool m_useDistanceModel;
	GameEvent* m_getDistanceEvent;
	float m_dist;
	float m_rollOff;

};


#endif