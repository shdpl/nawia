module api.h3d.particle;

import std.datetime;

import api.h3d.h3d,
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