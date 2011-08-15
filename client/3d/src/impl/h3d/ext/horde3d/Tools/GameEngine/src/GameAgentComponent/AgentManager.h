
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
    
#ifndef AGENT_MANAGER_H_
#define AGENT_MANAGER_H_

#include <GameEngine/GameComponentManager.h>
#include <vector>

class AgentComponent;

class AnimationComponent;
class GazeComponent;
class CommComponent;
class FormationComponent;
class MovementComponent;

/**
 *
 */
class AgentManager : public GameComponentManager
{
public:
	static AgentManager* instance();
	static void release();

	void addComponent(AgentComponent* component);
	void addComponent(AnimationComponent* component);
	void addComponent(GazeComponent* component);
	void addComponent(CommComponent* component);
	void addComponent(FormationComponent* component);
	void addComponent(MovementComponent* component);

	void removeComponent(AgentComponent* component);
	void removeComponent(AnimationComponent* component);
	void removeComponent(GazeComponent* component);
	void removeComponent(CommComponent* component);
	void removeComponent(FormationComponent* component);
	void removeComponent(MovementComponent* component);

	//component getter
	AgentComponent*	getAgentComponent(int eID);
	AnimationComponent* getAnimationComponent(int eID);
	GazeComponent* getGazeComponent(int eID);
	CommComponent* getCommComponent(/*int eID*/);
	FormationComponent* getFormationComponent(int eID);
	MovementComponent* getMovementComponent(int eID);

	int getEntityID(int aID);
	int getAgentID(int eID);

	void run();

	void update();


private:
	AgentManager() {};
	~AgentManager() {};

	static AgentManager*				m_instance;

	std::vector<AgentComponent*>		m_agentListener;

	std::vector<AnimationComponent*>	m_agentAnimationListener;
	std::vector<GazeComponent*>			m_agentGazeListener;
	std::vector<CommComponent*>			m_agentCommListener;
	std::vector<FormationComponent*>	m_agentFormationListener;
	std::vector<MovementComponent*>		m_agentMovementListener;
};

#endif // AGENT_MANAGER_H_
        