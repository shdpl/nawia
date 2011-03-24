
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
    
#include "CommandAttribute.h"

#include "StringTokenizer.h"
#include "../utils.h"

#include "GameEngine/utMath.h"

#include <string>

CommandAttribute::CommandAttribute(const char *name, AttributeType::List type, void* value, int valueSize, bool* flag) 
: m_type(type), m_value(value), m_valueSize(valueSize), m_flag(flag)
{
	utils::strcpy(name, m_name, 16);
}

bool CommandAttribute::check(const char *data)
{
	StringTokenizer st(data);
	string name = st.next();
	string val = parseValue( string(data) );

	if(name.empty() || val.empty())
		return false;

	//check name
	if(strcmp(name.c_str(), m_name) != 0)
		return false;
	
	//check attribute type
	switch(m_type)
	{
		case AttributeType::INTEGER:		
			if(val.find_first_not_of("1234567890") != string::npos)
				return false;
			break;

		case AttributeType::FLOAT:		
			if(val.find_first_not_of("1234567890.") != string::npos)
				return false;
			break;

		case AttributeType::VEC3F:
		{
			size_t xpos = val.find_first_of('x');
			if(xpos == string::npos)
				return false;
			size_t ypos = val.find_first_of('y');
			if(ypos == string::npos)
				return false;
			size_t zpos = val.find_first_of('z');
			if(zpos == string::npos)
				return false;
			break;
		}
	}

	return true;
}

void CommandAttribute::process(const char *data)
{
	StringTokenizer st(data);
	string name = st.next();
	string val = parseValue( string(data) );

	if(name.empty() || val.empty())
		return;

	if(m_flag != 0) *m_flag = false;
	switch(m_type)
	{
	case AttributeType::INTEGER:	
		*((int*)m_value) = atoi(val.c_str());
		if(m_flag != 0) *m_flag = true;
		break;

	case AttributeType::FLOAT:	
		*((float*)m_value) = (float)atof(val.c_str());
		if(m_flag != 0) *m_flag = true;
		break;

	case AttributeType::STRING:		
		utils::strcpy(val.c_str(), (char *)m_value, m_valueSize); //TODO: does this work ?
		if(m_flag != 0) *m_flag = true;
		break;

	case AttributeType::VEC3F:
	{
		size_t xpos = val.find_first_of('x');
		size_t ypos = val.find_first_of('y');
		size_t zpos = val.find_first_of('z');

		float x = (float)atof(val.substr(xpos +1, ypos-xpos -1).c_str());
		float y = (float)atof(val.substr(ypos +1, zpos-ypos -1).c_str());
		float z = (float)atof(val.substr(zpos +1).c_str());
		*((Horde3D::Vec3f*)m_value) = Horde3D::Vec3f(x,y,z); //TODO: does this work ?

		if(m_flag != 0) *m_flag = true;
		break;
	}

	default: //case NULL:
		//do nothing
		break;
	}
}

string CommandAttribute::parseValue(string data)
{
	string val;

	//the value is everything that follows after the name
	unsigned int spacePos = (unsigned int)data.find(' ');
	if(spacePos < data.size())
		val = data.substr( spacePos+1 );
	
	//delete leading spaces
	while(!val.empty() && val[0] == ' ')
		val = val.substr(1, val.size()-1);

	//delete trailing spaces
	while(!val.empty() && val[val.size()-1] == ' ')
		val = val.substr(0, val.size()-1);

	return val;
}