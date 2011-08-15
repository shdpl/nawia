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
#ifndef BAYESNETCOMPONENT_H_
#define BAYESNETCOMPONENT_H_

#include <GameEngine/config.h>
#include <GameEngine/GameComponent.h>
#include "config.h"

#ifndef BAYESNET_DISABLED
	#define _SECURE_SCL 0
	#include "smile.h"
#endif

class BayesNetComponent : public GameComponent
{
public:
	static GameComponent*  createComponent( GameEntity* owner );
	BayesNetComponent(GameEntity* owner);
	virtual ~BayesNetComponent();
	bool checkEvent(GameEvent* event) { return true; }
	void executeEvent(GameEvent* event) {}
	void loadFromXml(const XMLNode* description);

	void update();

	void setNewCulture( int culutre );
	void setNodeValue( const char* node_name, int value );
	double getNodeValue( const char* node_name, int value_index );
#ifndef BAYESNET_DISABLED
	DSL_network* getNetwork();
#else
	void* getNetwork();
#endif
	void updateNetwork();

private:
#ifndef BAYESNET_DISABLED
	///pointer to the local DSL Network
	DSL_network* bayesNet;
#else
	void* bayesNet;
#endif
};

#endif
        