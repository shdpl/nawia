// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine of the University of Augsburg
// 
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************
//
#ifndef SOUND_LUA_H_
#define SOUND_LUA_H_

struct lua_State;

namespace SoundLua
{
	void registerLuaBindings( lua_State* L );
}

#endif