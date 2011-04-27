module api.bullet.world.dynamics;

class WorldDynamics : WorldCollision {
	void onFrame(StopWatch delta);
	
	public:
	void add(PBodyRigid rigidBody);
	void del(PBodyRigid rigidBody);
}