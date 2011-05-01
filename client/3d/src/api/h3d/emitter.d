module api.h3d.emitter;
import horde3d;

class H3DEmitter : Emitter {
	H3DNode _handle;
	string _name;
	Material _mat;
	/// Particle description
	Particle _particle;
	/// Delay before object will start emitting
	StopWatch delay;
	float emissionRate;
	/// Angle of cone for random emission direction (default: 0.0)
	float spreadAngle;
	Vector3D force;
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