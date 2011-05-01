module api.h3d.ray;

import horde3d;

import api.h3d.sgnode,
	type.cuda.types;

class Ray {
	public Intersection[] intersections;
	
	class Intersection {
		public:
		SGNode target;
		float distance;
		float3 point;
	}
}