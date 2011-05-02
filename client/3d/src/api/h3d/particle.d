module api.h3d.particle;

import horde3d;

import std.datetime;

import type.color.rgba;

class Particle {
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