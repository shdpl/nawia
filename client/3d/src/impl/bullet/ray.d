module pe.ray;

import pe.pbody.rigid,
	type.cuda.types;

class Ray  {
	public:
	PBodyRigid collider;
	float3 worldPos;
}