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
// ****************************************************************************************
//

// ****************************************************************************************
//
// GameEngine Agent Action Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************
#include "Orientation.h"
#include "GameEngine/GameEvent.h"

void Orientation::execute(unsigned int alphaAgent_eid, unsigned int betaAgent_eid, Orientation::actionType action_type)
{
	m_alpha_eid = alphaAgent_eid;
	m_beta_eid = betaAgent_eid;
	m_actionType = action_type;

	switch(m_actionType)
	{
		case ALPHA:
			//execute alpha action of the orientation, the other agents will then execute the beta action (reaction)
			execute_alphaAction(m_alpha_eid, m_beta_eid); //must be IDEMPOTENT!!!
			break;
		case BETA:
			//execute beta action of the orientation, the other agents have executed the alpha action
			execute_betaAction(m_alpha_eid, m_beta_eid); //must be IDEMPOTENT!!!
			break;
		default:
			break;
	}
}

void Orientation::refresh()
{
	switch(m_actionType)
	{
		case ALPHA:
			//execute alpha action of the orientation, the other agents will then execute the beta action (reaction)
			execute_alphaAction(m_alpha_eid, m_beta_eid); //must be IDEMPOTENT!!!
			break;
		case BETA:
			//execute beta action of the orientation, the other agents have executed the alpha action
			execute_betaAction(m_alpha_eid, m_beta_eid); //must be IDEMPOTENT!!!
			break;
		default:
			break;
	}
}

Vec3f Orientation::calculateVectorTo(unsigned int myEntityID, unsigned int otherEntityID)
{
	Vec3f otherPosition = getEntityPosition(otherEntityID);
	
	return calculateVectorTo(myEntityID, otherPosition);	
}

Vec3f Orientation::calculateVectorTo(unsigned int myEntityID, Vec3f position)
{
	Vec3f ownPosition = getEntityPosition(myEntityID);

	return position - ownPosition;
}

void Orientation::turnTowards(unsigned int myEntityID, unsigned int otherEntityID)
{
	Vec3f otherEntityPosition = getEntityPosition(otherEntityID);
	turnTowards(myEntityID, otherEntityPosition);

	//gaze at the target's head
	const float *absArray;
	h3dFindNodes( otherEntityID, "Bip01_Head", H3DNodeTypes::Joint );
	int head = h3dGetNodeFindResult(0);
	if(head > 0)
	{
		h3dGetNodeTransMats( head, 0, &absArray );
		Vec3f target = Matrix4f(absArray) * Vec3f(0,0,0);

		IKData data( target.x, target.y, target.z, true, true, true, 0 );
		GameEvent gaze(GameEvent::IK_GAZE, &data, 0 );
		GameEngine::sendEvent( myEntityID, &gaze );
	}
}

void Orientation::turnTowards(unsigned int myEntityID, Vec3f position)
{
	Vec3f direction = calculateVectorTo(myEntityID, position);
	direction.y = 0;

	float correction = 0.0f;
	
	Vec3f rotation = direction.toRotation();
	rotation.x = radToDeg(rotation.x);
	rotation.y = radToDeg(rotation.y) + 180.0f + correction;
	rotation.z = radToDeg(rotation.z);

	GameEvent rotate(GameEvent::E_SET_ROTATION,&rotation,0);
	GameEngine::sendEvent( myEntityID, &rotate );
}

Vec3f Orientation::getEntityPosition(unsigned int entityID)
{
	float x[16];
	GameEvent getTransformation(GameEvent::E_TRANSFORMATION, x, 0);
	GameEngine::sendEvent(entityID, &getTransformation);
	
	return Vec3f(x[12],x[13],x[14]);
};

Vec3f Orientation::getEntityRotation(unsigned int entityID)
{
	unsigned int hordeid = GameEngine::entitySceneGraphID(entityID);
	Vec3f r;

	h3dGetNodeTransform( hordeid, 0,0,0, &r.x, &r.y, &r.z, 0,0,0 );
	
	return r;
};

int Orientation::getAlphaAgent()
{
	return m_alpha_eid;
}

int Orientation::getBetaAgent()
{
	return m_beta_eid;
}

Orientation::type Orientation::getType()
{
	return m_type;
}

Orientation::actionType Orientation::getActionType()
{
	return m_actionType;
}

void Orientation::setActionType(Orientation::actionType atype)
{
	m_actionType = atype;
}

void Orientation::setType(Orientation::type type)
{
	m_type = type;
}