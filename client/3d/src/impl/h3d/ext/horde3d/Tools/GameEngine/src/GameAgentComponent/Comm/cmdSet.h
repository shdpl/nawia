
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
    
#ifndef CMD_SET_H_
#define CMD_SET_H_

#include "Command.h"
#include "CommandAttribute.h"

#include "GameEngine/utMath.h"
#include <vector>

#include "../Config.h"

using namespace Horde3D;

class cmdSet : public Command
{
public:
	cmdSet();
	cmdSet(CommComponent* comp);
	~cmdSet();

	///restes the attributes to their default values, thus clearing any information from previous processes
	void reset();

	///execute the actions requested in the already processed message
	virtual void execute();

private:
	//std::vector<CommandAttribute*> m_attributes;

	//possible actions with this cmd
	bool m_doVisible;
	bool m_doIconVisible;
	bool m_doBayesNet;
	bool m_doTTSVoice;
	bool m_doIPDistMin;
	bool m_doIPDistMax;
	bool m_doDeviation;
	bool m_doReposAnimName;

	//attribute values
	int		m_agent_aID;
	int		m_visible;
	int		m_iconVisible;
	int		m_bayesNet;
	char	m_TTSVoice[c_MaxTTSVoiceLength];
	float	m_IPDistMin;
	float	m_IPDistMax;
	float	m_deviation;
	char	m_reposAnimName[c_MaxAnimNameSize];

};

#endif
