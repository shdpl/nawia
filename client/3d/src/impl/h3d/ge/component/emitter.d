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

module impl.h3d.ge.component.emitter;

import impl.h3d.h3d;

import std.datetime;

import
	msg.listener,
	msg._window.redraw,
	ge.component.emitter,
	impl.h3d.ge.res.material,
	impl.h3d.ge.res.particle,
	impl.h3d.ge.component.component,
	gl3n.linalg;

class Emitter : GEComponent, IEmitter, IMsgListener {
	public:
	static immutable type = Type.Emitter;
	
	private:
	mixin InjectMsgProvider!MsgWindowRedraw _redrawProvider;
	
	public:
	this(H3DNode id) {
		super(id);
	}
	
	void handle(Variant msg) {
		auto payload = msg.get!MsgWindowRedraw;
		if (!h3dHasEmitterFinished(this.id)) {
			//this.clear(); //FIXME: destroy itself
		}else
			h3dAdvanceEmitterTime(this.id, (Clock.currAppTick - payload.time.peek()).seconds); //FIXME
	}
	
	@property {
		Material material() {
			return new Material(getParam!int(Params.MatResI));
		}
		void material(Material mat) {
			setParam!int(mat.id, Params.MatResI);
		}
	}
	
	@property {
		Particle resource() {
			return new Particle(getParam!int(Params.PartEffResI));
		}
		void resource(Particle value) {
			setParam!int(value.id, Params.PartEffResI);
		}
	}
	
	@property {
		int maxCount() {
			return getParam!int(Params.MaxCountI);
		}
		void maxCount(int value) {
			setParam!int(value, Params.MaxCountI);
		}
	}
	
	@property {
		int respawnCount() {
			return getParam!int(Params.RespawnCountI);
		}
		void respawnCount(int value) {
			setParam!int(value, Params.RespawnCountI);
		}
	}
	
	/// Delay before object will start emitting
	@property {
		float delay() {
			return getParam!float(Params.DelayF);
		}
		void respawnAmount(float value) {
			setParam!float(value, Params.DelayF);
		}
	}
	
	@property {
		float emissionRate() {
			return getParam!float(Params.EmissionRateF);
		}
		void emissionRate(float value) {
			setParam!float(value, Params.EmissionRateF);
		}
	}
	
	/// Angle of cone for random emission direction (default: 0.0)
	@property {
		float spreadAngle() {
			return getParam!float(Params.SpreadAngleF);
		}
		void spreadAngle(float value) {
			setParam!float(value, Params.SpreadAngleF);
		}
	}
	
	@property {
		vec3 forceVector() {
			return vec3(getParam!float(Params.ForceF3),
				getParam!float(Params.ForceF3),
				getParam!float(Params.ForceF3));
		}
		void forceVector(vec3 value) {
			setParam!float(value.x, Params.ForceF3, 0);
			setParam!float(value.y, Params.ForceF3, 1);
			setParam!float(value.z, Params.ForceF3, 2);
		}
	}
	
	private H3DEmitter Params;
}
