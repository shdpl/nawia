module api.h3d.ray;

class Ray {
	public Intersection[] intersections;
	
	class Intersection {
		public:
		SGNode target;
		float distance;
		Point3D point;
	}
}