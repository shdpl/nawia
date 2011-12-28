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

module ge.world;

public import
	ex.renderer.init,
	ex.renderer.option,
	ex.ge.res.pipeline.buffer;

private import
	impl.h3d.h3d,
	ge.window.window,
	ee.world;

interface IGEWorld : World {

	/// Controls whether animation frame interpolation is on, or off
	@property {
		void animationFast(bool value);
		bool animationFast();
	}

	@property {
		bool filteringTrilinear();
		void filteringTrilinear(bool value);
	}

	/// Only affects pipelines that are loaded *after* settings the option
	@property {
		ubyte anisotropy();
		void anisotropy(ubyte value);
	}

	/// Controls gamma-to-linear-space conversion of sRGB input textures
	@property {
		bool linearizationSRGB();
		void linearizationSRGB(bool value);
	}	

	/// Only affects textures that are loaded after setting the option
	@property {
		bool texCompression();
		void texCompression(bool value);
	}

	/// Might be used to disable texture loading
	@property {
		bool texReference();
		void texReference(bool value);
	}

	/// legal values: 128, 256, 512, 1024, 2048; Default: 1024
	@property {
		void shadowMapSize(uint value);
		uint shadowMapSize();
	}

	@property {
		bool viewWireFrame();
		void viewWireFrame(bool value);
	}

	@property {
		bool viewDebug();
		void viewDebug(bool value);
	}

	@property {
		bool shadersDumpFailed();
		void shadersDumpFailed(bool value);
	}

	void shadersPreamble(string vertex, string pixel);

}