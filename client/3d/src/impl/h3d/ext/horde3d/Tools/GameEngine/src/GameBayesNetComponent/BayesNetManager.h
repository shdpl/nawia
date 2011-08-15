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
// GameEngine BayesNet Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************     
#ifndef BAYESNET_MANAGER_H_
#define BAYESNET_MANAGER_H_

#include <GameEngine/GameComponentManager.h>
#include <vector>

class BayesNetComponent;

class BayesNetManager : public GameComponentManager
{
public:
	static BayesNetManager* instance();
	static void release();

	void addComponent(BayesNetComponent* component);
	void removeComponent(BayesNetComponent* component);

	void run();

	void update();


private:
	BayesNetManager() {}
	~BayesNetManager() {}

	static BayesNetManager*				m_instance;

	std::vector<BayesNetComponent*>		m_bayesNetListener;
};

#endif // BAYESNET_MANAGER_H_
        