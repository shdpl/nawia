module impl.h3d.ge.resource;

private import
	std.string,
	std.conv;
	
public import
	std.stream,
	impl.h3d.h3d;

private import
	ex.ge.res.map,
	ge.res.resource,
	impl.h3d.io.res.resource : IOResource = Resource;

// TODO: what if Resource would be a template?
abstract class Resource : IOResource, IResource {
	public:
	H3DRes id;
	
	public:
	this(H3DRes id)
	in {
		assert(h3dGetResType(id) == this.type);
	}body{
		this.id = id;
	}
	
	this(string name, ResourceFlags flags = ResourceFlags.None) {
		this.id = h3dAddResource(this.type, name.toStringz(), flags);
		enforceEx!ExResAdd(this.id, text(this.type, " ", name, " ", flags));
		super();
	}
	
//	TODO: runtime reflection
//	static T find(string name)
//	out {
//		assert(h3dGetResType(id) == this.type);
//	}body{
//		return new T(h3dFindResource(this.type, name));
//	}
//	override T clone() {
//		return new T(h3dCloneResource(this.id, this.name));
//	}
	
//	override T popFront() {
//		return new T(h3dGetNextResource(this.type, this.id));
//	}
	
	~this() {
		//assert(h3dRemoveResource(this.id) >= 0);
	}
	
	/// Empty string in case of failure
	override string name() @property {
		return to!string(h3dGetResName(id));
	}
	
	override bool loaded() @property {
		return h3dIsResLoaded(this.id);
	}
	
	override bool load(ubyte[] data, size_t size) {
		return h3dLoadResource(this.id, (cast(string)data).toStringz(), to!int(size));
	}
	
	override void unload() {
		h3dUnloadResource(this.id);
	}
	
	protected:
	ResourceType type() @property {
		return ResourceType.Undefined;
	}
	
	Stream mapResource(int elem, int stream_id, AccessRights access, uint size, uint elemIdx = 0) {
		void* stream = h3dMapResStream( this.id, elem, elemIdx, stream_id,
			(access & AccessRights.Read) != 0, (access & AccessRights.Write) != 0);
		enforceEx!ExResMap(stream, text(this.id, elem, stream_id, access, elemIdx));
		return new MemoryStream(cast(ubyte[])stream[0 .. size]);
	}
	
	T getElemParam(T)(int elem, int elemIdx, int param, int compIdx = 0)
		if (is (T == float) | is(T == string) | is(T == int)) {
		static if(is(T == float))
			return h3dGetResParamF(id, elem, elemIdx, param, compIdx);
		static if(is(T == string)) {
			string ret = to!string(h3dGetResParamStr(id, elem, elemIdx, param));
			assert(ret.length != 0);
			return ret;
		}
		static if(is(T == int))
			return h3dGetResParamI(id, elem, elemIdx, param);
	}
	void setElemParam(T)(T value, int elem, int elemIdx, int param, int compIdx = 0)
		if (is (T == float) | is(T == string) | is(T == int)) {
		static if(is(T == float))
			h3dSetResParamF(id, elem, elemIdx, param, compIdx, value);
		static if(is(T == string))
			h3dSetResParamStr(id, elem, elemIdx, param, value.toStringz());
		static if(is(T == int))
			h3dSetResParamI(id, elem, elemIdx, param, value);
	}
	
	/* TODO: Something like that
	abstract class h3dResElement {
		abstract h3dElemType h3dElemType() @property;
		
		public:
		uint count() @property {
			return h3dGetResElemCount(id, h3dElemType);
		}
	}*/
	uint elementCount(int element) {
		return h3dGetResElemCount(id, element);
	}
	
	alias H3DResTypes ResourceType;
}

