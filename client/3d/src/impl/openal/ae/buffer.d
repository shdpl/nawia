module api.openal.buffer;

import api.openal.source.source;

interface Buffer {
	@property
	string name();
	@property
	void name(string);
	
	@property
	Source targetSource();
	@property
	void targetSource(Source);
	
	@property
	uint frequency();
	@property
	void frequency(uint);
	
	@property
	uint bitDepth();
	@property
	void bitDepth(uint);
	
	@property
	uint channels();
	@property
	void channels(uint); /// =1 for 3D sound
	
	@property
	uint size();
	@property
	void size(uint);
	
	@property
	ubyte[] data();
	@property
	void data(ubyte[]);
	
	enum Format {
		AL_FORMAT_MONO8,
		AL_FORMAT_MONO16,
		AL_FORMAT_STEREO8,
		AL_FORMAT_STEREO16
	}
}