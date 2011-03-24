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
#include "BodyOrientation.h"
#include "FormationComponent.h"
#include "GameEngine/GameEngine_Agent.h"
#include "GameEngine/utmath.h"

#include "../utils.h"
#include "../Config.h"

using namespace Horde3D;

BodyOrientation::BodyOrientation( FormationComponent* component ) :
m_formation(component), m_deviation(0), m_targetRotation(0), m_hasTargetRot(false), m_hasDeviation(false)
{}

BodyOrientation::~BodyOrientation()
{}

void BodyOrientation::execute()
{	
	if(!m_hasDeviation && !m_hasTargetRot)
		return;

	int agent_eID = m_formation->getEntityID();
	float currentAngle;
	const char* upAxis_str = Config::getParamS(Agent_Param::UpAxis_S);
	char upAxis = toupper(upAxis_str[0]);	
	Vec3f rot;

	Vec3f initRot = utils::getEntityRotation(agent_eID);
	utils::radToDegV(&initRot);

	if(m_hasDeviation)
	{
		//compute rotation to turn towards the center of the formation
		Vec3f oSpace = m_formation->computeOSpace();
		Vec3f direction = oSpace - utils::getEntityPosition(agent_eID);	
		
		//TODO: this h3d function assumes that the view direction is (0,0,-1)
		//correct the rotation value based on the agent's forward view direction
		rot = direction.toRotation();
		utils::radToDegV(&rot);

		Vec3f fwdView(Config::getParamF(Agent_Param::FwdViewX_F), Config::getParamF(Agent_Param::FwdViewY_F), Config::getParamF(Agent_Param::FwdViewZ_F));
		if(fwdView.z > 0)
			rot.y += 180.0f; //TODO: do corrections for other axis too	

		if(upAxis == 'X')
			currentAngle = rot.x;
		else if(upAxis == 'Y')
			currentAngle = rot.y;
		else if(upAxis == 'Z')
			currentAngle = rot.z;	

		//apply angular deviations
		float targetAngle = currentAngle + m_deviation;
		if(abs(targetAngle - currentAngle) > 180.0f)
		{
			if(targetAngle > 0)
				targetAngle = (-1)* (360.0f - targetAngle);
			else
				targetAngle = 360.0f + targetAngle;
		}

		if(upAxis == 'X')
			rot.x = targetAngle;
		else if(upAxis == 'Y')
			rot.y = targetAngle;
		else if(upAxis == 'Z')
			rot.z = targetAngle;
	}
	else if(m_hasTargetRot)
	{
		rot = initRot;

		if(upAxis == 'X')
			rot.x = m_targetRotation;
		else if(upAxis == 'Y')
			rot.y = m_targetRotation;
		else if(upAxis == 'Z')
			rot.z = m_targetRotation;	
	}

	//apply rotation
	if((rot - initRot).length() > 0.001f)
		GameEngine::Agent_rotate(agent_eID, rot.x, rot.y, rot.z, 1.0f, true, 0);
}

void BodyOrientation::setDeviation(float dev)
{
	m_deviation = dev;
	m_hasDeviation = true;
}

void BodyOrientation::setTargetRotation(float rot)
{
	m_targetRotation = rot;
	m_hasTargetRot = true;
}
