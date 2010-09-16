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
// ****************************************************************************************
//

// ****************************************************************************************
//
// GameEngine Agent Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************  
#ifndef AGENTANIM_MANAGER_H_
#define AGENTANIM_MANAGER_H_

#include <GameEngine/GameComponentManager.h>
#include <vector>

class AgentAnimComponent;

/**
 *
 */
class AgentAnimManager : public GameComponentManager
{
public:
	static AgentAnimManager* instance();
	static void release();
	
	std::vector<AgentAnimComponent*>		m_agentAnimListener;
	void addComponent(AgentAnimComponent* component);
	void removeComponent(AgentAnimComponent* component);

	void run();

	void update();


private:
	AgentAnimManager() {}
	~AgentAnimManager() {}

	static AgentAnimManager*				m_instance;

	
};

#endif // AGENTANIM_MANAGER_H_
        