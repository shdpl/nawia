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
// GameEngine Agent Action Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************
#ifndef AGENTACTION_MANAGER_H_
#define AGENTACTION_MANAGER_H_

#include <GameEngine/GameComponentManager.h>
#include <vector>

class AgentActionComponent;

/**
 *
 */
class AgentActionManager : public GameComponentManager
{
public:
	static AgentActionManager* instance();
	static void release();

	void addComponent(AgentActionComponent* component);
	void removeComponent(AgentActionComponent* component);

	void run();

	void update();


private:
	AgentActionManager() {}
	~AgentActionManager() {}

	static AgentActionManager*				m_instance;

public:
	std::vector<AgentActionComponent*>		m_agentActionListener;
};

#endif // AGENTACTION_MANAGER_H_
        