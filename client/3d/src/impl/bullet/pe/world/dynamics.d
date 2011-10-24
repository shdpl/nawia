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
	impl.bullet.pe.pbody.rigid;

private import
	msg._frame.ready,
	msg.listener;
	
private import
	impl.bullet.bullet;
	

class WorldDynamics : WorldCollision, IMsgListener {
	mixin InjectMsgProvider!MsgFrameReady _lstnrReady;
	btDiscreteDynamicsWorld _world;
	btBroadphaseInterface _bphase;
	btCollisionConfiguration _config;
	btDispatcher _dispatcher;
	btConstraintSolver _csolver;
	
	public:
	this(real gravity = 10) {
		_config = new btDefaultCollisionConfiguration;
		_dispatcher = new btCollisionDispatcher(_config);
		
		_bphase = new btDbvtBroadphase;
		_csolver = new btSequentialImpulseConstraintSolver;
		_world = new btDiscreteDynamicsWorld(_dispatcher, _bphase, _csolver, _config);
		
		_world.setGravity(new btVector3(0, -gravity, 0)); //TODO: alternate worlds with different gravity?
		
		_lstnrReady.register(this);
	}
	
	~this() {
		_lstnrReady.unregister(this);
	}
	
	public:
	PBodyRigid add(T)() if (is(T : PBodyRigid)) {
		auto ret = new T();
		ret.init;
		return ret;
	}
	void del(PBodyRigid b) {
		b.clear();
	}
	
	void handle(Variant msg) {
		assert(msg.type == typeid(MsgFrameReady));
		auto m = msg.peek!MsgFrameReady;
		_world.stepSimulation(m.delta.to!("seconds", float));	//TODO: check if has parts
		_world.debugDrawWorld;	//FIXME
	}
}
