module api.h3d.emitter;

import horde3d;

import std.datetime;

import api.h3d.material,
	api.h3d.particle,
	type.cuda.types;

class H3DEmitter /*: Emitter*/ {
	H3DNodeTypes _handle;
	string _name;
	Material _mat;
	/// Particle description
	Particle _particle;
	/// Delay before object will start emitting
	StopWatch delay;
	float emissionRate;
	/// Angle of cone for random emission direction (default: 0.0)
	float spreadAngle;
	float3 force;
	uint _particlesCount;
	uint _particleRespCount;
	
	this() {
		h3dAddEmiterNode();
	}
	
	public void onRedraw() {
		h3dAdvanceEmitterTime(_handle, Timer.delta);
		if (h3dHasEmitterFinished(_handle)) {
			delete this;
		}
	}
}