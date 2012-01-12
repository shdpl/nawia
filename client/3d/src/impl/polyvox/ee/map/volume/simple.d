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
	
//private import
//	impl.polyvox.polyvox;
//
//class VolumeSimple : IVolume {
//	public:	//TODO: geometry library
//	SimpleVolumeMaterialDensityPair44 _data;
//	
//	public:
//	this(Box!CordsWorld bb) {
//		init(bb);
//	}
//	
//	void init(Box!CordsWorld bb) {
//		_data = new SimpleVolumeMaterialDensityPair44
//			(new Region(
//				new Vector3DInt32(bb.botleftnear.x,bb.botleftnear.y,bb.botleftnear.z),
//				new Vector3DInt32(bb.toprightfar.x,bb.toprightfar.y,bb.toprightfar.z)));
//	}
//	
//	/// Bounding box
//	@property Box!CordsWorld region() {
//		Region region = _data.getEnclosingRegion();
//		Vector3DInt32 botleftnear = region.getLowerCorner();
//		Vector3DInt32 toprightfar = region.getUpperCorner();
//		return Box!CordsWorld(
//			CordsWorld(botleftnear.getX(), botleftnear.getY(), botleftnear.getZ()),
//			CordsWorld(toprightfar.getX(), toprightfar.getY(), toprightfar.getZ()));
//	}
//	
//	///voxel[x][y][z]
//	///voxel[VectorWorld]
//	override IVoxel opDispatch(string m, args...)() {}
//	
//}