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
	ee.map.volume;
	
private import
	impl.polyvox.polyvox;

class VolumeSimple : IVolume {
	public:	//TODO: geometry library
	SimpleVolumeMaterialDensityPair44 _data;
	
	public:
	this(Box!CordsWorld bb) {
		init(bb);
	}
	
	void init(Box!CordsWorld bb) {
		_data = new SimpleVolumeMaterialDensityPair44
			(new Region(
				new Vector3DInt32(bb.botleft.x,bb.botleft.y,bb.botleft.z),
				new Vector3DInt32(bb.topright.x,bb.topright.y,bb.topright.z)));
	}
	
	/// Bounding box
	@property Box!CordsWorld region() {
		Region region = _data.getEnclosingRegion();
		Vector3DInt32 botleft = region.getLowerCorner();
		Vector3DInt32 topright = region.getUpperCorner();
		return Box!CordsWorld(
			CordsWorld(botleft.getX(), botleft.getY(), botleft.getZ()),
			CordsWorld(topright.getX(), topright.getY(), topright.getZ()));
	}
	
	///voxel[x][y][z]
	///voxel[VectorWorld]
	override IVoxel opDispatch(string m, args...)() {}
	
}