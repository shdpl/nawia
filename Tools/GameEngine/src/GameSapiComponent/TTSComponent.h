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
	 * @todo the 'SPEI_END_INPUT_STREAM' event is somehow delayed
	 * @return true if speaking
	 */ 
	bool isSpeaking();

private:

	bool setVoice(const char* voice);
	void speak(const char* string, int sentenceID = -1);
	void resetPreviousViseme();
	void setViseme( const std::string viseme, const float weight );

	void calcVolumeFromDistance();

	static void __stdcall sapiEvent(WPARAM wParam, LPARAM lParam);

	ISpVoice*		m_pVoice;
	bool			m_visemeChanged;
	int				m_prevViseme, m_curViseme;
	float			m_visemeBlendFac, m_visemeBlendFacPrev;

	/// To avoid restarting of the same speaking action, the current speak action will be stored as long as the associated action takes
	int				m_sentenceID;
	bool			m_isSpeaking;
	bool			m_FACSmapping;

	std::map<std::string, std::map<int, float>> m_FACSvisemes;
	std::string		m_curFACSViseme;
	float			m_curFACSWeight;

	// Sentences loaded from xml, stored by tag
	typedef std::map<std::string, std::vector<std::string>>::iterator SentenceIterator;
	std::map<std::string, std::vector<std::string>> m_sentences;

	// Listen to sound distance events for calculating the volume
	bool m_useDistanceModel;
	GameEvent* m_getDistanceEvent;
	float m_dist;
	float m_rollOff;

};


#endif