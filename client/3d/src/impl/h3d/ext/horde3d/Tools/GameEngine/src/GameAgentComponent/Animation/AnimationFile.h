
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

#ifndef ANIMATIONFILE_H_
#define ANIMATIONFILE_H_

#include "../GameEngine_Agent.h"

class AnimationFile
{
public:
	AnimationFile(Agent_Gender::List gender, const char* filename);

	const char* getFilename();

	Agent_Gender::List getGender();
	int getStrokeStart();
	int getStrokeEnd();

	void setForm(int strokeStart, int strokeEnd);

private:
	Agent_Gender::List m_gender;
	char m_filename[128];

	int m_strokeStart;
	int m_strokeEnd;
};

#endif