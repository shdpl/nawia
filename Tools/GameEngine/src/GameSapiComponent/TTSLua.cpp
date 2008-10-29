// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007
// Programmers: Volker Wiendl, Nikolaus Bee
// 
// This file is part of the GameEngine of the University of Augsburg
// 
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************
#include "TTSLua.h"

#include "GameEngine_SAPI.h"

#include <GameEngine/GameEngine.h>

extern "C"
{
#include "Lua/lua.h"
#include "Lua/lualib.h"
#include "Lua/lauxlib.h"
}

namespace TTSLua
{
	int GameEngine_speak(lua_State* L)
		{
			const int params = lua_gettop(L);
			if (params < 2)
				luaL_error(L, "not enough parameters:\nSyntax: speak(entityWorldID, sentence)");
			else
			{
				unsigned int entityWorldID = 0;
				if( lua_isstring(L, 1) )
					entityWorldID = GameEngine::entityWorldID( luaL_checkstring(L,1) );
				else
					entityWorldID = static_cast<unsigned int>(luaL_checkint( L, 1 ));
				if( entityWorldID == 0 )
				{
					luaL_error(L, "Entity %s not found in GameWorld", luaL_checkstring(L, 1));
					return 0;
				}

				const char* sentence = luaL_checkstring(L, 2);
				GameEngine::speak(entityWorldID, sentence);
			}
			return 0;
		}


	static const luaL_reg gameengine_meta_methods[] = {
		{0,0}
	};

	const luaL_reg gameengine_methods[] = {
		{"speak",						GameEngine_speak},
		{0,0}
	};

	#define newtable(L) (lua_newtable(L), lua_gettop(L))

	void registerLuaBindings(lua_State *L)
	{
		int metatable, methods;

		lua_pushliteral(L, "GameEngine_SAPI");         /* name of GameEngine table */
		methods   = newtable(L);           /* GameEngine methods table */
		metatable = newtable(L);           /* GameEngine metatable */
		lua_pushliteral(L, "__index");     /* add index event to metatable */
		lua_pushvalue(L, methods);
		lua_settable(L, metatable);        /* metatable.__index = methods */
		lua_pushliteral(L, "__metatable"); /* hide metatable */
		lua_pushvalue(L, methods);
		lua_settable(L, metatable);        /* metatable.__metatable = methods */
		luaL_openlib(L, 0, TTSLua::gameengine_meta_methods,  0); /* fill metatable */
		luaL_openlib(L, 0, TTSLua::gameengine_methods, 1); /* fill GameEngine methods table */
		lua_settable(L, LUA_GLOBALSINDEX); /* add GameEngine to globals */
	}

}