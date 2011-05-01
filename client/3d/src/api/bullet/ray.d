module api.bullet.ray;

import api.bullet.pbody.rigid,
	type.cuda.types;

class Ray  {
	public:
	PBodyRigid collider;
	float3 worldPos;
}