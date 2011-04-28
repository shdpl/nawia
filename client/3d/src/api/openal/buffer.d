module api.openal.buffer;

interface Buffer {
	string name;
	Source targetSource;
	uint frequency;
	uint bitDepth;
	uint channels; /// =1 for 3D sound
	uint size;
	ubyte[] data;
	
	enum Format {
		AL_FORMAT_MONO8,
		AL_FORMAT_MONO16,
		AL_FORMAT_STEREO8,
		AL_FORMAT_STEREO16
	}
}