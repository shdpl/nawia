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

module ge.res.model;

import ge.res.h3d,
	ge.res.animation.animation,
	ge.res.node;

class /*H3DModel :*/ H3DModel : H3DSGNode {
	string _name;
	//Geometry _geometry;
	H3DAnimation[H3DAnimation.maxCount] _anim;
	//TODO: Pose _pose;
	/// Distance to camera from which on LOD[n] is used
	float lodDist[4];
	bool skinning;
	
	/// indexed by target name
	float[string] morphWeight;
}
