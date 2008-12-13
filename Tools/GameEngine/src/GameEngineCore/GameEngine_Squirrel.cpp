#include "GameEngine_Squirrel.h"
#include "GameEngine.h"
#include "GameModules.h"
#include "GameWorld.h"
#include "GamePlugInManager.h"
#include <GameEngine/utmath.h>
#include <string>

GAMEENGINE_API void GameEngine::registerSquirrelFunctions(SQVM* v)
{
	GameSquirrel::registerFunctions(v);
	GameModules::plugInManager()->registerSquirrelFunctions(v);
}
void register_global(HSQUIRRELVM v,SQFUNCTION f,const char *fname)
{
    sq_pushroottable(v);
    sq_pushstring(v,fname,-1);
    sq_newclosure(v,f,0); //create a new function
    sq_createslot(v,-3); 
    sq_pop(v,1); //pops the root table    
}

void GameSquirrel::registerFunctions(SQVM* v)
{
	register_global(v,GameSquirrel::init,"Core_init");
	register_global(v,GameSquirrel::release,"Core_release");
	register_global(v,GameSquirrel::loadScene,"Core_loadScene");
	register_global(v,GameSquirrel::entityWorldID,"Core_entityID");
	register_global(v,GameSquirrel::getEntityName,"Core_getEntityName");
	register_global(v,GameSquirrel::getEntityPropertyVec,"Core_getPropertyVec");
	register_global(v,GameSquirrel::getEntityPropertyS,"Core_getPropertyS");
	register_global(v,GameSquirrel::getEntityPropertyI,"Core_getPropertyI");
	register_global(v,GameSquirrel::getEntityPropertyF,"Core_getPropertyF");
	register_global(v,GameSquirrel::setEntityProperty,"Core_setProperty");
	register_global(v,GameSquirrel::createEntity,"Core_createEntity");
	register_global(v,GameSquirrel::removeEntity,"Core_removeEntity");
	register_global(v,GameSquirrel::setComponentData,"Core_setComponentData");
	register_global(v,GameSquirrel::update,"Core_update");
	register_global(v,GameSquirrel::componentNames,"Core_componentNames");
	register_global(v,GameSquirrel::fps,"Core_fps");
	register_global(v,GameSquirrel::timeStamp,"Core_timeStamp");
	register_global(v,GameSquirrel::currentTimeStamp,"Core_currentTimeStamp");
	register_global(v,GameSquirrel::setEnabled,"Core_setEnabled");
}
int GameSquirrel::init(SQVM* v)
{
	GameEngine::init();
	return 0;
}
int GameSquirrel::release(SQVM* v)
{
	GameEngine::release();
	return 0;
}
int GameSquirrel::loadScene(SQVM* v)
{
	const char* scene = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getstring(v,2,&scene);
		GameEngine::loadScene(scene);
	}
	return 0;
}
int GameSquirrel::entityWorldID(SQVM* v)
{
	int ID = 0;
	const char* name = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getstring(v,2,&name);
		ID = GameEngine::entityWorldID(name);
	}
	sq_pushinteger(v,ID);
	return 1;
}
int GameSquirrel::getEntityName(SQVM* v)
{
	int ID = 0;
	std::string name;
	GameEntity* tEnt = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&ID);
		tEnt = GameModules::gameWorld()->entity(ID);
	}
	if(tEnt)
	{
		name = tEnt->id();
	}
	sq_pushstring(v,name.c_str(),name.size());
	return 1;
}
int GameSquirrel::getEntityPropertyF(SQVM* v)
{
	int ID = 0;
	float fVal = 0.0f;
	const char* prop = 0;
	GameEntity* tEnt = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&ID);
		sq_getstring(v,3,&prop);
		tEnt = GameModules::gameWorld()->entity(ID);
	}
	if(tEnt)
	{
		fVal = tEnt->getPropertyFloat(prop);
	}
	sq_pushfloat(v,fVal);
	return 1;
}
int GameSquirrel::getEntityPropertyS(SQVM* v)
{
	int ID = 0;
	std::string sVal;
	const char* prop = 0;
	GameEntity* tEnt = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&ID);
		sq_getstring(v,3,&prop);
		tEnt = GameModules::gameWorld()->entity(ID);
	}
	if(tEnt)
	{
		sVal = tEnt->getPropertyString(prop);
	}
	sq_pushstring(v,sVal.c_str(),sVal.size());
	return 1;
}
int GameSquirrel::getEntityPropertyI(SQVM* v)
{
	int ID = 0;
	int iVal = 0;
	const char* prop = 0;
	GameEntity* tEnt = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&ID);
		sq_getstring(v,3,&prop);
		tEnt = GameModules::gameWorld()->entity(ID);
	}
	if(tEnt)
	{
		iVal = tEnt->getPropertyInteger(prop);
	}
	sq_pushinteger(v,iVal);
	return 1;
}
int GameSquirrel::getEntityPropertyVec(SQVM* v)
{
	int ID = 0;
	Vec3f tVec;
	int index = 0;
	const char* prop = 0;
	GameEntity* tEnt = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&ID);
		sq_getstring(v,3,&prop);
		tEnt = GameModules::gameWorld()->entity(ID);
	}
	if(tEnt)
	{
		tVec = tEnt->getPropertyVec3f(prop);
		sq_newarray(v,0);
		sq_pushfloat(v,tVec.x);
		sq_arrayappend(v,-2);
		sq_pushfloat(v,tVec.y);
		sq_arrayappend(v,-2);
		sq_pushfloat(v,tVec.z);
		sq_arrayappend(v,-2);
	}
	else
	{
		sq_newarray(v,0);
		sq_pushfloat(v,0.0f);
		sq_arrayappend(v,-2);
		sq_pushfloat(v,0.0f);
		sq_arrayappend(v,-2);
		sq_pushfloat(v,0.0f);
		sq_arrayappend(v,-2);
	}
	return 1;
}
int GameSquirrel::setEntityProperty(SQVM* v)
{
	int ID = 0;
	int iVal = 0;
	float x, y, z;
	const char* prop = 0;
	const char* tChar = 0;
	GameEntity* tEnt = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&ID);
		sq_getstring(v,3,&prop);
		tEnt = GameModules::gameWorld()->entity(ID);
		if(tEnt)
		{
			if(sq_gettype(v,4) == OT_FLOAT)
			{
				sq_getfloat(v,4,&x);
				//Could be a Vec or a Float
				if(nargs > 4)
				{
					//VEC
					sq_getfloat(v,5,&y);
					sq_getfloat(v,6,&z);
					tEnt->setProperty(prop,Vec3f(x,y,z));
				}
				tEnt->setProperty(prop,x);
			}
			if(sq_gettype(v,4) == OT_INTEGER)
			{
				sq_getinteger(v,4,&iVal);
				tEnt->setProperty(prop,iVal);
			}
			if(sq_gettype(v,4) == OT_STRING)
			{
				sq_getstring(v,4,&tChar);
				tEnt->setProperty(prop,tChar);
			}
			if(sq_gettype(v,4) == OT_ARRAY)
			{
				sq_get(v,4);
				sq_pushinteger(v,0);
				sq_getfloat(v,-2,&x);
				sq_pushinteger(v,1);
				sq_getfloat(v,-2,&y);
				sq_pushinteger(v,2);
				sq_getfloat(v,-2,&z);
				tEnt->setProperty(prop,Vec3f(x,y,z));
			}
		}
	}
	return 0;
}
int GameSquirrel::createEntity(SQVM* v)
{
	const char* tChar = 0;
	int ID = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getstring(v,2,&tChar);
		ID = GameEngine::createGameEntity(tChar);
	}
	sq_pushinteger(v,ID);
	return 1;
}
int GameSquirrel::removeEntity(SQVM* v)
{
	int ID = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&ID);
		GameEngine::removeGameEntity(ID);
	}
	return 0;
}
int GameSquirrel::setComponentData(SQVM* v)
{
	const char* tChar = 0;
	const char* comp = 0;
	int ID = 0;
	SQBool retVal = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&ID);
		sq_getstring(v,3,&comp);
		sq_getstring(v,4,&tChar);
		retVal = GameEngine::setComponentData(ID,comp,tChar);
	}
	sq_pushbool(v,retVal);
	return 1;
}
int GameSquirrel::update(SQVM* v)
{
	GameEngine::update();
	return 0;
}
int GameSquirrel::componentNames(SQVM* v)
{
	int size = GameEngine::componentNames(0,0);
	char* tChar = new char[size+5];
	GameEngine::componentNames(tChar,size+5);
	std::string tString = tChar;
	sq_pushstring(v,tString.c_str(),tString.size());
	delete[] tChar;
	return 1;
}
int GameSquirrel::fps(SQVM* v)
{
	float fps = GameEngine::FPS();
	sq_pushfloat(v,fps);
	return 1;
}
int GameSquirrel::timeStamp(SQVM* v)
{
	float tS = GameEngine::timeStamp();
	sq_pushfloat(v,tS);
	return 1;
}
int GameSquirrel::currentTimeStamp(SQVM* v)
{
	float cTS = GameEngine::currentTimeStamp();
	sq_pushfloat(v,cTS);
	return 1;
}
int GameSquirrel::setEnabled(SQVM* v)
{
	int ID = 0;
	SQBool state = 0;
	SQBool retVal = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&ID);
		sq_getbool(v,3,&state);
		GameEngine::setEnabled(ID,state);
	}
	return 0;
}