// *************************************************************************************************
//
// Horde3D Primitives Extension
// --------------------------------------
// Copyright (C) 2008 Florian Noeding
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
#include <horde3d/Horde3DPrimitives.h>



static PyObject* horde3dprimitives_addPoint2D(PyObject *self, PyObject *args)
{
	int layer;
	float x, y;
	float color[4];

	if(!PyArg_ParseTuple(args, "iffffff:addPoint2D", &layer, &x, &y, color + 0, color + 1, color + 2, color + 3))
		return NULL;

	Horde3DPrimitives::addPoint2D(layer, x, y, color);

	Py_INCREF(Py_None);
	return Py_None;
}



static PyObject* horde3dprimitives_addLine2D(PyObject *self, PyObject *args)
{
	int layer;
	float x0, y0, x1, y1;
	float color0[4];
	float color1[4];

	if(!PyArg_ParseTuple(args, "iffffffffffff:addLine2D",
				&layer,
				&x0, &y0, &x1, &y1,
				color0 + 0, color0 + 1, color0 + 2, color0 + 3,
				color1 + 0, color1 + 1, color1 + 2, color1 + 3
				))
		return NULL;

	Horde3DPrimitives::addLine2D(layer, x0, y0, x1, y1, color0, color1);

	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject* horde3dprimitives_addQuad2D(PyObject *self, PyObject *args)
{
	int layer;
	float l, t, r, b;
	float color0[4];
	float color1[4];
	float color2[4];
	float color3[4];

	if(!PyArg_ParseTuple(args, "iffffffffffffffffffff:addQuad2D",
				&layer,
				&l, &t, &r, &b,
				color0 + 0, color0 + 1, color0 + 2, color0 + 3,
				color1 + 0, color1 + 1, color1 + 2, color1 + 3,
				color2 + 0, color2 + 1, color2 + 2, color2 + 3,
				color3 + 0, color3 + 1, color3 + 2, color3 + 3
				))
		return NULL;

	Horde3DPrimitives::addQuad2D(layer, l, t, r, b, color0, color1, color2, color3);

	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject* horde3dprimitives_drawPrimitives2D(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":drawPrimitives2D"))
		return NULL;

	Horde3DPrimitives::drawPrimitives2D();

	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject* horde3dprimitives_clearPrimitives2D(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":clearPrimitives2D"))
		return NULL;

	Horde3DPrimitives::clearPrimitives2D();

	Py_INCREF(Py_None);
	return Py_None;
}



#define H3D_CONSTANT(dict, name, where) PyDict_SetItemString(dict, #name, Py_BuildValue("i", where::name))
static PyObject* horde3dprimitives__getConstants(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":_getConstants"))
		return NULL;

	PyObject *dict = PyDict_New();

	return dict;
}



static PyMethodDef horde3dprimitives_methods[] =
{
	{"addPoint2D", horde3dprimitives_addPoint2D, METH_VARARGS},
	{"addLine2D", horde3dprimitives_addLine2D, METH_VARARGS},
	{"addQuad2D", horde3dprimitives_addQuad2D, METH_VARARGS},
	{"drawPrimitives2D", horde3dprimitives_drawPrimitives2D, METH_VARARGS},
	{"clearPrimitives2D", horde3dprimitives_clearPrimitives2D, METH_VARARGS},



	{"_getConstants", horde3dprimitives__getConstants, METH_VARARGS}, // not part of official API, used to get the constants and enums into Python

	{NULL, NULL}
};


PyMODINIT_FUNC inithorde3dprimitives(void)
{
	Py_InitModule("horde3dprimitives", horde3dprimitives_methods);
}


