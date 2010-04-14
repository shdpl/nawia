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
#ifndef IK_DOFR_H_
#define IK_DOFR_H_

#include "Config.h"
#include <XmlParser/utXmlParser.h>
#include "GameEngine/utmath.h"
#include "AxisLock.h"

/**
 * Degree of freedom restrictions
 * describes the angular limits (in euler rotation) for a joint
 *
 * @author Ionut Damian
 */
class DOFRestrictions
{
public:
	///Default DOFR values
	enum DefaultValues
	{
		FULL_FREEDOM = 0,
		STANDARD_JOINT,
		LEFT_EYE,
		RIGHT_EYE,
		HEAD,
		SPINE,
		SHOULDER,
		ELBOW,
		HAND,
		FINGER,
		PELVIS,
		KNEE,
		FOOT
	};	

	/**
	 * Initializes all entries in DefaultValues with default values
	 * THE DEFAULT VALUES ARE STORED LOCALLY IN THIS FUNCITON
	 */
	void useDefault(DefaultValues dofr_type, bool weak = false);

	DOFRestrictions();
	///standard constructor
	DOFRestrictions(float maxX, float minX, float maxY, float minY, float maxZ, float minZ, float damp);
	///constructor reads the information from the given xml node
	///Exmaple for a valid xml node: <DOFR maxX="35" minX="-35" maxY="70" minY="-30" maxZ="50" minZ="-50" dampValue="30" />
	DOFRestrictions(XMLNode *ikXmlNode);	
	///constructor initializes the object with information related to the given DefaultValue
	DOFRestrictions(DefaultValues dofr_type);
	///copy constructor
	DOFRestrictions( const DOFRestrictions& other );

	//operators
	DOFRestrictions operator=( DOFRestrictions rhs );

	///applies the restrictions on the rotation vector "rot"
	bool apply(Vec3f* rot, AxisLock *alock);	

	float getDampingValue();

	///a dofr node is weak if it was set by the system as a placeholder for a "strong" dofr node
	bool isWeak();
	///a dofr node is weak if it was set by the system as a placeholder for a "strong" dofr node
	void setWeak(bool value);

private:
	float maxX, minX, maxY, minY, maxZ, minZ, damp;
	///a dofr node is weak if it was set by the system as a placeholder for a "strong" dofr node
	bool m_weak;
};

#endif