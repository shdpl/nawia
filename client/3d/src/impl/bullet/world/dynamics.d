module api.bullet.world.dynamics;

import std.datetime;

import api.bullet.world.collision,
	api.bullet.pbody.rigid;

class WorldDynamics : WorldCollision {
	void onFrame(StopWatch delta) {}
	
	public:
	void add(PBodyRigid rigidBody) {}
	void del(PBodyRigid rigidBody) {}
}