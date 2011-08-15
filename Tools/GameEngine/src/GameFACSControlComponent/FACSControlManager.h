// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
// Programmers: Nikolaus Bee
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************
//
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