module impl.h3d.ee.world;

private import
	type.cords.world,
	impl.h3d.h3d;
	
public import impl.h3d.ge.component.component;

class H3DWorld : H3DSGNode {
	this() {
		this.id = H3DRootNode;
		super();
	}
}