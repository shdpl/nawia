module h3d.ge.res.ray;


import ge.res.h3d,
	ge.res.entity.entity,
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