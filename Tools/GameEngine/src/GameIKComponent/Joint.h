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
#ifndef IK_JOINT_H_
#define IK_JOINT_H_

#include "DOFRestrictions.h"

#include "Horde3D/Horde3D.h"
#include "GameEngine/utmath.h"
#include <Horde3D/Horde3DUtils.h>

#include <map>

/**
 * Describes one joint in a model
 * Class is also a container and manager for all known joints, 
 * use getInstance() to retreive the pointer to a joint
 *
 * @author Ionut Damian
 */
class Joint
{
private:
	//** private container elements
	///storage map for all known joints
	static std::map<H3DNode, Joint*> m_joints;
	static Joint* find(H3DNode id);
	
	//** private instance elements
	///name of the joint
	char m_name[32];
	///Horde ID of the joint
	H3DNode m_horde_id;
	///DOFR of the joint
	DOFRestrictions m_dofr;

	///the absolute (world) transformation matrix of this joint
	Matrix4f m_transf_abs;
	///the relative (local) transformation matrix of this joint
	Matrix4f m_transf_rel;

	///constructor 1
	Joint(H3DNode model, const char* name);	
	///constructor 2
	Joint(H3DNode id);

public:
	//** public container elements
	///returns a pointer to the requested joint
	static Joint* getInstance(H3DNode model, const char* name);
	///returns a pointer to the requested joint
	static Joint* getInstance(H3DNode id);
	static void updateAll();
	static void deleteAll();

	//** public instance elements
	///update dynamic values of the joint (transformation matrices, ...)
	void update();

	void setDOFR(DOFRestrictions::DefaultValues dofr_type);
	void setDOFR(float minX, float maxX, float minY, float maxY, float minZ, float maxZ, float damp);
	void setDOFR(XMLNode* ikXmlNode);
	void setDOFR(DOFRestrictions* dofr);

	///get translation in joint's coordinate system (relative)
	Vec3f getTranslation();
	///get rotation in joint's coordinate system (relative)
	Vec3f getRotation();
	///get scale in joint's coordinate system (relative)
	Vec3f getScale();
	///get transformation matrix in joint's coordinate system (relative)
	Matrix4f* getRelTransf();

	///get translation in absoulte coordinate system (world cs)
	Vec3f getAbsTranslation();
	///get roatation in absoulte coordinate system (world cs)
	Vec3f getAbsRotation();
	///get scale in absoulte coordinate system (world cs)
	Vec3f getAbsScale();
	///get transformation matrix in absoulte coordinate system (world cs)
	Matrix4f* getAbsTransf();

	///returns the parent of the joint as defined in the scenegraph
	Joint* getParent();
	///returns the child of this joint with index i, as defined in the scenegraph
	Joint* getChild(int i);

	//getter
	H3DNode getHordeID();
	const char* getName();
	DOFRestrictions* getDOFR();
};

#endif