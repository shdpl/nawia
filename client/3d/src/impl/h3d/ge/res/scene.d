module impl.h3d.ge.res.scene;

private import
	ge.res.scene;

private import
	impl.h3d.ge.res.resource;

class Scene : Resource, IScene {
	public:
	this(string name) {
		super(name);
	}
	
	override ResourceType type() @property {
		return ResourceType.SceneGraph;
	}
}