module api.h3d.renderer;

import std.range,
	std.conv,
	std.math;

import api.h3d.h3d,
	api.h3d.logs,
	util.singleton,
	ge.window.window;

class Renderer : Singleton!Renderer {
	public:
	@property void filteringTrilinear(bool value) {
		h3dSetOption(H3DOptions.List.TrilinearFiltering, value);
	}
	
	@property bool filteringTrilinear() {
		return h3dGetOption(H3DOptions.List.TrilinearFiltering) < 0.01;
	}
	
	@property ubyte anisotropy() out(result) {
		assert(result == 1 || result == 2 || result == 4 || result == 8);
	} body {
		return to!ubyte(h3dGetOption(H3DOptions.List.MaxAnisotropy));
	}
	
	@property void anisotropy(ubyte value) in {
		assert(value==1 || value == 2 || value == 4 || value == 8);
	} body {
			h3dSetOption(H3DOptions.List.MaxAnisotropy, value);
	}
	
	@property bool texCompression() {
		return h3dGetOption(H3DOptions.List.TexCompression) < 0.01;
	}
	
	@property void texCompression(bool value) {
		h3dSetOption(H3DOptions.List.TexCompression, value);
	}
	
	@property bool linearizationSRGB() {
		return h3dGetOption(H3DOptions.List.SRGBLinearization) < 0.01;
	}
	
	@property void linearizationSRGB(bool value) {
		h3dSetOption(H3DOptions.List.SRGBLinearization, value);
	}
	
	@property bool texturesReference() {
		return h3dGetOption(H3DOptions.List.LoadTextures) < 0.01;
	}
	
	@property void texturesReference(bool value) {
		h3dSetOption(H3DOptions.List.LoadTextures, value);
	}
	
	@property uint shadowMapSize() {
		return to!uint(h3dGetOption(H3DOptions.List.ShadowMapSize));
	}
	
	@property void shadowMapSize(uint value) {
		h3dSetOption(H3DOptions.List.ShadowMapSize, value);
	}
	
	@property bool wireFrame() {
		return h3dGetOption(H3DOptions.List.WireframeMode) < 0.01;
	}
	
	@property void wireFrame(bool value) {
		h3dSetOption(H3DOptions.List.WireframeMode, value);
	}
	
	@property bool debugView() {
		return h3dGetOption(H3DOptions.List.DebugViewMode) < 0.01;
	}
	
	@property void debugView(bool value) {
		h3dSetOption(H3DOptions.List.DebugViewMode, value);
	}
	
	@property bool dumpFailedShaders() {
		return h3dGetOption(H3DOptions.List.DumpFailedShaders) < 0.01;
	}
	
	@property void dumpFailedShaders(bool value) {
		h3dSetOption(H3DOptions.List.DumpFailedShaders, value);
	}
	
	@property bool profile() {
		return h3dGetOption(H3DOptions.List.GatherTimeStats) < 0.01;
	}
	
	@property void profile(bool value) {
		h3dSetOption(H3DOptions.List.GatherTimeStats, value);
	}
	
	H3DLogs msgs;
}