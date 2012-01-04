/*
 * Copyright (C) 2010 Mariusz 'shd' Gliwiński.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

module impl.bullet.pe.world.dynamics;

public import
	impl.bullet.pe.world.collision,
	impl.bullet.pe.pbody.rigid,
	type.cuda.types;

private import
	msg._frame.ready,
	msg.listener,
	std.stdio,
	std.array,
	ee.world;
	
private import
	impl.bullet.bullet;
	

class WorldDynamics : WorldCollision, IMsgListener, World {
	mixin InjectMsgProvider!MsgFrameReady _lstnrReady;
	public:
	struct Options {	//TODO: wrap
		real[3] gravity = [0, -9.80665, 0];
		auto configuration = typeid(btDefaultCollisionConfiguration);
		/// btDbvtBroadphase, btAxisSweep3, bt32BitAxisSweep3 or btCudaBroadphase
		auto broadphase = typeid(btDbvtBroadphase);
		/// btParallelConstraintSolver or btSequentialImpulseConstraintSolver
		auto solver = typeid(btSequentialImpulseConstraintSolver);
	}
	
	private:
	PBodyRigid[] _bodies;
	btDiscreteDynamicsWorld _world;
	btBroadphaseInterface _bphase;
	btCollisionConfiguration _config;
	btDispatcher _dispatcher;
	btConstraintSolver _csolver;
	btVector3 _gravity;
	
	public:
	this()
	{
		_bodies = [];
	}
	void init(Options o = Options()) {
		_config = cast(btCollisionConfiguration) o.configuration.create;
		
		_dispatcher = new btCollisionDispatcher(_config);
		_bphase = cast(btBroadphaseInterface) o.broadphase.create;
		_csolver = cast(btConstraintSolver) o.solver.create;
		
		_world = new btDiscreteDynamicsWorld(_dispatcher, _bphase, _csolver, _config);
		
		_gravity = new btVector3(o.gravity[0], o.gravity[1], o.gravity[2]);
		_world.setGravity(_gravity);
		
		_lstnrReady.register(this);
	}
	
	~this()
	{
	}
	
	void dispose()
	{
		foreach(b; this._bodies)
		{
			del(b);
		}
		_lstnrReady.unregister(this);
	}
	
	public:
	PBodyRigid add(T, E...)(E args) if (is(T : PBodyRigid)) {
		auto ret = new T();
		ret.init(args);
		_bodies ~= ret;
		_world.addRigidBody(ret.btHandle());
		
		return ret;
	}
	
	void del(PBodyRigid b) {
		_world.removeRigidBody(b.btHandle());
		b.clear();
	}
	
	void handle(Variant msg) {
		assert(msg.type == typeid(MsgFrameReady));
		auto m = msg.peek!MsgFrameReady;
		_world.stepSimulation(m.delta.to!("seconds", float));
	}
}
