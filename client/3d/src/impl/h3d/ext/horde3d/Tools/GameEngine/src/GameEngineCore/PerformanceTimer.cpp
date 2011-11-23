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
// *************************************************************************************************
//


// ****************************************************************************************
//
// GameEngine Core Library of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "PerformanceTimer.h"

#include <windows.h>
#include <time.h>

template <typename T>PerformanceTimer<T>::PerformanceTimer() : m_timeScale(0), m_highPerformance(0), m_lastTime(0)
{
	__int64 frequency = 0;
	//SetThreadAffinityMask(GetCurrentThread(), 1); 
	if (QueryPerformanceFrequency((LARGE_INTEGER*) &frequency)==TRUE)
	{
		m_timeScale = static_cast<T>(1)/frequency;
		m_highPerformance = true;
	}
	else
	{ 
		m_timeScale =  static_cast<T>(0.001);
		m_highPerformance = false;
	}
	resetTimer();
}

template <typename T> T PerformanceTimer<T>::elapsedTime()
{
    __int64 currentTime;
    if (m_highPerformance)
        QueryPerformanceCounter((LARGE_INTEGER*) &currentTime);
    else
        currentTime = GetTickCount();
	return (currentTime - m_lastTime) * m_timeScale;
}

template <typename T> void PerformanceTimer<T>::resetTimer()
{
    if (m_highPerformance)
        QueryPerformanceCounter((LARGE_INTEGER*) &m_lastTime);
    else
        m_lastTime = GetTickCount();    
}

template class PerformanceTimer<float>;
template class PerformanceTimer<double>;