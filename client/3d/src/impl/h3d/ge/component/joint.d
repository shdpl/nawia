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

module impl.h3d.ge.component.joint;

private import
	impl.h3d.h3d,
	impl.h3d.ge.component.component,
	ge.component.joint;

class Joint : GEComponent, IJoint {
	public:
	static immutable type = Type.Joint;
	
	public:
	this(H3DNode id) {
		super(id);
	}
	
	@property {
		uint index() {
			return getParam!int(Params.JointIndexI);
		}
	}
	
	private H3DJoint Params;
}
