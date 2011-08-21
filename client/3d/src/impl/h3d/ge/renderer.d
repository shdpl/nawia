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

private import impl.h3d.h3d,
	impl.h3d.ge.logs,
	util.singleton,
	ge.window.window,
	ex.renderer.init;
	
public import type.buffer.pixel;	

class Renderer : Singleton!Renderer {
	public:
	Shaders shaders;
	
	this(IWindow wnd) {
		super();
		enforceEx!ExRendererInit(true == h3dInit());
	}
	
	~this() {
		h3dRelease();
	}
	
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
	
	struct Shaders {
		void preambles(string vertex, string pixel) {
			h3dSetShaderPreambles(vertex, pixel);
		}
		
		@property {
			bool dumpFailedShaders() {
				return h3dGetOption(H3DOptions.List.DumpFailedShaders) < 0.01;
			}
			
			void dumpFailedShaders(bool value) {
				h3dSetOption(H3DOptions.List.DumpFailedShaders, value);
			}
		}
	}
	
	@property bool profile() {
		return h3dGetOption(H3DOptions.List.GatherTimeStats) < 0.01;
	}
	
	@property void profile(bool value) {
		h3dSetOption(H3DOptions.List.GatherTimeStats, value);
	}
	
	@property {
		BufferPixel backbuffer() {
			BufferPixel ret;
			//h3dGetRenderTargetData(0,...)
			return ret;
		}
	}
	
	H3DLogs msgs;
}
