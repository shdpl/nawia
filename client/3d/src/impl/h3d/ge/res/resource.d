module impl.h3d.ge.res.resource;

private import std.conv;

private import ge.res.resource,
	impl.h3d.h3d,
	impl.h3d.io.res.resource : IOResource = H3DResource;

alias int H3DResId;
alias int H3DElemType;

abstract class H3DResource : IOResource, IResource {
	public:
	H3DResId id;
	
	this() {}
	this(H3DRes id) 
	in {
		assert(h3dGetResType(id) == this.type);
	}body{
		this.id = id;
	}
	
	this(string name, ResourceFlags flags = ResourceFlags.None) {
		this.id = h3dAddResource(this.type, name, flags);
		super();
	}
	
	//TODO: find
//	this(string name)
//	out {
//		assert(h3dGetResType(id) == this.type);
//	}body{
//		this.id = h3dFindResource(this.type, name);
//	}
	
	~this() {
		assert(h3dRemoveResource(this.id) >= 0);
	}
	
//	override T clone() {
//		return new T(h3dCloneResource(this.id, this.name));
//	}
	
//	override T next() {
//		return new T(h3dGetNextResource(this.type, this.id));
//	}
	
	override string name() @property {
		return h3dGetResName(id);
	}
	
	override bool loaded() @property {
		return h3dIsResLoaded(this.id);
	}
	
	override bool load(ubyte[] data, size_t size) {
		return h3dLoadResource(this.id, cast(string)data, to!int(size));
	}
	
	override void unload() {
		h3dUnloadResource(this.id);
	}
	
	protected:
	abstract ResourceType type() @property;
	
	T getElemParam(T)(int elem, int elemIdx, int param, int compIdx = 0)
		if (is (T : float) | is(T : string) | is(T : int)) {
		static if(is(T == float))
			return h3dGetResParamF(id, elem, elemIdx, param, compIdx);
		static if(is(T == string))
			return h3dGetResParamStr(id, elem, elemIdx, param);
		static if(is(T == int))
			return h3dGetResParamI(id, elem, elemIdx, param);
	}
	void setElemParam(T)(T value, int elem, int elemIdx, int param, int compIdx = 0)
		if (is (T : float) | is(T : string) | is(T : int)) {
		static if(is(T == float))
			h3dSetResParamF(id, elem, elemIdx, param, compIdx, value);
		static if(is(T == string))
			h3dSetResParamStr(id, elem, elemIdx, param, value);
		static if(is(T == int))
			h3dSetResParamI(id, elem, elemIdx, param, value);
	}
	
	/* TODO: Something like that
	abstract class H3DResElement {
		abstract H3DElemType h3dElemType() @property;
		
		public:
		uint count() @property {
			return h3dGetResElemCount(id, h3dElemType);
		}
	}*/
	uint elementCount(int element) {
		return h3dGetResElemCount(id, element);
	}
	
	alias H3DResTypes.List ResourceType;
}