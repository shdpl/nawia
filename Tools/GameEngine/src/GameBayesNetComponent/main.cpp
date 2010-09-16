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
#include "GameEngine_BayesNet.h"

#include <GameEngine/GameModules.h>
#include <GameEngine/GameComponentRegistry.h>

#include "BayesNetManager.h"
#include "BayesNetComponent.h"

BAYESNETPLUGINEXP void dllLoadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "BayesNet", BayesNetComponent::createComponent );
	GameModules::componentRegistry()->registerManager( BayesNetManager::instance() );
}

BAYESNETPLUGINEXP void dllUnloadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "BayesNet", 0);
	GameModules::componentRegistry()->unregisterManager( BayesNetManager::instance() );
	BayesNetManager::release();
}
        