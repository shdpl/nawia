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
	PVoxSurfaceExtractor _extractor;
	PVoxSurfaceMesh _mesh;
	
	this(IVolume volume) {
		init(volume);
	}
	
	override void init(IVolume volume) in {
			//assert(rt_typeid(vol == Volume)); //TODO: rt reflection
	} body {
		auto vol = cast(VolumeSimple) volume;
		_mesh = pvoxSurfaceMeshAdd();
		pvoxSurfaceExtractorAdd(vol._volume, vol._region, _mesh, false);
	}
	
	override IGeometry extract(/*cam.fov*/) {
		pvoxSurfaceExtractorExecute(_extractor);
		decimate();
		return getGeometry();
	}
	
	private:
	void decimate()
	{
		//TODO
	}
	
	IGeometry getGeometry()
	{
		float[] vertices;
		short[] normals;
		uint vertexCount = pvoxSurfaceMeshGetNoOfVertices(_mesh);
		PVoxVertex[] tmp2 = new PVoxVertex[vertexCount];
		pvoxSurfaceMeshGetVertices(_mesh, tmp2.ptr);
	  
		for(int i=0; i<tmp2.length; i++){
			vertices ~= tmp2[i].position.x;
			vertices ~= tmp2[i].position.y;
			vertices ~= tmp2[i].position.z;
			
//			normals ~= to!short(tmp2[i].normal.getX() * short.max);
//			normals ~= to!short(tmp2[i].normal.getY() * short.max);
//			normals ~= to!short(tmp2[i].normal.getZ() * short.max);
		}
		enforce(vertices.length/3 == tmp2.length);
		
		uint triangleIndexCount = pvoxSurfaceMeshGetNoOfIndices(_mesh);
		uint[] indices = new uint[triangleIndexCount];
		pvoxSurfaceMeshGetIndices(_mesh, indices.ptr);
		
		float[] posData = vertices;
		int[] indexData = to!(int[])(indices);
		
		return cast(IGeometry) new Geometry("geoRes", posData, indexData,
	    	normals, cast(short[]) null, cast(short[]) null, cast(float[]) null);
	}
}
