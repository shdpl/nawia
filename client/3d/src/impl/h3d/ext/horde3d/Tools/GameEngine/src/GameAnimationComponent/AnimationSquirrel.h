#ifndef _AnimationSquirrel_H_
#define _AnimationSquirrel_H_

#include "GameEngine_Animations.h"
#include "../../../Dependencies/SQUIRREL2/include/squirrel.h"

void register_global(HSQUIRRELVM v,SQFUNCTION f,const char *fname);

namespace AnimSquirrel
{
	void registerFunctions(HSQUIRRELVM v);
	int playAnim(SQVM* v);
	int updateAnim(SQVM* v);
	int isPlaying(SQVM* v);
	int getAnimLength(SQVM* v);
	int getJobID(SQVM* v);
	int getJobCount(SQVM* v);
};

#endif