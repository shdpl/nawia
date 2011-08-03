
// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
//
// This file is part of the GameEngine of the University of Augsburg
//
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************

// ****************************************************************************************
//
// GameEngine Agent Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2011 Ionut Damian
// 
// ****************************************************************************************
#include "Config.h"
#include <string.h>
#include <XMLParser/utXMLParser.h>

#include "utils.h"

int Config::m_paramI[ Agent_Param::_EndParamI ];
float Config::m_paramF[ Agent_Param::_EndParamF - Agent_Param::_EndParamI -1 ];
char Config::m_paramS[ Agent_Param::_EndParamS - Agent_Param::_EndParamF -1 ][c_MaxSParamSize];

//DEFAULT VALUES DEFINITION
void Config::useDefault()
{
	//enum ParamI
	setParamI(Agent_Param::DfltMorphDuration_I,		30);
	setParamI(Agent_Param::DfltAnimReps_I,			0);
	setParamI(Agent_Param::MaxMsgSize_I,			1024);
	setParamI(Agent_Param::DfltHeadShakeReps_I,		2);

	//enum ParamF
	setParamF(Agent_Param::DfltAnimSpeed_F,			1);
	setParamF(Agent_Param::DfltAnimSE_F,			1);

	setParamF(Agent_Param::LocomotionSpeedMult_F,	0.9f);
	setParamF(Agent_Param::OrientationSpeedMult_F,	200.0f);
	setParamF(Agent_Param::LocomotionAnimSpeed_F,	1.0f);
	setParamF(Agent_Param::OrientationAnimSpeed_F,	1.0f);	
	setParamF(Agent_Param::DfltMovementSpeed_F,		1.0f);
	setParamF(Agent_Param::GazeSpeedMult_F,			30.0f);
	setParamF(Agent_Param::MaxGazeError_F,			0.1f);
	setParamF(Agent_Param::DfltGazeSpeed_F,			1);
	setParamF(Agent_Param::DfltGazeDuration_F,		10);
	setParamF(Agent_Param::FwdViewX_F,				0);
	setParamF(Agent_Param::FwdViewY_F,				0);
	setParamF(Agent_Param::FwdViewZ_F,				1);
	setParamF(Agent_Param::PSpaceWidth_F,			2);
	setParamF(Agent_Param::FormReposSpd_F,			0.5f);
	setParamF(Agent_Param::HcCurveAnchor_F,			0.9f);
	setParamF(Agent_Param::HcMaxStr_F,				10.0f);
	setParamF(Agent_Param::HcSoftness_F,			10.0f);
	setParamF(Agent_Param::DfltHeadShakeExt_F,		1.0f);
	setParamF(Agent_Param::DfltHeadShakeSpd_F,		0.2f);
	setParamF(Agent_Param::DfltHeadShakeDur_F,		0.2f);

	//enum ParamS	
	setParamS(Agent_Param::HeadName_S,				"Bip01_Head");
	setParamS(Agent_Param::SocketEntityName_S,		"camera");
	setParamS(Agent_Param::UpAxis_S,				"Y");
}

void Config::loadFromXml(const XMLNode& description)
{
	//enum ParamI
	setParamI(Agent_Param::DfltMorphDuration_I,		atoi(description.getAttribute("DfltMorphDuration_I", "30")));
	setParamI(Agent_Param::DfltAnimReps_I,			atoi(description.getAttribute("DfltAnimReps_I", "0")));
	setParamI(Agent_Param::MaxMsgSize_I,			atoi(description.getAttribute("MaxMsgSize_I", "1024")));
	setParamI(Agent_Param::DfltHeadShakeReps_I,		atoi(description.getAttribute("DfltHeadShakeReps_I", "2")));

	//enum ParamF
	setParamF(Agent_Param::DfltAnimSpeed_F,			(float)atof(description.getAttribute("DfltAnimSpeed_F", "1")));
	setParamF(Agent_Param::DfltAnimSE_F,			(float)atof(description.getAttribute("DfltAnimSE_F", "1")));

	setParamF(Agent_Param::LocomotionSpeedMult_F,	(float)atof(description.getAttribute("LocomotionSpeedMult_F", "0.9")));
	setParamF(Agent_Param::OrientationSpeedMult_F,	(float)atof(description.getAttribute("OrientationSpeedMult_F", "200")));
	setParamF(Agent_Param::LocomotionAnimSpeed_F,	(float)atof(description.getAttribute("LocomotionAnimSpeed_F", "1")));
	setParamF(Agent_Param::OrientationAnimSpeed_F,	(float)atof(description.getAttribute("OrientationAnimSpeed_F", "1")));
	setParamF(Agent_Param::DfltMovementSpeed_F,		(float)atof(description.getAttribute("DfltMovementSpeed_F", "1")));	
	setParamF(Agent_Param::GazeSpeedMult_F,			(float)atof(description.getAttribute("GazeSpeedMult_F", "30")));
	setParamF(Agent_Param::MaxGazeError_F,			(float)atof(description.getAttribute("MaxGazeError_F", "0.1")));	
	setParamF(Agent_Param::DfltGazeSpeed_F,			(float)atof(description.getAttribute("DfltGazeSpeed_F", "1")));
	setParamF(Agent_Param::DfltGazeDuration_F,		(float)atof(description.getAttribute("DfltGazeDuration_F", "10")));
	setParamF(Agent_Param::FwdViewX_F,				(float)atof(description.getAttribute("FwdViewX_F", "0")));
	setParamF(Agent_Param::FwdViewY_F,				(float)atof(description.getAttribute("FwdViewY_F", "0")));
	setParamF(Agent_Param::FwdViewZ_F,				(float)atof(description.getAttribute("FwdViewZ_F", "1")));	
	setParamF(Agent_Param::PSpaceWidth_F,			(float)atof(description.getAttribute("PSpaceWidth_F", "2")));
	setParamF(Agent_Param::FormReposSpd_F,			(float)atof(description.getAttribute("FormReposSpd_F", "0.5")));
	setParamF(Agent_Param::HcCurveAnchor_F,			(float)atof(description.getAttribute("HcCurveAnchor_F", "0.9")));
	setParamF(Agent_Param::HcMaxStr_F,				(float)atof(description.getAttribute("HcMaxStr_F", "10")));
	setParamF(Agent_Param::HcSoftness_F,			(float)atof(description.getAttribute("HcSoftness_F", "10")));
	setParamF(Agent_Param::DfltHeadShakeExt_F,		(float)atof(description.getAttribute("DfltHeadShakeExt_F", "1")));
	setParamF(Agent_Param::DfltHeadShakeSpd_F,		(float)atof(description.getAttribute("DfltHeadShakeSpd_F", "0.2")));
	setParamF(Agent_Param::DfltHeadShakeDur_F,		(float)atof(description.getAttribute("DfltHeadShakeDur_F", "0.2")));

	//enum ParamS	
	setParamS(Agent_Param::HeadName_S,				description.getAttribute("HeadName_S", "Bip01_Head"));
	setParamS(Agent_Param::SocketEntityName_S,		description.getAttribute("SocketEntityName_S", "camera"));
	setParamS(Agent_Param::UpAxis_S,				description.getAttribute("UpAxis_S", "Y"));
}

int Config::getParamI(Agent_Param::List p)
{	
	int numParam = Agent_Param::_EndParamI;
	int offset = 0;

	int index = p - offset;
	if(index >= numParam || index < 0) //check array bounding
		return -1;

	return m_paramI[index]; 
}

void Config::setParamI(Agent_Param::List p, int value)
{	
	int numParam = Agent_Param::_EndParamI;
	int offset = 0;

	int index = p;
	if(index >= Agent_Param::_EndParamI || index < 0) //check array bounding
		return;

	m_paramI[index] = value;
}

float Config::getParamF(Agent_Param::List p)
{	
	int numParam = Agent_Param::_EndParamF - Agent_Param::_EndParamI -1;
	int offset = Agent_Param::_EndParamI +1;

	int index = p - offset;
	if(index >= numParam || index < 0) //check array bounding
		return -1;

	return m_paramF[index]; 
}

void Config::setParamF(Agent_Param::List p, float value)
{	
	int numParam = Agent_Param::_EndParamF - Agent_Param::_EndParamI -1;
	int offset = Agent_Param::_EndParamI +1;

	int index = p - offset;
	if(index >= numParam || index < 0) //check array bounding
		return;

	m_paramF[index] = value;
}

const char* Config::getParamS(Agent_Param::List p)
{		
	int numParam = Agent_Param::_EndParamS - Agent_Param::_EndParamF -1;
	int offset = Agent_Param::_EndParamF +1;

	int index = p - offset;
	if(index >= numParam || index < 0) //check array bounding
		return 0;

	return m_paramS[index]; 
}

void Config::setParamS(Agent_Param::List p, const char* value)
{	
	int numParam = Agent_Param::_EndParamS - Agent_Param::_EndParamF -1;
	int offset = Agent_Param::_EndParamF +1;

	int index = p - offset;
	if(index >= numParam || index < 0) //check array bounding
		return;

	utils::strcpy( value, m_paramS[index], c_MaxSParamSize );
}

