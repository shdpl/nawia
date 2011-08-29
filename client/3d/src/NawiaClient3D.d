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
	impl.glfw.ge.window.window,
	impl.nawia.io.res.manager,
	impl.h3d.ge.renderer,
	impl.h3d.ee.world,
	impl.h3d.ge.res.scene,
	impl.h3d.ge.component.camera,
	impl.h3d.ge.res.pipeline,
	impl.h3d.ge.res.material,
	impl.h3d.ge.component.light,
	impl.h3d.ge.component.model,
	impl.nawia.ee.actor;
	
private import impl.glfw.glfw,
	impl.h3d.utils;
	
	
	
void main(string args[]){//TODO: configured resources
	auto wndProps = WindowProperties();

	wndProps.size = CordsScreen(1280,1024); //TODO: Box!CordsScreen
	wndProps.status = WindowStatus.NORMAL;
	auto wnd = Window(wndProps);
	wnd.title = "Nawia RPG";
	
	auto rndrr = Renderer(wnd);
	rndrr.texReference = true;
	rndrr.texCompression = false;
	rndrr.anisotropy = 4;
	rndrr.shadowMapSize = 2048;
	rndrr.animationFast = true;
	
	auto world = new H3DWorld;
	
	auto scene = world.add!Scene("models/cathedral.scene.xml");
	Camera[] cams = scene.find!Camera("Camera");
	enforceEx!Exception(cams.length == 1, "cams.length=" ~ text(cams.length));
	Camera cam = cams[0];
	cam.viewport = Box!CordsScreen(wnd.size);
	
	/*
	auto cam = 
		world.add!Camera(pipe);
	cam.translation = CordsLocal(15, 3, 20, platform);
	cam.rotation = CordsLocal(-10, 60, 0, platform);
	cam.viewport = Box!CordsScreen(wnd.size);
	cam.clipNear = .01;
	cam.clipFar = 1000;	//FIXME: clip!=clip <swap with fov>
	cam.fov = 45;
	//TODO: assign camera to window
	h3dResizePipelineBuffers( pipe.id, wnd.size.x, wnd.size.y );

	auto platform = world.add!Scene("models/platform/platform.scene.xml"); //("platform/platform.scene.xml");
	platform.translation = CordsLocal(-1, 0, 0, world);
	platform.scale = float3(.23, .23, .23);
	
	auto sky = platform.add!Scene("models/skybox/skybox.scene.xml");//(skybox/skybox.scene.xml");
	sky.scale = float3(210, 50, 210);
	sky.shadowsDisabled = true;
	
	auto pipe = new H3DPipeline("pipelines/deferred.pipeline.xml");
	auto cam = 
		world.add!Camera(pipe);
	cam.translation = CordsLocal(15, 3, 20, platform);
	cam.rotation = CordsLocal(-10, 60, 0, platform);
	cam.viewport = Box!CordsScreen(wnd.size);
	cam.clipNear = .01;
	cam.clipFar = 1000;	//FIXME: clip!=clip <swap with fov>
	cam.fov = 45;
	//TODO: assign camera to window
	h3dResizePipelineBuffers( pipe.id, wnd.size.x, wnd.size.y );
	
	//enforce( lCtxID in lMat[0].shader.contexts
	//	&& sCtxID in lMat[0].shader.contexts );
	auto light = platform.add!Light(
		new H3DMaterial("materials/light.material.xml"), "LIGHTING", "SHADOWMAP");
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
	
	auto mtd = new MsgMediatorMtD;
	while(true) {
		mtd.poll;
	}*/
	

	
	uint frames = 3000;
	StopWatch timer;
	timer.start();
	foreach(i; 0 .. frames) {
		h3dRender(cam.id);
		h3dFinalizeFrame();
		glfwSwapBuffers();
		cam.rotation(CordsLocal(0, to!float(-i*50)/frames +40, 0, world));
	}
	timer.stop;
	writeln(cast(real)frames*1000/timer.peek.msecs, " fps");
	h3dutDumpMessages();
}
