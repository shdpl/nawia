module api.h3d.emitter;

import api.h3d.h3d;

import std.datetime;

import api.h3d.material,
	api.h3d.particle,
	api.h3d.node,
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