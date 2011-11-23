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
// GameEngine Bullet Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "PhysicsLua.h"

#include "GameEngine_BulletPhysics.h"

extern "C"
{
#include "Lua/lua.h"
#include "Lua/lualib.h"
#include "Lua/lauxlib.h"
}

namespace PhysicsLua
{
		int GameEngine_setEntityPhysicsEnabled(lua_State* L)
		{
			const int params = lua_gettop(L);
			if (params < 2)
				luaL_error(L, "not enough parameters:\nSyntax: setEntityPhysicsEnabled(entityId, enabled)");
			else
			{
				unsigned int entityID =  (unsigned int) luaL_checkinteger(L, 1);
				int enabled = luaL_checkint(L, 2);
				GameEngine::setEntityPhysicsEnabled(entityID, enabled != 0);
			}
			return 0;
		}

		int GameEngine_applyEntityPhysicsForce(lua_State* L)
		{
			const int params = lua_gettop(L);
			if (params < 7)
				luaL_error(L, "not enough parameters:\nSyntax: applyEntityPhysicsForce(entityId, fx, fy, fz, dx, dy, dz)");
			else
			{
				const char* entityID = luaL_checkstring(L, 1);
				float fx = static_cast<float>( luaL_checknumber(L, 2) );
				float fy = static_cast<float>( luaL_checknumber(L, 3) );
				float fz = static_cast<float>( luaL_checknumber(L, 4) );
				float dx = static_cast<float>( luaL_checknumber(L, 5) );
				float dy = static_cast<float>( luaL_checknumber(L, 6) );
				float dz = static_cast<float>( luaL_checknumber(L, 7) );
				GameEngine::applyEntityPhysicsForce(entityID, fx, fy, fz, dx, dy, dz);
			}
			return 0;
		}

		int GameEngine_applyEntityPhysicsImpulse(lua_State* L)
		{
			const int params = lua_gettop(L);
			if (params < 7)
				luaL_error(L, "not enough parameters:\nSyntax: applyEntityPhysicsImpulse(entityId, fx, fy, fz, dx, dy, dz)");
			else
			{
				const char* entityID = luaL_checkstring(L, 1);
				float fx = static_cast<float>( luaL_checknumber(L, 2) );
				float fy = static_cast<float>( luaL_checknumber(L, 3) );
				float fz = static_cast<float>( luaL_checknumber(L, 4) );
				float dx = static_cast<float>( luaL_checknumber(L, 5) );
				float dy = static_cast<float>( luaL_checknumber(L, 6) );
				float dz = static_cast<float>( luaL_checknumber(L, 7) );
				GameEngine::applyEntityPhysicsImpulse(entityID, fx, fy, fz, dx, dy, dz);
			}
			return 0;		
		}

		int GameEngine_resetEntityPhysicsForces(lua_State* L)
		{
			const int params = lua_gettop(L);
			if (params < 1)
				luaL_error(L, "not enough parameters:\nSyntax: speak(entityId)");
			else
			{
				const char* entityID = luaL_checkstring(L, 1);
				GameEngine::resetEntityPhysicsForces(entityID);
			}
			return 0;
		}
		

	static const luaL_reg gameengine_meta_methods[] = {
		{0,0}
	};

	const luaL_reg gameengine_methods[] = {
		{"applyEntityPhysicsForce",		GameEngine_applyEntityPhysicsForce},
		{"applyEntityPhysicsImpulse",	GameEngine_applyEntityPhysicsImpulse},
		{"setEntityPhysicsEnabled",		GameEngine_setEntityPhysicsEnabled},
		{"resetEntityPhysicsForces",	GameEngine_resetEntityPhysicsForces},
		{0,0}
	};

	#define newtable(L) (lua_newtable(L), lua_gettop(L))

	void registerLuaBindings(lua_State *L)
	{
		int metatable, methods;

		lua_pushliteral(L, "GameEngine_Physics");         /* name of GameEngine table */
		methods   = newtable(L);           /* GameEngine methods table */
		metatable = newtable(L);           /* GameEngine metatable */
		lua_pushliteral(L, "__index");     /* add index event to metatable */
		lua_pushvalue(L, methods);
		lua_settable(L, metatable);        /* metatable.__index = methods */
		lua_pushliteral(L, "__metatable"); /* hide metatable */
		lua_pushvalue(L, methods);
		lua_settable(L, metatable);        /* metatable.__metatable = methods */
		luaL_openlib(L, 0, PhysicsLua::gameengine_meta_methods,  0); /* fill metatable */
		luaL_openlib(L, 0, PhysicsLua::gameengine_methods, 1); /* fill GameEngine methods table */
		lua_settable(L, LUA_GLOBALSINDEX); /* add GameEngine to globals */
	}

}