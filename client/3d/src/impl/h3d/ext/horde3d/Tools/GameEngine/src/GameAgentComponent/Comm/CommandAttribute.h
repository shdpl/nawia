
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
    
#ifndef COMMANDATTRIBUTE_H_
#define COMMANDATTRIBUTE_H_

#include <string>
using namespace std;

struct AttributeType
{
	enum List
	{
		NONE = 0,
		INTEGER,
		FLOAT,
		STRING,
		VEC3F //< of type x[float]y[float]z[float]
	};
};

class CommandAttribute
{
public:
	CommandAttribute(const char* name, AttributeType::List type, void* value, int valueSize, bool* flag);
	~CommandAttribute();

	///processes the data
	void process(const char* data);
	///checks whether the message can be processed by this attribute object
	bool check(const char* data);

private:
	///name (identifier) of the attribute
	char m_name[16];
	///attribute type
	AttributeType::List m_type;

	///pointer towards an object of type 'm_type' where the attribute value gets stored
	void* m_value;
	///size of the value (if needed)
	int m_valueSize;
	///pointer towards a boolean which represents a flag. This flag will get set true if the attribute has been found in the processed message
	bool* m_flag;

	string parseValue(string data);
};

#endif