#ifndef _GameEngine_Squirrel_H_
#define _GameEngine_Squirrel_H_

#include "../../../Dependencies/SQUIRREL2/include/squirrel.h"

void register_global(HSQUIRRELVM v,SQFUNCTION f,const char *fname);

namespace GameSquirrel
{
	void registerFunctions(SQVM* v);
	
	int init(SQVM* v);
	int release(SQVM* v);
	int loadScene(SQVM* v);
	int entityWorldID(SQVM* v);
	int getEntityName(SQVM* v);
	int getEntityPropertyF(SQVM* v);
	int getEntityPropertyS(SQVM* v);
	int getEntityPropertyVec(SQVM* v);
	int getEntityPropertyI(SQVM* v);
	int getEntityPropertyB(SQVM* v);
	int setEntityProperty(SQVM* v);
	int createEntity(SQVM* v);
	int removeEntity(SQVM* v);
	int setComponentData(SQVM* v);
	int update(SQVM* v);
	int componentNames(SQVM* v);
	int fps(SQVM* v);
	int timeStamp(SQVM* v);
	int currentTimeStamp(SQVM* v);
	int setEnabled(SQVM* v);
};

#endif