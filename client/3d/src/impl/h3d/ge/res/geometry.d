module impl.h3d.ge.res.geometry;

private import std.conv;

private import
	ge.res.geometry,
	ex.ge.res.create;

private import
	impl.h3d.ge.res.resource,
	horde3dutils;
	
	
class Geometry : Resource, IGeometry {
	public:
	this(string name) {
		super(name);
	}
	this(H3DRes id) {
		super(id);
	}
	
	/// Dynamic geometry
	this(string name, float vertPos[]/*[3]*/,
			int trisIndices[], short normals[], short tangents[], short bitangents[], float UVs[])
	in {
		assert(0 == vertPos.length % 3);
	} body {
		//h3dutCreateGeometryRes(name, to!int(vertPos.length/3), to!int(trisIndices.length),
		//	cast(float*)vertPos, cast(uint*)trisIndices, cast(short*)normals,
		//	cast(short*)tangents, cast(short*)bitangents, cast(float*)UVs, cast(float*)0);
		h3dutCreateGeometryRes(name, to!int(vertPos.length/3), to!int(trisIndices.length),
			cast(float*)vertPos, cast(uint*)trisIndices, cast(short*)normals,
			cast(short*)tangents, cast(short*)bitangents, cast(float*)UVs, cast(float*)0);
		super(name);
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
	
	/// ushort/uint
	Stream mapIndices(AccessRights access) {
		return mapResource(Elements.GeometryElem, Elements.GeoIndexStream, access, indicesNo);
	}
	/// float x, y, z
	Stream mapVertPositions(AccessRights access) {
		return mapResource(Elements.GeometryElem, Elements.GeoVertPosStream, access, verticesNo);
	}
	///float nx, ny, nz, tx, ty, tz, tw
	Stream mapVertTangents(AccessRights access) {
		return mapResource(Elements.GeometryElem, Elements.GeoVertTanStream, access, verticesNo);
	}
	///float u0, v0, float4 jointIndices, float4 jointWeights, float u1, v1
	Stream mapVertAttributes(AccessRights access) {
		return mapResource(Elements.GeometryElem, Elements.GeoVertStaticStream, access, verticesNo);
	} 
	
	private:
	alias H3DGeoRes.List Elements;
}