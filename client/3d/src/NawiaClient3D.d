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
	std.uri;

private import
	msg.mediator.mtd,
	ge.window.window,
	io.res.manager,
	ge.renderer,
	ge.entity.camera,
	ee.world,
	cfg.cfg;
	
void main(string args[]){//TODO: configured resources
	string fileUri(string path) {
		//TODO if windows inverse slashes
		return encode("file://"~dirname(args[0])~"");
	}
	
	auto wndProps = WindowProperties();
	wndProps.size = CordsScreen(1280,1240);
	auto wnd = Window.getInstance(wndProps);
	wnd.title = "Nawia RPG";
	
	auto rndrr = Renderer(); //TODO: Renderer(wnd);
	rndrr.texturesReference = true;
	rndrr.texCompression = false;
	rndrr.anisotropy = 4;
	rndrr.shadowMapSize = 2048;
	//h3dSetOption( H3DOptions::FastAnimation, 1 ); ??
	
	ResManager().bind("relative", fileUri(args[0]));
	ResManager().bind("data", "relative:data");
	
	
	auto world = impl!World;
	auto sky = impl!Scene("skybox/skybox.scene.xml");
	//sky.pos = (0, 0, 0);
	//sky.orientation = (0, 0, 0);
	sky.scale = (210, 50, 210);
	sky.shadowsDisabled = true;
	world.add(sky);
	
	auto platform = impl!Scene("platform/platform.scene.xml");
	//platform.pos = (0, 0, 0);
	//platform.orientation = (0, 0, 0);
	platform.scale = (.23f, .23f, .23f);
	world.add(platform);
	
	platform.add(impl!Camera("deferred.pipeline.xml"));
	//TODO: Camera <=> Window
	
	auto light = impl!Light(
		impl!Material("light.material.xml", "LIGHTING", "SHADOWMAP"));
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
		impl!Model("man/man.scene.xml", impl!Animator("man.anim")),
		impl!RandomWalker());
	
	auto mtd = new MsgMediatorMtD;
	while(true) {
		mtd.poll;
	}
}
