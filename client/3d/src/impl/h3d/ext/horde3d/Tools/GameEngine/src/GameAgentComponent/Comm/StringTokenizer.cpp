
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

#include "StringTokenizer.h"

StringTokenizer::StringTokenizer() : m_message(""), m_delimiter(' '), m_returnDelimiters(false)
{}

StringTokenizer::StringTokenizer(const char* message, char delimiter, bool returnDelimiters) : m_message(message), m_delimiter(delimiter), m_returnDelimiters(returnDelimiters)
{}

StringTokenizer::StringTokenizer(const char* message, char delimiter) : m_message(message), m_delimiter(delimiter), m_returnDelimiters(false)
{}

StringTokenizer::StringTokenizer(const char* message) : m_message(message), m_delimiter(' '), m_returnDelimiters(false)
{}

void StringTokenizer::setMessage(const char* newMessage) {
	m_message = string(newMessage);
}

string StringTokenizer::next() 
{
	string word;
	if (!m_returnDelimiters) 
	{
		processBlanks();

		int pos = (int)m_message.find(m_delimiter);
		if (pos != string::npos) 
		{
			word = m_message.substr(0, pos);
			m_message = m_message.substr(pos);
		} else 
		{
			word = m_message;
			m_message = "";
		}
	} else 
	{
		if (m_message[0] == m_delimiter) 
		{
			word = m_message.substr(0, 1);
			m_message = m_message.substr(1);
		} else
		{
			int pos = (int)m_message.find(m_delimiter);
			if (pos != string::npos) 
			{
				word = m_message.substr(0, pos);
				m_message = m_message.substr(pos);
			} else 
			{
				word = m_message;
				m_message = "";
			}
		}
	}
	return word;
}

bool StringTokenizer::hasNext() {
	return m_message.length() > 0;
}

void StringTokenizer::processBlanks() {
	while (m_message.length() > 0 && m_message[0] == m_delimiter)
		m_message = m_message.substr(1);
	return;
}
