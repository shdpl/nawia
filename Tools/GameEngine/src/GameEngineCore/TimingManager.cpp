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
		m_lastTime = m_timer.elapsedTime();
	}

	float FPS()
	{
		return Fps;
	}

}