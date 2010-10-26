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
#include "Config.h"
#include <string.h>
#include <XMLParser/utXMLParser.h>

int Config::m_paramI[IK_NumParamI];
float Config::m_paramF[IK_NumParamF];

//DEFAULT VALUES DEFINITION
void Config::useDefault()
{
	//enum ParamS

	//enum ParamI
	//setParamI(IK_Param::UseDofr_I, 1);
	// Change default to no restrictions
	setParamI(IK_Param::UseDofr_I, 0);
	
	setParamI(IK_Param::UseIkmo_I, 0);
	setParamI(IK_Param::UseZLock_I, 1);
	setParamI(IK_Param::CCDMaxIterations_I, 100);
	setParamI(IK_Param::CCDTwistJointManipulation_I, 1);
	setParamI(IK_Param::NumAnimFrames_I, 512);

	//enum ParamF
	setParamF(IK_Param::CCDMaxDistError_F, 0.1f);
	setParamF(IK_Param::CCDRotJitterTolerance_F, 0.00001f);
	setParamF(IK_Param::H3DAVersion_F, 2);
	setParamF(IK_Param::H3DGVersion_F, 5);
	setParamF(IK_Param::DfltEyeRotX_F, 0);
	setParamF(IK_Param::DfltEyeRotY_F, 90);
	setParamF(IK_Param::DfltEyeRotZ_F, 0);
}

void Config::loadFromXml(const XMLNode& description)
{
	//enum ParamI
	setParamI(IK_Param::UseDofr_I, atoi(description.getAttribute("useDofr", "0")));
	setParamI(IK_Param::UseIkmo_I,  atoi(description.getAttribute("useIkmo", "0")));
	setParamI(IK_Param::UseZLock_I,  atoi(description.getAttribute("useZLock", "1")));
	setParamI(IK_Param::CCDMaxIterations_I,  atoi(description.getAttribute("cCDMaxIterations", "100")));
	setParamI(IK_Param::CCDTwistJointManipulation_I,  atoi(description.getAttribute("cCDTwistJointManipulation", "1")));
	setParamI(IK_Param::NumAnimFrames_I,  atoi(description.getAttribute("numAnimFrames", "512")));

	//enum ParamF
	setParamF(IK_Param::CCDMaxDistError_F,  (float) atof(description.getAttribute("cCDMaxDistError", "0.1f")));
	setParamF(IK_Param::CCDRotJitterTolerance_F, (float) atof(description.getAttribute("cCDRotJitterTolerance", "0.00001f")));
	setParamF(IK_Param::H3DAVersion_F, (float) atof(description.getAttribute("h3DAVersion", "2")));
	setParamF(IK_Param::H3DGVersion_F, (float) atof(description.getAttribute("h3DGVersion", "5")));
	setParamF(IK_Param::DfltEyeRotX_F, (float) atof(description.getAttribute("dfltEyeRotX", "0")));
	setParamF(IK_Param::DfltEyeRotY_F, (float) atof(description.getAttribute("dfltEyeRotY", "90")));
	setParamF(IK_Param::DfltEyeRotZ_F, (float) atof(description.getAttribute("dfltEyeRotZ", "0")));
}

int Config::getParamI(IK_Param::List p)
{	
	int index = p;
	if(index >= IK_NumParamI || index < 0) //check array bounding
		return -1;

	return m_paramI[index]; 
}

void Config::setParamI(IK_Param::List p, int value)
{	
	int index = p;
	if(index >= IK_NumParamI || index < 0) //check array bounding
		return;

	m_paramI[index] = value;
}

float Config::getParamF(IK_Param::List p)
{	
	int index = p - IK_NumParamI;
	if(index >= IK_NumParamF || index < 0) //check array bounding
		return -1;

	return m_paramF[index]; 
}

void Config::setParamF(IK_Param::List p, float value)
{	
	int index = p - IK_NumParamI;
	if(index >= IK_NumParamF || index < 0) //check array bounding
		return;

	m_paramF[index] = value;
}

