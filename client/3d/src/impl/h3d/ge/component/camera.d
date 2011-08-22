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

module impl.h3d.ge.component.camera;


private import impl.h3d.h3d,
	ge.component.camera,
	impl.h3d.ge.component.component,
	impl.h3d.ge.res.pipeline,
	impl.h3d.ge.res.texture,
	type.cords.screen,
	type.geometric.box;

class Camera : H3DSGNode, ICamera {
	private:
	H3DPipeline _pipeline;
	BufferPixel renderTarget;
	float _fov, _aspect;
	
	
	public:
	this(H3DPipeline pipeline) {
		_pipeline = pipeline;
	}
	
	//h3dGetCameraProjMat - hopefully wont be needed
	
	@property {
		float fov() {
			return _fov;
		}
		//FIXME: do it properly ;p
		void fov(float value) {
			if (is(_aspect)) {
				h3dSetupCameraView(this.id, value, _aspect,
					clipNear, clipFar);
			}
			_fov = value;
		}
	}
	//LeftPlaneF	RightPlaneF BottomPlaneF TopPlaneF
	@property {
		float aspect() {
			return _aspect;
		}
		//FIXME: do it properly ;p
		void aspect(float value) {
			if (is(_fov)) {
				h3dSetupCameraView(this.id, _fov, value,
					clipNear, clipFar);
			}
			_aspect = value;
		}
	}
	
	@property {
		bool culling() {
			return 1 == getParam!int(Params.OccCullingI);
		}
		void culling(bool value) {
			setParam!int(value, Params.OccCullingI);
		}
	}
	
	@property {
		bool orthogonal() {
			return 1 == getParam!int(Params.OrthoI);
		}
		void orthogonal(bool value) {
			setParam!int(value, Params.OrthoI);
		}
	}
	
	@property {
		//Yes, i know - performance. But i'm choosing slower naive version
		//for sake of clarity, while still limited by programming language.
		Box!CordsScreen viewport() {
			return Box!CordsScreen(
				CordsScreen(getParam!int(Params.ViewportXI),
					getParam!int(Params.ViewportYI)
						+ getParam!int(Params.ViewportHeightI)),
				CordsScreen(getParam!int(Params.ViewportXI)
					+ getParam!int(Params.ViewportWidthI),
					getParam!int(Params.ViewportYI))
				);
		}
		void viewport(Box!CordsScreen value) {
			setParam!int(value.topleft.x, Params.ViewportXI);
			setParam!int(value.topleft.y - value.botright.y,
				Params.ViewportHeightI);
			setParam!int(value.botright.x - value.topleft.x,
				Params.ViewportXI);
			setParam!int(value.botright.y, Params.ViewportYI);
		}
	}
	
	@property {
		float clipNear() {
			return getParam!float(Params.NearPlaneF);
		}
		void clipNear(float value) {
			setParam!float(value, Params.NearPlaneF);
		}
	}
	
	@property {
		float clipFar() {
			return getParam!float(Params.FarPlaneF);
		}
		void clipFar(float value) {
			setParam!float(value, Params.FarPlaneF);
		}
	}
	
	@property {
		H3DPipeline pipeline() {
			return new H3DPipeline(_pipeline.id);
		}
		void pipeline(H3DPipeline value) {
			setParam!int(value.id, Params.PipeResI);
			_pipeline = value;
		}
	}
	
	@property {
		H3DTexture textureOut() {
			return new H3DTexture(getParam!int(Params.OutTexResI));
		}
		void textureOut(H3DTexture value) {
			setParam!int(value.id, Params.OutTexResI);
		}
	}
	
	@property {
		Eye eye() {
			return cast(Eye)getParam!int(Params.OutBufIndexI);
		}
		void eye(Eye value) {
			setParam!int(value, Params.OutBufIndexI);
		}
	}
	
	void render() {
		h3dRender(id);
	}
	
	private alias H3DCamera.List Params;
}
