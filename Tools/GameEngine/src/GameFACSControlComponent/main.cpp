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
#include "GameEngine_FACSControl.h"

#include <GameEngine/GameModules.h>
#include <GameEngine/GameComponentRegistry.h>

#include "FACSControlManager.h"
#include "FACSControlComponent.h"

FACSCONTROLPLUGINEXP void dllLoadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "FACSControl", FACSControlComponent::createComponent );
	GameModules::componentRegistry()->registerManager( FACSControlManager::instance() );	
}

FACSCONTROLPLUGINEXP void dllUnloadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "FACSControl", 0);
	GameModules::componentRegistry()->unregisterManager( FACSControlManager::instance() );
	FACSControlManager::release();
}


