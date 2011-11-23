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
// GameEngine Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2008 Nikolaus Bee
// 
// ****************************************************************************************
#include "MorphtargetAnimComponent.h"
#include "MorphtargetAnimManager.h"

#include "GameEngine_Animations.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameEngine.h>

#include <XMLParser/utXMLParser.h>

using namespace std;

//struct MorphTargetAnimationStruct {
//	unsigned int ownerID; //somehow all Entities use the same morphTargetAnimations...
//	string name;
//	float fromWeight;
//	float toWeight;
//	float startTime;
//	float endTime;
//	MorphTargetAnimationStruct ( unsigned int _ownerID, string _name, float _fromWeight, float _toWeight, float _startTime, float _endTime )
//		: ownerID(_ownerID), name(_name), fromWeight(_fromWeight), toWeight(_toWeight), startTime(_startTime), endTime(_endTime) { }
//};

GameComponent* MorphtargetAnimComponent::createComponent( GameEntity* owner )
{
	return new MorphtargetAnimComponent( owner );
}

MorphtargetAnimComponent::MorphtargetAnimComponent(GameEntity *owner) : GameComponent(owner, "MorphtargetAnimComponent")
{
	//listen for morph target animations
	owner->addListener(GameEvent::E_MORPH_TARGET_ANIM, this);

	MorphtargetAnimManager::instance()->addObject(this);
}

MorphtargetAnimComponent::~MorphtargetAnimComponent()
{
	MorphtargetAnimManager::instance()->removeObject(this);
}


bool MorphtargetAnimComponent::checkEvent(GameEvent *event)
{
	return true;
}


void MorphtargetAnimComponent::executeEvent(GameEvent *event)
{
	switch(event->id())
	{
	case GameEvent::E_MORPH_TARGET_ANIM:
		{
			const MorphTargetAnimation* mtAnim = static_cast<const MorphTargetAnimation*>( event->data() );
			string name( mtAnim->Name );
			
			//MorphTargetAnimationStruct mt( m_owner->worldId(), name, m_currentMorphtargetWeights[name], mtAnim->ToWeight, GameEngine::timeStamp(), GameEngine::timeStamp() + mtAnim->Duration );
			MorphTargetAnimationStruct mt( name, m_currentMorphtargetWeights[name], mtAnim->ToWeight, GameEngine::timeStamp(), GameEngine::timeStamp() + mtAnim->Duration );
			morphTargetAnimations.push_back( mt );
		}
		break;
	}
}

void MorphtargetAnimComponent::loadFromXml(const XMLNode* description)
{
}

void MorphtargetAnimComponent::update(float timeStamp)
{
	for ( unsigned int i=0; i < morphTargetAnimations.size(); ++i )
	{
		//if (m_owner->worldId() != morphTargetAnimations[i].ownerID) continue; //somehow all Entities use the same morphTargetAnimations...
		
		if ( GameEngine::timeStamp() < morphTargetAnimations[i].endTime )
		{
			// TODO: Simplify: start time not necessary?
			float weight = ( ( morphTargetAnimations[i].toWeight - morphTargetAnimations[i].fromWeight )
				/ ( morphTargetAnimations[i].endTime - morphTargetAnimations[i].startTime )
				* ( GameEngine::timeStamp() - morphTargetAnimations[i].startTime ) + morphTargetAnimations[i].fromWeight );

			m_currentMorphtargetWeights[morphTargetAnimations[i].name] = weight;

			MorphTarget morphTargetData( morphTargetAnimations[i].name.c_str(), weight );
			GameEvent event(GameEvent::E_MORPH_TARGET, &morphTargetData, this);
			if (m_owner->checkEvent(&event)) m_owner->executeEvent(&event);
		}
		else
		{
			m_currentMorphtargetWeights[morphTargetAnimations[i].name] = morphTargetAnimations[i].toWeight;
			
			MorphTarget morphTargetData( morphTargetAnimations[i].name.c_str(), morphTargetAnimations[i].toWeight );
			GameEvent event(GameEvent::E_MORPH_TARGET, &morphTargetData, this);
			if (m_owner->checkEvent(&event)) m_owner->executeEvent(&event);
			morphTargetAnimations.erase( morphTargetAnimations.begin() + i );
			--i;
		}
	}
}