
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
    
#ifndef STRINGTOKENIZER_H_
#define STRINGTOKENIZER_H_

#include <iostream>
#include <string>
using namespace std;
 
class StringTokenizer 
{
public:
	StringTokenizer();
	StringTokenizer(const char* message, char delimiter, bool returnDelimiters);
	StringTokenizer(const char* message, char delimiter);
	StringTokenizer(const char* message);

	void setMessage(const char* newMessage);
	string next();
	bool hasNext();

private:
	void processBlanks();
	
	string m_message;
	char m_delimiter;
	bool m_returnDelimiters;
};

#endif