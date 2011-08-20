module impl.h3d.ge.res.resource;

private import ge.res.resource,
	impl.h3d.h3d;

alias int H3DResId;
alias int H3DElemType;

abstract class H3DResource : IResource {
	public:
	H3DResId id;
	 //uint count(elemType);
	
	protected:
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
	
	private:
	abstract class H3DResElement {
		abstract H3DElemType h3dElemType() @property;
		
		public:
		uint count() @property {
			return h3dGetResElemCount(id, h3dElemType);
		}
	}
	
	alias H3DPartEffRes.List Elements;
}