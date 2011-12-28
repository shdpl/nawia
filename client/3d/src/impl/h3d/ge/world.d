module impl.h3d.ee.world;

private import
	type.cords.world,
	impl.h3d.h3d,
	msg.provider,
	msg._ee.world.init;
	
public import impl.h3d.ge.component.component;

class World : Component, IMsgProvider {
	mixin InjectMsgListener!MsgWorldInit _prvdrInit;
	
	
	this() {
		this.id = cast(H3DNode) H3DRootNode;
		super();
		_prvdrInit.register(this);
		_prvdrInit.deliver(MsgWorldInit());
	}
	
	~this() {
		_prvdrInit.unregister(this);
	}
}