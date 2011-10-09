/*
 * Copyright (C) 2010 Mariusz 'shd' Gliwiński.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

module h3d.ge.renderer;

private import std.range,
	std.conv,
	std.math;

private import
	impl.h3d.h3d,
	util.singleton,
	ge.window.window,
	ge.renderer,
	msg._time.idle;
	
public import type.buffer.pixel;	

class Renderer : IRenderer, IMsgListener {
	mixin Singleton!Renderer;
	private mixin InjectMsgProvider!MsgTimeIdle _msgTime;
	
	private:
	this(IWindow wnd) {
		enforceEx!ExRendererInit(true == h3dInit());
	}
	
	~this() {
		h3dRelease();
	}
	
	public:
	
	@property {
		void animationFast(bool value) {
			setOption(Option.FastAnimation, value);
		}
		bool animationFast() {
			return h3dGetOption(H3DOptions.List.FastAnimation) > 0.01;
		}
	}
	
	@property void filteringTrilinear(bool value) {
		setOption(Option.TrilinearFiltering, value);
	}
	
	@property bool filteringTrilinear() {
		return h3dGetOption(H3DOptions.List.TrilinearFiltering) > 0.01;
	}
	
	@property ubyte anisotropy() out(result) {
		assert(result == 1 || result == 2 || result == 4 || result == 8);
	} body {
		return to!ubyte(h3dGetOption(H3DOptions.List.MaxAnisotropy));
	}
	
	@property void anisotropy(ubyte value) in {
		assert(value==1 || value == 2 || value == 4 || value == 8);
	} body {
		setOption(Option.MaxAnisotropy, value);
	}
	
	@property bool linearizationSRGB() {
		return h3dGetOption(H3DOptions.List.SRGBLinearization) > 0.01;
	}
	
	@property void linearizationSRGB(bool value) {
		setOption(Option.SRGBLinearization, value);
	}
	
	@property bool texReference() {
		return h3dGetOption(H3DOptions.List.LoadTextures) > 0.01;
	}
	
	@property void texReference(bool value) {
		setOption(Option.LoadTextures, value);
	}
	
	@property bool texCompression() {
		return h3dGetOption(H3DOptions.List.TexCompression) > 0.01;
	}
	
	@property void texCompression(bool value) {
		setOption(Option.TexCompression, value);
	}
	
	@property uint shadowMapSize() {
		return to!uint(h3dGetOption(H3DOptions.List.ShadowMapSize));
	}
	
	@property void shadowMapSize(uint value) {
		setOption(Option.ShadowMapSize, value);
	}
	
	@property bool viewWireFrame() {
		return h3dGetOption(H3DOptions.List.WireframeMode) > 0.01;
	}
	
	@property void viewWireFrame(bool value) {
		setOption(Option.WireframeMode, value);
	}
	
	@property bool viewDebug() {
		return h3dGetOption(H3DOptions.List.DebugViewMode) > 0.01;
	}
	
	@property void viewDebug(bool value) {
		setOption(Option.DebugViewMode, value);
	}
	
	void shadersPreamble(string vertex, string pixel) {
		h3dSetShaderPreambles(vertex, pixel);
	}
		
	@property {
		bool shadersDumpFailed() {
			return h3dGetOption(H3DOptions.List.DumpFailedShaders) > 0.01;
		}
			
		void shadersDumpFailed(bool value) {
		setOption(Option.DumpFailedShaders, value);
		}
	}
	
	BufferPixel backbuffer(int bufId) @property {
		int x, y;
		BufferPixel ret;	//TODO: components
		enforceEx!ExResPipelineBuffer(
			h3dGetRenderTargetData(0, null, bufId, &x, &y,
				null, null, 0),
			text(0, null, bufId));
		enforceEx!ExResPipelineBuffer(
			h3dGetRenderTargetData(0, null, bufId, &ret.size.x, &ret.size.y,
				null, &ret.buffer, ret.memsize),
			text(0, null, bufId, x, y));
		return ret;
	}
	
	void handle(Variant msg) { //TODO: MsgLowMem
		h3dReleaseUnusedResources();
	}
	
	private:
	void setOption(Option option, float value) {
		enforceEx!ExRendererOption(
			h3dSetOption(option, value),
			text(option, value));
	}
	
	private alias H3DOptions.List Option;
}
