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
	ee.map.volume,
	type.cords.world,
	type.geometric.box;

private import
	impl.polyvox.polyvox;


abstract class Volume {
	
	abstract void init(Box!CordsWorld);
	
	abstract @property Box!CordsWorld region();
	abstract @property void region(Box!CordsWorld);
	
	abstract @property UnitWorld width();
	abstract @property void width(UnitWorld);
	
	abstract @property UnitWorld height();
	abstract @property void height(UnitWorld);
	
	abstract @property UnitWorld depth();
	abstract @property void depth(UnitWorld);
	
	///voxel[x][y][z]
	///voxel[VectorWorld]
	abstract override IVoxel opDispatch(string m, args...)();
	
}
