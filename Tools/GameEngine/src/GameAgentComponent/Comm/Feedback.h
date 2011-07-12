
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
    
#ifndef FEEDBACK_H_
#define FEEDBACK_H_

#include <vector>

#define fb_MaxFeedbackLength 256

class Feedback
{
public:
	Feedback(int socket_eID);
	~Feedback();

	///tracks changes in the components, calling send() when it is required. Is overloaded by specialized feedback classes
	virtual void update();

	///returns true if the feedback node achieved its purpose
	bool hasFinished();

protected:
	int m_socket_eID;

	///the message which will be sent out
	char m_message[fb_MaxFeedbackLength];

	bool m_hasFinished;

	///sends out the feedback message via socket
	virtual void send(int code, const char* description);
	void _send(int agent_id, int obj_id, int code, const char* text);

	///marks this instance ready for termination
	void die();
};

#endif