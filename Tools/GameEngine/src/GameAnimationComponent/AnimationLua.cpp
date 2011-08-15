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
// GameEngine Animation Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "AnimationLua.h"
#include "GameEngine_Animations.h"

#include <GameEngine/GameEngine.h>

extern "C"
{
#include "Lua/lua.h"
#include "Lua/lualib.h"
#include "Lua/lauxlib.h"
}

namespace AnimationLua
{

		int GameEngine_playAnim(lua_State* L)
		{
			const int params = lua_gettop(L);
			if (params < 2)
			{
				luaL_error(L, "not enough parameters:\nSyntax: playAnim(entityID, animation, stage = 0, weight = 1, duration = -1, speed = 30, timeoffset = 0)");
				return 0;
			}
			else
			{
				unsigned int entityWorldID = 0;
				if( lua_type(L, 1) == LUA_TSTRING )
					entityWorldID = GameEngine::entityWorldID( luaL_checkstring(L,1) );
				else
					entityWorldID = static_cast<unsigned int>(luaL_checkint( L, 1 ));
				if( entityWorldID == 0 )
				{
					luaL_error(L, "Entity %s not found in GameWorld", luaL_checkstring(L, 1));
					return 0;
				}
				const char* animation = luaL_checkstring(L, 2);
				int stage = 0;
				float weight = 1;
				float duration = -1;
				float speed = 30; // fps
				float timeoffset = 0;
				if (params > 2)
					stage = luaL_checkint(L, 3);
				if (params > 3)
					weight = static_cast<float>(luaL_checknumber(L, 4));
				if (params > 4)
					duration = static_cast<float>(luaL_checknumber(L, 5));
				if (params > 5)
					speed = static_cast<float>(luaL_checknumber(L, 6));
				if (params > 6)
					timeoffset = static_cast<float>(luaL_checknumber(L, 7));
				lua_pushinteger(L, GameEngine::playAnim(entityWorldID, animation, stage, weight, duration, speed, timeoffset));
				return 1;
			}
		}

		int GameEngine_updateAnim(lua_State* L)
		{
			const int params = lua_gettop(L);
			if (params < 4)
			{
				luaL_error(L, "not enough parameters:\nSyntax: updateAnim(entityID, animationID, paramType, value, timeoffset = 0)");
			}
			else
			{
				unsigned int entityWorldID = 0;
				if( lua_type(L, 1) == LUA_TSTRING )
					entityWorldID = GameEngine::entityWorldID( luaL_checkstring(L,1) );
				else
					entityWorldID = static_cast<unsigned int>(luaL_checkint( L, 1 ));
				if( entityWorldID == 0 )
				{
					luaL_error(L, "Entity %s not found in GameWorld", luaL_checkstring(L, 1));
					return 0;
				}
				const int jobID = luaL_checkint(L, 2);
				const int paramType = luaL_checkint(L, 3);
				const float value = (float) luaL_checknumber(L, 4);
				float timeoffset = 0;
				if (params > 4)
					timeoffset = (float) luaL_checknumber(L, 5);
				GameEngine::updateAnim(entityWorldID, jobID, (GameEngineAnimParams::List) paramType, value, timeoffset);
			}
			return 0;
		}

		int GameEngine_isPlaying(lua_State* L)
		{
			const int params = lua_gettop(L);
			if (params < 2)
			{
				luaL_error(L, "not enough parameters:\nSyntax: isPlaying( entityID/entityWorldID, animationName )");
			}
			else
			{
				unsigned int entityWorldID = 0;
				if( lua_type(L, 1) == LUA_TSTRING )
					entityWorldID = GameEngine::entityWorldID( luaL_checkstring(L,1) );
				else
					entityWorldID = static_cast<unsigned int>(luaL_checkint( L, 1 ));
				if( entityWorldID == 0 )
				{
					luaL_error(L, "Entity %s not found in GameWorld", luaL_checkstring(L, 1));
					return 0;
				}
				const char* animation = luaL_checkstring(L, 2);								
				lua_pushboolean( L, GameEngine::isPlaying(entityWorldID, animation));
			}
			return 1;
		}




	static const luaL_reg gameengine_meta_methods[] = {
		{0,0}
	};

	const luaL_reg gameengine_methods[] = {
		{"playAnim",					GameEngine_playAnim},
		{"updateAnim",					GameEngine_updateAnim},	
		{"isPlaying", 					GameEngine_isPlaying},	
		{0,0}
	};

	#define newtable(L) (lua_newtable(L), lua_gettop(L))

	void registerLuaBindings(lua_State *L)
	{
		int metatable, methods;

		lua_pushliteral(L, "GameEngine_Animations");         /* name of GameEngine table */
		methods   = newtable(L);           /* GameEngine methods table */
		metatable = newtable(L);           /* GameEngine metatable */
		lua_pushliteral(L, "__index");     /* add index event to metatable */
		lua_pushvalue(L, methods);
		lua_settable(L, metatable);        /* metatable.__index = methods */
		lua_pushliteral(L, "__metatable"); /* hide metatable */
		lua_pushvalue(L, methods);
		lua_settable(L, metatable);        /* metatable.__metatable = methods */
		luaL_openlib(L, 0, AnimationLua::gameengine_meta_methods,  0); /* fill metatable */
		luaL_openlib(L, 0, AnimationLua::gameengine_methods, 1); /* fill GameEngine methods table */
		lua_settable(L, LUA_GLOBALSINDEX); /* add GameEngine to globals */
	}

}