module api.bullet.pbody.rigid;

class PBodyRigid {
	private:
	plRigidBodyHandle _handle;
	
	public:
	void init(void* userData, float mass, Shape shape);
	void clear() {
		plDeleteRigidBody(_handle);
	}
	Transform3D matrix();
	void matrix(Transform3D matrix);
	
	Vector3D translation();
	void translation(Vector3D translation);
	
	Rotation3D rotation();
	void rotation(Rotation3D rotation);
}