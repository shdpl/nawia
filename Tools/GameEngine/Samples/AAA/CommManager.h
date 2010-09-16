// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// ****************************************************************************************
//

// ****************************************************************************************
//
// Advanced Agent Animation
//
// -------------------------
// Copyright (C) 2010 Ionut Damian
//
// ****************************************************************************************
//
// For information on how to use AAA, please read the readme.txt in the project folder 
// (ex: GameEngine\Samples\AAA\readme.txt) or check out the website at: 
// http://mm-werkstatt.informatik.uni-augsburg.de/projects/aaa/
//
// ****************************************************************************************

#ifndef COMMMANAGER_H_
#define COMMMANAGER_H_

#include "app.h"
#include "Bayesnet.h"
#include <string>

class CommManager
{
public:
	CommManager(void *AAA);
	void processMessages();

private:
	///pointer to application instance
	Application *app;
	///member bayesnet
	Bayesnet *bn;
	///id of the entity that has the SocketComponent as attachement
	int socketEntityID;
	
	///buffer for received messages
	char buffer_recv[256]; //max message size = 256

	///tokenizer context
	char* context;
	///general purpose string stream
	std::stringstream msg_ss;
	string str;

	//Functions
	void generateClientFeedback();

	void processAnim(char* cmd);
	void processSpeak(char* cmd);
	void processSet(char* cmd);
	void processSetVolume(char* cmd);
	void processSetSpeed(char* cmd);
	void processSetExtent(char* cmd);
	void processSetExtentNow(char* cmd);
	void processSetVisibility(char* cmd);
	void processDo(char* cmd);
	void processLookat(char* cmd);
	void processGaze(char* cmd);
	void processGoto(char* cmd);
	void processGotopos(char* cmd);
};

#endif