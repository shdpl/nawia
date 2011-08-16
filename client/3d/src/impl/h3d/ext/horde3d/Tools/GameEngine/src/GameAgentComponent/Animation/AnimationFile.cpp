
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

#include "AnimationFile.h"
#include "../utils.h"

AnimationFile::AnimationFile(Agent_Gender::List gender, const char *filename) : m_gender(gender), m_strokeStart(-1), m_strokeEnd(-1)
{
	utils::strcpy(filename, m_filename, 128);
}

const char* AnimationFile::getFilename()
{
	return (const char*)m_filename;
}

Agent_Gender::List AnimationFile::getGender()
{
	return m_gender;
}

int AnimationFile::getStrokeStart()
{
	return m_strokeStart;
}

int AnimationFile::getStrokeEnd()
{
	return m_strokeEnd;
}

void AnimationFile::setForm(int strokeStart, int strokeEnd)
{
	m_strokeStart = strokeStart;
	m_strokeEnd = strokeEnd;
}