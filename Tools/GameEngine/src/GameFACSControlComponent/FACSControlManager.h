// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
// Programmers: Nikolaus Bee
//
// This file is part of the GameEngine of the University of Augsburg
// 
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************
#ifndef FACSCONTROL_MANAGER_H_
#define FACSCONTROL_MANAGER_H_

#include <GameEngine/GameComponentManager.h>
#include <vector>

class FACSControlComponent;

/**
 * 
 */
class FACSControlManager : public GameComponentManager
{
public:
	static FACSControlManager* instance();
	static void release();

	void addComponent(FACSControlComponent* component);
	void removeComponent(FACSControlComponent* component);
	void run();
	void update();	


private:
	FACSControlManager() {}
	~FACSControlManager() {}

	static FACSControlManager*				m_instance;

	std::vector<FACSControlComponent*>		m_facsControlListener;	
};

#endif // FACSCONTROL_MANAGER_H_