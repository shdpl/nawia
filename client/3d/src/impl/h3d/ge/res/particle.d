module ge.res.particle;

import std.datetime;

import ge.res.h3d,
	type.color.rgba;

class H3DParticle {
	ColorRGBA!float color;
	float size;
	float velocity;
	float velocityRot;
	
	StopWatch lifeMin;
	StopWatch lifeMax;
	
	float powerStartMin;
	float powerStartMax;
	float powerEnd;
	
}