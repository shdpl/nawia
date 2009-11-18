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

#ifndef SOUNDLISTENERCOMPONENT_H_
#define SOUNDLISTENERCOMPONENT_H_


#include <GameEngine/GameComponent.h>

/**
 * Component to create a Sound Listener provided by OpenAL
 */
class SoundListenerComponent : public GameComponent
{
	friend class SoundManager;
	friend class SoundComponent;

public:
	static GameComponent* createComponent( GameEntity* owner );

	SoundListenerComponent(GameEntity *owner);

	~SoundListenerComponent();

	bool checkEvent(GameEvent* event) { return true; }
	void executeEvent(GameEvent* event);

	void loadFromXml(const XMLNode* description);

	/**
	 * Toggles the activation state of the listener
	 */
	void setEnabled(const bool enabled);

	/**
	 * Sets the orientation of the listener
	 */
	void setListenerRot(const float& x, const float& y, const float& z);

	/**
	 * \brief Sets the listener gain. 
	 *
	 * Gain defines a scalar amplitude multiplier. As a listener attribute, it effectively applies 
	 * to all sources in the current context. The default 1.0 means that the sound is unattenuated
	 */
	void setGain(const float gain);

	/**
	 * Calculates velocity
	 */
	void update();
	
private:
	// Temporary position to calculate velocity
	float m_tx, m_ty, m_tz;

	// Position of the Listener.
	float				m_listenerPos[3];
	// Velocity of the Listener.
	float				m_listenerVel[3];
	// Orientation of the Listener. (first 3 elements are "at", second 3 are "up" (only 1,0,-1 allowed))
	float				m_listenerOri[6];

	// Stores the last update to calculate velocity settings
	float				m_lastTimeStamp;
	
	// Stores the overall gain for the listener
	float				m_gain;
	// Stores the gain while listener is turned off
	float				m_initialGain;

};


#endif
