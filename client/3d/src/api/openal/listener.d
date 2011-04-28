module api.openal.listener;

interface Listener {
	float gain;
	WorldPos position;
	Vector3D velocity;
	Vector3D[2] orientation; //AT, UP vectors
}