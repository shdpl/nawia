module api.openal.source.source;

interface Source {
	bool active;
	float pitch;
	bool loops;
	Playback position;
	
	
	
	Pos position;
	bool posIsLocalToListener;
	Vector3D velocity;
	Vector3D direction;
	
	float gain;
	float gainMin;
	float gainMax;
	
	float gainInCone;
	float gainOutCone;
	float coneAngle;
	
	float radius;
	float radiusHalfDecay;
	float roloff;
	
	Buffer[] buffers;
	
	enum Type {
		AL_UNDETERMINED,
		AL_STATIC, 
		AL_STREAMING
	}
	
	enum State {
		AL_STOPPED,
		AL_PLAYING
	}
	
	enum DistanceModel {
		
	}
	
	
}