
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

#include "Feedback.h"

Feedback::Feedback(int socket_eID) : m_socket_eID(socket_eID), m_hasFinished(false)
{}

Feedback::~Feedback()
{
}

void Feedback::update()
{}

void Feedback::send(int code, const char* description)
{}

void Feedback::die()
{
	m_hasFinished = true;
}

bool Feedback::hasFinished()
{
	return m_hasFinished;
}