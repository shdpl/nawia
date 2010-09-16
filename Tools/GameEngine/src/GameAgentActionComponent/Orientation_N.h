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
#ifndef ORIENTATION_N_H_
#define ORIENTATION_N_H_

#include "Orientation.h"

class Orientation_N : public Orientation
{
public:
	Orientation_N(AgentActionComponent* component) : Orientation(component)
	{
		m_type = Orientation::N;
	};

	void execute_alphaAction(unsigned int myEntityID, unsigned int otherEntityID);
	void execute_betaAction(unsigned int myEntityID, unsigned int otherEntityID);
};

#endif