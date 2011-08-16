// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine of the University of Augsburg
// 
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************
#include <GameEngine/GameModules.h>
#include <GameEngine/GameComponentRegistry.h>

#include <iostream>

#include "TTSManager.h"
#include "TTSComponent.h"
#include "TTSLua.h"

#ifdef PLATFORM_WIN
#	 ifdef SAPICOMPONENT_EXPORTS
#       define SAPIPLUGINEXP extern "C" __declspec( dllexport )
#	 else
#       define SAPIPLUGINEXP extern "C" __declspec( dllimport )
#    endif
#else
#	 define SAPIPLUGINEXP 
#endif

struct lua_State;

SAPIPLUGINEXP void dllLoadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "Sapi", TTSComponent::createComponent );	
	// For compatibility reasons
	GameModules::componentRegistry()->registerComponent( "TTS", TTSComponent::createComponent );	
	GameModules::componentRegistry()->registerManager( TTSManager::instance() );	
}

SAPIPLUGINEXP void dllUnloadGamePlugin(void)
{
	GameModules::componentRegistry()->registerComponent( "Sapi", 0);	
	// For compatibility reasons
	GameModules::componentRegistry()->registerComponent( "TTS", 0 );	
	GameModules::componentRegistry()->unregisterManager( TTSManager::instance() );
	TTSManager::release();
}

SAPIPLUGINEXP void dllRegisterLuaStack( lua_State* L )
{
	TTSLua::registerLuaBindings( L );
}

