module api.h3d.emitter;
import horde3d;


class H3DEmitter : Emitter {
	H3DNode _handle;
	string _name;
	Material _mat;
	Particle _particle;
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