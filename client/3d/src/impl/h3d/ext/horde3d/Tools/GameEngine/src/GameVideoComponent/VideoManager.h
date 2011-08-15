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
    
#ifndef VIDEO_MANAGER_H_
#define VIDEO_MANAGER_H_

#include <GameEngine/GameComponentManager.h>
#include <vector>

class VideoComponent;

/**
 *
 */
class VideoManager : public GameComponentManager
{
public:
	static VideoManager* instance();
	static void release();

	void addComponent(VideoComponent* component);
	void removeComponent(VideoComponent* component);

	void run();

	void update();

	void render();


private:
	VideoManager() {}
	~VideoManager() {}

	static VideoManager*				m_instance;

	std::vector<VideoComponent*>		m_videoListener;
};

#endif // VIDEO_MANAGER_H_
        