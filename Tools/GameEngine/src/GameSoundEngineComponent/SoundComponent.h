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
#ifndef SOUNDCOMPONENT_H_
#define SOUNDCOMPONENT_H_

#include <GameEngine/GameComponent.h>

#include <vector>
#include <string>
#include <map>

struct Viseme;

/**
 * Component to enable 3D Sound provided by OpenAL
 */
class SoundComponent : public GameComponent
{
	friend class SoundManager;

public:
	static const float OFF;

	static GameComponent* createComponent( GameEntity* owner );

	SoundComponent(GameEntity *owner);

	~SoundComponent();

	bool checkEvent(GameEvent* event) { return true; }

	void executeEvent(GameEvent* event);

	void loadFromXml(const XMLNode* description);

	void update();
	void run();

	bool isPlaying();

	// Pause an already playing sound
	void pause();
	// Resumes a sound that was paused
	void resume();
	void rewind();

	void setEnabled(const bool enabled);
	void setGain(const float gain);
	void setLoop(const bool loop);
	void setPitch(const float x);
	void setOffset(const float offset);
	void setRollOff(const float value);
	void setMaxDist(const float maxDist);
	void setRefDist(const float value);
	bool setSoundFile(const char* fileName, bool forceNoStream = false);
	bool setSoundFromUserData(const char* data, int dataSize, int samplesPerSec, int bitsPerSample, int numChannels);
	// Add phonemes to our viseme container
	bool loadPhonemesFile(const char* fileName);
	inline float getDistanceToListener();
	
private:
	// Add the viseme that corresponds to the given phonem to a container
	void addPhonem(const XMLNode* phonem, std::vector<Viseme>* container);

	void startVisemes();
	void stopVisemes();
	//void resetPreviousViseme();
	void updateVisemes();

	unsigned int		*m_buffer;
	unsigned int		m_sourceID;
	int					m_bufferCount;
	unsigned int		m_resourceID;
	bool				m_stream;
	/// Current position of sound 
	Horde3D::Vec3f		m_pos;
	/// old position to calculate velocity
	Horde3D::Vec3f		m_oldPos;
	float				m_lastTimeStamp;
	Horde3D::Vec3f		m_vel;
	float				m_pitch;
	float				m_maxDist;
	/// current gain of the sound file
	float				m_gain;
	/// initial gain which is used when returning from disabled state
	float				m_initialGain;
	float				m_rollOff;
	float				m_reference_dist;
	bool				m_loop;
	// Offset in seconds at which the sound starts playing
	float				m_offset;

	// Viseme variables
	float				m_startTimestamp;
	std::vector<Viseme>	m_visemes;
	int					m_prevViseme, m_curViseme, m_visemeIndex;
	float				m_visemeBlendFac, m_visemeBlendFacPrev;
	bool				m_isSpeaking;
	bool				m_changedBlending;
	int					m_time;

	// True falls der Sound automatische gestoppt wurde (vom sound manager)
	bool				m_soundInterrupted;

	bool				m_FACSmapping;
	std::map<std::string, std::map<int, float>> m_FACSvisemes;

	// Soundfiles loaded from xml, stored by tag and with soundResourceID, phonemeResourceID
	typedef std::map<std::string, std::vector<std::pair<int, int>>>::iterator SoundFileIterator;
	std::map<std::string, std::vector<std::pair<int, int>>> m_taggedSoundFiles;

	float m_startTimeViseme;
};


#endif