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
	std.uri,
	std.stdio,
	std.conv,
	std.exception,
	std.datetime;
	

private import
	type.cords.local,
	type.color.rgb,
	ge.component.camera,
	msg.listener,
	msg._frame.ready,
	impl.glfw.ge.window.window,
	impl.nawia.io.res.manager,
	impl.h3d.ge.renderer,
	impl.h3d.ee.world,
	impl.h3d.ge.res.scene,
	impl.h3d.ge.component.camera,
	impl.h3d.ge.component.mesh,
	impl.h3d.ge.res.pipeline,
	impl.h3d.ge.res.material,
	impl.h3d.ge.component.light,
	impl.h3d.ge.component.model,
	impl.nawia.ee.actor,
	impl.polyvox.ee.map.volume.simple,
	impl.polyvox.ee.map.extractormesh;
	
private import
	impl.glfw.glfw,
	impl.h3d.h3d,
	impl.h3d.utils,
	impl.polyvox.polyvox,
	impl.nawia.msg.mediator.mtd;
	


void main(){
	Demo demo;
	
//	demo = new Demo1;
//	demo = new Demo2;
//	demo = new Demo3;
	demo = new Demo4;
	
	demo.init;
	std.stdio.writeln("load");
	demo.load;
	std.stdio.writeln("run");
	demo.run;
}

abstract class Demo : IMsgListener {
	mixin InjectMsgProvider!MsgFrameReady _prvdrReady;
	World world;
	Window wnd;
	Camera cam;
	Renderer rndrr;
	MsgMediator mediator;
	
	public void init() {
		mediator = MsgMediator();
		_prvdrReady.register(this);
		
		auto wndProps = WindowProperties();
		wndProps.size = CordsScreen(1280,1024); //TODO: Box!CordsScreen
		wndProps.status = WindowStatus.NORMAL;
		
		wnd = Window(wndProps);
		wnd.title = "Nawia RPG";

		rndrr = Renderer(wnd);
		rndrr.texReference = true;
		rndrr.texCompression = false;
		rndrr.anisotropy = 4;
		rndrr.shadowMapSize = 2048;
		rndrr.animationFast = true;
		
		world = new World;
	}
	
	public ~this() {
		_prvdrReady.unregister(this);
	}
	
	public void handle(Variant msg) {
		assert(msg.type == typeid(MsgFrameReady));
		auto oldRot = cam.rotation;
		cam.rotation = CordsLocal(oldRot.x,
			oldRot.y-3/(wnd.fps!=0? wnd.fps : 0.1), oldRot.z, cam);
	}
	
	abstract void load();
	
	public void run() {
		mediator.poll();
		writeln("fps: average(", wnd.fpsAvg,
			"), max(", wnd.fpsMax, "), min(", wnd.fpsMin, ")");
		h3dutDumpMessages();
	}
}

class Demo1 : Demo {
	Component platform, sky;
	Pipeline pipe;
	Light light;
	
	override void load() {
		//TODO: assign camera to window	auto platform
		platform = world.add!Scene("models/platform/platform.scene.xml"); //("platform/platform.scene.xml");
		platform.translation = CordsLocal(-1, 0, 0, world);
		platform.scale = float3(.23, .23, .23);
		
		sky = platform.add!Scene("models/skybox/skybox.scene.xml");//(skybox/skybox.scene.xml");
		sky.scale = float3(210, 50, 210);
		sky.shadowsDisabled = true;
		
		pipe = new Pipeline("pipelines/forward.pipeline.xml");
		cam = world.add!Camera(pipe);
		cam.translation = CordsLocal(15, 3, 20, platform);
		cam.rotation = CordsLocal(-10, 120, 0, platform);
		cam.viewport = Box!CordsScreen(wnd.size);
		cam.clipNear = .01;
		cam.clipFar = 1000;	//FIXME: clip!=clip <swap with fov>
		cam.fov = 73;
		cam.assign(wnd);	// TODO: Multithreading
		
		//enforce( lCtxID in lMat[0].shader.contexts
		//	&& sCtxID in lMat[0].shader.contexts );
		light = platform.add!Light(
			new Material("materials/light.material.xml"), "LIGHTING", "SHADOWMAP");
		light.translation = CordsLocal(0, 20, 50, platform);
		light.rotation = CordsLocal(-30, 0, 0, platform);
		//light.scale = float3(1, 1, 1);
		light.radius = 200;
		light.fov = 90;
		light.shadowMapsCount = 3;
		light.shadowSegmentation = .9f;
		light.shadowBias = .001f;
		light.color = ColorRGB!float(.9f, .7f, .75f);
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
	
}

class Demo2 : Demo {
	Component scene;
	
	override void load() {
		scene = world.add!Scene("models/cathedral.scene.xml");
		Camera[] cams = scene.find!Camera("Camera");
		enforceEx!Exception(cams.length == 1, "cams.length=" ~ text(cams.length));
		cam = cams[0];
		
		cam.viewport = Box!CordsScreen(wnd.size);
		cam.culling = true;
		cam.clipNear = .01;
		cam.clipFar = 1000;	//FIXME: clip!=clip <swap with fov>
		cam.fov = 73;
		//cam.rotation = CordsLocal(0, 40, 0, world);
		cam.assign(wnd);	// TODO: Multithreading
	}
}

class Demo3 : Demo {
	Component platform, sky;
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
		    model.rotation = CordsLocal(0, 40, 0, model);
		    model.scale = float3(.01, .01, .01);
		}
		
		sky = world.add!Scene("models/skybox/skybox.scene.xml");
		sky.scale = float3(210, 50, 210);
		sky.shadowsDisabled = true;
		
		pipe = new Pipeline("pipelines/forward.pipeline.xml");
		cam = world.add!Camera(pipe);
		cam.translation = CordsLocal(2, 1, 0, world);
		cam.rotation = CordsLocal(-20, 75, 0, world);
		cam.viewport = Box!CordsScreen(wnd.size);
		cam.clipNear = .01;
		cam.clipFar = 1000;
		cam.fov = 73;
		cam.assign(wnd);	// TODO: Multithreading
		
		light = world.add!Light(
			new Material("materials/light.material.xml"), "LIGHTING", "SHADOWMAP");
		light.translation = CordsLocal(0, 25, 20, world);
		light.rotation = CordsLocal(-30, 0, 0, world);
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
	Component platform, sky;
	Pipeline pipe;
	Light light;
	
	override void load() {
		
		sky = world.add!Scene("models/skybox/skybox.scene.xml");//(skybox/skybox.scene.xml");
		sky.scale = float3(210, 50, 210);
		sky.shadowsDisabled = true;
		
		rndrr.viewWireFrame = true;
		pipe = new Pipeline("pipelines/forward.pipeline.xml");
		cam = world.add!Camera(pipe);
		cam.translation = CordsLocal(2, 1, 0, world);
		cam.rotation = CordsLocal(-20, 135, 0, world);
		cam.viewport = Box!CordsScreen(wnd.size);
		cam.clipNear = .01;
		cam.clipFar = 1000;
		cam.fov = 73;
		cam.assign(wnd);	// TODO: Multithreading
		
		
		light = world.add!Light(
			new Material("materials/light.material.xml"), "LIGHTING", "SHADOWMAP");
		light.translation = CordsLocal(0, 25, 20, world);
		light.rotation = CordsLocal(-30, 0, 0, world);
		light.radius = 200;
		light.fov = 90;
		light.color = ColorRGB!float(.9f, .7f, .75f);
		
		auto vol = new VolumeSimple(Box!CordsWorld(
				CordsWorld(0,0,0), CordsWorld(63,63,63)));
		
		createSphere(vol._data, 30);//TODO: geometry library
		
		auto extractor = new ExtractorMesh(vol);
		auto geo = cast(Geometry) extractor.extract(/*cam.fov*/);
		
		auto mat = new Material("models/platform/stones.material.xml");
		
		Model model = world.add!Model("DynGeoModelNode", geo);
		model.add!Mesh("DynGeoMesh", mat, 0, geo.verticesNo, 0, geo.indicesNo );
	    model.translation = CordsLocal(-5, -3, 0, world);
	    model.scale = float3(.1, .1, .1);
	}
	
	void createSphere(SimpleVolumeMaterialDensityPair44 volData, int radius) {
		auto v3dVolCenter = new Vector3DFloat(
			volData.getWidth() / 2,volData.getHeight() / 2, volData.getDepth() / 2);
		foreach(z; 0 .. volData.getWidth()) {
			foreach(y; 0 .. volData.getHeight()) {
				foreach(x; 0 .. volData.getDepth()) {
					
					auto v3dCurrentPos = new Vector3DFloat(x,y,z);
					
					float fDistToCenter = (v3dCurrentPos.swigOpSubAssign(v3dVolCenter)).length();
					
					if(fDistToCenter < radius)
					{
						//Our new density value
						ubyte uDensity = MaterialDensityPair44.getMaxDensity();
	
						//Get the old voxel
						MaterialDensityPair44 voxel = volData.getVoxelAt(x,y,z);
	
						//Modify the density
						voxel.setDensity(uDensity);
	
						//Wrte the voxel value into the volume	
						volData.setVoxelAt(x, y, z, voxel);
					}
				}
			}
		}
	}
}