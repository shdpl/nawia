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


public import
	std.datetime,
	type.geometric.box,
	ge.window.window,
	ge.component.camera,
	type.buffer.pixel,
	impl.h3d.ge.res.pipeline,
	impl.h3d.ge.res.texture;

private import
	impl.h3d.h3d,
	impl.h3d.ge.component.component,
	type.cords.screen,
	msg.listener,
	msg.provider,
	msg._window.resize,
	msg._time.idle,
	msg._frame.ready;



class Camera : Component, ICamera, IMsgListener, IMsgProvider {
	private:
	mixin InjectMsgProvider!MsgWindowResize _prvdrResize;
	mixin InjectMsgProvider!MsgTimeIdle _prvdrIdle;
	mixin InjectMsgListener!MsgFrameReady _lstnrReady;
	
	StopWatch _timer;
	BufferPixel renderTarget;
	float _fov;
	
	public:
	static immutable type = Type.Camera;
	
	public:
	this(H3DNode id) {
		super(id);
		_timer.start();
	}
	
	//h3dGetCameraProjMat - hopefully wont be needed
	
	@property {
		float fov() {
			return _fov;
		}
		void fov(float value) {
			_fov = value;
			h3dSetupCameraView(this.id, value, aspect, clipNear, clipFar);
		}
	}
	//TODO: LeftPlaneF	RightPlaneF BottomPlaneF TopPlaneF
	
	
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
			int botleft_x = getParam!int(Params.ViewportXI);
			int botleft_y = getParam!int(Params.ViewportYI);
			int width = getParam!int(Params.ViewportWidthI);
			int height = getParam!int(Params.ViewportHeightI);
			return Box!CordsScreen(
				CordsScreen(botleft_x, botleft_y),
				CordsScreen(botleft_x+width, botleft_y+height));
		}
		void viewport(Box!CordsScreen value) {
			//TODO: replace all this calculations by value.botleft value.width etc.
			int width = value.topright.x - value.botleft.x;
			int height = value.topright.y - value.botleft.y;
			
			setParam!int(value.botleft.x, Params.ViewportXI);
			setParam!int(value.botleft.y, Params.ViewportYI);
			setParam!int(width, Params.ViewportWidthI);
			setParam!int(height, Params.ViewportHeightI);
			h3dResizePipelineBuffers( pipeline.id, width, height );
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
		Pipeline pipeline() {
			return new Pipeline(getParam!int(Params.PipeResI));
		}
		void pipeline(Pipeline value) {
			setParam!int(value.id, Params.PipeResI);
		}
	}
	
	@property {
		Texture textureOut() {
			return new Texture(getParam!int(Params.OutTexResI));
		}
		void textureOut(Texture value) {
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
	
	void assign(IWindow wnd) {	// TODO: multiple window support
		_prvdrResize.register(this);
		_prvdrIdle.register(this);
	}
	
	void deassign(IWindow wnd) {
		_prvdrResize.unregister(this);
		_prvdrIdle.unregister(this);
	}
	
	void handle(Variant msg) {
		if (msg.type == typeid(MsgTimeIdle)) {
			render();
			h3dFinalizeFrame();
			_lstnrReady.deliver(MsgFrameReady(_timer.peek()));
			_timer.reset();
		} else if (msg.type == typeid(MsgWindowResize)) {
			auto payload = msg.get!MsgWindowResize;
			viewport = Box!CordsScreen(CordsScreen(0,0), payload.newSize);
		}
	}
	
	private:
	real aspect() @property {
		auto vp = viewport;	//FIXME vp.width / vp.height
		auto width = vp.topright.x - vp.botleft.x;
		auto height = vp.topright.y - vp.botleft.y;
		return width/height; 
	}
	
	private alias H3DCamera.List Params;
}
