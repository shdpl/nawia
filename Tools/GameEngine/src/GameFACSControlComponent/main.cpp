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
#include <GameEngine/GameModules.h>
#include <GameEngine/GameComponentRegistry.h>

#include "FACSControlManager.h"
#include "FACSControlComponent.h"

#ifdef PLATFORM_WIN
#	 ifdef FACSCONTROLCOMPONENT_EXPORTS
#       define FACSCONTROLPLUGINEXP extern "C" __declspec( dllexport )
#	 else
#       define FACSCONTROLPLUGINEXP extern "C" __declspec( dllimport )
#    endif
#else
#	 define FACSCONTROLPLUGINEXP extern "C" 
#endif

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


