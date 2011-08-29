module impl.h3d.ge.res.geometry;

private import impl.h3d.ge.res.resource,
	ge.res.geometry,
	impl.h3d.h3d;

class H3DGeometry : H3DResource, IGeometry {
	enum IndicesFormat : bool {BIT16 = 1, BIT32 = 0};
	
	
	public:
	this(string name) {
		super(name);
	}
	this(H3DRes id) {
		super(id);
	}

	uint indicesNo() @property {
		return getElemParam!int(Elements.GeometryElem,0,Elements.GeoIndexCountI);
	}
	
	IndicesFormat indicesFmt() @property {
		return cast(IndicesFormat)(IndicesFormat.BIT16 ==
			getElemParam!int(Elements.GeometryElem, 0, Elements.GeoIndices16I));
	}
	
	uint verticesNo() @property {
		return getElemParam!int(Elements.GeometryElem, 0, Elements.GeoVertexCountI);
	}
	
	override ResourceType type() @property {
		return ResourceType.Geometry;
	}
	
	private:
	alias H3DGeoRes.List Elements;
}