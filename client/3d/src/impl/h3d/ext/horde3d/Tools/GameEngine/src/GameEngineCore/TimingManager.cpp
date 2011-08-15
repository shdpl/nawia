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
#include "TimingManager.h"
#include "PerformanceTimer.h"

#include <vector>
#include <algorithm>

namespace TimingManager
{
	PerformanceTimer<float>					m_timer;
	float									m_currentTime = 0;
	float									m_lastTime    = 0;
	float									Fps		      = 60;

	float timeStamp()
	{
		return m_currentTime;
	}

	float currentTimeStamp()
	{
		return m_timer.elapsedTime();
	}

	void update()
	{		
		m_currentTime = m_timer.elapsedTime();	
		// Calculate Frames per second
		static float frames = 0;		
		++frames;
		if ( (m_currentTime - m_lastTime) >= 0.1f )
		{
			Fps = frames / (m_currentTime - m_lastTime);
			m_lastTime = m_currentTime;
			frames = 0.0f;
		}		
	}

	void reset()
	{
		m_timer.resetTimer();
		m_currentTime = m_lastTime = m_timer.elapsedTime();
	}

	float FPS()
	{
		return Fps;
	}

}