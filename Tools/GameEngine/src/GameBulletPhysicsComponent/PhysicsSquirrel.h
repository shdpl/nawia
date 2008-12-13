#ifndef _PhysicsSquirrel_H_
#define _PhysicsSquirrel_H_
#include "../../../Dependencies/SQUIRREL2/include/squirrel.h"

struct SQVM;

namespace PhysicsSquirrel
{
	void registerSquirrelBindings(SQVM* v);
	int setEntityPhysicsEnabled(SQVM* v);
	int applyEntityPhysicsForce(SQVM* v);
	int applyEntityPhysicsImpulse(SQVM* v);
	int resetEntityPhysicsForces(SQVM* v);
	int castRay(SQVM* v);
}

#endif