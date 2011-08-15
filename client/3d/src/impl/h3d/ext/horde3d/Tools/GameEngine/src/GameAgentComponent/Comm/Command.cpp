
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
    
#include "Command.h"

#include "../AgentManager.h"
#include "CommComponent.h"

#include "fbError.h"

Command::Command()
{}

Command::Command(CommComponent* comp) : m_comp(comp)
{}

Command::~Command()
{}

bool Command::check(const char *message)
{
	StringTokenizer st(message);

	if(st.hasNext())
		if(strcmp(m_keyword, st.next().c_str()) != 0)
			return false;

	return true;
}

void Command::process(const char* message)
{
	string attr;
	StringTokenizer messageTokens(message, '#', false);

	//** Variable initialization
	reset();

	//** Gather information
	while(messageTokens.hasNext())
	{
		attr = messageTokens.next();
		
		//parse attributes
		for(unsigned int i=0; i< m_attributes.size(); i++)
			if(m_attributes[i]->check(attr.c_str()))
			{
				m_attributes[i]->process(attr.c_str());
				break;
			}
	}

	//** Execute actions
	execute();
}

void Command::reset() {}
void Command::execute() {}

void Command::error(const char* message)
{
	m_comp->addFeedbackNode( new fbError( m_comp->getSocketEntityID(), message ) );
}