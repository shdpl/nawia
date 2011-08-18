module impl.h3d.ge.res.resource;

private import ge.res.resource,
	impl.h3d.h3d;

alias int H3DResId;
alias int H3DElemType;

abstract class H3DResource : IResource {
	 public H3DResId id;
	 //uint count(elemType);
	
	abstract class H3DResElement {
		abstract H3DElemType h3dElemType() @property;
		
		public:
		uint count() @property {
			return h3dGetResElemCount(id, h3dElemType);
		}
	}
}