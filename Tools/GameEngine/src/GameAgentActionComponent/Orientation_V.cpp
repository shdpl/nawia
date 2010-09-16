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
#include "Orientation_V.h"
#include "AgentActionComponent.h"


void Orientation_V::execute_alphaAction(unsigned int myEntityID, unsigned int otherEntityID)
{
	/*turnTowards(myEntityID, otherEntityID);

	Vec3f pos, rot, scale;

	unsigned int agent_h3d = GameEngine::entitySceneGraphID(myEntityID);

	h3dGetNodeTransform( agent_h3d, &pos.x, &pos.y, &pos.z, &rot.x, &rot.y, &rot.z, &scale.x, &scale.y, &scale.z);
	h3dSetNodeTransform( agent_h3d, pos.x, pos.y, pos.z, rot.x, rot.y +20.0f, rot.z, scale.x, scale.y, scale.z);*/

	//save ids
	m_alpha_eid = (int)myEntityID;
	m_beta_eid = (int)otherEntityID;

	//turn towards the other agent
	Vec3f direction = calculateVectorTo(myEntityID, getEntityPosition(otherEntityID));
	direction.y = 0;
	
	Vec3f rotation = direction.toRotation();
	rotation.x = radToDeg(rotation.x);
	rotation.y = radToDeg(rotation.y) + 180.0f;
	rotation.z = radToDeg(rotation.z);

	//add deviation of orientation
	rotation.y += 20.0f;

	m_component->rotate(rotation);
};


void Orientation_V::execute_betaAction(unsigned int myEntityID, unsigned int otherEntityID)
{
	/*turnTowards(myEntityID, otherEntityID);

	Vec3f pos, rot, scale;

	unsigned int agent_h3d = GameEngine::entitySceneGraphID(myEntityID);

	h3dGetNodeTransform( agent_h3d, &pos.x, &pos.y, &pos.z, &rot.x, &rot.y, &rot.z, &scale.x, &scale.y, &scale.z);
	h3dSetNodeTransform( agent_h3d, pos.x, pos.y, pos.z, rot.x, rot.y -20.0f, rot.z, scale.x, scale.y, scale.z);*/
	
	//save ids
	m_alpha_eid = (int)myEntityID;
	m_beta_eid = (int)otherEntityID;

	//turn towards the other agent
	Vec3f direction = calculateVectorTo(myEntityID, getEntityPosition(otherEntityID));
	direction.y = 0;
	
	Vec3f rotation = direction.toRotation();
	rotation.x = radToDeg(rotation.x);
	rotation.y = radToDeg(rotation.y) + 180.0f;
	rotation.z = radToDeg(rotation.z);

	//add deviation of orientation
	rotation.y -= 20.0f;

	m_component->rotate(rotation);
};