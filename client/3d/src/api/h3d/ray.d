module api.h3d.ray;

import horde3d;

import api.h3d.node,
	type.cuda.types;

class Ray {
	public Intersection[] intersections;
	
	class Intersection {
		public:
		H3DNode target;
		float distance;
		float3 point;
	}
}