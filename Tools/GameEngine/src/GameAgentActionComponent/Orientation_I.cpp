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
#include "Orientation_I.h"
#include "AgentActionComponent.h"


void Orientation_I::execute_alphaAction(unsigned int myEntityID, unsigned int otherEntityID)
{
	/*turnTowards(myEntityID, otherEntityID);

	Vec3f pos, rot, scale;

	unsigned int agent_h3d = GameEngine::entitySceneGraphID(myEntityID);

	h3dGetNodeTransform( agent_h3d, &pos.x, &pos.y, &pos.z, &rot.x, &rot.y, &rot.z, &scale.x, &scale.y, &scale.z);
	h3dSetNodeTransform( agent_h3d, pos.x, pos.y, pos.z, rot.x, rot.y +90.0f, rot.z, scale.x, scale.y, scale.z);*/

	//save ids
	m_alpha_eid = (int)myEntityID;
	m_beta_eid = (int)otherEntityID;

	const float* relArray1;
	const float* absArray1;
	const float* relArray2;
	const float* absArray2;
	Vec3f pos1, rot1, scale1;
	Vec3f pos2, rot2, scale2;

	//get the horde3d handles of the entities
	unsigned int agent1_h3d = GameEngine::entitySceneGraphID(myEntityID);
	unsigned int agent2_h3d = GameEngine::entitySceneGraphID(otherEntityID);

	//get the relative transformation matrices
	h3dGetNodeTransMats( (H3DNode)agent1_h3d, &relArray1, &absArray1 );
	h3dGetNodeTransMats( (H3DNode)agent2_h3d, &relArray2, &absArray2 );

	//decompose them in translation, roation and scale vectors
	Matrix4f relMat1(relArray1);
	relMat1.decompose( pos1, rot1, scale1 );
	Matrix4f relMat2(relArray2);
	relMat2.decompose( pos2, rot2, scale2 );

	//find the final position relative to the second entity
	// -for this we rotate the entity's matrix around its own axis to get a direction
	relMat2.translate(-pos2.x, -pos2.y, -pos2.z);
	relMat2.rotate(0, -0.5f * Math::Pi, 0);
	relMat2.translate(pos2.x, -pos2.y, pos2.z);

	// -then we pick a position 10 units away in the given direction
	Vec3f t( relMat2 * Vec3f(0,0,10) );

	//now we apply the transformation to the first entity
	/*h3dSetNodeTransform( agent1_h3d, t.x, t.y, t.z, 
										radToDeg(rot2.x), radToDeg(rot2.y), radToDeg(rot2.z), 
										scale1.x, scale1.y, scale1.z);*/

	//rotation
	rot2.x = radToDeg(rot2.x);
	rot2.y = radToDeg(rot2.y);
	rot2.z = radToDeg(rot2.z);

	m_component->rotate(rot2, 1.0f);

	//move to position
	m_component->goToPosition(t, 1, true);


};


void Orientation_I::execute_betaAction(unsigned int myEntityID, unsigned int otherEntityID)
{
	/*turnTowards(myEntityID, otherEntityID);

	Vec3f pos, rot, scale;

	unsigned int agent_h3d = GameEngine::entitySceneGraphID(myEntityID);

	h3dGetNodeTransform( agent_h3d, &pos.x, &pos.y, &pos.z, &rot.x, &rot.y, &rot.z, &scale.x, &scale.y, &scale.z);
	h3dSetNodeTransform( agent_h3d, pos.x, pos.y, pos.z, rot.x, rot.y -90.0f, rot.z, scale.x, scale.y, scale.z);*/
	
	//save ids
	m_alpha_eid = (int)myEntityID;
	m_beta_eid = (int)otherEntityID;

};