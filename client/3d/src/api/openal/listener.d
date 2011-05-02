module api.openal.listener;

import type.cuda.types;

class Listener {
	float gain;
	float3 position;
	float3 velocity;
	float3[2] orientation; //AT, UP vectors
}