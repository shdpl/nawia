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

module impl.polyvox.ai.pathfinder;

private import
	std.typecons;

private import
	impl.polyvox.polyvox,
	ai.pathfinder;

alias WhiteHole!IPathfinder Pathfinder;

/* TODO:
class Pathfinder : IPathfinder {
	void init(PathFinderArgs);
	
	/// Returns normalized vector representing direction to go
	CordsWorld query(); //FIXME: Vector
	
	
	struct PathFinderArgs {
		bool function(CordsWorld) pathableChecker;
		
		IVolume volume;
		
		/// Points to visit
		CordsWorld[] points;
		
		bool diagonalSupported;
		}
}*/