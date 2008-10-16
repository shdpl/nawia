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


static PyObject* horde3d_getVersionString(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":getVersionString"))
		return NULL;

	return Py_BuildValue("s", Horde3D::getVersionString());
}


static PyObject* horde3d_checkExtension(PyObject *self, PyObject *args)
{
	const char *extensionName;

	if(!PyArg_ParseTuple(args, "s:checkExtension", &extensionName))
		return NULL;

	if(Horde3D::checkExtension(extensionName))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}

	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_init(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":init"))
		return NULL;

	if(Horde3D::init())
	{
		Py_INCREF(Py_True);
		return Py_True;
	}

	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_release(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":release"))
		return NULL;


	Horde3D::release();

	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject* horde3d_resize(PyObject *self, PyObject *args)
{
	int x, y, width, height;

	if(!PyArg_ParseTuple(args, "iiii:resize", &x, &y, &width, &height))
		return NULL;

	Horde3D::resize(x, y, width, height);

	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject* horde3d_render(PyObject *self, PyObject *args)
{
	int cameraNode;
	bool result;

	if(!PyArg_ParseTuple(args, "i:render", &cameraNode))
		return NULL;

	// render could take some time, so allow threading
	// should be safe, since Horde3D does not access Python in any way
	Py_BEGIN_ALLOW_THREADS
	result = Horde3D::render(cameraNode);
	Py_END_ALLOW_THREADS

	if(result)
	{
		Py_INCREF(Py_True);
		return Py_True;
	}

	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_clear(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":clear"))
		return NULL;

	Horde3D::clear();

	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject* horde3d_getMessage(PyObject *self, PyObject *args)
{
	int level;
	float time;
	const char *msg;

	if(!PyArg_ParseTuple(args, ":getMessage"))
		return NULL;

	msg = Horde3D::getMessage(&level, &time);
	return Py_BuildValue("sif", msg, level, time);
}


static PyObject* horde3d_getOption(PyObject *self, PyObject *args)
{
	int engineOption;
	float value;

	if(!PyArg_ParseTuple(args, "i:getOption", &engineOption))
		return NULL;

	value = Horde3D::getOption((EngineOptions::List)engineOption);

	return Py_BuildValue("f", value);
}


static PyObject* horde3d_setOption(PyObject *self, PyObject *args)
{
	int engineOption;
	float value;

	if(!PyArg_ParseTuple(args, "if:setOption", &engineOption, &value))
		return NULL;

	if(Horde3D::setOption((EngineOptions::List)engineOption, value))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}

	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_getStat(PyObject *self, PyObject *args)
{
	int param;
	PyObject *reset;
	bool resetBoolean;

	if(!PyArg_ParseTuple(args, "iO:getStat", &param, &reset))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}

	resetBoolean = PyObject_IsTrue(reset);
	
	return Py_BuildValue("f", Horde3D::getStat((EngineStats::List)param, resetBoolean));
}


static PyObject* horde3d_showOverlay(PyObject *self, PyObject *args)
{
	float x_ll, y_ll, u_ll, v_ll;
	float x_lr, y_lr, u_lr, v_lr;
	float x_ur, y_ur, u_ur, v_ur;
	float x_ul, y_ul, u_ul, v_ul;
	int layer;
	int materialRes;

	// FIXME really bad signature...
	if(!PyArg_ParseTuple(args, "ffffffffffffffffii:showOverlay",
				&x_ll, &y_ll, &u_ll, &v_ll,
				&x_lr, &y_lr, &u_lr, &v_lr,
				&x_ur, &y_ur, &u_ur, &v_ur,
				&x_ul, &y_ul, &u_ul, &v_ul,
				&layer, &materialRes))
		return NULL;

	Horde3D::showOverlay(
			x_ll, y_ll, u_ll, v_ll,
			x_lr, y_lr, u_lr, v_lr,
			x_ur, y_ur, u_ur, v_ur,
			x_ul, y_ul, u_ul, v_ul,
			layer, materialRes);

	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject* horde3d_clearOverlays(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":clearOverlays"))
		return NULL;

	Horde3D::clearOverlays();
	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject* horde3d_getResourceType(PyObject *self, PyObject *args)
{
	int res;
	int type;

	if(!PyArg_ParseTuple(args, "i:getResourceType", &res))
		return NULL;

	type = Horde3D::getResourceType(res);

	return Py_BuildValue("i", type);
}

static PyObject* horde3d_getResourceName(PyObject *self, PyObject *args)
{
	int res;
	if(!PyArg_ParseTuple(args, "i:getResourceName", &res))
		return NULL;

	return Py_BuildValue("s", Horde3D::getResourceName(res));
}


static PyObject* horde3d_findResource(PyObject *self, PyObject *args)
{
	int type;
	const char *name;

	if(!PyArg_ParseTuple(args, "is:findResource", &type, &name))
		return NULL;

	return Py_BuildValue("i", Horde3D::findResource((ResourceTypes::List)type, name));
}

static PyObject* horde3d_addResource(PyObject *self, PyObject *args)
{
	int type;
	const char *name;
	int flags;

	if(!PyArg_ParseTuple(args, "isi:addResource", &type, &name, &flags))
		return NULL;

	return Py_BuildValue("i", Horde3D::addResource((ResourceTypes::List)type, name, flags));
}


static PyObject* horde3d_cloneResource(PyObject *self, PyObject *args)
{
	int res;
	const char *name;

	if(!PyArg_ParseTuple(args, "is:cloneResource", &res, &name))
		return NULL;

	return Py_BuildValue("i", Horde3D::cloneResource(res, name));
}


static PyObject* horde3d_removeResource(PyObject *self, PyObject *args)
{
	int res;

	if(!PyArg_ParseTuple(args, "i:removeResource", &res))
		return NULL;

	return Py_BuildValue("i", Horde3D::removeResource(res));
}


static PyObject* horde3d_loadResource(PyObject *self, PyObject *args)
{
	int res;
	const char *data;
	int size;

	if(!PyArg_ParseTuple(args, "iz#:loadResource", &res, &data, &size))
		return NULL;
	if(data == NULL)
		size = 0;

	if(Horde3D::loadResource(res, data, size))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_unloadResource(PyObject *self, PyObject *args)
{
	int res;

	if(!PyArg_ParseTuple(args, "i:unloadResource", &res))
		return NULL;

	if(Horde3D::unloadResource(res))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_getResourceParami(PyObject *self, PyObject *args)
{
	int res;
	int param;

	if(!PyArg_ParseTuple(args, "ii:getResourceParami", &res, &param))
		return NULL;

	return Py_BuildValue("i", Horde3D::getResourceParami(res, param));
}


static PyObject* horde3d_setResourceParami(PyObject *self, PyObject *args)
{
	int res;
	int param;
	int value;

	if(!PyArg_ParseTuple(args, "iii:setResourceParami", &res, &param, &value))
		return NULL;

	if(Horde3D::setResourceParami(res, param, value))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_getResourceParamf(PyObject *self, PyObject *args)
{
	int res;
	int param;

	if(!PyArg_ParseTuple(args, "ii:getResourceParamf", &res, &param))
		return NULL;

	return Py_BuildValue("f", Horde3D::getResourceParamf(res, param));
}


static PyObject* horde3d_setResourceParamf(PyObject *self, PyObject *args)
{
	int res;
	int param;
	float value;

	if(!PyArg_ParseTuple(args, "iif:setResourceParamf", &res, &param, &value))
		return NULL;

	if(Horde3D::setResourceParamf(res, param, value))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_getResourceParamstr(PyObject *self, PyObject *args)
{
	int res;
	int param;

	if(!PyArg_ParseTuple(args, "ii:getResourceParamf", &res, &param))
		return NULL;

	return Py_BuildValue("s", Horde3D::getResourceParamstr(res, param));
}


static PyObject* horde3d_setResourceParamstr(PyObject *self, PyObject *args)
{
	int res;
	int param;
	const char *value;

	if(!PyArg_ParseTuple(args, "iis:setResourceParamstr", &res, &param, &value))
		return NULL;

	if(Horde3D::setResourceParamstr(res, param, value))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


// FIXME we need the size of the returned pointer to return it to Python
/*
static PyObject* horde3d_getResourceData(PyObject *self, PyObject *args)
{
	int res;
	int param;

	if(!PyArg_ParseTuple(args, "ii:getResourceData", &res, &param))
		return NULL;

	const void *data = Horde3D::getResourceData(res, param);

	return Py_BuildValue("s#", data, size);
}*/


static PyObject* horde3d_updateResourceData(PyObject *self, PyObject *args)
{
	int res;
	int param;
	const void *data;
	int size;

	if(!PyArg_ParseTuple(args, "iis#:updateResourceData", &res, &param, &data, &size))
		return NULL;

	if(Horde3D::updateResourceData(res, param, data, size))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_queryUnloadedResource(PyObject *self, PyObject *args)
{
	int index;
	if(!PyArg_ParseTuple(args, "i:queryUnloadedResource", &index))
		return NULL;

	return Py_BuildValue("i", Horde3D::queryUnloadedResource(index));
}


static PyObject* horde3d_releaseUnusedResources(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":releaseUnusedResources"))
		return NULL;

	Horde3D::releaseUnusedResources();

	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject* horde3d_createTexture2D(PyObject *self, PyObject *args)
{
	const char *name;
	int flags;
	int width;
	int height;
	PyObject *renderable;

	if(!PyArg_ParseTuple(args, "siiiO:createTexture2D", &name, &flags, &width, &height, &renderable))
		return NULL;

	bool renderableBool = PyObject_IsTrue(renderable);

	return Py_BuildValue("i", Horde3D::createTexture2D(name, flags, width, height, renderableBool));
}


static PyObject* horde3d_setShaderPreambles(PyObject *self, PyObject *args)
{
	const char *vertPreamble;
	const char *fragPreamble;

	if(!PyArg_ParseTuple(args, "ss:setShaderPreambles", &vertPreamble, &fragPreamble))
		return NULL;

	Horde3D::setShaderPreambles(vertPreamble, fragPreamble);

	Py_INCREF(Py_None);
	return Py_None;
}



static PyObject* horde3d_setMaterialUniform(PyObject *self, PyObject *args)
{
	int material;
	const char *name;
	float a, b, c, d;

	if(!PyArg_ParseTuple(args, "isffff:setMaterialUniform", &material, &name, &a, &b, &c, &d))
		return NULL;

	if(Horde3D::setMaterialUniform(material, name, a, b, c, d))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_setPipelineStageActivation(PyObject *self, PyObject *args)
{
	int res;
	const char *stageName;
	PyObject *enabled;

	if(!PyArg_ParseTuple(args, "isO", &res, &stageName, &enabled))
		return NULL;

	bool enabledBool = PyObject_IsTrue(enabled);

	if(Horde3D::setPipelineStageActivation(res, stageName, enabledBool))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}



static PyObject* horde3d_getPipelineRenderTargetData(PyObject *self, PyObject *args)
{
	int pipeline;
	const char *targetName;
	int bufIndex;
	
	if(!PyArg_ParseTuple(args, "isi:getPipelineRenderTargetData", &pipeline, &targetName, &bufIndex))
		return NULL;

	// first call to determine needed buffer size
	int width;
	int height;
	int compCount;
	bool result = Horde3D::getPipelineRenderTargetData(pipeline, targetName, bufIndex, &width, &height, &compCount, NULL, 0);
	if(!result)
	{
		Py_INCREF(Py_None);
		return Py_None;
	}

	int bufferSize = sizeof(float) * compCount * width * height;
	float *dataBuffer = (float*)PyMem_Malloc(bufferSize);// FIXME check for NULL pointer
	result = Horde3D::getPipelineRenderTargetData(pipeline, targetName, bufferSize, &width, &height, &compCount, dataBuffer, bufferSize);

	if(result)
	{
		// transfer float's to a list
		PyObject *list = PyList_New(0);
		for(size_t i = 0; i < bufferSize / sizeof(float); ++i)
		{
			PyList_Append(list, Py_BuildValue("f", dataBuffer[i]));
		}
		PyMem_Free(dataBuffer);

		
		return Py_BuildValue("iiiO", width, height, compCount, list);
	}
	PyMem_Free(dataBuffer);

	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject* horde3d_getNodeType(PyObject *self, PyObject *args)
{
	int node;
	if(!PyArg_ParseTuple(args, "i:getNodeType", &node))
		return NULL;

	return Py_BuildValue("i", Horde3D::getNodeType(node));
}


static PyObject* horde3d_getNodeParent(PyObject *self, PyObject *args)
{
	int node;

	if(!PyArg_ParseTuple(args, "i:getNodeParent", &node))
		return NULL;

	return Py_BuildValue("i", Horde3D::getNodeParent(node));
}


static PyObject* horde3d_setNodeParent(PyObject *self, PyObject *args)
{
	int node;
	int parent;

	if(!PyArg_ParseTuple(args, "ii:setNodeParent", &node, &parent))
		return NULL;

	if(Horde3D::setNodeParent(node, parent))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_getNodeChild(PyObject *self, PyObject *args)
{
	int node;
	int index;

	if(!PyArg_ParseTuple(args, "ii:getNodeChild", &node, &index))
		return NULL;

	return Py_BuildValue("i", Horde3D::getNodeChild(node, index));
}


static PyObject* horde3d_addNodes(PyObject *self, PyObject *args)
{
	int parent;
	int sceneRes;

	if(!PyArg_ParseTuple(args, "ii:addNodes", &parent, &sceneRes))
		return NULL;

	return Py_BuildValue("i", Horde3D::addNodes(parent, sceneRes));
}


static PyObject* horde3d_removeNode(PyObject *self, PyObject *args)
{
	int node;

	if(!PyArg_ParseTuple(args, "i:removeNode", &node))
		return NULL;

	if(Horde3D::removeNode(node))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_setNodeActivation(PyObject *self, PyObject *args)
{
	int node;
	PyObject *active;

	if(!PyArg_ParseTuple(args, "iO:setNodeActivation", &node, &active))
		return NULL;

	bool activeBool = PyObject_IsTrue(active);

	if(Horde3D::setNodeActivation(node, activeBool))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}



static PyObject* horde3d_checkNodeTransformFlag(PyObject *self, PyObject *args)
{
	int node;
	PyObject *reset;

	if(!PyArg_ParseTuple(args, "iO:checkNodeTransformFlag", &node, &reset))
		return NULL;

	bool resetBool = PyObject_IsTrue(reset);
	if(Horde3D::checkNodeTransformFlag(node, resetBool))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_getNodeTransform(PyObject *self, PyObject *args)
{
	int node;

	if(!PyArg_ParseTuple(args, "i:getNodeTransform", &node))
		return NULL;

	float tx, ty, tz;
	float rx, ry, rz;
	float sx, sy, sz;

	if(Horde3D::getNodeTransform(node, &tx, &ty, &tz, &rx, &ry, &rz, &sx, &sy, &sz))
	{
		return Py_BuildValue("fffffffff", tx, ty, tz, rx, ry, rz, sx, sy, sz);
	}
	Py_INCREF(Py_None);
	return Py_None;
}



static PyObject* horde3d_setNodeTransform(PyObject *self, PyObject *args)
{
	int node;
	float tx, ty, tz;
	float rx, ry, rz;
	float sx, sy, sz;

	if(!PyArg_ParseTuple(args, "ifffffffff:setNodeTransform", &node, &tx, &ty, &tz, &rx, &ry, &rz, &sx, &sy, &sz))
		return NULL;

	if(Horde3D::setNodeTransform(node, tx, ty, tz, rx, ry, rz, sx, sy, sz))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_getNodeTransformMatrices(PyObject *self, PyObject *args)
{
	int node;

	if(!PyArg_ParseTuple(args, "i:getNodeTransformMatrices", &node))
		return NULL;

	const float *rel;
	const float *abs;

	if(Horde3D::getNodeTransformMatrices(node, &rel, &abs))
	{
		PyObject *relList = PyList_New(0);
		PyObject *absList = PyList_New(0);
		for(int i = 0; i < 16; ++i)
		{
			PyList_Append(relList, Py_BuildValue("f", rel[i]));
			PyList_Append(absList, Py_BuildValue("f", abs[i]));
		}

		return Py_BuildValue("OO", relList, absList);
	}
	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject* horde3d_setNodeTransformMatrix(PyObject *self, PyObject *args)
{
	int node;
	float m[16];

	// FIXME ugly signature
	if(!PyArg_ParseTuple(args, "iffffffffffffffff:setNodeTransformMatrix", &node,
				m + 0, m + 1, m + 2, m + 3,
				m + 4, m + 5, m + 6, m + 7,
				m + 8, m + 9, m + 10, m + 11,
				m + 12, m + 13, m + 14, m + 15))
		return NULL;

	if(Horde3D::setNodeTransformMatrix(node, m))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_getNodeParamf(PyObject *self, PyObject *args)
{
	int node;
	int param;

	if(!PyArg_ParseTuple(args, "ii:getNodeParamf", &node, &param))
		return NULL;

	return Py_BuildValue("f", Horde3D::getNodeParamf(node, param));
}


static PyObject* horde3d_setNodeParamf(PyObject *self, PyObject *args)
{
	int node;
	int param;
	float value;

	if(!PyArg_ParseTuple(args, "iif:setNodeParamf", &node, &param, &value))
		return NULL;

	if(Horde3D::setNodeParamf(node, param, value))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_getNodeParami(PyObject *self, PyObject *args)
{
	int node;
	int param;

	if(!PyArg_ParseTuple(args, "ii:getNodeParami", &node, &param))
		return NULL;

	return Py_BuildValue("i", Horde3D::getNodeParami(node, param));
}


static PyObject* horde3d_setNodeParami(PyObject *self, PyObject *args)
{
	int node;
	int param;
	int value;

	if(!PyArg_ParseTuple(args, "iii:setNodeParami", &node, &param, &value))
		return NULL;

	if(Horde3D::setNodeParami(node, param, value))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_getNodeParamstr(PyObject *self, PyObject *args)
{
	int node;
	int param;

	if(!PyArg_ParseTuple(args, "ii:getNodeParamstr", &node, &param))
		return NULL;

	return Py_BuildValue("s", Horde3D::getNodeParamstr(node, param));
}


static PyObject* horde3d_setNodeParamstr(PyObject *self, PyObject *args)
{
	int node;
	int param;
	const char *value;

	if(!PyArg_ParseTuple(args, "iis:setNodeParamstr", &node, &param, &value))
		return NULL;

	if(Horde3D::setNodeParamstr(node, param, value))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_getNodeAABB(PyObject *self, PyObject *args)
{
	int node;

	if(!PyArg_ParseTuple(args, "i:getNodeAABB", &node))
		return NULL;

	float minX, minY, minZ;
	float maxX, maxY, maxZ;
	if(Horde3D::getNodeAABB(node, &minX, &minY, &minZ, &maxX, &maxY, &maxZ))
	{
		return Py_BuildValue("ffffff", minX, minY, minZ, maxX, maxY, maxZ);
	}
	Py_INCREF(Py_None);
	return Py_None;
}



static PyObject* horde3d_findNodes(PyObject *self, PyObject *args)
{
	int startNode;
	const char *name;
	int type;

	if(!PyArg_ParseTuple(args, "isi:findNodes", &startNode, &name, &type))
		return NULL;

	return Py_BuildValue("i", Horde3D::findNodes(startNode, name, type));
}


static PyObject* horde3d_getNodeFindResult(PyObject *self, PyObject *args)
{
	int index;

	if(!PyArg_ParseTuple(args, "i:getNodeFindResult", &index))
		return NULL;

	return Py_BuildValue("i", Horde3D::getNodeFindResult(index));
}


static PyObject* horde3d_castRay(PyObject *self, PyObject *args)
{
	int node;
	float ox, oy, oz;
	float dx, dy, dz;
	int numNearest;

	if(!PyArg_ParseTuple(args, "iffffffi:castRay", &node, &ox, &oy, &oz, &dx, &dy, &dz, &numNearest))
		return NULL;

	return Py_BuildValue("i", Horde3D::castRay(node, ox, oy, oz, dx, dy, dz, numNearest));
}


static PyObject* horde3d_getCastRayResult(PyObject *self, PyObject *args)
{
	int index;

	if(!PyArg_ParseTuple(args, "i:getCastRayResult", &index))
		return NULL;

	int node;
	float distance;
	float intersection[3];

	if(Horde3D::getCastRayResult(index, &node, &distance, intersection))
	{
		return Py_BuildValue("if(f,f,f)", node, distance, intersection[0], intersection[1], intersection[2]);
	}

	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject* horde3d_addGroupNode(PyObject *self, PyObject *args)
{
	int parent;
	const char *name;

	if(!PyArg_ParseTuple(args, "is:addGroupNode", &parent, &name))
		return NULL;

	return Py_BuildValue("i", Horde3D::addGroupNode(parent, name));
}


static PyObject* horde3d_addModelNode(PyObject *self, PyObject *args)
{
	int parent;
	const char *name;
	int res;

	if(!PyArg_ParseTuple(args, "isi:addModelNode", &parent, &name, &res))
		return NULL;

	return Py_BuildValue("i", Horde3D::addModelNode(parent, name, res));
}


static PyObject* horde3d_setupModelAnimStage(PyObject *self, PyObject *args)
{
	int node;
	int stage;
	int animRes;
	const char *startNode;
	PyObject *additive;

	if(!PyArg_ParseTuple(args, "iiisO:setupModelAnimStage", &node, &stage, &animRes, &startNode, &additive))
		return NULL;

	bool additiveBool = PyObject_IsTrue(additive);

	if(Horde3D::setupModelAnimStage(node, stage, animRes, startNode, additiveBool))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}



static PyObject* horde3d_setModelAnimParams(PyObject *self, PyObject *args)
{
	int node;
	int stage;
	float time;
	float weight;

	if(!PyArg_ParseTuple(args, "iiff:setModelAnimParams", &node, &stage, &time, &weight))
		return NULL;

	if(Horde3D::setModelAnimParams(node, stage, time, weight))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}



static PyObject* horde3d_setModelMorpher(PyObject *self, PyObject *args)
{
	int node;
	const char *target;
	float weight;

	if(!PyArg_ParseTuple(args, "isf:setModelMorpher", &node, &target, &weight))
		return NULL;

	if(Horde3D::setModelMorpher(node, target, weight))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}



static PyObject* horde3d_addMeshNode(PyObject *self, PyObject *args)
{
	int parent;
	const char *name;
	int matRes;
	int batchStart;
	int batchCount;
	int vertRStart;
	int vertREnd;

	if(!PyArg_ParseTuple(args, "isiiiii", &parent, &name, &matRes, &batchStart, &batchCount, &vertRStart, &vertREnd))
		return NULL;

	return Py_BuildValue("i", Horde3D::addMeshNode(parent, name, matRes, batchStart, batchCount, vertRStart, vertREnd));
}


static PyObject* horde3d_addJointNode(PyObject *self, PyObject *args)
{
	int parent;
	const char *name;
	int jointIndex;

	if(!PyArg_ParseTuple(args, "isi:addJointNode", &parent, &name, &jointIndex))
		return NULL;

	return Py_BuildValue("i", Horde3D::addJointNode(parent, name, jointIndex));
}


static PyObject* horde3d_addSpotLightNode(PyObject *self, PyObject *args)
{
	int parent;
	const char *name;
	int matRes;
	const char *lightingContext;
	const char *shadowContext;

	if(!PyArg_ParseTuple(args, "isiss:addSpotLightNode", &parent, &name, &matRes, &lightingContext, &shadowContext))
		return NULL;

	return Py_BuildValue("i", Horde3D::addSpotLightNode(parent, name, matRes, lightingContext, shadowContext));
}



static PyObject* horde3d_addPointLightNode(PyObject *self, PyObject *args)
{
	int parent;
	const char *name;
	int matRes;
	const char *lightingContext;
	const char *shadowContext;

	if(!PyArg_ParseTuple(args, "isiss:addPointLightNode", &parent, &name, &matRes, &lightingContext, &shadowContext))
		return NULL;

	return Py_BuildValue("i", Horde3D::addPointLightNode(parent, name, matRes, lightingContext, shadowContext));
}



static PyObject* horde3d_setLightContexts(PyObject *self, PyObject *args)
{
	int node;
	const char *lightingContext;
	const char *shadowContext;

	if(!PyArg_ParseTuple(args, "iss:setLightContexts", &node, &lightingContext, &shadowContext))
		return NULL;

	if(Horde3D::setLightContexts(node, lightingContext, shadowContext))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_addCameraNode(PyObject *self, PyObject *args)
{
	int parent;
	const char *name;
	int pipeline;

	if(!PyArg_ParseTuple(args, "isi:addCameraNode", &parent, &name, &pipeline))
		return NULL;

	return Py_BuildValue("i", Horde3D::addCameraNode(parent, name, pipeline));
}



static PyObject* horde3d_setupCameraView(PyObject *self, PyObject *args)
{
	int node;
	float fov;
	float aspect;
	float nearDist;
	float farDist;

	if(!PyArg_ParseTuple(args, "iffff", &node, &fov, &aspect, &nearDist, &farDist))
		return NULL;

	if(Horde3D::setupCameraView(node, fov, aspect, nearDist, farDist))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}



static PyObject* horde3d_calcCameraProjectionMatrix(PyObject *self, PyObject *args)
{
	int node;
	if(!PyArg_ParseTuple(args, "i:calcCameraProjectionMatrix", &node))
		return NULL;

	float m[16];
	if(Horde3D::calcCameraProjectionMatrix(node, m))
	{
		PyObject *list = PyList_New(0);
		for(int i = 0; i < 16; ++i)
		{
			PyList_Append(list, Py_BuildValue("f", m[i]));
		}

		return list;
	}
	Py_INCREF(Py_None);
	return Py_None;
}



static PyObject* horde3d_addEmitterNode(PyObject *self, PyObject *args)
{
	int parent;
	const char *name;
	int matRes;
	int effectRes;
	int maxParticleCount;
	int respawnCount;

	if(!PyArg_ParseTuple(args, "isiiii:addEmitterNode", &parent, &name, &matRes, &effectRes, &maxParticleCount, &respawnCount))
		return NULL;

	return Py_BuildValue("i", Horde3D::addEmitterNode(parent, name, matRes, effectRes, maxParticleCount, respawnCount));
}



static PyObject* horde3d_advanceEmitterTime(PyObject *self, PyObject *args)
{
	int node;
	float delta;

	if(!PyArg_ParseTuple(args, "if:advanceEmitterTime", &node, &delta))
		return NULL;

	if(Horde3D::advanceEmitterTime(node, delta))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static PyObject* horde3d_hasEmitterFinished(PyObject *self, PyObject *args)
{
	int node;

	if(!PyArg_ParseTuple(args, "i:hasEmitterFinished", &node))
		return NULL;

	if(Horde3D::hasEmitterFinished(node))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}



#define H3D_CONSTANT(dict, name, where) PyDict_SetItemString(dict, #name, Py_BuildValue("i", where::name))
static PyObject *horde3d__getConstants(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":_getConstants"))
		return NULL;

	PyObject *dict = PyDict_New();

	// global constants
	PyDict_SetItemString(dict, "RootNode", Py_BuildValue("i", 1));

	// EngineOptions
	PyObject *d = PyDict_New();
	H3D_CONSTANT(d, MaxLogLevel, EngineOptions);
	H3D_CONSTANT(d, MaxNumMessages, EngineOptions);
	H3D_CONSTANT(d, TrilinearFiltering, EngineOptions);
	H3D_CONSTANT(d, AnisotropyFactor, EngineOptions);
	H3D_CONSTANT(d, TexCompression, EngineOptions);
	H3D_CONSTANT(d, LoadTextures, EngineOptions);
	H3D_CONSTANT(d, FastAnimation, EngineOptions);
	H3D_CONSTANT(d, ShadowMapSize, EngineOptions);
	H3D_CONSTANT(d, SampleCount, EngineOptions);
	H3D_CONSTANT(d, WireframeMode, EngineOptions);
	H3D_CONSTANT(d, DebugViewMode, EngineOptions);
	PyDict_SetItemString(dict, "EngineOptions", d);

	// EngineStats
	d = PyDict_New();
	H3D_CONSTANT(d, TriCount, EngineStats);
	H3D_CONSTANT(d, BatchCount, EngineStats);
	H3D_CONSTANT(d, LightPassCount, EngineStats);
	PyDict_SetItemString(dict, "EngineStats", d);

	// ResourceTypes
	d = PyDict_New();
	H3D_CONSTANT(d, Undefined, ResourceTypes);
	H3D_CONSTANT(d, SceneGraph, ResourceTypes);
	H3D_CONSTANT(d, Geometry, ResourceTypes);
	H3D_CONSTANT(d, Animation, ResourceTypes);
	H3D_CONSTANT(d, Material, ResourceTypes);
	H3D_CONSTANT(d, Code, ResourceTypes);
	H3D_CONSTANT(d, Shader, ResourceTypes);
	H3D_CONSTANT(d, Texture2D, ResourceTypes);
	H3D_CONSTANT(d, TextureCube, ResourceTypes);
	H3D_CONSTANT(d, Effect, ResourceTypes);
	H3D_CONSTANT(d, Pipeline, ResourceTypes);
	PyDict_SetItemString(dict, "ResourceTypes", d);

	// ResourceFlags
	d = PyDict_New();
	H3D_CONSTANT(d, NoQuery, ResourceFlags);
	H3D_CONSTANT(d, NoTexPOTConversion, ResourceFlags);
	H3D_CONSTANT(d, NoTexCompression, ResourceFlags);
	H3D_CONSTANT(d, NoTexMipmaps, ResourceFlags);
	H3D_CONSTANT(d, NoTexFiltering, ResourceFlags);
	H3D_CONSTANT(d, NoTexRepeat, ResourceFlags);
	PyDict_SetItemString(dict, "ResourceFlags", d);

	// GeometryResParams
	d = PyDict_New();
	H3D_CONSTANT(d, VertexCount, GeometryResParams);
	H3D_CONSTANT(d, IndexCount, GeometryResParams);
	H3D_CONSTANT(d, VertexData, GeometryResParams);
	H3D_CONSTANT(d, IndexData, GeometryResParams);
	PyDict_SetItemString(dict, "GeometryResParams", d);

	// AnimationResParams
	d = PyDict_New();
	H3D_CONSTANT(d, FrameCount, AnimationResParams);
	PyDict_SetItemString(dict, "AnimationResParams", d);

	// MaterialResParams
	d = PyDict_New();
	H3D_CONSTANT(d, Class, MaterialResParams);
	H3D_CONSTANT(d, Link, MaterialResParams);
	H3D_CONSTANT(d, Shader, MaterialResParams);
	H3D_CONSTANT(d, TexUnit_0, MaterialResParams);	
	H3D_CONSTANT(d, TexUnit_1, MaterialResParams);	
	H3D_CONSTANT(d, TexUnit_2, MaterialResParams);	
	H3D_CONSTANT(d, TexUnit_3, MaterialResParams);	
	H3D_CONSTANT(d, TexUnit_4, MaterialResParams);	
	H3D_CONSTANT(d, TexUnit_5, MaterialResParams);	
	H3D_CONSTANT(d, TexUnit_6, MaterialResParams);	
	H3D_CONSTANT(d, TexUnit_7, MaterialResParams);	
	H3D_CONSTANT(d, TexUnit_8, MaterialResParams);	
	H3D_CONSTANT(d, TexUnit_9, MaterialResParams);	
	H3D_CONSTANT(d, TexUnit_10, MaterialResParams);	
	H3D_CONSTANT(d, TexUnit_11, MaterialResParams);	
	PyDict_SetItemString(dict, "MaterialResParams", d);

	// TextureResParams
	d = PyDict_New();
	H3D_CONSTANT(d, PixelData, TextureResParams);
	H3D_CONSTANT(d, Width, TextureResParams);
	H3D_CONSTANT(d, Height, TextureResParams);
	H3D_CONSTANT(d, Comps, TextureResParams);
	H3D_CONSTANT(d, HDR, TextureResParams);
	PyDict_SetItemString(dict, "TextureResParams", d);
	
	// EffectResParams
	d = PyDict_New();
	H3D_CONSTANT(d, LifeMin, EffectResParams);
	H3D_CONSTANT(d, LifeMax, EffectResParams);
	H3D_CONSTANT(d, MoveVelMin, EffectResParams);
	H3D_CONSTANT(d, MoveVelMax, EffectResParams);
	H3D_CONSTANT(d, MoveVelEndRate, EffectResParams);
	H3D_CONSTANT(d, RotVelMin, EffectResParams);
	H3D_CONSTANT(d, RotVelMax, EffectResParams);
	H3D_CONSTANT(d, SizeMin, EffectResParams);
	H3D_CONSTANT(d, SizeMax, EffectResParams);
	H3D_CONSTANT(d, SizeEndRate, EffectResParams);
	H3D_CONSTANT(d, Col_R_Min, EffectResParams);
	H3D_CONSTANT(d, Col_R_Max, EffectResParams);
	H3D_CONSTANT(d, Col_R_EndRate, EffectResParams);
	H3D_CONSTANT(d, Col_G_Min, EffectResParams);
	H3D_CONSTANT(d, Col_G_Max, EffectResParams);
	H3D_CONSTANT(d, Col_G_EndRate, EffectResParams);
	H3D_CONSTANT(d, Col_B_Min, EffectResParams);
	H3D_CONSTANT(d, Col_B_Max, EffectResParams);
	H3D_CONSTANT(d, Col_B_EndRate, EffectResParams);
	H3D_CONSTANT(d, Col_A_Min, EffectResParams);
	H3D_CONSTANT(d, Col_A_Max, EffectResParams);
	H3D_CONSTANT(d, Col_A_EndRate, EffectResParams);
	PyDict_SetItemString(dict, "EffectResParams", d);


	// SceneNodeTypes
	d = PyDict_New();
	H3D_CONSTANT(d, Undefined, SceneNodeTypes);
	H3D_CONSTANT(d, Group, SceneNodeTypes);
	H3D_CONSTANT(d, Model, SceneNodeTypes);
	H3D_CONSTANT(d, Mesh, SceneNodeTypes);
	H3D_CONSTANT(d, Joint, SceneNodeTypes);
	H3D_CONSTANT(d, SpotLight, SceneNodeTypes);
	H3D_CONSTANT(d, PointLight, SceneNodeTypes);
	H3D_CONSTANT(d, Camera, SceneNodeTypes);
	H3D_CONSTANT(d, Emitter, SceneNodeTypes);
	PyDict_SetItemString(dict, "SceneNodeTypes", d);

	// SceneNodeParams
	d = PyDict_New();
	H3D_CONSTANT(d, Name, SceneNodeParams);
	H3D_CONSTANT(d, AttachmentString, SceneNodeParams);
	PyDict_SetItemString(dict, "SceneNodeParams", d);

	// GroupNodeParams
	d = PyDict_New();
	H3D_CONSTANT(d, MinDist, GroupNodeParams);
	H3D_CONSTANT(d, MaxDist, GroupNodeParams);
	PyDict_SetItemString(dict, "GroupNodeParams", d);

	// ModelNodeParams
	d = PyDict_New();
	H3D_CONSTANT(d, GeometryRes, ModelNodeParams);
	H3D_CONSTANT(d, SoftwareSkinning, ModelNodeParams);
	PyDict_SetItemString(dict, "ModelNodeParams", d);

	// MeshNodeParams
	d = PyDict_New();
	H3D_CONSTANT(d, MaterialRes, MeshNodeParams);
	H3D_CONSTANT(d, BatchStart, MeshNodeParams);
	H3D_CONSTANT(d, BatchCount, MeshNodeParams);
	H3D_CONSTANT(d, VertRStart, MeshNodeParams);
	H3D_CONSTANT(d, VertREnd, MeshNodeParams);
	PyDict_SetItemString(dict, "MeshNodeParams", d);

	// JointNodeParams
	d = PyDict_New();
	H3D_CONSTANT(d, JointIndex, JointNodeParams);
	PyDict_SetItemString(dict, "JointNodeParams", d);

	// LightNodeParams
	d = PyDict_New();
	H3D_CONSTANT(d, MaterialRes, LightNodeParams);
	H3D_CONSTANT(d, Radius, LightNodeParams);
	H3D_CONSTANT(d, FOV, LightNodeParams);
	H3D_CONSTANT(d, Col_R, LightNodeParams);
	H3D_CONSTANT(d, Col_G, LightNodeParams);
	H3D_CONSTANT(d, Col_B, LightNodeParams);
	H3D_CONSTANT(d, ShadowMapCount, LightNodeParams);
	H3D_CONSTANT(d, ShadowSplitLambda, LightNodeParams);
	H3D_CONSTANT(d, ShadowMapBias, LightNodeParams);
	PyDict_SetItemString(dict, "LightNodeParams", d);

	// CameraNodeParams
	d = PyDict_New();
	H3D_CONSTANT(d, PipelineRes, CameraNodeParams);
	H3D_CONSTANT(d, OutputTex, CameraNodeParams);
	H3D_CONSTANT(d, OutputBufferIndex, CameraNodeParams);
	H3D_CONSTANT(d, LeftPlane, CameraNodeParams);
	H3D_CONSTANT(d, RightPlane, CameraNodeParams);
	H3D_CONSTANT(d, BottomPlane, CameraNodeParams);
	H3D_CONSTANT(d, TopPlane, CameraNodeParams);
	H3D_CONSTANT(d, NearPlane, CameraNodeParams);
	H3D_CONSTANT(d, FarPlane, CameraNodeParams);
	H3D_CONSTANT(d, Orthographic, CameraNodeParams);
	H3D_CONSTANT(d, OcclusionCulling, CameraNodeParams);
	PyDict_SetItemString(dict, "CameraNodeParams", d);

	// EmitterNodeParams
	d = PyDict_New();
	H3D_CONSTANT(d, MaterialRes, EmitterNodeParams);
	H3D_CONSTANT(d, EffectRes, EmitterNodeParams);
	H3D_CONSTANT(d, MaxCount, EmitterNodeParams);
	H3D_CONSTANT(d, RespawnCount, EmitterNodeParams);
	H3D_CONSTANT(d, Delay, EmitterNodeParams);
	H3D_CONSTANT(d, EmissionRate, EmitterNodeParams);
	H3D_CONSTANT(d, SpreadAngle, EmitterNodeParams);
	H3D_CONSTANT(d, ForceX, EmitterNodeParams);
	H3D_CONSTANT(d, ForceY, EmitterNodeParams);
	H3D_CONSTANT(d, ForceZ, EmitterNodeParams);
	PyDict_SetItemString(dict, "EmitterNodeParams", d);

	

	return dict;
}




static PyMethodDef horde3d_methods[] =
{
	{"getVersionString", horde3d_getVersionString, METH_VARARGS},
	{"checkExtension", horde3d_checkExtension, METH_VARARGS},
	{"init", horde3d_init, METH_VARARGS},
	{"release", horde3d_release, METH_VARARGS},
	{"resize", horde3d_resize, METH_VARARGS},
	{"render", horde3d_render, METH_VARARGS},
	{"clear", horde3d_clear, METH_VARARGS},
	{"getMessage", horde3d_getMessage, METH_VARARGS},
	{"getOption", horde3d_getOption, METH_VARARGS},
	{"setOption", horde3d_setOption, METH_VARARGS},
	{"getStat", horde3d_getStat, METH_VARARGS},
	{"showOverlay", horde3d_showOverlay, METH_VARARGS},
	{"clearOverlays", horde3d_clearOverlays, METH_VARARGS},
	{"getResourceType", horde3d_getResourceType, METH_VARARGS},
	{"getResourceName", horde3d_getResourceName, METH_VARARGS},
	{"findResource", horde3d_findResource, METH_VARARGS},
	{"addResource", horde3d_addResource, METH_VARARGS},
	{"cloneResource", horde3d_cloneResource, METH_VARARGS},
	{"removeResource", horde3d_removeResource, METH_VARARGS},
	{"loadResource", horde3d_loadResource, METH_VARARGS},
	{"unloadResource", horde3d_unloadResource, METH_VARARGS},
	{"getResourceParami", horde3d_getResourceParami, METH_VARARGS},
	{"setResourceParami", horde3d_setResourceParami, METH_VARARGS},
	{"getResourceParamf", horde3d_getResourceParamf, METH_VARARGS},
	{"setResourceParamf", horde3d_setResourceParamf, METH_VARARGS},
	{"getResourceParamstr", horde3d_getResourceParamstr, METH_VARARGS},
	{"setResourceParamstr", horde3d_setResourceParamstr, METH_VARARGS},
	//{"getResourceData", horde3d_getResourceData, METH_VARARGS},// FIXME implement function first
	{"updateResourceData", horde3d_updateResourceData, METH_VARARGS},
	{"queryUnloadedResource", horde3d_queryUnloadedResource, METH_VARARGS},
	{"releaseUnusedResources", horde3d_releaseUnusedResources, METH_VARARGS},
	{"createTexture2D", horde3d_createTexture2D, METH_VARARGS},
	{"setShaderPreambles", horde3d_setShaderPreambles, METH_VARARGS},
	{"setMaterialUniform", horde3d_setMaterialUniform, METH_VARARGS},
	{"setPipelineStageActivation", horde3d_setPipelineStageActivation, METH_VARARGS},
	{"getPipelineRenderTargetData", horde3d_getPipelineRenderTargetData, METH_VARARGS},
	{"getNodeType", horde3d_getNodeType, METH_VARARGS},
	{"getNodeParent", horde3d_getNodeParent, METH_VARARGS},
	{"setNodeParent", horde3d_setNodeParent, METH_VARARGS},
	{"getNodeChild", horde3d_getNodeChild, METH_VARARGS},
	{"addNodes", horde3d_addNodes, METH_VARARGS},
	{"removeNode", horde3d_removeNode, METH_VARARGS},
	{"setNodeActivation", horde3d_setNodeActivation, METH_VARARGS},
	{"checkNodeTransformFlag", horde3d_checkNodeTransformFlag, METH_VARARGS},
	{"getNodeTransform", horde3d_getNodeTransform, METH_VARARGS},
	{"setNodeTransform", horde3d_setNodeTransform, METH_VARARGS},
	{"getNodeTransformMatrices", horde3d_getNodeTransformMatrices, METH_VARARGS},
	{"setNodeTransformMatrix", horde3d_setNodeTransformMatrix, METH_VARARGS},
	{"getNodeParamf", horde3d_getNodeParamf, METH_VARARGS},
	{"setNodeParamf", horde3d_setNodeParamf, METH_VARARGS},
	{"getNodeParami", horde3d_getNodeParami, METH_VARARGS},
	{"setNodeParami", horde3d_setNodeParami, METH_VARARGS},
	{"getNodeParamstr", horde3d_getNodeParamstr, METH_VARARGS},
	{"setNodeParamstr", horde3d_setNodeParamstr, METH_VARARGS},
	{"getNodeAABB", horde3d_getNodeAABB, METH_VARARGS},
	{"findeNodes", horde3d_findNodes, METH_VARARGS},
	{"getNodeFindResult", horde3d_getNodeFindResult, METH_VARARGS},
	{"castRay", horde3d_castRay, METH_VARARGS},
	{"getCastRayResult", horde3d_getCastRayResult, METH_VARARGS},
	{"addGroupNode", horde3d_addGroupNode, METH_VARARGS},
	{"addModelNode", horde3d_addModelNode, METH_VARARGS},
	{"setupModelAnimStage", horde3d_setupModelAnimStage, METH_VARARGS},
	{"setModelAnimParams", horde3d_setModelAnimParams, METH_VARARGS},
	{"setModelMorpher", horde3d_setModelMorpher, METH_VARARGS},
	{"addMeshNode", horde3d_addMeshNode, METH_VARARGS},
	{"addJointNode", horde3d_addJointNode, METH_VARARGS},
	{"addSpotLightNode", horde3d_addSpotLightNode, METH_VARARGS},
	{"addPointLightNode", horde3d_addPointLightNode, METH_VARARGS},
	{"setLightContexts", horde3d_setLightContexts, METH_VARARGS},
	{"addCameraNode", horde3d_addCameraNode, METH_VARARGS},
	{"setupCameraView", horde3d_setupCameraView, METH_VARARGS},
	{"calcCameraProjectionMatrix", horde3d_calcCameraProjectionMatrix, METH_VARARGS},
	{"addEmitterNode", horde3d_addEmitterNode, METH_VARARGS},
	{"advanceEmitterTime", horde3d_advanceEmitterTime, METH_VARARGS},
	{"hasEmitterFinished", horde3d_hasEmitterFinished, METH_VARARGS},






	{"_getConstants", horde3d__getConstants, METH_VARARGS}, // not part of official API, used to get the constants and enums into Python

	{NULL, NULL}
};


PyMODINIT_FUNC inithorde3d(void)
{
	Py_InitModule("horde3d", horde3d_methods);
}


