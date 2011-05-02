module api.openal.source.source;

import api.openal.buffer,
	api.openal.playback,
	type.cuda.types;

class Source {
	bool active;
	float pitch;
	bool loops;
	Playback playPosition;
	
	
	
	float3 position;
	bool posIsLocalToListener;
	float3 velocity;
	float3 direction;
	
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
		BLAH
	}
	
	
}