// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
// *************************************************************************************************



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