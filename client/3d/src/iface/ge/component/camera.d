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

module ge.component.camera;

public import
	type.geometric.box,
	type.cords.screen;

private import
	ge.component.component;

interface ICamera : IComponent {
	enum Eye { Left = 0, Right }
	
	void render();
	
	@property {
		float fov();
		void fov(float value);
	}
	
	@property {
		bool culling();
		void culling(bool value);
	}
	
	@property {
		bool orthogonal();
		void orthogonal(bool value);
	}
	
	@property {
		Box!CordsScreen viewport();
		void viewport(Box!CordsScreen value);
	}
	
	@property {
		float clipNear();
		void clipNear(float value);
	}
	
	@property {
		float clipFar();
		void clipFar(float value);
	}
	
//	@property {
//		IPipeline pipeline();
//		void pipeline(IPipeline value);
//	}
//	/**
//		Texture to be used as output buffer
//	 **/
//	@property {
//		ITexture textureOut();
//		void textureOut(ITexture value);
//	}
	
	/**
		In case of stereo rendering, determines which eye this camera is.
	 **/
	@property {
		Eye eye();
		void eye(Eye value);
	}
	
}
