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
// GameEngine IK Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************
#ifndef IK_GAZE_H_
#define IK_GAZE_H_

#include "CCD.h"

/**
 * Gaze
 * computes and displays gazing actions
 *
 * @author Ionut Damian
 */
class Gaze : public CCD
{
public:
	///creates and initializes an instance of Gaze. DOES NOT set a target, use setTarget() for this
	Gaze(Joint* head, Joint* lefteye, Joint* righteye );
	~Gaze();
	///sets the target for this Gaze object
	void setTarget(Vec3f target);
	///sets the head pitch of this Gaze object
	void setHeadpitch(int head_pitch);

	/**
	 * executes the requested actions
	 * returns a GazeResult
	 */
	IK_GazeResult::List execute(bool move_head, bool move_leye, bool move_reye, bool simulate = false);

private:
	///head joint
	Joint* m_head;
	///left eye joint
	Joint* m_leye;
	///right eye joint
	Joint* m_reye;
	///extension (auxiliar) joint of the left eye
	Joint* m_aux_leye;
	///extension (auxiliar) joint of the right eye
	Joint* m_aux_reye;

	///horde3d resource of the extension (auxiliar) joints
	H3DRes m_gazeaux_res;

	int m_headpitch;
	bool m_targetIsSet;

	/**
	 * applies IK routine on m_head
	 * if simulate is true then the scene node will NOT be altered (there will be no visible effects)
	 * returns false if rotation needed constraining (because of dofrs), true otherwise
	 */
	bool moveHead(bool simulate = false);
	/**
	 * applies the IK routine on the chain formed by eye and aux_eye
	 * if simulate is true then the scene node will NOT be altered (there will be no visible effects)
	 * returns false if rotation needed constraining (because of dofrs), true otherwise
	 */
	bool moveEye(Joint *eye, Joint *aux_eye, bool simulate);

	///computes the rotation needed for the head ot face towards m_target
	bool computeHeadRotation(Vec3f *out_axis, float *out_angleRad);

	/**
	 * generates a model node based on a minimal geometry resource and attaches it to the joint eye
	 */
	Joint* createGazeAux(Joint* eye);
	/**
	 * loads a node from the given location and attaches it to the joint eye
	 */
	Joint* createGazeAux(Joint* eye, const char* filename, const char* filedir); //WARNING, requires external gazeaux file
	/**
	 * loads a minimal geometry resource
	 */
	bool loadGazeAuxRes(H3DRes res);
};

#endif