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
// GameEngine Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Felix Kistler
// 
// ****************************************************************************************
#include "MoveAnimComponent.h"

#include "MoveAnimManager.h"

#include "GameEngine_Animations.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameEngine.h>

#include <XMLParser/utXMLParser.h>

GameComponent* MoveAnimComponent::createComponent( GameEntity* owner )
{
	return new MoveAnimComponent( owner );
}

MoveAnimComponent::MoveAnimComponent(GameEntity *owner) : GameComponent(owner, "MoveAnimComponent"), 
m_oldPos(0,0,0), m_newPos(0, 0, 0), m_active(false), m_speed(1.0f), m_activeAnim(0), m_idleAnim(0)
{
	//get initial position
	float absTrans[16];
	GameEvent getTransformation(GameEvent::E_TRANSFORMATION, absTrans, this);	
	m_owner->executeEvent(&getTransformation);
	m_oldPos = m_newPos = Vec3f(absTrans[12], absTrans[13], absTrans[14]);	
	
	//listen for transformation changes
	owner->addListener(GameEvent::E_SET_TRANSFORMATION, this);

	MoveAnimManager::instance()->addObject(this);
}

MoveAnimComponent::~MoveAnimComponent()
{
	MoveAnimManager::instance()->removeObject(this);

	delete m_activeAnim;
	delete m_idleAnim;
}


bool MoveAnimComponent::checkEvent(GameEvent *event)
{
	return true;
}


void MoveAnimComponent::executeEvent(GameEvent *event)
{
	switch(event->id())
	{
	case GameEvent::E_SET_TRANSFORMATION:
		{
			const float* absTrans = static_cast<const float*>(event->data());
			m_newPos = Vec3f( absTrans[12], absTrans[13], absTrans[14]);
		}
		break;
	}
}

void MoveAnimComponent::loadFromXml(const XMLNode* description)
{
	m_speed = static_cast<float>(atof(description->getAttribute("speed", "1.0"))); 

	const char* activeName = description->getAttribute("activeAnimation", "");
	const char* idleName = description->getAttribute("idleAnimation", "");

	if( _stricmp(activeName, "") != 0 )
	{
		delete m_activeAnim;

		// Play animation additive (weight < 1) on stage 10 to not disturb other animations on this model
		// due to a bug in Horde3D currently we cannot play it additive with fastAnimation disabled
		m_activeAnim = static_cast<AnimationSetup*>(AnimationSetup(activeName, 10, 30, -1.0f, 1.0f, 0.0f).clone());		
	}

	if( _stricmp(idleName, "") != 0 )
	{
		delete m_idleAnim;
		// Play animation additive (weight < 1) on stage 10 to not disturb other animations on this model
		// due to a bug in Horde3D currently we cannot play it additive with fastAnimation disabled
		m_idleAnim = static_cast<AnimationSetup*>(AnimationSetup(idleName, 10, 30, -1.0f, 1.0f, 0.0f).clone());
	
		//initially start idle animation
		GameEvent walk(GameEvent::E_PLAY_ANIM, m_idleAnim, this);
		if (m_owner->checkEvent(&walk))
			m_owner->executeEvent(&walk);
	}
}

void MoveAnimComponent::update(float fps)
{
	//calculate translated distance and speed
	Vec3f dist = m_newPos - m_oldPos;

	float speed = m_speed * dist.length() * fps;
	
	//deactivate if too slow
	if( speed < 0.0005f ) activate(false);
	else activate(true);

	//update animation speed (only active animation)
	if( m_active && m_activeAnim )
	{
		GameEvent updateAnim(GameEvent::E_UPDATE_ANIM, &AnimationUpdate(m_activeAnim->JobID, GameEngineAnimParams::Speed, speed, 0), 0);
		if (m_owner->checkEvent(&updateAnim))
			m_owner->executeEvent(&updateAnim);
	}
	
	//update position
	m_oldPos = m_newPos;

}

void MoveAnimComponent::activate(bool active)
{
	//do nothing if no active animation is set
	//or if activation state is already set to active
	if( m_activeAnim == 0x0 || m_active == active ) return;

	//activate and play active animation
	if( active )
	{
		m_active = true;

		GameEvent walk(GameEvent::E_PLAY_ANIM, m_activeAnim, this);
		if (m_owner->checkEvent(&walk))
			m_owner->executeEvent(&walk);
	}

	//deactivate and play idle animation
	else
	{
		m_active = false;
		
		if(m_idleAnim != 0x0 )
		{
			GameEvent walk(GameEvent::E_PLAY_ANIM, m_idleAnim, this);
			if (m_owner->checkEvent(&walk))
				m_owner->executeEvent(&walk);
		}
	}
}