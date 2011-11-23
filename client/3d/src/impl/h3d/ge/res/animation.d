module impl.h3d.ge.res.animation;

private import
	ge.res.animation;

private import
	impl.h3d.ge.res.resource;

class Animation : Resource, IAnimation {
	public:
	//string _targetNode;
	_Entities entities;
	//uint weight;
	
	public:
	this(string name) {
		super(name);
		entities = new _Entities;
	}
	
	abstract Type aType();
	
	private:
	override ResourceType type() @property {
		return ResourceType.Animation;
	}
	
	public:
	enum Type : bool { Blended, Additive }
	
	private:
	alias H3DAnimRes.List Elements;
	
	class _Entities {
		immutable uint lengthMax = 16;
		
		class _Entity {
			private uint id;
			
			this(uint id) {
				this.id = id;
			}
			///Time in frames
			uint frames() @property {
				return getElemParam!int(Elements.EntityElem, id, Elements.EntFrameCountI);
			}
		}
		
		uint length() @property {
			return elementCount(Elements.EntityElem);
		}
		
		_Entity opIndex(uint i) {
			return new _Entity(i);
		}
	}
}