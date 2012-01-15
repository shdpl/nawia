/*
 * Copyright (C) 2010 Mariusz 'shd' Gliwiński.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

module impl.polyvox.ee.map.extractormesh;


private import
	std.conv,
	std.exception;

public import
	ee.map.extractormesh,
	ee.map.volume,
	ge.component.camera,
	type.cords.world;
	
private import
	impl.polyvox.polyvox,
	impl.polyvox.ee.map.volume.simple,
	impl.h3d.ge.res.geometry,
	impl.h3d.ge.component.mesh;

class ExtractorMesh : IExtractorMesh {
	CubicSurfaceExtractorWithNormalsSimpleVolumeMaterialDensityPair44 _extractor;
	SurfaceMeshPositionMaterialNormal _mesh;
	
	this(IVolume volume) {
		init(volume);
	}
	
	override void init(IVolume volume) in {
			//assert(rt_typeid(vol == Volume)); //TODO: rt reflection
	} body {
		auto vol = cast(VolumeSimple) volume;
		_mesh = new SurfaceMeshPositionMaterialNormal;
		auto region = vol.region;
		auto up = region.toprightfar;
		auto low = region.botleftnear;
		
		_extractor = new CubicSurfaceExtractorWithNormalsSimpleVolumeMaterialDensityPair44(
			vol._data, new Region(low.x, low.y, low.z, up.x, up.y, up.z), _mesh);
	}
	
	override IGeometry extract(/*cam.fov*/) {
		float[] vertices;
		short[] normals;
		
		_extractor.execute();
		uint vertexCount = _mesh.getNoOfVertices;
		PositionMaterialNormalVector tmp2 = _mesh.getVertices();
	  
		for(int i=0; i<tmp2.length; i++){
			vertices ~= tmp2[i].getPosition.getX;
			vertices ~= tmp2[i].getPosition.getY;
			vertices ~= tmp2[i].getPosition.getZ;
			
			normals ~= to!short(tmp2[i].normal.getX() * short.max);
			normals ~= to!short(tmp2[i].normal.getY() * short.max);
			normals ~= to!short(tmp2[i].normal.getZ() * short.max);
		}
		enforce(vertices.length/3 == tmp2.length);
		
		uint[] indices;
		uint triangleIndexCount = _mesh.getNoOfIndices();
		auto tmp = _mesh.getIndices();
		for(int i=0; i<tmp.length; i++){
			indices ~= tmp[i];
		}
		enforce(indices.length == _mesh.getNoOfIndices());
		
		float[] posData = vertices;
		int[] indexData = to!(int[])(indices);
		
		return cast(IGeometry) new Geometry("geoRes", posData, indexData,
	    	normals, cast(short[]) null, cast(short[]) null, cast(float[]) null);
	}
}
