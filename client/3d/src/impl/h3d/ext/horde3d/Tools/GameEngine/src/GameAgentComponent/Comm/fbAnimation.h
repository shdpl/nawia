
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
    
#ifndef FB_ANIMATION_H_
#define FB_ANIMATION_H_

#include "Feedback.h"

class fbAnimation : public Feedback
{
public:
	fbAnimation(int socket_eID, int agent_eID, int animation_ID);
	~fbAnimation();

	///tracks changes in the components, calling send() when it is required. Is overloaded by specialized feedback classes
	void update();

private:
	///sends out the feedback message via socket
	void send(int code, const char* description);

	int m_animation_ID;
	int m_agent_eID;
	int m_agent_aID;
};

#endif