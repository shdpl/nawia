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
#ifndef ORIENTATION_H_
#define ORIENTATION_H_

#include "Horde3D/Horde3D.h"
#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_Scenegraph.h"
#include "GameEngine/utmath.h"

using namespace Horde3D;

class AgentActionComponent;

class Orientation
{
public:
	enum type
	{
		UNKNOWN = 0,
		N,
		H,
		V,
		L,
		C,
		I
	};

	enum actionType
	{
		ALPHA,
		BETA
	};

	Orientation(AgentActionComponent* component): m_component(component), m_alpha_eid(-1), m_beta_eid(-1)
	{
		m_type = UNKNOWN;
	};

	void refresh();

	//all execute actions must be IDEMPOTENT!!!
	void execute(unsigned int alphaAgent_eid, unsigned int betaAgent_eid, actionType action_type);

	virtual void execute_alphaAction(unsigned int myEntityID, unsigned int otherEntityID) {};
	virtual void execute_betaAction(unsigned int myEntityID, unsigned int otherEntityID) {};

	Vec3f calculateVectorTo(unsigned int myEntityID, unsigned int otherEntityID);
	Vec3f calculateVectorTo(unsigned int myEntityID, Vec3f position);
	void turnTowards(unsigned int myEntityID, unsigned int otherEntityID);
	void turnTowards(unsigned int myEntityID, Vec3f position);
	Vec3f getEntityPosition(unsigned int entityID);
	Vec3f getEntityRotation(unsigned int entityID);

	//getter, setter
	int getAlphaAgent();
	int getBetaAgent();
	actionType getActionType();
	type getType();

	void setActionType(actionType atype);
	void setType(type type);

protected:
	type m_type;
	actionType m_actionType;
	AgentActionComponent* m_component;
	int m_alpha_eid, m_beta_eid;
};

#endif
