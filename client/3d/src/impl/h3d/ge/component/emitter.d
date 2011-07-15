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

module ge.res.emitter;

import ge.res.h3d;

import std.datetime;

import ge.res.material,
	ge.res.particle,
	ge.res.node,
	type.cuda.types;

class H3DEmitter : H3DSGNode /*: Emitter*/ {
	H3DMaterial _mat;
	/// Particle description
	H3DParticle _particle;
	/// Delay before object will start emitting
	StopWatch delay;
	float emissionRate;
	/// Angle of cone for random emission direction (default: 0.0)
	float spreadAngle;
	float3 force;
	uint _particlesCount;
	uint _particleRespCount;
	
	this(H3DSGNode parent, string name, H3DMaterial material, H3DParticle particle, uint maxCountInMoment, uint maxCount) {
		_particlesCount = maxCountInMoment;
		_particleRespCount = maxCount;
		h3dAddEmitterNode(parent.id, name, material.id, particle.id, _particlesCount, _particleRespCount);
	}
	
	public void onRedraw() {
		h3dAdvanceEmitterTime(this.id, 0/*Timer.delta*/); //FIXME
		if (h3dHasEmitterFinished(this.id)) {
			//this.clear(); //FIXME
		}
	}
}
