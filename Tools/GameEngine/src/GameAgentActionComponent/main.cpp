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
#include "GameEngine_AgentAction.h"

#include <GameEngine/GameModules.h>
#include <GameEngine/GameComponentRegistry.h>

#include "AgentActionManager.h"
#include "AgentActionComponent.h"

AGENTACTIONPLUGINEXP void dllLoadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "AgentAction", AgentActionComponent::createComponent );
	GameModules::componentRegistry()->registerManager( AgentActionManager::instance() );
}

AGENTACTIONPLUGINEXP void dllUnloadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "AgentAction", 0);
	GameModules::componentRegistry()->unregisterManager( AgentActionManager::instance() );
	AgentActionManager::release();
}
        