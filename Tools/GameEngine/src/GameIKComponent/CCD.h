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
#ifndef IK_CCD_H_
#define IK_CCD_H_

#include "Joint.h"
#include "Config.h"

#include <vector>

/**
 * Cyclic Coordinate Descent
 * a method fot solving the IK Problem
 *
 * @author Ionut Damian
 */
class CCD
{
public:
	CCD();
	///constructs and initializes an instance of CCD
	CCD(Joint* endEffector, Joint* chainEnd, Vec3f target);
	///executes the CCD algorithm
	///@return a return code of type IK_CCDResult
	IK_CCDResult::List execute();

	///builds and stores the IK Chain
	void buildIKChain();
	///returns the stored IK Chain
	std::vector<Joint*>* getIKChain();

protected:
	///the end effector of the IK chain
	Joint* m_endEffector;
	///the last Joint of the IK chain
	Joint* m_chainEnd;
	///the position (in world coordinates) at which the end effector of the IK chain should point to
	Vec3f m_target;

	std::vector<Joint*> m_ik_chain;
	///flag indicating the state of the IKMO algorithm
	bool m_ikmo_active;
	///joint iterator of the IKMO algorithm
	int m_ikmo_it;
	
	///CCD chain iteration counter
	int m_itCnt;

	///initializes the IKMO routine
	///IKMO (IK Movement Optimizer) accelerates the CCD algorithm by doing the biggest rotations in the first iteration
	///The speed boost (measured in iterations) varies between 0% and 50%
	Joint* initIKMO();
	///returns the dampened angle
	float dampAngle(float angle_rad, float dampValue_rad);

	///computes the rotation needed to make the joint j face the target
	bool computeRotation(Joint* j, Vec3f *out_axis, float *out_angleRad);

	/**
	 * applies the rotation on the joint (respects the joint's dofr)
	 * @param j pointer to the joint to be rotated
	 * @param axis rotation axis
	 * @param angle_rad rotation angle in radians
	 * @param axis_lock flag for locking an axis of a rotation (axis_lock = 3 (z-axis) is used mostly for head rotations to make them look more realistic)
	 * @param check_twistj flag indicating the presence of a twist joint in the kinematic chain. 
	 *						These are joints parallel to the hand or forearm and used by modellers for arm twisting movements
	 * @return false if rotation was constrained (because of dofrs) before application, true otherwise
	 */
	bool applyRotation(Joint* j, Vec3f axis, float angle_rad, AxisLock *axis_lock = 0, bool check_twistj = false);
	/**
	 * simulates the rotation on the joint (respects the joint's dofr), does NOT alter the SceneNode (there will be no visible effects)
	 * useful for testing DOFs
	 * @param j pointer to the joint to be rotated
	 * @param axis rotation axis
	 * @param angle_rad rotation angle in radians
	 * @param axis_lock flag for locking an axis of a rotation (axis_lock = 3 (z-axis) is used mostly for head rotations to make them look more realistic)
	 * @return false if rotation needs constraining (because of dofrs), true otherwise
	 */
	bool simulateRotation(Joint* j, Vec3f axis, float angle_rad, AxisLock *axis_lock = 0);

	///returns the quaternion formed by the given axis and angle
	Quaternion getQuat(Vec3f axis, float angle_rad);
	///returns the square ength of q
	float getQuatLength2(Quaternion *q);
	///normalizes q
	bool normalizeQuat(Quaternion *q);
	///finds possible parallel joints to the given joint, having one of the two names
	Joint* findParallelJoint(Joint* j, const char* name1, const char* name2);

	/**
	*Calculates the distance between 2 vectors
	*@param a the first vector
	*@param b the second vector
	*@return float distance between a and b
	*/
	float vecDistance(Vec3f &a, Vec3f &b);
};

#endif