module impl.h3d.ee.world;

private import
	type.cords.world,
	impl.h3d.h3d;
	
public import impl.h3d.ge.component.component;

class World : Component {
	this() {
		this.id = cast(H3DNode) H3DRootNode;
		super();
	}
}