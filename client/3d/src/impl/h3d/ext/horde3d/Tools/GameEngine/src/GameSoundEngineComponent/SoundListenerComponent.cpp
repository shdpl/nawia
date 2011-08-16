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
#include "SoundListenerComponent.h"

#include "SoundComponent.h"
#include "SoundManager.h"

#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEntity.h>
#include <GameEngine/utMath.h>

#include <XMLParser/utXMLParser.h>

GameComponent* SoundListenerComponent::createComponent( GameEntity* owner )
{
	return new SoundListenerComponent( owner );
}

SoundListenerComponent::SoundListenerComponent(GameEntity *owner) : GameComponent(owner, "SoundListener"), m_lastTimeStamp(0),
m_gain(1.0f), m_initialGain(1.0f)
{
	owner->addListener(GameEvent::E_SET_ENABLED, this);
	owner->addListener(GameEvent::E_SET_SOUND_GAIN, this);	
	owner->addListener(GameEvent::E_SET_TRANSFORMATION, this);
	owner->addListener(GameEvent::E_SET_TRANSLATION, this);

	// Init Orientation of the CAM (Listener). (first 3 elements are "at", second 3 are "up" (only 1,0,-1 allowed))
	m_listenerOri[0] = 0.0;
	m_listenerOri[1] = 0.0;
	m_listenerOri[2] = -1.0;
	m_listenerOri[3] = 0.0;
	m_listenerOri[4] = 1.0;
	m_listenerOri[5] = 0.0;

	if( SoundManager::instance()->activeListener() == 0x0 )
		SoundManager::instance()->setActiveListener(this);
}

SoundListenerComponent::~SoundListenerComponent()
{
	if( SoundManager::instance()->activeListener() == this )
		SoundManager::instance()->setActiveListener( 0x0 );
}

void SoundListenerComponent::executeEvent(GameEvent *event)
{
	switch(event->id())
	{
	case GameEvent::E_SET_ENABLED:
		setEnabled(*static_cast<const bool*>(event->data()));
		break;
	case GameEvent::E_SET_SOUND_GAIN:
		m_initialGain = m_gain = (*static_cast<const float*>(event->data()));		
		break;
	case GameEvent::E_SET_TRANSFORMATION:
		{
			const float* absTrans = static_cast<const float*>(event->data());
			Vec3f t,r,s;
			Matrix4f(absTrans).decompose(t, r, s);
			setListenerRot(r.x, r.y, r.z);
			m_listenerPos[0] = absTrans[12]; 
			m_listenerPos[1] = absTrans[13]; 
			m_listenerPos[2] = absTrans[14];
		}
		break;
	case GameEvent::E_SET_TRANSLATION:
		{
			Vec3f* pos = static_cast<Vec3f*>(event->data());
			m_listenerPos[0] = pos->x;
			m_listenerPos[1] = pos->y;
			m_listenerPos[2] = pos->z;
		}
		break;
	}
}

void SoundListenerComponent::loadFromXml(const XMLNode* description)
{
	Matrix4f trans;
	m_owner->executeEvent(&GameEvent(GameEvent::E_TRANSFORMATION, &GameEventData( (float*) trans.x, 16 ), this));
	m_listenerPos[0] = m_tx = trans.x[12];
	m_listenerPos[1] = m_ty = trans.x[13];
	m_listenerPos[2] = m_tz = trans.x[14];
	m_lastTimeStamp = GameEngine::timeStamp();

	setEnabled(
		_stricmp(description->getAttribute("active", "true"),"true")==0 || 
		_stricmp(description->getAttribute("active", "1"),"1")==0 );
	m_initialGain = m_gain = (static_cast<float>(atof(description->getAttribute("gain", "0.5"))));
}

void SoundListenerComponent::update()
{
	float deltaT = 1.0f / (GameEngine::timeStamp() - m_lastTimeStamp);
	m_listenerVel.x = (m_listenerPos[0] - m_tx) * deltaT;
	m_listenerVel.y = (m_listenerPos[1] - m_ty) * deltaT;
	m_listenerVel.z = (m_listenerPos[2]- m_tz) * deltaT;
	m_tx = m_listenerPos[0]; m_ty = m_listenerPos[1]; m_tz = m_listenerPos[2];
	m_lastTimeStamp = GameEngine::timeStamp();
}

void SoundListenerComponent::setEnabled(bool enabled)
{
	if( enabled )
	{
		SoundManager::instance()->setActiveListener( this );
		m_gain = m_initialGain;
	}
	else
	{
		if( m_gain != SoundComponent::OFF )
			m_initialGain = m_gain;
		m_gain = SoundComponent::OFF;
		if( SoundManager::instance()->activeListener() == this )
			SoundManager::instance()->setActiveListener( 0x0 );
	}
}

void SoundListenerComponent::setListenerRot(const float& x, const float& y, const float& z)
{
	const float cosx = cosf(x);
	const float sinx = sinf(x);
	const float cosy = cosf(y);
	const float siny = sinf(y);
	const float cosz = cosf(z);
	const float sinz = sinf(z);

	// Transform 0 0 -1 (At-Vector) with current rotation
	m_listenerOri[0] = - siny*cosx;
	m_listenerOri[1] = (sinx);
	m_listenerOri[2] = - (cosx * cosy);
	// Transform 0 1 0 (Up-Vector) with current rotation
	m_listenerOri[3] = - (cosy*sinz+siny*sinx*cosz);
	m_listenerOri[4] = (cosx*cosz);
	m_listenerOri[5] = (siny*sinz+cosy*sinx*cosz);
}