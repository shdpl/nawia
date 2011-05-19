module api.h3d.particle;

import horde3d;

import std.datetime;

import type.color.rgba,
	api.h3d.node;

class H3DParticle : H3DNode {
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