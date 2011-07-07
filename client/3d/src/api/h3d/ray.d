module api.h3d.ray;


import api.h3d.h3d,
	api.h3d.entity.entity,
	type.cuda.types;

struct Ray {
	public Intersection[] intersections;
	
	struct Intersection {
		public:
		H3DSGNode target;
		float distance;
		float3 point;
	}
}