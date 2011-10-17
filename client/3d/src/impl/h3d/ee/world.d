module impl.h3d.ee.world;

private import
	type.cords.world,
	impl.h3d.h3d,
	msg.provider,
	msg._ee.world.init,
	impl.bullet.pe.world.dynamics;
	
public import impl.h3d.ge.component.component;

class World : Component, IMsgProvider {
	mixin InjectMsgListener!MsgWorldInit _prvdrInit;
	WorldDynamics _peWorld;
	
	
	this() {
		this.id = cast(H3DNode) H3DRootNode;
		super();
		_prvdrInit.register(this);
		_prvdrInit.deliver(MsgWorldInit());
		
		_peWorld = new WorldDynamics;
	}
	
	~this() {
		_prvdrInit.unregister(this);
	}
}