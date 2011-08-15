#include "AnimationSquirrel.h"
#include "GameEngine_Animations.h"
#include <string>
#include <GameEngine/GameEntity.h>
#include <GameEngine/GameWorld.h>
#include <GameEngine/GameModules.h>

#include "KeyframeAnimComponent.h"

void register_global(HSQUIRRELVM v,SQFUNCTION f,const char *fname)
{
    sq_pushroottable(v);
    sq_pushstring(v,fname,-1);
    sq_newclosure(v,f,0); //create a new function
    sq_createslot(v,-3); 
    sq_pop(v,1); //pops the root table    
}

void AnimSquirrel::registerFunctions(HSQUIRRELVM v)
{
	register_global(v,AnimSquirrel::playAnim,"Anim_playAnim");
	register_global(v,AnimSquirrel::isPlaying,"Anim_isPlaying");
	register_global(v,AnimSquirrel::updateAnim,"Anim_updateAnim");
	register_global(v,AnimSquirrel::getAnimLength,"Anim_getAnimLength");
	register_global(v,AnimSquirrel::getJobID,"Anim_getJobID");
	register_global(v,AnimSquirrel::getJobCount,"Anim_getJobCount");
}
int AnimSquirrel::playAnim(SQVM* v)
{
	int ID, stage, returnVal;
	returnVal = 0;
	const char* anim;
	float weight, duration, speed, timeoffset;
	SQInteger nargs = sq_gettop(v);
	if(nargs == 8)
	{
		if(sq_gettype(v,2) == OT_INTEGER &&
			sq_gettype(v,3) == OT_STRING &&
			sq_gettype(v,4) == OT_INTEGER)
		{
			sq_getinteger(v,2,&ID);
			sq_getinteger(v,4,&stage);
			sq_getstring(v,3,&anim);
			sq_getfloat(v,5,&weight);
			sq_getfloat(v,6,&duration);
			sq_getfloat(v,7,&speed);
			sq_getfloat(v,8,&timeoffset);
			returnVal = GameEngine::playAnim(ID,anim,stage,weight,duration,speed,timeoffset);
		}
	}
	sq_pushinteger(v,returnVal);
	return 1;
}
int AnimSquirrel::updateAnim(SQVM* v)
{
	const char* tChar;
	std::string tString;
	int ID,job;
	float value;
	float timeoffset;
	SQInteger nargs = sq_gettop(v);
	if(nargs >= 5)
	{
		sq_getinteger(v,2,&ID);
		sq_getinteger(v,3,&job);
		sq_getstring(v,4,&tChar);
		tString = tChar;
		sq_getfloat(v,5,&value);
		if(nargs == 6) sq_getfloat(v,6,&timeoffset);
		else timeoffset = 0.0f;
		if(!tString.empty())
		{
			if(_stricmp(tString.c_str(),"weight"))
			{
				GameEngine::updateAnim(ID,job,GameEngineAnimParams::Weight,value,timeoffset);
			}
			else if(_stricmp(tString.c_str(),"speed"))
			{
				GameEngine::updateAnim(ID,job,GameEngineAnimParams::Speed,value,timeoffset);
			}
			else if(_stricmp(tString.c_str(),"duration"))
			{
				GameEngine::updateAnim(ID,job,GameEngineAnimParams::Duration,value,timeoffset);
			}
		}
	}
	return 0;
}
int AnimSquirrel::isPlaying(SQVM* v)
{
	const char* tChar;
	int ID;
	bool retVal = false;
	SQInteger nargs = sq_gettop(v);
	if(nargs >= 3)
	{
		sq_getstring(v,3,&tChar);
		sq_getinteger(v,2,&ID);
		retVal = GameEngine::isPlaying(ID,tChar);
	}
	sq_pushbool(v,retVal);
	return 1;
}
int AnimSquirrel::getAnimLength(SQVM* v)
{
	const char* tChar;
	int ID;
	float retVal = -1.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs >= 3)
	{
		sq_getstring(v,3,&tChar);
		sq_getinteger(v,2,&ID);
		retVal = GameEngine::getAnimLength(ID,tChar);
	}
	sq_pushfloat(v,retVal);
	return 1;
}
int AnimSquirrel::getJobID(SQVM* v)
{
	const char* tChar;
	int ID;
	int retVal = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs >= 3)
	{
		sq_getstring(v,3,&tChar);
		sq_getinteger(v,2,&ID);
		KeyframeAnimComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(ID);
		if( entity && ( component = static_cast<KeyframeAnimComponent*>(entity->component("KeyframeAnimComponent")) ) != 0 )
		{
			retVal = component->getJobID(tChar);
		}
	}
	sq_pushinteger(v,retVal);
	return 1;
}
int AnimSquirrel::getJobCount(SQVM* v)
{
	int ID;
	int retVal = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs >= 2)
	{
		sq_getinteger(v,2,&ID);
		KeyframeAnimComponent* component = 0;
		GameEntity* entity = GameModules::gameWorld()->entity(ID);
		if( entity && ( component = static_cast<KeyframeAnimComponent*>(entity->component("KeyframeAnimComponent")) ) != 0 )
		{
			retVal = component->getJobCount();
		}
	}
	sq_pushinteger(v,retVal);
	return 1;
}