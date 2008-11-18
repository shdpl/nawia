// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
// *************************************************************************************************



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

	/**
	 * Calculate velocity
	 */
	void update();

	void setEnabled(const bool enabled);
	void setGain(const float gain);
	void setLoop(const bool loop);
	void setPitch(const float x);
	void setRollOff(const float value);
	void setMaxDist(const float maxDist);
	void setRefDist(const float value);
	bool setSoundFile(const char* fileName);
	bool setPhonemesFile(const char* fileName);
	void addPhonem(const XMLNode* phonem);
	void startVisemes();
	void stopVisemes();
	void resetPreviousViseme();

	/**
	 * Includes the viseme timings
	 */
	struct Viseme
	{
		Viseme::Viseme(int start, int end, int index) : m_start(start), m_end(end), m_index(index)
		{
			m_duration = end-start;
		}
		int m_start, m_end, m_duration;
		int m_index;
	};
	
private:
	unsigned int		*m_buffer;
	unsigned int		m_sourceID;
	int					m_bufferCount;
	unsigned int		m_resourceID;
	bool				m_stream;
	/// Current position of sound 
	float				m_x, m_y, m_z;
	/// Temp position to calculate velocity
	float				m_tx, m_ty, m_tz;
	float				m_lastTimeStamp;
	float				m_velX, m_velY, m_velZ;
	float				m_pitch;
	float				m_maxDist;
	/// current gain of the sound file
	float				m_gain;
	/// initial gain which is used when returning from disabled state
	float				m_initialGain;
	float				m_rollOff;
	float				m_reference_dist;
	bool				m_loop;

	float				m_startTimestamp;
	std::vector<Viseme>	m_visemes;
	bool				m_visemeChanged;
	int					m_prevViseme, m_curViseme, m_visemeIndex;
	float				m_visemeBlendFac, m_visemeBlendFacPrev;
	bool				m_isSpeaking;

};


#endif