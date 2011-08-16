
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
    
#ifndef FB_ERROR_H_
#define FB_ERROR_H_

#include "Feedback.h"

class fbError : public Feedback
{
public:
	fbError(int socket_eID, const char* description);
	~fbError();

private:
	///sends out the feedback message via socket
	void send(int code, const char* description);
};

#endif