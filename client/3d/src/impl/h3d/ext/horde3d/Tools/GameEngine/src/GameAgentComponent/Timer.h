
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

#ifndef TIMER_H_
#define TIMER_H_

class Timer
{
public:
	Timer();

	///returns elapsed time since last grab in seconds
	double grabElapsedTime();

	///returns total time elapsed since object creation
	double getTotalTime();

private:
	long m_time;
	long m_start;
};

#endif