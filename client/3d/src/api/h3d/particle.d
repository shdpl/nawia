module api.h3d.particle;

class Particle {
	RGBAColor color;
	float size;
	float velocity;
	float velocityRot;
	
	StopWatch lifeMin;
	StopWatch lifeMax;
	
	float powerStartMin;
	float powerStartMax;
	float powerEnd;
	
}