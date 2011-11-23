
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

#ifndef AGENT_CONFIG_H_
#define AGENT_CONFIG_H_

#include "GameEngine_Agent.h"

//////////////////////////////////////////////
//Definitions
#define DEBUG_AGENT_ANIM false
//////////////////////////////////////////////
//Constants
static const size_t c_MaxTTSLength = 512;
static const size_t c_MaxTTSVoiceLength = 64;
static const size_t c_MaxNumAnimStages = 16;
static const size_t c_MaxAnimNameSize = 64;
static const size_t c_MaxAnimFileSize = 128;
static const size_t c_MaxNrAnimsPerMsg = 16;
static const size_t c_MaxNodeNameSize = 32;
static const size_t c_MaxSyncWordSize = 32;
static const size_t c_MaxSParamSize = 64;
//////////////////////////////////////////////

struct XMLNode;

/**
 * Contains Configurations for all Agent processes
 *
 * @author Ionut Damian
 */
class Config
{
private:	
	static int m_paramI[ Agent_Param::_EndParamI ];
	static float m_paramF[ Agent_Param::_EndParamF - Agent_Param::_EndParamI -1 ];
	static char m_paramS[ Agent_Param::_EndParamS - Agent_Param::_EndParamF -1 ][c_MaxSParamSize];

public:

	/**
	 * Initializes all entries in Agent_Param with default values
	 * THE DEFAULT VALUES ARE STORED LOCALLY IN THIS FUNCITON
	 */
	static void useDefault();

	/**
	 * \brief Loads the Config from an xml node
	 * 
	 * @param description xmlnode with agent Config
	 */ 
	static void			loadFromXml(const XMLNode& description);

	static int			getParamI(Agent_Param::List p);
	static float		getParamF(Agent_Param::List p);
	static const char*	getParamS(Agent_Param::List p);

	static void			setParamI(Agent_Param::List p, int value);
	static void			setParamF(Agent_Param::List p, float value);
	static void			setParamS(Agent_Param::List p, const char* value);
};

#endif