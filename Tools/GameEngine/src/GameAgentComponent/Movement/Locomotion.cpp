
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

#include "Locomotion.h"

#include "../utils.h"

#include <stdio.h>

Locomotion::Locomotion(int agent_eID, Vec3f destination, float speed) : Movement(agent_eID)
{
	m_type = MovementType::LOCOMOTION;
	m_status = MovementStatus::INACTIVE;
	m_speed = speed;
	m_target = destination;
}

Locomotion::~Locomotion()
{}

void Locomotion::activate()
{
	if(isActive())
		return;

	m_start = utils::getEntityPosition(m_agent_eID);
	m_current = m_start;
	m_distance = (m_target - m_start).length();

	startMovement(Config::getParamF(Agent_Param::LocomotionSpeedMult_F));
}

void Locomotion::update()
{
	if(!isActive())
		return;

	updateMovement(Config::getParamF(Agent_Param::LocomotionSpeedMult_F), Config::getParamF(Agent_Param::LocomotionAnimSpeed_F));

	//apply changes to scene graph
	utils::setEntityPosition(m_agent_eID, m_current);
	//debug
	//printf("new pos: %.2f,%.2f,%.2f \n", m_current.x, m_current.y, m_current.z);
}