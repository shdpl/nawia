
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
    
#ifndef COMMAND_H_
#define COMMAND_H_

#include <vector>
#include "CommandAttribute.h"

class CommComponent;

/*
 * Parent class for command objects. Specific command classes must extend this class.
 */
class Command
{
public:	
	Command();
	Command(CommComponent* comp);
	~Command();

	///processes the message
	virtual void process(const char* message);

	///restes the attributes to their default values, thus clearing any information from previous processes
	virtual void reset();

	///execute the actions requested in the already processed message
	virtual void execute();
	
	///checks whether the message type matches with the command type
	bool check(const char* message);

protected:
	///command specific keyword (identifier)
	char m_keyword[16];
	///vector of known attributes
	std::vector<CommandAttribute*> m_attributes;

	CommComponent* m_comp;

	///generates and sends out an error message
	virtual void error(const char* message);
};

#endif