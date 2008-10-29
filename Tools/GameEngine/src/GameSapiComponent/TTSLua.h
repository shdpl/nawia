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
#ifndef TTS_LUA_H_
#define TTS_LUA_H_

struct lua_State;

namespace TTSLua
{
	void registerLuaBindings( lua_State* L );
}

#endif