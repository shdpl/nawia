module h3d.util.profiler;

private import
	msg._stat.control,
	msg._stat.stat,
	msg.listener,
	msg.provider;

//class Profiler : IMsgListener!MsgStatControl, IMsgProvider!MsgStat {
//	mixin InjectMsgProvider!MsgStatControl;
//	mixin InjectMsgListener!MsgStat;
//	
//	
//	@property bool profile() {
//		return h3dGetOption(H3DOptions.GatherTimeStats) > 0.01;
//	}
//	
//	@property void profile(bool value) {
//		h3dSetOption(H3DOptions.GatherTimeStats, value);
//	}
//	
//	TriCount	Number of triangles that were pushed to the renderer
//	BatchCount	Number of batches (draw calls)
//	LightPassCount	Number of lighting passes
//	FrameTime	Time in ms between two h3dFinalizeFrame calls
//	AnimationTime	CPU time in ms spent for animation
//	GeoUpdateTime	CPU time in ms spent for software skinning and morphing
//	ParticleSimTime	CPU time in ms spent for particle simulation and updates
//	FwdLightsGPUTime	GPU time in ms spent for forward lighting passes
//	DefLightsGPUTime	GPU time in ms spent for drawing deferred light volumes
//	ShadowsGPUTime	GPU time in ms spent for generating shadow maps
//	ParticleGPUTime	GPU time in ms spent for drawing particles
//	TextureVMem	Estimated amount of video memory used by textures (in Mb)
//	GeometryVMem	Estimated amount of video memory used by geometry (in Mb)
//
//}