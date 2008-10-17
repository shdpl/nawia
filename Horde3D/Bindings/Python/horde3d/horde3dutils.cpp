// *************************************************************************************************
//
// Horde3D
//   Next-Generation Graphics Engine
// --------------------------------------
// Copyright (C) 2006-2008 Nicolas Schulz
//               2008 Florian Noeding (Python wrapper)
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
// *************************************************************************************************
#include "Python.h"
#include <horde3d/Horde3DUtils.h>

static PyObject* horde3dutils_dumpMessages(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":dumpMessages"))
		return NULL;

	if(Horde3DUtils::dumpMessages())
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3dutils_getResourcePath(PyObject *self, PyObject *args)
{
	int type;

	if(!PyArg_ParseTuple(args, "i:getResourcePath", &type))
		return NULL;

	return Py_BuildValue("s", Horde3DUtils::getResourcePath(type));
}


static PyObject* horde3dutils_setResourcePath(PyObject *self, PyObject *args)
{
	int type;
	const char *path;

	if(!PyArg_ParseTuple(args, "is:setResourcePath", &type, &path))
		return NULL;

	Horde3DUtils::setResourcePath(type, path);

	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject* horde3dutils_loadResourcesFromDisk(PyObject *self, PyObject *args)
{
	const char *contentDir;
	bool result;
	
	if(!PyArg_ParseTuple(args, "s:loadResourcesFromDisk", &contentDir))
		return NULL;
	// loadResourcesFromDisk could take some time, so allow threading
	// should be safe, since Horde3D does not access Python in any way
	Py_BEGIN_ALLOW_THREADS
	result = Horde3DUtils::loadResourcesFromDisk(contentDir);
	Py_END_ALLOW_THREADS


	if(result)
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3dutils_pickRay(PyObject *self, PyObject *args)
{
	int cameraNode;
	float nwx, nwy;

	if(!PyArg_ParseTuple(args, "iff:pickRay", &cameraNode, &nwx, &nwy))
		return NULL;

	float ox, oy, oz;
	float dx, dy, dz;
	Horde3DUtils::pickRay(cameraNode, nwx, nwy, &ox, &oy, &oz, &dx, &dy, &dz);

	return Py_BuildValue("(fff)(fff)", ox, oy, oz, dx, dy, dz);
}


static PyObject* horde3dutils_pickNode(PyObject *self, PyObject *args)
{
	int cameraNode;
	float nwx, nwy;
	
	if(!PyArg_ParseTuple(args, "iff:pickNode", &cameraNode, &nwx, &nwy))
		return NULL;

	return Py_BuildValue("i", Horde3DUtils::pickNode(cameraNode, nwx, nwy));

}


static PyObject* horde3dutils_showText(PyObject *self, PyObject *args)
{
	const char *text;
	float x, y;
	float size;
	int layer;
	int fontMaterial;

	if(!PyArg_ParseTuple(args, "sfffii:showText", &text, &x, &y, &size, &layer, &fontMaterial))
		return NULL;

	Horde3DUtils::showText(text, x, y, size, layer, fontMaterial);

	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject* horde3dutils_showFrameStats(PyObject *self, PyObject *args)
{
	int res;
	float curFPS;

	if(!PyArg_ParseTuple(args, "if:showFrameStats", &res, &curFPS))
		return NULL;

	Horde3DUtils::showFrameStats(res, curFPS);

	Py_INCREF(Py_None);
	return Py_None;
}






static PyMethodDef horde3dutils_methods[] =
{
	//{"freeMem", horde3dutils_freeMem, METH_VARARGS},// will only be implemented when needed; currently only used by createTGAImage which is not supported
	{"dumpMessages", horde3dutils_dumpMessages, METH_VARARGS},
	//{"initOpenGL", horde3dutils_initOpenGL, METH_VARARGS},// not implemented; only available on Windows
	//{"releaseOpenGL", horde3dutils_releaseOpenGL, METH_VARARGS},// not implemented; only available on Windows
	//{"swapBuffers", horde3dutils_swapBuffers, METH_VARARGS},// not implemented; only available on Windows
	{"getResourcePath", horde3dutils_getResourcePath, METH_VARARGS},
	{"setResourcePath", horde3dutils_setResourcePath, METH_VARARGS},
	{"loadResourcesFromDisk", horde3dutils_loadResourcesFromDisk, METH_VARARGS},
	//{"createTGAImage", horde3dutils_createTGAImage, METH_VARARGS}, // use PIL
	{"pickRay", horde3dutils_pickRay, METH_VARARGS},
	{"pickNode", horde3dutils_pickNode, METH_VARARGS},
	{"showText", horde3dutils_showText, METH_VARARGS},
	{"showFrameStats", horde3dutils_showFrameStats, METH_VARARGS},


	{NULL, NULL}
};


PyMODINIT_FUNC inithorde3dutils(void)
{
	Py_InitModule("horde3dutils", horde3dutils_methods);
}


