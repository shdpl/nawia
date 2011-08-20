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
	std.path,
	std.uri,
	std.stdio,
	ex.window.open,
	std.conv;
	

private import
	impl.glfw.ge.window.window,
	impl.nawia.io.res.manager,
	impl.h3d.ge.renderer,
	ge.component.camera,
	impl.h3d.ee.world,
	impl.h3d.ge.res.scene;
	
void main(string args[]){//TODO: configured resources
	string fileUri(string path) {
		//TODO if windows inverse slashes
		return encode("file://"~dirname(args[0])~"");
	}
	auto wndProps = WindowProperties();

	wndProps.size = CordsScreen(1280,1024);
	wndProps.status = WindowStatus.FULLSCREEN;
	auto wnd = Window(wndProps);
	wnd.title = "Nawia RPG";
	
	
	auto rndrr = Renderer(wnd);
	rndrr.texturesReference = true;
	rndrr.texCompression = false;
	rndrr.anisotropy = 4;
	rndrr.shadowMapSize = 2048;
	//h3dSetOption( H3DOptions::FastAnimation, 1 ); ??
	
	
	ResManager().bind("executable", args[0]);
	ResManager().bind("data", "executable:../data");

	auto world = new H3DWorld;
	/*
	//auto sky = world.add(new H3DScene("skybox/skybox.scene.xml"));
	//auto sky = new H3DScene("skybox/skybox.scene.xml");
	//sky.pos = (0, 0, 0);
	//sky.orientation = (0, 0, 0);
	sky.scale = (210, 50, 210);
	sky.shadowsDisabled = true;
	world.add(sky);
	
	auto platform = new H3DScene("platform/platform.scene.xml");
	//platform.pos = (0, 0, 0);
	//platform.orientation = (0, 0, 0);
	platform.scale = (.23f, .23f, .23f);
	world.add(platform);
	
	platform.add(new H3DCamera(wnd, new H3DPipeline("deferred.pipeline.xml")));
	
	auto lCtxID = "LIGHTING";
	auto sCtxID = "SHADOWMAP";
	auto lMat = impl!Material("light.material.xml");
	enforce( lCtxID in lMat.contexts && sCtxID in lMat.contexts );
	auto light = impl!Light(lMat, lCtxID, sCtxID);
	light.pos = (0, 20, 50);
	light.orientation = (-30, 0, 0);
	//light.scale = (1, 1, 1);
	light.radius = 100;
	light.fov = 90;
	light.shadowMaps = 3;
	light.shadowSplitLambda = .9f;
	light.shadowBias = .001f;
	light.color = RGBColor(.9f, .7f, .75);
	platform.add(light);
	
	auto man = impl!Actor(
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
	core.thread.Thread.sleep(5_000_000);
}
