module api.h3d.particle;

import std.datetime;

import api.h3d.h3d,
	type.color.rgba,
	api.h3d.node;

class H3DParticle : H3DSGNode {
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