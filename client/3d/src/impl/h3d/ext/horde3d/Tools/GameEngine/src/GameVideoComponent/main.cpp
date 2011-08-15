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
// *************************************************************************************************
//


// ****************************************************************************************
//
// GameEngine Video Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Felix Kistler
// 
// ****************************************************************************************
#include <GameEngine/GameModules.h>
#include <GameEngine/GameComponentRegistry.h>

#include "VideoManager.h"
#include "VideoComponent.h"

#ifdef PLATFORM_WIN
#    define VIDEOPLUGINEXP extern "C" __declspec( dllexport )
#else
#	 define VIDEOPLUGINEXP extern "C"
#endif

VIDEOPLUGINEXP void dllLoadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "Video", VideoComponent::createComponent );
	GameModules::componentRegistry()->registerManager( VideoManager::instance() );
}

VIDEOPLUGINEXP void dllUnloadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "Video", 0);
	GameModules::componentRegistry()->unregisterManager( VideoManager::instance() );
	VideoManager::release();
}
        