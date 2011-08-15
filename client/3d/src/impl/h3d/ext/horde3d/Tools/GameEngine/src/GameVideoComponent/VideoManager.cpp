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
// GameEngine Video Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Felix Kistler
// 
// ****************************************************************************************
    
#include "VideoManager.h"
#include "VideoComponent.h"

#include <algorithm>

struct UpdateNode
{
	void operator()(VideoComponent* ptr) const
	{
		ptr->update();
	}
};

struct RenderNode
{
	void operator()(VideoComponent* ptr) const
	{
		ptr->render();
	}
};

struct RunNode
{
	void operator()(VideoComponent* ptr) const
	{
		ptr->run();
	}
};

VideoManager* VideoManager::m_instance = 0x0;

VideoManager* VideoManager::instance()
{
	if( m_instance == 0x0 )
		m_instance = new VideoManager();
	return m_instance;
}

void VideoManager::release()
{
	delete m_instance;
	m_instance = 0x0;
}

void VideoManager::addComponent(VideoComponent *component)
{
	std::vector<VideoComponent*>::iterator iter = find(m_videoListener.begin(), m_videoListener.end(), component);
	if (iter == m_videoListener.end())
	{
		m_videoListener.push_back(component);
	}
}

void VideoManager::removeComponent(VideoComponent *component)
{
	std::vector<VideoComponent*>::iterator iter = find(m_videoListener.begin(), m_videoListener.end(), component);
	if (iter != m_videoListener.end())
		m_videoListener.erase(iter);
}

void VideoManager::run()
{
	for_each(m_videoListener.begin(), m_videoListener.end(), RunNode());
}

void VideoManager::update()
{
	for_each(m_videoListener.begin(), m_videoListener.end(), UpdateNode());
}

void VideoManager::render()
{
	for_each(m_videoListener.begin(), m_videoListener.end(), RenderNode());
}
        