
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

#include "Timer.h"
#include <time.h>

Timer::Timer() : m_time(clock()), m_start(m_time)
{}

double Timer::grabElapsedTime()
{
	long elapsed = 0;
	long current = clock();
	
	elapsed = current - m_time;
	
	m_time = current;

	return ((double)elapsed / (double)CLOCKS_PER_SEC);
}

double Timer::getTotalTime()
{
	return ((double)(clock() - m_start) / (double)CLOCKS_PER_SEC);
}