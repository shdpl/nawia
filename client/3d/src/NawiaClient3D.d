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
	
private import impl.h3d.h3d,
	impl.glfw.glfw,
	impl.h3d.utils,
	type.geometric.box;	
	
void main(string args[]){//TODO: configured resources
	auto wndProps = WindowProperties();

	wndProps.size = CordsScreen(1280,1024); //TODO: Box!CordsScreen
	wndProps.status = WindowStatus.NORMAL;
	auto wnd = Window(wndProps);
	wnd.title = "Nawia RPG";
	
	auto rndrr = Renderer(wnd);
	rndrr.texturesReference = true;
	rndrr.texCompression = false;
	rndrr.anisotropy = 4;
	rndrr.shadowMapSize = 2048;
	rndrr.animationFast = true;
	
	auto world = new H3DWorld;//(skybox/skybox.scene.xml");
	auto sky = world.add!Scene("models/skybox/skybox.scene.xml");
	//sky.translation = CordsLocal(0, 0, 0, world);//TODO: world coords
	//sky.rotation = CordsLocal(0, 0, 0, world);
	sky.scale = float3(410, 10, 210);
	//sky.shadowsDisabled = true;
	//("platform/platform.scene.xml");
	auto platform = world.add!Scene("models/platform/platform.scene.xml");
	platform.translation = CordsLocal(-1, 0, 0, world);
	//platform.rotation = (0, 0, 0);
	//platform.scale = float3(.23f, .23f, .23f);
	auto pipe = new H3DPipeline("pipelines/deferred.pipeline.xml");
	auto cam = 
		world.add!Camera(wnd, pipe);
	
	//enforce( lCtxID in lMat[0].shader.contexts
	//	&& sCtxID in lMat[0].shader.contexts );
	auto light = world.add!Light(
		new H3DMaterial("materials/light.material.xml"), "LIGHTING", "SHADOWMAP");
	light.translation = CordsLocal(0, 20, 50, world);
	light.rotation = CordsLocal(-30, 0, 0, world);
	//light.scale = float3(1, 1, 1);
	light.radius = 100;
	light.fov = 90;
	light.shadowMapsCount = 3;
	light.shadowSegmentation = .9f;
	light.shadowBias = .001f;
	light.color = ColorRGB!float(.9f, .7f, .75);
	
	cam.viewport = Box!CordsScreen(wnd.size);
	
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
	//h3dSetNodeTransform( platform.id, -1, 0, 0, 0, 0, 0, 0.23f, 0.23f, 0.23f );
	

	
	uint frames = 3000;
	StopWatch timer;
	timer.start;
	foreach(i; 0 .. frames) {
		h3dFinalizeFrame();
		h3dRender(cam.id);
		glfwSwapBuffers();
		//cam.rotation(CordsLocal((frames/10)/(i+1), 0, 0, world));
	}
	timer.stop;
	writeln(cast(real)frames*1000/timer.peek.msecs, " fps");
	h3dutDumpMessages();
}
