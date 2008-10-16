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
#include <horde3d/Horde3D.h>
#include <horde3d/Horde3DTerrain.h>



static PyObject* horde3dterrain_addTerrainNode(PyObject *self, PyObject *args)
{
	int parent;
	const char *name;
	int heightMapRes;
	int materialRes;

	if(!PyArg_ParseTuple(args, "isii:addTerrainNode", &parent, &name, &heightMapRes, &materialRes))
		return NULL;

	return Py_BuildValue("i", Horde3DTerrain::addTerrainNode(parent, name, heightMapRes, materialRes));
}



static PyObject* horde3dterrain_createGeometryResource(PyObject *self, PyObject *args)
{
	int node;
	const char *name;
	float meshQuality;

	if(!PyArg_ParseTuple(args, "isf:createGeometryResource", &node, &name, &meshQuality))
		return NULL;

	return Py_BuildValue("i", Horde3DTerrain::createGeometryResource(node, name, meshQuality));
}


#define H3D_CONSTANT(dict, name, where) PyDict_SetItemString(dict, #name, Py_BuildValue("i", where::name))
static PyObject* horde3dterrain__getConstants(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":_getConstants"))
		return NULL;

	PyObject *dict = PyDict_New();

	// global constants
	PyDict_SetItemString(dict, "SNT_TerrainNode", Py_BuildValue("i", SNT_TerrainNode));

	// TerrainNodeParams
	PyObject *d = PyDict_New();
	H3D_CONSTANT(d, HeightMapRes, TerrainNodeParams);
	H3D_CONSTANT(d, MaterialRes, TerrainNodeParams);
	H3D_CONSTANT(d, MeshQuality, TerrainNodeParams);
	H3D_CONSTANT(d, SkirtHeight, TerrainNodeParams);
	H3D_CONSTANT(d, BlockSize, TerrainNodeParams);
	PyDict_SetItemString(dict, "TerrainNodeParams", d);

	return dict;
}



static PyMethodDef horde3dterrain_methods[] =
{
	{"addTerrainNode", horde3dterrain_addTerrainNode, METH_VARARGS},
	{"createGeometryResource", horde3dterrain_createGeometryResource, METH_VARARGS},



	{"_getConstants", horde3dterrain__getConstants, METH_VARARGS}, // not part of official API, used to get the constants and enums into Python

	{NULL, NULL}
};


PyMODINIT_FUNC inithorde3dterrain(void)
{
	Py_InitModule("horde3dterrain", horde3dterrain_methods);
}


