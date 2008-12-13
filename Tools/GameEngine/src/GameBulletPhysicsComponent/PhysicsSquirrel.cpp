#include "PhysicsSquirrel.h"
#include "GameEngine_BulletPhysics.h"
#include "../../../Dependencies/SQUIRREL2/include/squirrel.h"
#include <GameEngine/GameEngine.h>

void PhysicsSquirrel::registerSquirrelBindings(SQVM* v)
{
	sq_pushroottable(v);
	sq_pushstring(v,"Physics_applyEntityPhysicsForce",-1);
	sq_newclosure(v,PhysicsSquirrel::applyEntityPhysicsForce,0); //create a new function
	sq_createslot(v,-3); 
    sq_pop(v,1); //pops the root table    

	sq_pushroottable(v);
    sq_pushstring(v,"Physics_applyEntityPhysicsImpulse",-1);
	sq_newclosure(v,PhysicsSquirrel::applyEntityPhysicsImpulse,0); //create a new function
    sq_createslot(v,-3); 
    sq_pop(v,1); //pops the root table    

	sq_pushroottable(v);
    sq_pushstring(v,"Physics_resetEntityPhysicsForces",-1);
	sq_newclosure(v,PhysicsSquirrel::resetEntityPhysicsForces,0); //create a new function
    sq_createslot(v,-3); 
    sq_pop(v,1); //pops the root table    

	sq_pushroottable(v);
    sq_pushstring(v,"Physics_setEntityPhysicsEnabled",-1);
	sq_newclosure(v,PhysicsSquirrel::setEntityPhysicsEnabled,0); //create a new function
    sq_createslot(v,-3); 
    sq_pop(v,1); //pops the root table    

	sq_pushroottable(v);
    sq_pushstring(v,"Physics_castRay",-1);
	sq_newclosure(v,PhysicsSquirrel::castRay,0); //create a new function
    sq_createslot(v,-3); 
    sq_pop(v,1); //pops the root table    
}
int PhysicsSquirrel::applyEntityPhysicsForce(SQVM* v)
{
	SQInteger nargs = sq_gettop(v); //number of arguments
	if(nargs == 8)
	{
		if(sq_gettype(v,2) == OT_INTEGER)
		{
			int p;
			const char* id;
			float a,b,c,d,e,f;
			sq_getinteger(v,2,&p);
			id = GameEngine::entityName(p);
			sq_getfloat(v,3,&a);
			sq_getfloat(v,4,&b);
			sq_getfloat(v,5,&c);
			sq_getfloat(v,6,&d);
			sq_getfloat(v,7,&e);
			sq_getfloat(v,8,&f);
			GameEngine::applyEntityPhysicsForce(id,a,b,c,d,e,f);
		}
	}
	return 0;
}
int PhysicsSquirrel::resetEntityPhysicsForces(SQVM* v)
{
	SQInteger nargs = sq_gettop(v); //number of arguments
	if(nargs == 2)
	{
		int p;
		const char* id;
		sq_getinteger(v,2,&p);
		id = GameEngine::entityName(p);
		sq_getstring(v,2,&id);
		GameEngine::resetEntityPhysicsForces(id);
	}
	return 0;

}
int PhysicsSquirrel::applyEntityPhysicsImpulse(SQVM* v)
{
	SQInteger nargs = sq_gettop(v); //number of arguments
	if(nargs == 8)
	{
		int p;
		float a,b,c,d,e,f;
		const char* id;
		sq_getinteger(v,2,&p);
		sq_getfloat(v,3,&a);
		sq_getfloat(v,4,&b);
		sq_getfloat(v,5,&c);
		sq_getfloat(v,6,&d);
		sq_getfloat(v,7,&e);
		sq_getfloat(v,8,&f);
		id = GameEngine::entityName(p);
		GameEngine::applyEntityPhysicsImpulse(id,a,b,c,d,e,f);
	}
	return 0;
}
int PhysicsSquirrel::setEntityPhysicsEnabled(SQVM* v)
{
	SQInteger nargs = sq_gettop(v); //number of arguments
	if(nargs == 3)
	{
		if(sq_gettype(v,2) == OT_INTEGER && sq_gettype(v,3) == OT_INTEGER)
		{
			int id, val;
			sq_getinteger(v,2,&id);
			sq_getinteger(v,3,&val);
			GameEngine::setEntityPhysicsEnabled(id,val);
		}
	}
	return 0;
}

int PhysicsSquirrel::castRay(SQVM* v)
{
	int retVal = 0;
	float x,y,z,dx,dy,dz;
	SQBool state = false;
	float pos[3], normal[3];
	SQInteger nargs = sq_gettop(v);
	if(nargs > 6)
	{
		sq_getfloat(v,2,&x);
		sq_getfloat(v,3,&y);
		sq_getfloat(v,4,&z);
		sq_getfloat(v,5,&dx);
		sq_getfloat(v,6,&dx);
		sq_getfloat(v,7,&dx);
		if(nargs > 7) sq_getbool(v,8,&state);
		if(state)
		{
			retVal = GameEngine::physicsRay(x,y,z,dx,dy,dz,&pos[0],&normal[0]);
			sq_newarray(v,7);
			sq_pushinteger(v,retVal);
			sq_set(v,-2);
			sq_pushfloat(v,pos[0]);
			sq_set(v,-2);
			sq_pushfloat(v,pos[1]);
			sq_set(v,-2);
			sq_pushfloat(v,pos[2]);
			sq_set(v,-2);
			sq_pushfloat(v,normal[0]);
			sq_set(v,-2);
			sq_pushfloat(v,normal[1]);
			sq_set(v,-2);
			sq_pushfloat(v,normal[2]);
			sq_set(v,-2);
			sq_push(v,-1);
			return 1;
		}
		else
		{
			retVal = GameEngine::physicsRay(x,y,z,dx,dy,dz);
		}
	}
	sq_pushinteger(v,retVal);
	return 1;
}