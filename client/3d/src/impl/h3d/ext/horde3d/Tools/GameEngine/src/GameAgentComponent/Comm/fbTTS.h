
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
    
#ifndef FB_TTS_H_
#define FB_TTS_H_

#include "Feedback.h"

class fbTTS : public Feedback
{
public:
	fbTTS(int socket_eID, int agent_eID, int tts_ID);
	~fbTTS();

	///tracks changes in the components, calling send() when it is required. Is overloaded by specialized feedback classes
	void update();

private:
	///sends out the feedback message via socket
	void send(int code, const char* description);

	int m_agent_eID;
	int m_agent_aID;
	int m_tts_ID;
};

#endif