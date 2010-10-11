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
// GameEngine Agent Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************  
#ifndef AGENTANIMCONFIG_H_
#define AGENTANIMCONFIG_H_

//////////////////////////////////////////////
//	AgentAnimComponent configuration file	//
//////////////////////////////////////////////

///flag for turning on debugging features (mostly detailed cmd window output)
#define AGENTANIMDEBUG true
///some debugging features will concentrate on the stage defined here
#define DEBUG_followanimstage 5114

///Number of animaiton stages an agent has
static const size_t MaxNumAnimStages = 16;
///Complementary path to the location of the animation resources
static const char *AnimationResourcePath = "";
//static const char* AnimationResourcePath = "animations/";



#endif