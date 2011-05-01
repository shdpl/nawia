module api.bullet.pbody.rigid;

import api.bullet.shape.shape,
	type.cuda.types;

class PBodyRigid {
	private:
	//plRigidBodyHandle _handle;
	
	public:
	void init(void* userData, float mass, Shape shape);
	void clear() {
		//plDeleteRigidBody(_handle);
	}
	float3 matrix();
	void matrix(float3 matrix);
	
	float3 translation();
	void translation(float3 translation);
	
	float4 rotation();
	void rotation(float4 rotation);
}