// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2010 Ionut Damian
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
// GameEngine IK Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************
#ifndef IK_ANIM_H_
#define IK_ANIM_H_

#include "CCD.h"

/**
 * IK Animation
 * animates an IK result using keyframe animation of the two positions (before and after solving the IK)
 *
 * @author Ionut Damian
 */
class IKAnim
{
public:
	IKAnim(Joint* endEffector, Joint* chainEnd, Vec3f target);
	///starts the animation
	int play(unsigned int model_h3d, int stage, float weight, float speed);

	///updates the local animation resource
	void update();
	const char* getName();
	int getResource();

private:
	///creates a horde3d animation resource using the data provided in the frame_transf matrices
	bool createAnimation(Matrix4f ***frame_transf);

	///the ccd instance used to solve the IK
	CCD m_ccd;
	///result of the ccd execution
	IK_CCDResult::List m_ccdResult;
	///the ik chain
	std::vector<Joint*>* m_chain;

	///flag for animation activity
	bool m_active;
	///horde3d animation resource
	H3DRes m_resource;
	///animation name
	char m_name[16];
	///horde3d model node id
	unsigned int m_model;
	///number of animation frames, read from IK_Param::NumAnimFrames_I
	unsigned int m_numFrames;
	///speed of the animation (default 30 (fps))
	float m_animSpeed;
	///animation weight
	float m_weight; 	
	///horde3d animation stage
	int m_stage;
	///current frame of the local animation
	float m_frame;
};

#endif