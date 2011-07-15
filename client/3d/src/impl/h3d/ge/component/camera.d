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

module h3d.ge.component.camera;

import h3d.h3d,
	ge.component.camera,
	h3d.ge.res.pipeline,
	type.buffer.pixel,
	type.cords.screen;

class Camera : ICamera {
	private:
	H3DPipeline _pipeline;
	BufferPixel renderTarget;
	
	CordsScreen viewport;
	
	float clipNear;
	float clipFar;
	float viewAngleX;
	float viewAngleY;
	
	bool orthogonal;
	
	
	public:
	void init(Component parent, string name, H3DPipeline pipeline) {
		h3dAddCameraNode(parent.id, name, pipeline.id);
	}
	
	
	void setFrustum() {
		
	}
	
	bool visible(H3DNode what);
	uint queryLOD(H3DNode what);
	
	void render() {
		h3dRender(id);
	}
}
