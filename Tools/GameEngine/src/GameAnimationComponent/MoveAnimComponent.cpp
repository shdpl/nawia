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
	m_oldPos(0,0,0), m_newPos(0, 0, 0), m_moveAnim(0), m_moveBackAnim(0), m_moveLeftAnim(0), m_nextAnim(0),
	m_moveRightAnim(0),	m_speed(1.0f), m_activeAnim(0), m_idle(true), m_idleAnimCount(0), m_idleTime(0), m_randSeed(false)
{
	for( int i=0; i< 5; ++i )
		m_idleAnim[i] = 0x0;

	//get initial position
	float absTrans[16];
	GameEvent getTransformation(GameEvent::E_TRANSFORMATION, absTrans, this);	
	m_owner->executeEvent(&getTransformation);
	Vec3f s;
	Matrix4f(absTrans).decompose(m_newPos, m_rotation, s);
	m_oldPos;	
	
	//listen for transformation changes
	owner->addListener(GameEvent::E_SET_TRANSFORMATION, this);
	
	MoveAnimManager::instance()->addObject(this);
}

MoveAnimComponent::~MoveAnimComponent()
{
	MoveAnimManager::instance()->removeObject(this);

	delete m_moveBackAnim;
	delete m_moveLeftAnim;
	delete m_moveRightAnim;
	for( int i=0; i< m_idleAnimCount; ++i )
	{
		delete m_idleAnim[i];
		m_idleAnim[i]=0x0;
	}
	m_activeAnim = 0x0;
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
			Matrix4f absTrans = Matrix4f(static_cast<const float*>(event->data()));
			Vec3f s;
			absTrans.decompose(m_newPos, m_rotation, s);
		}
		break;
	}
}

void MoveAnimComponent::loadFromXml(const XMLNode* description)
{
	m_speed = static_cast<float>(atof(description->getAttribute("speed", "1.0"))); 

	const char* move = description->getAttribute("moveAnimation", "");
	const char* idle = description->getAttribute("idleAnimation", "");
	const char* idle2 = description->getAttribute("idleAnimation2", "");
	const char* idle3 = description->getAttribute("idleAnimation3", "");
	const char* idle4 = description->getAttribute("idleAnimation4", "");
	const char* idle5 = description->getAttribute("idleAnimation5", "");
	const char* moveBack = description->getAttribute("moveBackAnimation", "");
	const char* moveLeft = description->getAttribute("moveLeftAnimation", "");
	const char* moveRight = description->getAttribute("moveRightAnimation", "");


	if( _stricmp(move, "") != 0 )
	{
		delete m_moveAnim;

		// Play animation additive (weight < 1) on stage 10 to not disturb other animations on this model
		// due to a bug in Horde3D currently we cannot play it additive with fastAnimation disabled
		m_moveAnim = static_cast<AnimationSetup*>(AnimationSetup(move, 10, 30, -1.0f, 0.5f, 0.0f).clone());		
	}
	if( _stricmp(moveBack, "") != 0 )
	{
		delete m_moveBackAnim;
		m_moveBackAnim = static_cast<AnimationSetup*>(AnimationSetup(moveBack, 10, 30, -1.0f, 0.5f, 0.0f).clone());		
	}
	if( _stricmp(moveLeft, "") != 0 )
	{
		delete m_moveLeftAnim;
		m_moveLeftAnim = static_cast<AnimationSetup*>(AnimationSetup(moveLeft, 10, 30, -1.0f, 0.5f, 0.0f).clone());		
	}
	if( _stricmp(moveRight, "") != 0 )
	{
		delete m_moveRightAnim;
		m_moveRightAnim = static_cast<AnimationSetup*>(AnimationSetup(moveRight, 10, 30, -1.0f, 0.5f, 0.0f).clone());		
	}	
	
	m_idleAnimCount = 0;
	if( _stricmp(idle, "") != 0 )
	{
		delete m_idleAnim[m_idleAnimCount];
		// Play animation additive (weight < 1) on stage 10 to not disturb other animations on this model
		// due to a bug in Horde3D currently we cannot play it additive with fastAnimation disabled
		m_idleAnim[m_idleAnimCount] = static_cast<AnimationSetup*>(AnimationSetup(idle, 10, 30, -1.0f, 0.5f, 0.0f).clone());
	
		//initially start idle animation
		setAnim(m_idleAnim[m_idleAnimCount], true);
		m_idleAnimCount++;
	}
	if( _stricmp(idle2, "") != 0 )
	{
		delete m_idleAnim[m_idleAnimCount];
		m_idleAnim[m_idleAnimCount] = static_cast<AnimationSetup*>(AnimationSetup(idle2, 10, 30, -1.0f, 0.5f, 0.0f).clone());
		m_idleAnimCount++;
	}
	if( _stricmp(idle3, "") != 0 )
	{
		delete m_idleAnim[m_idleAnimCount];
		m_idleAnim[m_idleAnimCount] = static_cast<AnimationSetup*>(AnimationSetup(idle3, 10, 30, -1.0f, 0.5f, 0.0f).clone());
		m_idleAnimCount++;
	}
	if( _stricmp(idle4, "") != 0 )
	{
		delete m_idleAnim[m_idleAnimCount];
		m_idleAnim[m_idleAnimCount] = static_cast<AnimationSetup*>(AnimationSetup(idle4, 10, 30, -1.0f, 0.5f, 0.0f).clone());
		m_idleAnimCount++;
	}
	if( _stricmp(idle5, "") != 0 )
	{
		delete m_idleAnim[m_idleAnimCount];
		m_idleAnim[m_idleAnimCount] = static_cast<AnimationSetup*>(AnimationSetup(idle5, 10, 30, -1.0f, 0.5f, 0.0f).clone());
		m_idleAnimCount++;
	}
}

void MoveAnimComponent::update(float fps)
{
	//calculate translated distance and speed in x,z plane
	Vec3f dist = m_newPos - m_oldPos;
	dist.y = 0;
	float speed = m_speed * dist.length()* fps;
	static const float pi3rd = Math::Pi / 3;
	
	m_nextAnim = 0x0;

	// Object is moving
	if( speed >= 0.0005f )
	{
		
		// Direction in radiants = angle of walking direction - y-rotation of the object
		float direction = atan2( -dist.x, -dist.z ) - m_rotation.y;
		
		// Normalize direction angle to [-PI, +PI]
		// To get less if cases
		if( direction > Math::Pi ) 
			direction = direction - Math::TwoPi;
		if( direction < -Math::Pi )
			direction = Math::TwoPi + direction;

		// Find the right move animation to play by the moving direction
		// If the exact animation is not specified, play the one for forward moving 
		if( direction <= pi3rd && direction >= -pi3rd )
		{
			if( m_moveAnim != 0x0 )
				m_nextAnim = m_moveAnim;
		} else if ( direction >= 2*pi3rd || direction <= -2*pi3rd )
		{
			if( m_moveBackAnim != 0x0)
				m_nextAnim = m_moveBackAnim;
			else if( m_moveAnim != 0x0 ) m_nextAnim = m_moveAnim;
		} else if ( direction > pi3rd && direction < 2*pi3rd )
		{
			if( m_moveLeftAnim != 0x0)
				m_nextAnim = m_moveLeftAnim;
			else if( m_moveAnim != 0x0 ) m_nextAnim = m_moveAnim;
		} else if ( direction > -2*pi3rd && direction < -pi3rd)
		{
			if( m_moveRightAnim != 0x0)
				m_nextAnim = m_moveRightAnim;
			else if( m_moveAnim != 0x0 )m_nextAnim = m_moveAnim;
		}
	}

	// Play idle animation if too slow or no new Animation was specified
	if (  m_nextAnim == 0x0 && m_idleAnimCount > 0)
	{
		if( !m_idle || m_idleTime < 0 ||  m_nextAnim == 0x0 )
		{
			if(!m_randSeed)
			{
				srand( (unsigned int) (fps * 100000) );
				m_randSeed = true;
			}
			int i = rand() % m_idleAnimCount; 
			setAnim( m_idleAnim[i], true );
		}
		else m_idleTime -= 1.0f / fps;
	}
	else
	{
		m_idle = false;
		setAnim( m_nextAnim );
	}

	//update animation speed (only none idle animations)
	if( m_activeAnim != 0x0 && !m_idle)
	{
		GameEvent updateAnim(GameEvent::E_UPDATE_ANIM, &AnimationUpdate(m_activeAnim->JobID, GameEngineAnimParams::Speed, speed, 0), 0);
		if (m_owner->checkEvent(&updateAnim))
			m_owner->executeEvent(&updateAnim);
	}
	
	//update position
	m_oldPos = m_newPos;

}

void MoveAnimComponent::setAnim(AnimationSetup *anim, bool idle /*=false*/)
{
	//Do nothing if animation is already playing
	if( m_activeAnim == anim )
	{
		m_idle = idle;
		return;
	}

	//Stop last animation if still playing
	if( m_activeAnim != 0x0 )
	{
		GameEvent updateAnim(GameEvent::E_UPDATE_ANIM, &AnimationUpdate(m_activeAnim->JobID, GameEngineAnimParams::Duration, 0, 0), 0);
		if (m_owner->checkEvent(&updateAnim))
		{
			m_owner->executeEvent(&updateAnim);
			m_activeAnim = 0x0;
		}
	}

	//If new there is no new animation, we have finished
	if( anim == 0x0 ) return;

	//Play given animation
	GameEvent walk(GameEvent::E_PLAY_ANIM, anim, this);
	if (m_owner->checkEvent(&walk))
	{
		m_owner->executeEvent(&walk);
		m_activeAnim = anim;
		m_nextAnim = 0x0;
		m_idle = idle;

		//Calculate time for playing next random idle animation
		if( idle )
		{
			m_idleTime = GameEngine::getAnimLength( m_owner->worldId(), m_activeAnim->Animation );
			m_idleTime *= 1.0f + (rand() % 4);
		}

	}
}
