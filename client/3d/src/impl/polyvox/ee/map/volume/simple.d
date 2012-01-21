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

module impl.polyvox.ee.map.volume.simple;
	
public import
	ee.map.volume,
	type.voxel;
	
	
private import
	std.conv;
private import
	impl.polyvox.polyvox;

class VolumeSimple : IVolume {
	public:	//TODO: geometry library
	SimpleVolumeMaterialDensityPair1616 _data;
	Box!CordsWorld _bb;
	
	public:
	this(Box!CordsWorld bb) {
		init(bb);
	}
	
	void init(Box!CordsWorld bb) {
		_bb = bb;
		_data = new SimpleVolumeMaterialDensityPair1616
			(new Region(
				new Vector3DInt32(bb.botleftnear.x,bb.botleftnear.y,bb.botleftnear.z),
				new Vector3DInt32(bb.toprightfar.x,bb.toprightfar.y,bb.toprightfar.z)));
	}
	
	/// Bounding box
	@property Box!CordsWorld region() {
		return _bb;
	}
	
	///volume[x, y, z] = value;
	Voxel opIndexAssign(Voxel value, ushort x, ushort y, ubyte z)
	{
		MaterialDensityPair1616 voxel = _data.getVoxelAt(x, y, z);
		voxel.setDensity(value.density);
		voxel.setMaterial(value.material);
		_data.setVoxelAt(x, y, z, voxel);
		return value;
	}
	
	///value = volume[x, y, z];
	Voxel opIndex(ushort x, ushort y, ubyte z)
	{
		auto ret = Voxel();
		MaterialDensityPair1616 voxel = _data.getVoxelAt(x, y, z);
		ret.material = to!ushort(voxel.getMaterial());
		ret.density = to!ushort(voxel.getDensity());
		return ret;
	}
	
}