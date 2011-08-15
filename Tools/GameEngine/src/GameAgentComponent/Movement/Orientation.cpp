
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

#include "Orientation.h"

#include "../utils.h"

Orientation::Orientation(int agent_eID, Vec3f target, float speed, bool targetIsRotation) : Movement(agent_eID), m_targetIsRotation(targetIsRotation)
{
	m_type = MovementType::ORIENTATION;
	m_status = MovementStatus::INACTIVE;
	m_speed = speed;

	//Warning: if targetIsRotation is true, this is the rotation target
	//otherwise it's the point we should turn towards to
	m_target = target; 
}

Orientation::~Orientation()
{}

void Orientation::activate()
{	
	if(isActive())
		return;

	m_start = utils::getEntityRotation(m_agent_eID);
	utils::radToDegV(&m_start);
	m_current = m_start;	

	if(!m_targetIsRotation)
	{
		//if the target is a point, then this is a "turn towards" action and we must compute the rotation
		Vec3f direction = m_target - utils::getEntityPosition(m_agent_eID);
		
		//This h3d function assumes that the view direction is (0,0,-1)
		//correct the rotation value based on the agent's forward view direction
		m_target = direction.toRotation();
		utils::radToDegV(&m_target);

		Vec3f fwdView(Config::getParamF(Agent_Param::FwdViewX_F), Config::getParamF(Agent_Param::FwdViewY_F), Config::getParamF(Agent_Param::FwdViewZ_F));
		if(fwdView.z > 0)
			m_target.y += 180.0f; //TODO: do corrections for other axis too	
	}

	//optimize rotations
	m_target.x = optimizeRotation(m_current.x, m_target.x);
	m_target.y = optimizeRotation(m_current.y, m_target.y);
	m_target.z = optimizeRotation(m_current.z, m_target.z);	

	m_distance = (m_target - m_start).length();

	startMovement(Config::getParamF(Agent_Param::OrientationSpeedMult_F));
}

void Orientation::update()
{
	if(!isActive())
		return;	

	updateMovement(Config::getParamF(Agent_Param::OrientationSpeedMult_F), Config::getParamF(Agent_Param::OrientationAnimSpeed_F));

	//apply changes to scene graph
	utils::setEntityRotation(m_agent_eID, m_current);
}

float Orientation::optimizeRotation(float from, float to)
{
	if(abs(to - from) > 180.0f)
	{
		if(to > 0)
			to = (-1)* (360.0f - to);
		else
			to = 360.0f + to;
	}

	return to;
}