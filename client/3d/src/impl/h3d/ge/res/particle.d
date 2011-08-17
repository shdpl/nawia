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

module impl.h3d.ge.res.particle;

import std.datetime;

import impl.h3d.h3d,
	type.color.rgba;

private import impl.h3d.ge.res.resource;

class H3DParticle : H3DResource {
	ColorRGBA!float color;
	float size;
	float velocity;
	float velocityRot;
	
	StopWatch lifeMin;
	StopWatch lifeMax;
	
	float powerStartMin;
	float powerStartMax;
	float powerEnd;
	
	override uint id() {return 1;} //FIXME:
	override void id(uint id) {} //FIXME
	
}
