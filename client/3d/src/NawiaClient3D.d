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
	impl.h3d.utils,
	impl.polyvox.polyvox;
	
	
void main(){
	Demo demo;
	
//	demo = new Demo1;
//	demo = new Demo2;
//	demo = new Demo3;
	demo = new Demo4;
	
	demo.init;
	demo.load;
	demo.run;
}

abstract class Demo {
	static immutable uint frames = 3000;
	World world;
	Window wnd;
	Camera cam;
	Renderer rndrr;
	protected bool anim = true;
	
	public void init() {
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
	
	abstract void load();
	
	public void run() {
		auto base_rot = cam.rotation;
		StopWatch timer;
		timer.start();
		foreach(i; 0 .. frames) {
			h3dRender(cam.id);
			h3dFinalizeFrame();
			glfwSwapBuffers();
			if(anim)
				cam.rotation=CordsLocal(base_rot.x, base_rot.y + to!float(-i*50)/frames, base_rot.z, world);
		}
		timer.stop;
		writeln(cast(real)frames*1000/timer.peek.msecs, " fps");
		h3dutDumpMessages();
		/*
		auto mtd = new MsgMediatorMtD;
		while(true) {
			mtd.poll;
		}*/
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
		cam.fov = 45;
		//TODO: assign camera to window
		
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
		cam.fov = 45;
		cam.rotation = CordsLocal(0, 40, 0, world);
	}
}

class Demo3 : Demo {
	Component platform, sky;
	Pipeline pipe;
	Light light;
	
	this() {anim = false;}
	
	override void load() {
		void createSimpleGeometryRes() {
		    // Cache the resources
		    H3DRes matRes = h3dAddResource(H3DResTypes.List.Material, "models/platform/stones.material.xml", 0);
		    h3dutLoadResourcesFromDisk( "/home/shd/src/nawia/client/3d/bin/data/" );
		
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
		    
		    enforce(h3dutCreateGeometryRes("geoRes", vertexCount, triangleIndexCount,
		    	cast(float*)posData, cast(uint*)indexData, cast(short*)normalData, cast(short*)tangentData,
		    	cast(short*)bitangentData, cast(float*)uvData, cast(float*)0));  
			H3DRes geoRes = h3dFindResource(H3DResTypes.List.Geometry, "geoRes");
			enforce(geoRes);
		    H3DNode model = h3dAddModelNode( H3DRootNode, "DynGeoModelNode", geoRes );
		    h3dAddMeshNode( model, "DynGeoMesh", matRes, 0, triangleIndexCount, 0, triangleIndexMax );
		    h3dSetNodeTransform( model, 0,0,0, 0,40,0, .01,.01,.01 );
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
		cam.fov = 45;
		
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
	
	this() {anim = false;}
	
	override void load() {
		void createGeometryRes(uint vertexCount, int triangleIndexCount, float posData[], int indexData[],
				short normalData[],	short tangentData[], short bitangentData[], float uvData[]) {
					
		    H3DRes matRes = h3dAddResource(H3DResTypes.List.Material, "models/platform/stones.material.xml", 0);
		    h3dutLoadResourcesFromDisk( "/home/shd/src/nawia/client/3d/bin/data/" );
		    
		    int triangleIndexMax = 3;
		    
		    enforce(h3dutCreateGeometryRes("geoRes", vertexCount, triangleIndexCount,
		    	cast(float*)posData, cast(uint*)indexData, cast(short*)normalData, cast(short*)tangentData,
		    	cast(short*)bitangentData, cast(float*)uvData, cast(float*)0));
			H3DRes geoRes = h3dFindResource(H3DResTypes.List.Geometry, "geoRes");
			enforce(geoRes);
		    H3DNode model = h3dAddModelNode( H3DRootNode, "DynGeoModelNode", geoRes );
		    h3dAddMeshNode( model, "DynGeoMesh", matRes, 0, triangleIndexCount, 0, triangleIndexMax );
		    h3dSetNodeTransform( model, -5,-3,0, 0,0,0, .1,.1,.1 );
		}
		
		sky = world.add!Scene("models/skybox/skybox.scene.xml");//(skybox/skybox.scene.xml");
		sky.scale = float3(210, 50, 210);
		sky.shadowsDisabled = true;
		
		rndrr.viewWireFrame = true;
		pipe = new Pipeline("pipelines/forward.pipeline.xml");
		cam = world.add!Camera(pipe);
		cam.translation = CordsLocal(2, 1, 0, world);
		cam.rotation = CordsLocal(-20, 90, 0, world);
		cam.viewport = Box!CordsScreen(wnd.size);
		cam.clipNear = .01;
		cam.clipFar = 1000;
		cam.fov = 45;
		
		
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
		
		auto voldata = new SimpleVolumeMaterialDensityPair44
			(new Region(new Vector3DInt32(0,0,0),new Vector3DInt32(63, 63, 63)));
		
		createSphere(voldata, 30);
		
		SurfaceMeshPositionMaterialNormal mesh = new SurfaceMeshPositionMaterialNormal;
		auto extractor = new CubicSurfaceExtractorWithNormalsSimpleVolumeMaterialDensityPair44(
			voldata, voldata.getEnclosingRegion, mesh);
		extractor.execute();
		
		
		float[] vertices;
		short[] normals;
		uint vertexCount = mesh.getNoOfVertices;
		PositionMaterialNormalVector tmp2 = mesh.getVertices();
		for(int i=0; i<tmp2.length; i++){
			vertices ~= tmp2[i].getPosition.getX;
			vertices ~= tmp2[i].getPosition.getY;
			vertices ~= tmp2[i].getPosition.getZ;
			
			normals ~= to!short(tmp2[i].normal.getX() * short.max);
			normals ~= to!short(tmp2[i].normal.getY() * short.max);
			normals ~= to!short(tmp2[i].normal.getZ() * short.max);
		}
		enforce(vertices.length/3 == tmp2.length);
		
		
		uint[] indices;
		uint triangleIndexCount = mesh.getNoOfIndices();
		auto tmp = mesh.getIndices();
		for(int i=0; i<tmp.length; i++){
			indices ~= tmp[i];
		}
		enforce(indices.length == mesh.getNoOfIndices());
		
		float[] posData = vertices;
		int[] indexData = to!(int[])(indices);
		
		enforce(vertexCount == posData.length/3, text(vertexCount, " != ", posData.length/3));
		enforce(triangleIndexCount == indexData.length, text(triangleIndexCount, " != ", indexData.length));
		createGeometryRes( vertexCount, triangleIndexCount,
			posData,
			indexData,
			normals,
			cast(short[]) null,
			cast(short[]) null,
			cast(float[]) null);
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