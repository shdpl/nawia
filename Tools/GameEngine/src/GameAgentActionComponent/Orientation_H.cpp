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
// GameEngine Agent Action Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************
#include "Orientation_H.h"
#include "AgentActionComponent.h"


void Orientation_H::execute_alphaAction(unsigned int myEntityID, unsigned int otherEntityID)
{
	//save ids
	m_alpha_eid = (int)myEntityID;
	m_beta_eid = (int)otherEntityID;

	m_component->turnTowards(otherEntityID);
};


void Orientation_H::execute_betaAction(unsigned int myEntityID, unsigned int otherEntityID)
{
	//save ids
	m_alpha_eid = (int)myEntityID;
	m_beta_eid = (int)otherEntityID;

	m_component->turnTowards(otherEntityID);
};