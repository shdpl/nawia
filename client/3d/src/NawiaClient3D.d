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
	auto wnd = WindowGLFW.getInstance(wndProps);
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
	auto sky = world.add(impl!Scene("skybox/skybox.scene.xml"));
	//sky.pos = (0, 0, 0);
	//sky.orientation = (0, 0, 0);
	sky.scale = (210, 50, 210);
	//h3dSetNodeFlags( sky, H3DNodeFlags::NoCastShadow, true );
	
	auto platform = world.add(impl!Scene("platform/platform.scene.xml"));
	//platform.pos = (0, 0, 0);
	//platform.orientation = (0, 0, 0);
	platform.scale = (.23f, .23f, .23f);
	
	platform.add(impl!Camera("deferred.pipeline.xml"));
	//TODO: Camera <=> Window
	
//	H3DNode light = h3dAddLightNode( H3DRootNode, "Light1", lightMatRes, "LIGHTING", "SHADOWMAP" );
//	h3dSetNodeTransform( light, 0, 20, 50, -30, 0, 0, 1, 1, 1 );
//	h3dSetNodeParamF( light, H3DLight::RadiusF, 0, 200 );
//	h3dSetNodeParamF( light, H3DLight::FovF, 0, 90 );
//	h3dSetNodeParamI( light, H3DLight::ShadowMapCountI, 3 );
//	h3dSetNodeParamF( light, H3DLight::ShadowSplitLambdaF, 0, 0.9f );
//	h3dSetNodeParamF( light, H3DLight::ShadowMapBiasF, 0, 0.001f );
//	h3dSetNodeParamF( light, H3DLight::ColorF3, 0, 0.9f );
//	h3dSetNodeParamF( light, H3DLight::ColorF3, 1, 0.7f );
//	h3dSetNodeParamF( light, H3DLight::ColorF3, 2, 0.75f );
	
	auto mtd = new MsgMediatorMtD;
	while(true) {
		mtd.poll;
	}
}
