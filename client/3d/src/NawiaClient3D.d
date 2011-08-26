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
	impl.glfw.ge.window.window,
	impl.nawia.io.res.manager,
	impl.h3d.ge.renderer,
	ge.component.camera,
	impl.h3d.ee.world,
	impl.h3d.ge.res.scene,
	type.cords.local,
	impl.h3d.ge.component.camera,
	impl.h3d.ge.res.pipeline,
	impl.h3d.ge.res.material,
	impl.h3d.ge.component.light,
	type.color.rgb;
	
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
	platform.translation = CordsLocal(0, 0, 0, world);
	//platform.orientation = (0, 0, 0);
	platform.scale = float3(23f, 23f, 23f);
	auto pipe = new H3DPipeline("pipelines/forward.pipeline.xml");
	auto cam = 
		world.add!Camera(wnd, pipe);
		
	
	auto lCtxID = "LIGHTING";
	auto sCtxID = "SHADOWMAP";
	auto lMat = new H3DMaterial("materials/light.material.xml");
	
	//enforce( lCtxID in lMat[0].shader.contexts
	//	&& sCtxID in lMat[0].shader.contexts );
	auto light = world.add!Light(lMat, lCtxID, sCtxID);
	light.translation = CordsLocal(0, 20, 50, world);
	light.rotation = CordsLocal(-30, 0, 0, world);
	light.scale = float3(1, 1, 1);
	light.radius = 100;
	light.fov = 90;
	light.shadowMapsCount = 3;
	light.shadowSegmentation = .9f;
	light.shadowBias = .001f;
	light.color = ColorRGB!float(.9f, .7f, .75);
	
	cam.viewport = Box!CordsScreen(wnd.size);
	
	/*
	auto man = new Actor(
		impl!Model("man/man.scene.xml", impl!Animation("man.anim")),
		impl!RandomWalker());
	platform.add(man);

	auto mPositioner = Positioner(Circle(0, 20), uniform(0.0L, 20.0L));
	for(int i=0; i<99; i++)
		platform.add(mPositioner.position(man.duplicate));
	
	auto mtd = new MsgMediatorMtD;
	while(true) {
		mtd.poll;
	}*/
	foreach(i; 0..10000) {
		h3dSetNodeTransform( platform.id, -cast(float)i/cast(float)10000, 0, 0, 0, 0, 0, 0.23f, 0.23f, 0.23f );
		h3dFinalizeFrame();
		h3dRender(cam.id);
		glfwSwapBuffers();
		//platform.translation(0f, 0f, 0f, world);
	}
	h3dutDumpMessages();
}
