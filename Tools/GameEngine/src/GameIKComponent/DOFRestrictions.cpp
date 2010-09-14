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
#include "DOFRestrictions.h"

//DEFAULT VALUES DEFINITION
void DOFRestrictions::useDefault(DefaultValues dofr_type, bool weak)
{
	m_weak = weak;
	switch(dofr_type)
	{
	case FULL_FREEDOM:
		maxX = 360; minX = -360; maxY = 360; minY = -360; maxZ = 360; minZ = -360; damp = 30;
		break;
	case STANDARD_JOINT:
		maxX = 360; minX = -360; maxY = 360; minY = -360; maxZ = 360; minZ = -360; damp = 30;
		break;
	case LEFT_EYE:
		maxX = 0; minX = 0; maxY = 120; minY = 60; maxZ = 45; minZ = -45; damp = 30;
		break;
	case RIGHT_EYE:
		maxX = 0; minX = 0; maxY = 120; minY = 60; maxZ = 45; minZ = -45; damp = 30;
		break;
	case HEAD:
		maxX = 60; minX = -60; maxY = 17; minY = -17; maxZ = 30; minZ = -30; damp = 30;
		break;

	default:
		maxX = 360; minX = -360; maxY = 360; minY = -360; maxZ = 360; minZ = -360; damp = 30;
		break;
	}
}

DOFRestrictions::DOFRestrictions(float maxX, float minX, float maxY, float minY, float maxZ, float minZ, float damp) :
					maxX(maxX), minX(minX), maxY(maxY), minY(minY), maxZ(maxZ), minZ(minZ), damp(damp), m_weak(false)
{}

DOFRestrictions::DOFRestrictions(XMLNode *ikXmlNode) : m_weak(false)
{
	const char *attr;

	attr = ikXmlNode->getAttribute("maxX");
	if(attr == 0) attr = ikXmlNode->getAttribute("maxx");
	maxX = (attr == 0) ? 0 : (float)atof(attr);

	attr = ikXmlNode->getAttribute("minX");
	if(attr == 0) attr = ikXmlNode->getAttribute("minx");
	minX = (attr == 0) ? 0 : (float)atof(attr);

	attr = ikXmlNode->getAttribute("maxY");
	if(attr == 0) attr = ikXmlNode->getAttribute("maxy");
	maxY = (attr == 0) ? 0 : (float)atof(attr);

	attr = ikXmlNode->getAttribute("minY");
	if(attr == 0) attr = ikXmlNode->getAttribute("miny");
	minY = (attr == 0) ? 0 : (float)atof(attr);

	attr = ikXmlNode->getAttribute("maxZ");
	if(attr == 0) attr = ikXmlNode->getAttribute("maxz");
	maxZ = (attr == 0) ? 0 : (float)atof(attr);

	attr = ikXmlNode->getAttribute("minZ");
	if(attr == 0) attr = ikXmlNode->getAttribute("minz");
	minZ = (attr == 0) ? 0 : (float)atof(attr);

	attr = ikXmlNode->getAttribute("dampValue");
	if(attr == 0) attr = ikXmlNode->getAttribute("dampvalue");
	if(attr == 0) attr = ikXmlNode->getAttribute("damp");
	damp = (attr == 0) ? 0 : (float)atof(attr);
}

DOFRestrictions::DOFRestrictions(DefaultValues dofr_type)
{	
	useDefault(dofr_type, true);
}

DOFRestrictions::DOFRestrictions()
{
	useDefault(FULL_FREEDOM, true);
}

DOFRestrictions::DOFRestrictions( const DOFRestrictions& other ) :
maxX(other.maxX), minX(other.minX), maxY(other.maxY), minY(other.minY), 
maxZ(other.maxZ), minZ(other.minZ), damp(other.damp), m_weak(other.m_weak)
{}

DOFRestrictions DOFRestrictions::operator=( DOFRestrictions rhs ) 
{
	maxX = rhs.maxX;	minX = rhs.minX;
	maxY = rhs.maxY;	minY = rhs.minY;
	maxZ = rhs.maxZ;	minZ = rhs.minZ;
	damp = rhs.damp;	m_weak = rhs.m_weak;

	return *this;
}

bool DOFRestrictions::apply(Horde3D::Vec3f *rot, AxisLock *alock)
{
	bool clean = true;
	if(alock == 0)
		alock = &(AxisLock());
	
	//X axis
	if(alock->getXLock())
	{
		rot->x = alock->getXValue();
	}
	else
	{
		if(rot->x > maxX) 
		{
			rot->x = maxX;
			clean = false;
		}
		else if(rot->x < minX) 
		{
			rot->x = minX;
			clean = false;
		}
	}

	//Y axis
	if(alock->getYLock())
	{
		rot->y = alock->getYValue();
	}
	else
	{
		if(rot->y > maxY) 
		{
			rot->y = maxY;
			clean = false;
		}
		else if(rot->y < minY) 
		{
			rot->y = minY;
			clean = false;
		}
	}

	//Z axis
	//For realistic movement, the Z-axis of the neck should be locked
	if(alock->getZLock())
	{
		rot->z = alock->getZValue();
	}
	else
	{
		if(rot->z > maxZ) 
		{
			rot->z = maxZ;
			clean = false;
		}
		else if(rot->z < minZ) 
		{
			rot->z = minZ;
			clean = false;
		}
	}

	return clean;
}

float DOFRestrictions::getDampingValue()
{
	return damp;
}

bool DOFRestrictions::isWeak()
{
	return m_weak;
}

void DOFRestrictions::setWeak(bool value)
{
	m_weak = value;
}