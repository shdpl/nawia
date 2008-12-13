#include "Freelist.h"
#include "any.h"
#include "../scripting/scriptPalette.h"

void test()
{
	anyType* t;
	t = new anyFloat(0.5f);
	std::string p;
	p = anyToString(t);
	scalingFreeList<float> tim(2,1);
	float *a,*b,*c, *d;
	a = tim.NewInstance();
	b = tim.NewInstance();
	c = tim.NewInstance();
	d = tim.NewInstance();
	tim.FreeInstance(a);
	tim.FreeInstance(b);
	tim.FreeInstance(c);
	tim.FreeInstance(d);
}