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

module impl.polyvox.ee.map.volume.volume;

public import
	ee.map.volume.volume,
	type.cords.world,
	type.geometric.box;

private import
	impl.polyvox.polyvox;


/*class Volume {
	
	void init(Box!CordsWorld);
	
	@property Box!CordsWorld region();
	@property void region(Box!CordsWorld);
	
	@property UnitWorld width();
	@property void width(UnitWorld);
	
	@property UnitWorld height();
	@property void height(UnitWorld);
	
	@property UnitWorld depth();
	@property void depth(UnitWorld);
	
	///voxel[x][y][z]
	///voxel[VectorWorld]
	override IVoxel opDispatch(string m, args...)();
	
}*/
