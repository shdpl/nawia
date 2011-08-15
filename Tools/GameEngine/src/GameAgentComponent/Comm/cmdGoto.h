
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
    
#ifndef CMD_GOTO_H_
#define CMD_GOTO_H_

#include "Command.h"
#include "CommandAttribute.h"

#include "GameEngine/utMath.h"
#include <vector>

using namespace Horde3D;

class cmdGoto : public Command
{
public:
	cmdGoto();
	cmdGoto(CommComponent* comp);
	~cmdGoto();

	///restes the attributes to their default values, thus clearing any information from previous processes
	void reset();

	///execute the actions requested in the already processed message
	virtual void execute();

private:
	//std::vector<CommandAttribute*> m_attributes;

	int m_goto_ID;

	//possible actions with this cmd
	bool m_doGotoByID;
	bool m_doGotoByLocation;

	//attribute values
	int		m_agent_aID;
	int		m_dest_aID;
	Vec3f	m_dest_pos;
	float	m_speed;
	int		m_putInQueue;
};

#endif