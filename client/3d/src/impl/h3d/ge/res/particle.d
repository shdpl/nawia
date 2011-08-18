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

private import std.conv;

import impl.h3d.h3d,
	type.color.rgba;

private import impl.h3d.ge.res.resource,
	ge.res.particle;

class H3DParticle : H3DResource, IParticle {
	struct color {
		//startMin
		//startMax
		//end
	}
	override ColorRGBA!float color() @property {
		ColorRGBA!float ret;
		ret.r = h3dGetResParamF(id, H3DPartEffRes.List.ChanColRElem,
					0, H3DPartEffRes.List., 0);
		ret.g = h3dGetResParamF(id, H3DPartEffRes.List.ChanColGElem,
					0, H3DPartEffRes.List., 0);
		ret.b = h3dGetResParamF(id, H3DPartEffRes.List.ChanColBElem,
					0, H3DPartEffRes.List., 0);
		ret.a = h3dGetResParamF(id, H3DPartEffRes.List.ChanColAElem,
					0, H3DPartEffRes.List., 0);
		return ret;
	}
	
	override void color(ColorRGBA!float value) @property {
		h3dSetResParamF(id, H3DPartEffRes.List.ChanColRElem,
			0, H3DPartEffRes.List., 0, value.r);
		h3dSetResParamF(id, H3DPartEffRes.List.ChanColGElem,
			0, H3DPartEffRes.List., 0, value.r);
		h3dSetResParamF(id, H3DPartEffRes.List.ChanColBElem,
			0, H3DPartEffRes.List., 0, value.r);
		h3dSetResParamF(id, H3DPartEffRes.List.ChanColAElem,
			0, H3DPartEffRes.List., 0, value.r);
	}
	
	override float size() @property {
		return to!int(h3dGetResParamF(id, H3DPartEffRes.List.ChanSizeElem,
			0, H3DPartEffRes.List., 0));
	}
	
	override void size(float value) @property {
		h3dSetResParamF(id, H3DPartEffRes.List.ChanSizeElem,
			0, H3DPartEffRes.List., 0, value);
	}
	
	//TODO: ChanDragElem
	
	override float velocity() @property {
		return to!int(h3dGetResParamF(id, H3DPartEffRes.List.ChanMoveVelElem,
			0, H3DPartEffRes.List., 0));
	}
	
	override void velocity(float vel) @property {
		h3dSetResParamF(id, H3DPartEffRes.List.ChanMoveVelElem,
			0, H3DPartEffRes.List., 0, vel);
	}
	
	override float velocityRot() @property {
		return to!int(h3dGetResParamF(id, H3DPartEffRes.List.ChanRotVelElem,
			0, H3DPartEffRes.List., 0));
	}
	
	override void velocityRot(float vel) @property {
		h3dSetResParamF(id, H3DPartEffRes.List.ChanRotVelElem,
			0, H3DPartEffRes.List., 0, vel);
	}
	
	
	
	override float powerStartMin() @property;
	override void powerStartMin(float) @property;
	
	override float powerStartMax() @property;
	override void powerStartMax(float) @property;
	
	override float powerEnd() @property;
	override void powerEnd(float) @property;
	
	
	
	override Duration lifeMin() @property {
		return dur!"nsecs"(to!int(10E-9*h3dGetResParamF(id, H3DPartEffRes.List.ParticleElem,
			0, H3DPartEffRes.List.PartLifeMinF, 0)));
	}
	override void lifeMin(Duration time) @property {
		h3dSetResParamF(id, H3DPartEffRes.List.ParticleElem,
			0, H3DPartEffRes.List.PartLifeMinF, 0, time.total!("nsecs")/10E-9);
	}
	
	override Duration lifeMax() @property {
		return dur!"nsecs"(to!int(10E-9*h3dGetResParamF(id, H3DPartEffRes.List.ParticleElem,
			0, H3DPartEffRes.List.PartLifeMaxF, 0)));
	}
	override void lifeMax(Duration time) @property {
		h3dSetResParamF(id, H3DPartEffRes.List.ParticleElem,
			0, H3DPartEffRes.List.PartLifeMaxF, 0, time.total!("nsecs")/10E-9);
	}
	
}
