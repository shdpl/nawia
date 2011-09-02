module ge.res.geometry;

private import
	ge.res.resource;
	

interface IGeometry : IResource {
	enum IndicesFormat : bool {BIT16 = 1, BIT32 = 0};
	
	uint indicesNo() @property;
	
	IndicesFormat indicesFmt() @property;
	
	uint verticesNo() @property;
}