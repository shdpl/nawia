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

module net.nawia.client3d;

private import 
	std.stdio: writeln;
private import 
	std.uri,
	std.conv,
	std.exception,
	std.datetime,
	std.bitmanip,
	std.stream,
	std.math;

private {
	import impl.bullet.pe.world.dynamics,
		impl.glfw.ge.window.window,
		impl.glfw.io.hid.mouse,
		impl.glfw.io.hid.keyboard,
		impl.nawia.io.res.manager,
		impl.h3d.ge.res.scene,
		impl.h3d.ge.component.component,
		impl.h3d.ge.component.camera,
		impl.h3d.ge.component.mesh,
		impl.h3d.ge.res.pipeline,
		impl.h3d.ge.res.material,
		impl.h3d.ge.component.light,
		impl.h3d.ge.component.model,
		impl.h3d.ge.world,
		impl.nawia.ee.world.std,
		impl.polyvox.ee.map.volume.simple,
		impl.polyvox.ee.map.extractormesh,
		impl.otbm.ee.map.formatter.otbm;
}

private import
	type.cords.local,
	type.color.rgb,
	ge.component.camera,
	msg.listener,
	msg._frame.ready,
	msg._io.hid.mouse.move,
	msg._io.hid.keyboard.press,
	msg._app.quit,
	msg._ee.entity.create;
	
private import
	impl.h3d.h3d,
	impl.h3d.utils,
	impl.polyvox.polyvox,
	impl.nawia.msg.mediator.mtd;
private import
	impl.bullet.bullet,
	core.memory;

void main() {
	Demo demo;
	
	
//	demo = new Demo1;
//	demo = new Demo2;
//	demo = new Demo3;
	demo = new Demo4;
//	demo = new Demo5;
	
	demo.init();
	
	std.stdio.writeln("load");
	demo.load();
	std.stdio.writeln("run");
	demo.run;
	
	demo.dispose();
}

abstract class Demo : IMsgListener, IMsgProvider {
	mixin InjectMsgProvider!MsgEntityCreate _prvdrEntity;//fixme
	mixin InjectMsgProvider!MsgFrameReady _prvdrReady;
	mixin InjectMsgProvider!MsgMouseMove _prvdrMove;
	mixin InjectMsgProvider!MsgKeyPress _prvdrPress;
	mixin InjectMsgListener!MsgAppQuit _lstnrQuit;
	EEWorldStd _world;
	GEWorld world;
	WorldDynamics _peWorld;
	PBodyRigid _pbody[];
	Window wnd;
	Camera cam;
	MsgMediator mediator;
	Mouse mouse;
	Keyboard kb;
	BitArray move;
	ResManager _res;
	
	public void init() {
		mediator = MsgMediator();
		_prvdrReady.register(this);
		_prvdrMove.register(this);
		_prvdrPress.register(this);
		_lstnrQuit.register(this);
		
		_world = new EEWorldStd();
		_res = ResManager();
		
		this.initGE();
		this.initPE();
		this.initIO();
	}
	
	public void dispose() {
		_world.get!WorldDynamics().dispose();
		_world.get!GEWorld().dispose();
		
		_res.dispose();
		
		_prvdrReady.unregister(this);
		_prvdrMove.unregister(this);
		_prvdrPress.unregister(this);
		_lstnrQuit.unregister(this);
		
		mediator.dispose();
	}
	
	public ~this() {}
	
	public void handle(Variant msg) {
		if(msg.type == typeid(MsgFrameReady)) {
			auto oldRot = cam.rotation;
//			cam.rotation = CordsLocal(oldRot.x,
//				oldRot.y-3/(wnd.fps!=0? wnd.fps : 0.1), oldRot.z, cam);
			auto oldTran = cam.translation;
			immutable auto curVel = 10/wnd.fps;
			if (move[0]) {		//FORWARD
				cam.translation = CordsLocal(
					oldTran.x - sin( degToRad( oldRot.y ) ) * cos( -degToRad( oldRot.x ) ) * curVel,
					oldTran.y - sin( -degToRad( oldRot.x ) ) * curVel,
					oldTran.z - cos( degToRad( oldRot.y ) ) * cos( -degToRad( oldRot.x ) ) * curVel, null); //FIXME: parent cords
			} if (move[1]) {	//RIGHT
				cam.translation = CordsLocal(
					oldTran.x + sin( degToRad( oldRot.y + 90 ) ) * curVel,
					oldTran.y,
					oldTran.z + cos( degToRad( oldRot.y + 90 ) ) * curVel, null);
			} if (move[2]) {	//BACKWARD
				cam.translation = CordsLocal(
					oldTran.x + sin( degToRad( oldRot.y ) ) * cos( -degToRad( oldRot.x ) ) * curVel,
					oldTran.y + sin( -degToRad( oldRot.x ) ) * curVel,
					oldTran.z + cos( degToRad( oldRot.y ) ) * cos( -degToRad( oldRot.x ) ) * curVel, null);
			} if (move[3]) {	//LEFT
				cam.translation = CordsLocal(
					oldTran.x + sin( degToRad( oldRot.y - 90) ) * curVel,
					oldTran.y,
					oldTran.z + cos( degToRad( oldRot.y - 90 ) ) * curVel, null);
			}
			onAnimate();
		} else if (msg.type == typeid(MsgMouseMove)) {
			auto payload = msg.get!MsgMouseMove;
			auto oldRot = cam.rotation;
			cam.rotation = CordsLocal(
				fmax(fmin(oldRot.x + to!float(payload.vector.y)/10, 85), -85),
				oldRot.y + to!float(payload.vector.x)/10,
				oldRot.z, null);
		} else if (msg.type == typeid(MsgKeyPress)) {
			auto payload = msg.get!MsgKeyPress;
			if (payload.key.type == typeid(IKeyboard.KeySpecial)) {
				auto ks = payload.key.peek!(IKeyboard.KeySpecial);
				if (*ks == Keyboard.KeySpecial.ESC)
					_lstnrQuit.deliver(MsgAppQuit());
				else { //FIXME: think about this events
					char c = cast(char)*ks;
					switch (c) {
						case 'W':
							move[0] = payload.action == IKeyboard.KeyAction.PRESS;
						break;
						case 'D':
							move[1] = payload.action == IKeyboard.KeyAction.PRESS;
						break;
						case 'S':
							move[2] = payload.action == IKeyboard.KeyAction.PRESS;
						break;
						case 'A':
							move[3] = payload.action == IKeyboard.KeyAction.PRESS;
						break;
						default:
					}
				}
			}
		}
	}
	
	abstract void load();
	
	public void run() {
		mediator.poll();
		writeln("fps: average(", wnd.fpsAvg,
			"), max(", wnd.fpsMax, "), min(", wnd.fpsMin, ")");
		h3dutDumpMessages();
	}

	
	private void initGE()
	{
		// Display component
		auto wndProps = WindowProperties();
		wndProps.size = CordsScreen(1280,1024); //TODO: Box!CordsScreen
		wndProps.status = WindowStatus.FULLSCREEN;
		
		wnd = Window(wndProps);
		wnd.title = "Nawia RPG";
		
		world = new GEWorld();
		world.init(wnd);
		world.texReference = true;
		world.texCompression = false;
		world.anisotropy = 4;
		world.shadowMapSize = 2048;
		world.animationFast = true;
		_world.add(world);
	}
	
	private void initPE()
	{
		_peWorld = new WorldDynamics();
		_peWorld.init();
		_world.add(_peWorld);
	}
	
	private void initIO()
	{
		mouse = Mouse();
		mouse.cursorHidden = true;
		
		kb = Keyboard();
		move.init([false, false, false, false]);
	}
	
	private float degToRad( float f ) 
	{
		return f * (3.1415926f / 180.0f);
	}
	
	void onAnimate() {}
}

class Demo1 : Demo {
	GEComponent platform, sky;
	Model man;
	Pipeline pipe;
	Light light;
	
	override void load() {
		platform = world.add!Scene("models/platform/platform.scene.xml"); //("platform/platform.scene.xml");
		platform.translation = CordsLocal(0, 0, 0, null);
		platform.size = vec3(50f, 1.f, 50f);
		_pbody ~= _peWorld.add!PBodyRigid(
			CordsLocal(0, -1.5, 0, null),
			Box!vec3(platform.size));
		
		sky = world.add!Scene("models/skybox/skybox.scene.xml");//(skybox/skybox.scene.xml");
		sky.size = vec3(300, 100, 300);
		sky.shadowsDisabled = true;
		
		pipe = new Pipeline("pipelines/forward.pipeline.xml");
		cam = world.add!Camera(pipe);
		cam.translation = CordsLocal(15, 3, 20, null);
		cam.rotation = CordsLocal(-10, 20, 0, null);
		cam.viewport = Box!CordsScreen(wnd.size);
		cam.clipNear = .01;
		cam.clipFar = 1000;	//FIXME: clip!=clip <swap with fov>
		cam.fov = 73;
		cam.assign(wnd);	// TODO: Multithreading
		
		//enforce( lCtxID in lMat[0].shader.contexts
		//	&& sCtxID in lMat[0].shader.contexts );
		light = world.add!Light(
			new Material("materials/light.material.xml"), "LIGHTING", "SHADOWMAP");
		light.translation = CordsLocal(0, 20, 50, null);
		light.rotation = CordsLocal(-30, 0, 0, null);
		//light.scale = vec3(1, 1, 1);
		light.radius = 200;
		light.fov = 90;
		light.shadowMapsCount = 3;
		light.shadowSegmentation = .9f;
		light.shadowBias = .001f;
		light.color = ColorRGB!float(.9f, .7f, .75f);
		
		man = world.add!Scene("models/man/man.scene.xml");
		man.translation = CordsLocal(0, 10, 0, null);
		man.size = vec3(2f, .5f, .2f);
		_pbody ~= _peWorld.add!PBodyRigid(
			man.translation,
			Box!vec3(man.size), 75); //TODO: getAABB
		
		man.setupAnimation(0, new Animation("animations/man.anim"), 0);
		

		/*
		auto man = new Actor(
			new Model("man/man.scene.xml", new Animation("man.anim")),
			RandomWalker());
		platform.add(man);
		
		auto mPositioner = Positioner(Circle(0, 20), uniform(0.0L, 20.0L));
		for(int i=0; i<99; i++)
			platform.add(mPositioner.position(man.dup));
		*/
	}
	
	void onAnimate() {
		static real progress = 0;
		progress += 1/wnd.fps*35;
		man.transformationRelative = _pbody[$-1].transformation;
		h3dSetModelAnimParams( man.id, 0, progress, 1.0f );
	}
}

class Demo2 : Demo {
	hEntity cat;
	
	override void load() {
		cat = _world.add!Entity(_world.root, "cathedral");
		Entity* e = _world.getRW(cat);
		e.component ~= _world.get!GEWorld.add!Scene("models/cathedral.scene.xml");
		auto tmp = cast (GEComponent) e.component[0];
		Camera[] cams = tmp.find!Camera("Camera");
		enforceEx!Exception(cams.length == 1, "cams.length=" ~ text(cams.length));
		cam = cams[0];
		
		cam.viewport = Box!CordsScreen(wnd.size);
		cam.culling = true;
		cam.clipNear = .01;
		cam.clipFar = 1000;	//FIXME: clip!=clip <swap with fov>
		cam.fov = 73;
		cam.assign(wnd);	// TODO: Multithreading
	}
}

class Demo3 : Demo {
	GEComponent platform, sky;
	Pipeline pipe;
	Light light;
	
	override void load() {
		void createSimpleGeometryRes() {
		    auto mat = new Material("models/platform/stones.material.xml");
		
		    // Create the needed data for a simple quad that is textured on both sides
		    float posData[] = [
		        0,  0, 0,
		        100, 0, 0,
		        0, 100, 0,
		        100, 100, 0
		    ];
		    uint vertexCount = 4;
		
		    int indexData[] = [ 0,1,2, 2,1,3,  3,1,2, 2,1,0 ];
		    int triangleIndexCount = 12;
		    int triangleIndexMax = 3;
		    
		    short normalData[] = [
		        0, 0, 1,
		        0, 0, 1,
		        0, 0, 1,
		        0, 0, 1
		    ];
		    short tangentData[] = [
		        0, 1, 0,
		        0, 1, 0,
		        0, 1, 0,
		        0, 1, 0
		    ];
		    short bitangentData[] = [
		        1, 0, 0,
		        1, 0, 0,
		        1, 0, 0,
		        1, 0, 0
		    ];
		    float uvData[] = [
		        0, 0,
		        1, 0,
		        0, 1,
		        1, 1
		    ];
		    
		    auto geo = new Geometry("geoRes", posData, indexData,
		    		normalData, tangentData, bitangentData, uvData);
		    auto model = world.add!Model("DynGeoModel", geo);
		    model.add!Mesh("DynGeoMesh", mat, 0, triangleIndexCount, 0, triangleIndexMax);
		    model.rotation = CordsLocal(0, 40, 0, null);
		    model.scale = vec3(.01, .01, .01);
		}
		
		sky = world.add!Scene("models/skybox/skybox.scene.xml");
		sky.scale = vec3(210, 50, 210);
		sky.shadowsDisabled = true;
		
		pipe = new Pipeline("pipelines/forward.pipeline.xml");
		cam = world.add!Camera(pipe);
		cam.translation = CordsLocal(2, 1, 0, null);
		cam.rotation = CordsLocal(-20, 75, 0, null);
		cam.viewport = Box!CordsScreen(wnd.size);
		cam.clipNear = .01;
		cam.clipFar = 1000;
		cam.fov = 73;
		cam.assign(wnd);	// TODO: Multithreading
		
		light = world.add!Light(
			new Material("materials/light.material.xml"), "LIGHTING", "SHADOWMAP");
		light.translation = CordsLocal(0, 25, 20, null);
		light.rotation = CordsLocal(-30, 0, 0, null);
		light.radius = 200;
		light.fov = 90;
		light.shadowMapsCount = 3;
		light.shadowSegmentation = .9f;
		light.shadowBias = .001f;
		light.color = ColorRGB!float(.9f, .7f, .75f);
		
		createSimpleGeometryRes();
	}
}
class Demo4 : Demo {
	GEComponent platform, sky;
	Pipeline pipe;
	Light light;
	
	override void load() {
		
		sky = world.add!Scene("models/skybox/skybox.scene.xml");//(skybox/skybox.scene.xml");
		sky.scale = vec3(210, 50, 210);
		sky.shadowsDisabled = true;
		
//		world.viewWireFrame = true;
		pipe = new Pipeline("pipelines/forward.pipeline.xml");
		cam = world.add!Camera(pipe);
		cam.translation = CordsLocal(2, 1, 0, null);
		cam.rotation = CordsLocal(-20, 135, 0, null);
		cam.viewport = Box!CordsScreen(wnd.size);
		cam.clipNear = .01;
		cam.clipFar = 1000;
		cam.fov = 73;
		cam.assign(wnd);	// TODO: Multithreading
		
		
		light = world.add!Light(
			new Material("materials/light.material.xml"), "LIGHTING", "SHADOWMAP");
		light.translation = CordsLocal(0, 25, 20, null);
		light.rotation = CordsLocal(-30, 0, 0, null);
		light.radius = 200;
		light.fov = 90;
		light.color = ColorRGB!float(.9f, .7f, .75f);
		
		auto vol = new VolumeSimple(Box!CordsWorld(
					CordsWorld(0,0,0), CordsWorld(63,63,63)));
		
		createSphere(vol, 30);//TODO: geometry library
		
		auto extractor = new ExtractorMesh(vol);
		auto geo = cast(Geometry) extractor.extract(/*cam.fov*/);
		
		auto mat = new Material("materials/terrain.material.xml");
		
		Model model = world.add!Model("DynGeoModelNode", geo);
		model.add!Mesh("DynGeoMesh", mat, 0, geo.verticesNo, 0, geo.indicesNo );
	    model.translation = CordsLocal(-5, -3, 0, null);
	    model.scale = vec3(.1, .1, .1);
	    writeln("vertices: ", geo.verticesNo);
	}
	
	void createSphere(VolumeSimple vol, int radius) {
		auto region = vol.region;
		auto center = vec3(region.width / 2, region.height / 2, region.depth / 2);
		
		foreach(z; 0 .. region.depth) {
			foreach(y; 0 .. region.height) {
				foreach(x; 0 .. region.width) {
					
					if(distance(center, vec3(x, y, z)) < radius) //FIXME: to!CordsWorld
					{
						vol[x, y, z] = Voxel(0);
					}
				}
			}
		}
	}
}
class Demo5 : Demo {
	GEComponent platform, sky;
	Pipeline pipe;
	Light light;
	FormatterOTBM _fmter;
	VolumeSimple _vol;
	
	this()
	{
		_fmter = new FormatterOTBM;
	}
	
	override void init()
	{
		super.init();
		_fmter.init();
		_prvdrEntity.register(this);
	}
	
	override void dispose()
	{
		_prvdrEntity.unregister(this);
		_fmter.dispose();
		super.dispose();
	}
	
	override void load() {
		
		sky = world.add!Scene("models/skybox/skybox.scene.xml");//(skybox/skybox.scene.xml");
		sky.scale = vec3(210, 50, 210);
		sky.shadowsDisabled = true;
		
//		world.viewWireFrame = true;
		pipe = new Pipeline("pipelines/forward.pipeline.xml");
		cam = world.add!Camera(pipe);
		cam.translation = CordsLocal(2, 1, 0, null);
		cam.rotation = CordsLocal(-20, 135, 0, null);
		cam.viewport = Box!CordsScreen(wnd.size);
		cam.clipNear = .01;
		cam.clipFar = 1000;
		cam.fov = 73;
		cam.assign(wnd);	// TODO: Multithreading
		
		
		light = world.add!Light(
			new Material("materials/light.material.xml"), "LIGHTING", "SHADOWMAP");
		light.translation = CordsLocal(0, 25, 20, null);
		light.rotation = CordsLocal(-30, 0, 0, null);
		light.radius = 200;
		light.fov = 90;
		light.color = ColorRGB!float(.9f, .7f, .75f);
		
		_vol = new VolumeSimple(Box!CordsWorld(
					CordsWorld(0,0,0), CordsWorld(575,500,10)));
		
		_fmter.format(_res.open("world:map.otbm"));
		
		auto msgFound = false;
		mediator.poll(delegate(Variant v) {
			if (msgFound)
			{
				return v.type == typeid(MsgEntityCreate);
			}
			if (v.type == typeid(MsgEntityCreate))
				msgFound = true;
			return true;
		});
		
		auto extractor = new ExtractorMesh(_vol);
		auto geo = cast(Geometry) extractor.extract(/*cam.fov*/);
		
		auto mat = new Material("materials/terrain.material.xml");
		
		Model model = world.add!Model("DynGeoModelNode", geo);
		model.add!Mesh("DynGeoMesh", mat, 0, geo.verticesNo, 0, geo.indicesNo );
	    model.translation = CordsLocal(-30, -5, 5, null);
	    model.scale = vec3(.1, .1, .2);
	    model.rotation(CordsLocal(90,0,0, null));
	    writeln("vertices: ", geo.verticesNo);
	}
	
	override public void handle(Variant msg)
	{
		if(msg.type == typeid(MsgEntityCreate))
		{
			auto m = msg.get!MsgEntityCreate;
			_vol[m.x, m.y, m.z] = Voxel(m.type);
		} else {
			super.handle(msg);
		}
	}
}