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
#ifndef IK_CONFIG_H_
#define IK_CONFIG_H_

#include "GameEngine_IK.h"

//////////////////////////////////////////////
//Definitions
//#define IK_DEBUG
#define IK_NumParamI 6
#define IK_NumParamF 7
//////////////////////////////////////////////

/**
 * Contains configurations for all IK processes
 *
 * @author Ionut Damian
 */
class Config
{
private:	
	static int m_paramI[IK_NumParamI];
	static float m_paramF[IK_NumParamF];

public:

	/**
	 * Initializes all entries in IK_Param with default values
	 * THE DEFAULT VALUES ARE STORED LOCALLY IN THIS FUNCITON
	 */
	static void useDefault();

	static				int	getParamI(IK_Param::List p);
	static float		getParamF(IK_Param::List p);

	static void			setParamI(IK_Param::List p, int value);
	static void			setParamF(IK_Param::List p, float value);	
};

#endif