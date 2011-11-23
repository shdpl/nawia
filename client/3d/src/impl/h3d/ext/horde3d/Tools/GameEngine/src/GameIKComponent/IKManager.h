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
// GameEngine IK Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************
#ifndef IK_MANAGER_H_
#define IK_MANAGER_H_

#include <GameEngine/GameComponentManager.h>
#include <vector>

class IKComponent;

/**
 * 
 */
class IKManager : public GameComponentManager
{
public:
	static IKManager* instance();
	static void release();

	void addComponent(IKComponent* component);
	void removeComponent(IKComponent* component);
	void run();
	void update();	


private:
	IKManager() {}
	~IKManager() {}

	static IKManager*				m_instance;

	std::vector<IKComponent*>		m_IKListener;	
};

#endif // IK_MANAGER_H_
