// *************************************************************************************************
//
// Horde3D
//   Next-Generation Graphics Engine
// --------------------------------------
// Copyright (C) 2006-2008 Nicolas Schulz
//               2008 Florian Noeding (D Wrapper)
//
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
// ************************************************************************************************


module derelict.horde3d.horde3dutils;



private import derelict.util.loader;
private import derelict.horde3d.horde3d;









extern (C)
{
	 typedef void function(char **ptr) pffreeMem;
	 typedef bool function() pfdumpMessages;
	 typedef bool function(int hDC) pfinitOpenGL;
	 typedef void function() pfreleaseOpenGL;
	 typedef void function() pfswapBuffers;
	 typedef char * function(int type) pfgetResourcePath;
	 typedef void function(int type,  char *path) pfsetResourcePath;
	 typedef bool function(char *contentDir) pfloadResourcesFromDisk;
	 typedef bool function(ubyte *pixels, int width, int height, int bpp,
							 char **outData, int *outSize) pfcreateTGAImage;
	 typedef void function(NodeHandle cameraNode, float nwx, float nwy, float *ox, float *oy, float *oz, float *dx, float *dy, float *dz) pfpickRay;
	 typedef NodeHandle function(NodeHandle cameraNode, float nwx, float nwy) pfpickNode;
	 typedef void function(char *text, float x, float y, float size,
					   int layer, ResHandle fontMaterialRes) pfshowText;
	 typedef void function(ResHandle fontMaterialRes, float curFPS) pfshowFrameStats;
}


struct Horde3DUtils
{
static:
	pffreeMem freeMem;
	pfdumpMessages dumpMessages;
	pfinitOpenGL initOpenGL;
	pfreleaseOpenGL releaseOpenGL;
	pfswapBuffers swapBuffers;
	pfgetResourcePath getResourcePath;
	pfsetResourcePath setResourcePath;
	pfloadResourcesFromDisk loadResourcesFromDisk;
	pfcreateTGAImage createTGAImage;
	pfpickRay pickRay;
	pfpickNode pickNode;
	pfshowText showText;
	pfshowFrameStats showFrameStats;
}

private void load(SharedLib lib)
{
	with(Horde3DUtils)
	{
		bindFunc(freeMem)("freeMem", lib);
		bindFunc(dumpMessages)("dumpMessages", lib);
		bindFunc(initOpenGL)("initOpenGL", lib);
		bindFunc(releaseOpenGL)("releaseOpenGL", lib);
		bindFunc(swapBuffers)("swapBuffers", lib);
		bindFunc(getResourcePath)("getResourcePath", lib);
		bindFunc(setResourcePath)("setResourcePath", lib);
		bindFunc(loadResourcesFromDisk)("loadResourcesFromDisk", lib);
		bindFunc(createTGAImage)("createTGAImage", lib);
		bindFunc(pickRay)("pickRay", lib);
		bindFunc(pickNode)("pickNode", lib);
		bindFunc(showText)("showText", lib);
		bindFunc(showFrameStats)("showFrameStats", lib);
	}
}
GenericLoader DerelictHorde3DUtils;
static this()
{
	DerelictHorde3DUtils.setup("Horde3DUtils.dll",
		"libHorde3DUtils.so",
		"",
		&load);
}

