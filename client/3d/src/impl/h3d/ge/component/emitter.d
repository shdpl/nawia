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

import impl.h3d.ge.res.material,
	impl.h3d.ge.res.particle,
	impl.h3d.ge.component.component,
	type.cuda.types;

class Emitter : H3DSGNode /*: Emitter*/ {
	public:
	this(int id) {
		super(id);
	}
	
	void onRedraw() {
		if (!h3dHasEmitterFinished(this.id)) {
			//this.clear(); //FIXME
		}else
			h3dAdvanceEmitterTime(this.id, 0/*Timer.delta*/); //FIXME
	}
	
	@property {
		H3DMaterial material() {
			return new H3DMaterial(getParam!int(Params.MatResI));
		}
		void material(H3DMaterial mat) {
			setParam!int(mat.id, Params.MatResI);
		}
	}
	
	@property {
		H3DParticle resource() {
			return new H3DParticle(getParam!int(Params.PartEffResI));
		}
		void resource(H3DParticle value) {
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
		float3 forceVector() {
			return float3(getParam!float(Params.ForceF3),
				getParam!float(Params.ForceF3),
				getParam!float(Params.ForceF3));
		}
		void forceVector(float3 value) {
			setParam!float(value[0], Params.ForceF3, 0);
			setParam!float(value[1], Params.ForceF3, 1);
			setParam!float(value[2], Params.ForceF3, 2);
		}
	}
	
	private H3DEmitter.List Params;
}
