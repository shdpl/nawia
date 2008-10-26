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

// #define PHOENIX_SPOT_POINT_LIGHTS



static const char *horde3d_getVersionString_doc = "getVersionString()\n" \
												   "returns the engine version string";
static PyObject* horde3d_getVersionString(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":getVersionString"))
		return NULL;

	return Py_BuildValue("s", Horde3D::getVersionString());
}

static const char *horde3d_checkExtension_doc = "checkExtension(extensionName)\n" \
												 "checks if an extension is part of the engine library\n\n" \
												 "extensionName: name of the extension to be checked\n" \
												 "returns True if extension ist installed, otherwise False";
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

static const char *horde3d_init_doc = "init()\n" \
									   "initializes the engine\n\n" \
									   "returns True if successful, otherwise False";
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

static const char *horde3d_release_doc = "release()\n" \
										  "releases the engine";
static PyObject* horde3d_release(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":release"))
		return NULL;


	Horde3D::release();

	Py_INCREF(Py_None);
	return Py_None;
}

static const char *horde3d_resize_doc = "resize(x, y, width, height)\n" \
										 "resizes the viewport\n\n" \
										 "x, y: position of the viewport in the rendering context\n" \
										 "width, height: width / height of the viewport";
static PyObject* horde3d_resize(PyObject *self, PyObject *args)
{
	int x, y, width, height;

	if(!PyArg_ParseTuple(args, "iiii:resize", &x, &y, &width, &height))
		return NULL;

	Horde3D::resize(x, y, width, height);

	Py_INCREF(Py_None);
	return Py_None;
}

static const char *horde3d_render_doc = "render(cameraNode)\n" \
										 "main rendering function. May be called multiple times per frame\n\n" \
										 "cameraNode: node from which the scene should be rendered\n" \
										 "returns True if successful, otherwise False";
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

static const char *horde3d_clear_doc = "clear()\n" \
										"removes all resources and scene nodes";
static PyObject* horde3d_clear(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":clear"))
		return NULL;

	Horde3D::clear();

	Py_INCREF(Py_None);
	return Py_None;
}

static const char *horde3d_getMessage_doc = "getMessage()\n" \
											 "gets next message from the message queue\n\n" \
											 "returns tuple (message, level, time)";
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

static const char *horde3d_getOption_doc = "getOption(option)\n" \
											"gets an option parameter of the engine\n\n" \
											"option: one of the EngineOptions\n" \
											"returns the value of the option";
static PyObject* horde3d_getOption(PyObject *self, PyObject *args)
{
	int engineOption;
	float value;

	if(!PyArg_ParseTuple(args, "i:getOption", &engineOption))
		return NULL;

	value = Horde3D::getOption((EngineOptions::List)engineOption);

	return Py_BuildValue("f", value);
}

static const char *horde3d_setOption_doc = "setOption(option, value)\n" \
										"sets on option parameter of the engine\n\n" \
										"option: one fo the EngineOptions\n" \
										"value: new value for the option\n" \
										"returns True if successful, otherwise False";
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

static const char *horde3d_getStat_doc = "getStat(param, reset)\n" \
										  "gets a statistic value of the engine\n\n" \
										  "param: one of the EngineStats\n" \
										  "reset: boolean flag specifying whether the statistic value should be reset\n" \
										  "returns requested value";
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

static const char *horde3d_showOverlay_doc = "showOverlay(x_ll, y_ll, u_ll, v_ll,\n" \
											  "x_lr, y_lr, u_lr, v_lr,\n" \
											  "x_ur, y_ur, u_ur, v_ur,\n" \
											  "x_ul, y_ul, u_ul, v_ul,\n" \
											  "layer, materialRes)\n" \
											  "shows on overlay on the screen\n\n" \
											  "?_ll: position / texture coordinates of the lower left corner\n" \
											  "?_lr: position / texture coordinates of the lower right corner\n" \
											  "?_ur: position / texture coordinates of the upper right corner\n" \
											  "?_ul: position / texture coordinates of the upper left corner\n" \
											  "layer: layer index of the overlay in range [0,7]\n" \
											  "materialRes: material resource used for the rendering";
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

static const char *horde3d_clearOverlays_doc = "clearOverlays()\n" \
												"removes all overlays, usually called after render()";
static PyObject* horde3d_clearOverlays(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":clearOverlays"))
		return NULL;

	Horde3D::clearOverlays();
	Py_INCREF(Py_None);
	return Py_None;
}

static const char *horde3d_getResourceType_doc = "getResourceType(res)\n" \
												  "returns the type of a resource\n\n" \
												  "res: handle to the resource\n" \
												  "returns type of the resource";
static PyObject* horde3d_getResourceType(PyObject *self, PyObject *args)
{
	int res;
	int type;

	if(!PyArg_ParseTuple(args, "i:getResourceType", &res))
		return NULL;

	type = Horde3D::getResourceType(res);

	return Py_BuildValue("i", type);
}

static const char *horde3d_getResourceName_doc = "getResourceName(res)\n" \
												  "returns the name of a resource\n\n" \
												  "res: hande to the resource\n" \
												  "returns name of the resource";
static PyObject* horde3d_getResourceName(PyObject *self, PyObject *args)
{
	int res;
	if(!PyArg_ParseTuple(args, "i:getResourceName", &res))
		return NULL;

	return Py_BuildValue("s", Horde3D::getResourceName(res));
}


static const char *horde3d_findResource_doc = "findResource(type, name)\n" \
											   "finds a resource and returns its handle\n\n" \
											   "type: type of the resource\n" \
											   "name: name of the resource\n" \
											   "returns handle to the resource or 0 if not found";
static PyObject* horde3d_findResource(PyObject *self, PyObject *args)
{
	int type;
	const char *name;

	if(!PyArg_ParseTuple(args, "is:findResource", &type, &name))
		return NULL;

	return Py_BuildValue("i", Horde3D::findResource((ResourceTypes::List)type, name));
}

static const char *horde3d_addResource_doc = "addResource(type, name, flags)\n" \
											  "adds a resource\n\n" \
											  "type: type of the resource\n" \
											  "name: name of the resource\n" \
											  "flags: flags used for creating the resource\n" \
											  "returns handle to the resource to be added or 0 in case of failure";
static PyObject* horde3d_addResource(PyObject *self, PyObject *args)
{
	int type;
	const char *name;
	int flags;

	if(!PyArg_ParseTuple(args, "isi:addResource", &type, &name, &flags))
		return NULL;

	return Py_BuildValue("i", Horde3D::addResource((ResourceTypes::List)type, name, flags));
}

static const char *horde3d_cloneResource_doc = "cloneResource(sourceRes, name)\n" \
												"duplicates a resource\n\n" \
												"sourceRes: handle to resource to be cloned\n" \
												"name: name of new resource (can be empty for auto-naming)\n" \
												"returns handle to cloned resource or 0 in case of failure";
static PyObject* horde3d_cloneResource(PyObject *self, PyObject *args)
{
	int res;
	const char *name;

	if(!PyArg_ParseTuple(args, "is:cloneResource", &res, &name))
		return NULL;

	return Py_BuildValue("i", Horde3D::cloneResource(res, name));
}

static const char *horde3d_removeResource_doc = "removeResource(res)\n" \
												 "removes a resource\n\n" \
												 "res: resource to be removed\n" \
												 "returns number of references that the application is still holding after removal or -1 in case of failure";
static PyObject* horde3d_removeResource(PyObject *self, PyObject *args)
{
	int res;

	if(!PyArg_ParseTuple(args, "i:removeResource", &res))
		return NULL;

	return Py_BuildValue("i", Horde3D::removeResource(res));
}


static const char *horde3d_isResourceLoaded_doc = "isResourceLoaded(res)\n" \
												   "checks if a resource is loaded\n\n" \
												   "res: handle to the resource\n" \
												   "returns True if the resource is loaded, otherwise False";
static PyObject* horde3d_isResourceLoaded(PyObject *self, PyObject *args)
{
	int res;

	if(!PyArg_ParseTuple(args, "i:isResourceLoaded", &res))
			return NULL;

	if(Horde3D::isResourceLoaded(res))
	{
		Py_INCREF(Py_True);
		return Py_True;
	}
	Py_INCREF(Py_False);
	return Py_False;
}


static const char *horde3d_loadResource_doc = "loadResource(res, data)\n" \
											   "loads a resource, that means stores the given data inside the engine\n\n" \
											   "res: handle to the resource for which data will be loaded\n" \
											   "data: data to be stored. Important: XML-data must be null-terminated\n" \
											   "returns True if successful, otherwise False";
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


static const char *horde3d_unloadResource_doc = "unloadResource(res)\n" \
												 "unloads a resource\n\n" \
												 "res: handle to resource to be unloaded\n" \
												 "returns True if successful, otherwise False";
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


static const char *horde3d_getResourceParami_doc = "getResourceParami(res, param)\n" \
													"gets *int* property of a resource\n\n" \
													"res: handle to the resource to be accessed\n" \
													"param: parameter to be accessed\n" \
													"returns value of the parameter";
static PyObject* horde3d_getResourceParami(PyObject *self, PyObject *args)
{
	int res;
	int param;

	if(!PyArg_ParseTuple(args, "ii:getResourceParami", &res, &param))
		return NULL;

	return Py_BuildValue("i", Horde3D::getResourceParami(res, param));
}


static const char *horde3d_setResourceParami_doc = "setResourceParami(res, param, value)\n" \
													"sets *int* property of a resource\n\n" \
													"res: handle of the resource to be accesed\n" \
													"param: parameter to be accesed\n" \
													"value: new value for the specified parameter\n"
													"returns True if successful, otherwise False";
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

static const char *horde3d_getResourceParamf_doc = "getResourceParamf(res, param)\n" \
													"gets *float* property of a resource\n\n" \
													"res: handle to the resource to be accessed\n" \
													"param: parameter to be accessed\n" \
													"returns value of the parameter";

static PyObject* horde3d_getResourceParamf(PyObject *self, PyObject *args)
{
	int res;
	int param;

	if(!PyArg_ParseTuple(args, "ii:getResourceParamf", &res, &param))
		return NULL;

	return Py_BuildValue("f", Horde3D::getResourceParamf(res, param));
}

static const char *horde3d_setResourceParamf_doc = "setResourceParamf(res, param, value)\n" \
													"sets *float* property of a resource\n\n" \
													"res: handle of the resource to be accesed\n" \
													"param: parameter to be accesed\n" \
													"value: new value for the specified parameter\n"
													"returns True if successful, otherwise False";
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

static const char *horde3d_getResourceParamstr_doc = "getResourceParamstr(res, param)\n" \
													"gets *string* property of a resource\n\n" \
													"res: handle to the resource to be accessed\n" \
													"param: parameter to be accessed\n" \
													"returns value of the parameter";
static PyObject* horde3d_getResourceParamstr(PyObject *self, PyObject *args)
{
	int res;
	int param;

	if(!PyArg_ParseTuple(args, "ii:getResourceParamf", &res, &param))
		return NULL;

	return Py_BuildValue("s", Horde3D::getResourceParamstr(res, param));
}

static const char *horde3d_setResourceParamstr_doc = "setResourceParamstr(res, param, value)\n" \
													"sets *string* property of a resource\n\n" \
													"res: handle of the resource to be accesed\n" \
													"param: parameter to be accesed\n" \
													"value: new value for the specified parameter\n"
													"returns True if successful, otherwise False";
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


static const char *horde3d_updateResourceData_doc = "updateResourceData(res, param, data)\n" \
													 "updates the data of a resource\n\n" \
													 "res: handle to the resource for which the data is modified\n" \
													 "param: data structure which will be updated\n" \
													 "data: new data\n" \
													 "returns True of successful, otherwise False";
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


static const char *horde3d_queryUnloadedResource_doc = "queryUnloadedResource(index)\n" \
														"returns handle to an unloaded resource\n\n" \
														"index: index of unloaded resource within the internal list of unloaded resources, starting with 0\n" \
														"returns handle to an unloaded resource or 0";
static PyObject* horde3d_queryUnloadedResource(PyObject *self, PyObject *args)
{
	int index;
	if(!PyArg_ParseTuple(args, "i:queryUnloadedResource", &index))
		return NULL;

	return Py_BuildValue("i", Horde3D::queryUnloadedResource(index));
}


static const char *horde3d_releaseUnusedResources_doc = "releaseUnusedResources()\n" \
														 "frees resources that are no longer used";
static PyObject* horde3d_releaseUnusedResources(PyObject *self, PyObject *args)
{
	if(!PyArg_ParseTuple(args, ":releaseUnusedResources"))
		return NULL;

	Horde3D::releaseUnusedResources();

	Py_INCREF(Py_None);
	return Py_None;
}


static const char *horde3d_createTexture2D_doc = "createTexture2D(name, flags, width, height, renderable)\n" \
												  "adds a Texture2D resource\n\n" \
												  "name: name of the resource\n" \
												  "flags: flags used for creating the resource\n" \
												  "width, height: width / height of the texture image\n" \
												  "renderable: flag indicating whether the texture can be used as an output buffer for a Camera node\n" \
												  "returns handle to the created resource or 0 in case of failure";
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


static const char *horde3d_setShaderPreambles_doc = "setShaderPreambles(vertPreamble, fragPreamble)\n" \
													 "sets preambles of all Shader resources\n\n" \
													 "vertPreamble: preamble text of vertex shaders\n" \
													 "fragPreamble: preamble text of fragment shaders";
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


static const char *horde3d_setMaterialUniform_doc = "setMaterialUniform(material, name, a, b, c, d)\n" \
													 "set a shader uniform of a Material resource\n\n" \
													 "material: handle to the Material resource\n" \
													 "name: name of the uniform as defined in the Material\n" \
													 "a, b, c, d: values of the four components\n" \
													 "returns True if successful, otherwise False";
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


static const char *horde3d_setPipelineStageActivation_doc = "setPipelineStageActivation(res, stageName, enabled)\n" \
															 "sets the activation stage of a pipeline stage\n\n" \
															 "res: handle to the Pipeline resource\n" \
															 "stageName: name fo the stage to be modified\n" \
															 "enabled: boolean flag indicating whether the stage shall be enabled or disabled\n" \
															 "returns True if successful, otherwise False";
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


static const char *horde3d_getPipelineRenderTargetData_doc = "getPipelineRenderTargetData(pipeline, targetName, bufIndex)\n" \
								"reads the pixel data of a pipeline render target buffer\n\n" \
								"pipeline: handle to pipeline resource\n" \
								"targetName: unique name of render target to access\n" \
								"bufIndex: index of buffer to be accessed\n" \
								"returns tuple (width, height, componentCount, dataList) if successful, otherwise None";
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


static const char *horde3d_getNodeType_doc = "getNodeType(node)\n" \
											  "returns the type of a scene node\n\n" \
											  "node: handle to the scene node\n" \
											  "returns type of the scene node";
static PyObject* horde3d_getNodeType(PyObject *self, PyObject *args)
{
	int node;
	if(!PyArg_ParseTuple(args, "i:getNodeType", &node))
		return NULL;

	return Py_BuildValue("i", Horde3D::getNodeType(node));
}

static const char *horde3d_getNodeParent_doc = "getNodeParent(node)\n" \
												"returns the parent of a scene node\n\n" \
												"node: handle to the scene node\n" \
												"returns handle to parent node or 0 in case of failure";
static PyObject* horde3d_getNodeParent(PyObject *self, PyObject *args)
{
	int node;

	if(!PyArg_ParseTuple(args, "i:getNodeParent", &node))
		return NULL;

	return Py_BuildValue("i", Horde3D::getNodeParent(node));
}

static const char *horde3d_setNodeParent_doc = "setNodeParent(node, parent)\n" \
												"relocates a node in the scene graph\n\n" \
												"node: handle to the scene node to be relocated\n" \
												"parent: handle to the new parent node\n" \
												"returns True if successful, otherwise False";
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


static const char *horde3d_getNodeChild_doc = "getNodeChild(node, index)\n" \
											   "returns the handle to a child node\n\n" \
											   "node: handle to the parent node\n" \
											   "index: index of the child node\n" \
											   "returns handle to the child node or 0 if child doesn't exist";
static PyObject* horde3d_getNodeChild(PyObject *self, PyObject *args)
{
	int node;
	int index;

	if(!PyArg_ParseTuple(args, "ii:getNodeChild", &node, &index))
		return NULL;

	return Py_BuildValue("i", Horde3D::getNodeChild(node, index));
}


static const char *horde3d_addNodes_doc = "addNodes(parent, sceneRes)\n" \
										   "adds nodes from a SceneGraph resource to the scene\n\n" \
										   "parent: handle to parent node to which the root of the new nodes will be attached\n" \
										   "sceneRes: handle to loaded SceneGraph resourc\n" \
										   "returns handle to the root of the created nodes or 0 in case of failure";
static PyObject* horde3d_addNodes(PyObject *self, PyObject *args)
{
	int parent;
	int sceneRes;

	if(!PyArg_ParseTuple(args, "ii:addNodes", &parent, &sceneRes))
		return NULL;

	return Py_BuildValue("i", Horde3D::addNodes(parent, sceneRes));
}


static const char *horde3d_removeNode_doc = "removeNode(node)\n" \
											 "removes a node from the scene\n\n" \
											 "node: handle to the node to be removed\n" \
											 "returns True if successful, otherwise False";
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


static const char *horde3d_setNodeActivation_doc = "setNodeActivation(node, active)\n" \
													"sets the activation (visibility) state of a node\n\n" \
													"node: handle to the node to be modified\n" \
													"active: boolean value indicating whether the node shall be active or inactive\n" \
													"returns True if successful, otherwise False";
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


static const char *horde3d_checkNodeTransformFlag_doc = "checkNodeTransformFlag(node, reset)\n" \
														 "checks if a scene node has been transformed by the engine\n\n" \
														 "node: handle to the node to be accessed\n" \
														 "reset: boolean flag indicating whether the transformation flag shall be reset" \
														 "returns True if node has been transformed, otherwise False";
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


static const char *horde3d_getNodeTransform_doc = "getNodeTransform(node)\n" \
												   "gets the relative transformation of a node\n\n" \
												   "node: handle to the node\n" \
												   "returns tuple (tx, ty, tz, rx, ry, rz, sx, sy, sz)";
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


static const char *horde3d_setNodeTransform_doc = "setNodeTransform(node,\n" \
												   "tx, ty, tz,\n" \
												   "rx, ry, rz,\n" \
												   "sx, sy, sz)\n" \
												   "sets the relative transformation of a node\n\n" \
												   "node: handle to the node\n" \
												   "tx, ty, tz: translation\n" \
												   "rx, ry, rz: rotation in Euler angles\n" \
												   "sy, sy, sz: scale" \
												   "returns True if successful, otherwise False";
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


static const char *horde3d_getNodeTransformMatrices_doc = "getNodeTransformMatrices(node)\n" \
														   "returns the transformation matrices of a node\n\n" \
														   "node: handle to the node\n" \
														   "returns tuple (relMat, absMat)";
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


static const char *horde3d_setNodeTransformMatrix_doc = "setNodeTransformMatrix(node, m0, m1, m2, ..., m15)\n" \
														 "sets the relative transformation matrix of a node\n\n" \
														 "node: handle to the node\n" \
														 "m*: elements of a 4x4 matrix in column major order\n" \
														 "returns True if successful, otherwise False";
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


static const char *horde3d_getNodeParamf_doc = "getNodeParamf(node, param)\n" \
												"gets a *float* property of a scene node\n\n" \
												"node: handle to the node\n" \
												"param: parameter to be accessed\n" \
												"returns value of the parameter";
static PyObject* horde3d_getNodeParamf(PyObject *self, PyObject *args)
{
	int node;
	int param;

	if(!PyArg_ParseTuple(args, "ii:getNodeParamf", &node, &param))
		return NULL;

	return Py_BuildValue("f", Horde3D::getNodeParamf(node, param));
}


static const char *horde3d_setNodeParamf_doc = "setNodeParamf(node, param, value)\n" \
												"sets a *float* property of a scene node\n\n" \
												"node: handle to the node\n" \
												"param: parameter to be accessed\n " \
												"value: new value for the parameter\n" \
												"returns True if successful, otherwise False";
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

static const char *horde3d_getNodeParami_doc = "getNodeParami(node, param)\n" \
												"gets a *int* property of a scene node\n\n" \
												"node: handle to the node\n" \
												"param: parameter to be accessed\n" \
												"returns value of the parameter";
static PyObject* horde3d_getNodeParami(PyObject *self, PyObject *args)
{
	int node;
	int param;

	if(!PyArg_ParseTuple(args, "ii:getNodeParami", &node, &param))
		return NULL;

	return Py_BuildValue("i", Horde3D::getNodeParami(node, param));
}

static const char *horde3d_setNodeParami_doc = "setNodeParami(node, param, value)\n" \
												"sets a *int* property of a scene node\n\n" \
												"node: handle to the node\n" \
												"param: parameter to be accessed\n " \
												"value: new value for the parameter\n" \
												"returns True if successful, otherwise False";
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

static const char *horde3d_getNodeParamstr_doc = "getNodeParamstr(node, param)\n" \
												"gets a *string* property of a scene node\n\n" \
												"node: handle to the node\n" \
												"param: parameter to be accessed\n" \
												"returns value of the parameter";
static PyObject* horde3d_getNodeParamstr(PyObject *self, PyObject *args)
{
	int node;
	int param;

	if(!PyArg_ParseTuple(args, "ii:getNodeParamstr", &node, &param))
		return NULL;

	return Py_BuildValue("s", Horde3D::getNodeParamstr(node, param));
}

static const char *horde3d_setNodeParamstr_doc = "setNodeParamstr(node, param, value)\n" \
												"sets a *int* property of a scene node\n\n" \
												"node: handle to the node\n" \
												"param: parameter to be accessed\n " \
												"value: new value for the parameter\n" \
												"returns True if successful, otherwise False";
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


static const char *horde3d_getNodeAABB_doc = "getNodeAABB(node)\n" \
											  "gets the bounding box of a scene node\n\n" \
											  "node: handle to the node" \
											  "returns tuple (minX, minY, minZ, maxX, maxY, maxZ)";
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


static const char *horde3d_findNodes_doc = "findNodes(startNode, name, type)\n" \
											"finds the scene nodes with specified properties\n\n" \
											"startNode: handle to the node where the search begins\n" \
											"name: name of the nodes to be searched for (empty string for all nodes)\n" \
											"type: type of the nodes to be searched for (SceneNodeTypes.Undefined for all types)\n" \
											"returns number of search results";
static PyObject* horde3d_findNodes(PyObject *self, PyObject *args)
{
	int startNode;
	const char *name;
	int type;

	if(!PyArg_ParseTuple(args, "isi:findNodes", &startNode, &name, &type))
		return NULL;

	return Py_BuildValue("i", Horde3D::findNodes(startNode, name, type));
}


static const char *horde3d_getNodeFindResult_doc = "getNodeFindResult(index)\n" \
													"gets a result from the findNodes query\n\n" \
													"index: index of search result\n" \
													"returns handle to scene node from findNodes query or 0 if result doesn't exist";
static PyObject* horde3d_getNodeFindResult(PyObject *self, PyObject *args)
{
	int index;

	if(!PyArg_ParseTuple(args, "i:getNodeFindResult", &index))
		return NULL;

	return Py_BuildValue("i", Horde3D::getNodeFindResult(index));
}


static const char *horde3d_castRay_doc = "castRay(node, ox, oy, oz, dx, dy, dz, numNearest)\n" \
										  "performs a recursive ray collision query\n\n" \
										  "node: node at which intersection check is beginning\n" \
										  "ox, oy, oz: ray origin\n" \
										  "dy, dy, dz: ray direction vector also specifying ray length\n" \
										  "numNearest: maximum number of intersection points to be stored (0 for all)\n" \
										  "returns number of intersections";
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


static const char *horde3d_getCastRayResult_doc = "getCastRayResult(index)\n" \
												   "returns a result of a previous castRay query\n\n" \
												   "index: index of the result to be accessed in range [0, return value of castRay)\n" \
												   "returns tuple (nodeHandle, distance, (intX, intY, intZ))";
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


static const char *horde3d_addGroupNode_doc = "addGroupNode(parent, name)" \
											   "adds a group node to the scene\n\n" \
											   "parent: handle to parent node to which the new node will be attached\n" \
											   "name: name of the node\n" \
											   "returns handle to the created node or 0 in case of failure";
static PyObject* horde3d_addGroupNode(PyObject *self, PyObject *args)
{
	int parent;
	const char *name;

	if(!PyArg_ParseTuple(args, "is:addGroupNode", &parent, &name))
		return NULL;

	return Py_BuildValue("i", Horde3D::addGroupNode(parent, name));
}


static const char *horde3d_addModelNode_doc = "addModelNode(parent, name, res)" \
											   "adds a model node to the scene\n\n" \
											   "parent: handle to parent node to which the new nowde will be attached\n" \
											   "name: name of the node\n" \
											   "res: geometry resource for the model node\n" \
											   "returns handle to the created node or 0 in case of failure";
static PyObject* horde3d_addModelNode(PyObject *self, PyObject *args)
{
	int parent;
	const char *name;
	int res;

	if(!PyArg_ParseTuple(args, "isi:addModelNode", &parent, &name, &res))
		return NULL;

	return Py_BuildValue("i", Horde3D::addModelNode(parent, name, res));
}


static const char *horde3d_setupModelAnimStage_doc = "setupModelAnimStage(node, stage, animRes, startNode, additive)" \
													  "configures an animation stage of a model node\n\n" \
													  "node: handle to the model to be modified\n" \
													  "stage: index of the animation stage to be configured\n " \
													  "animRes: handle to animation resource (can be 0)\n" \
													  "startNode: name of the first node to which animation shall be applied (or empty string)\n" \
													  "additive: boolean flag indicating whether stage is additive\n" \
													  "returns True if successful, otherwise False";
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


static const char *horde3d_setModelAnimParams_doc = "setModelAnimParams(node, stage, time, weight)\n" \
													 "sets the parameters of an animation stage in a model node\n\n" \
													 "node: handle to the model node to be modified\n" \
													 "stage: index of the animation stage to be modified\n" \
													 "time: new animation time / frame\n" \
													 "weight: new blend weight\n" \
													 "returns True if successful, otherwise False";
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


static const char *horde3d_setModelMorpher_doc = "setModelMorpher(node, target, weight)\n" \
												  "sets the weight of a morph target\n\n" \
												  "modelNode: handle to the model node to be modified\n" \
												  "target: name of the morph target\n" \
												  "weight: new weight for morph target\n" \
												  "returns True if successful, otherwise False";
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


static const char *horde3d_addMeshNode_doc = "addMeshNode(parent, name, matRes, batchStart, batchcount, vertRStart, vertRend)\n" \
											  "adds a mesh node to the scene\n\n" \
											  "parent: handle to parent node to which the new node will be attached\n" \
											  "name: name of the node\n" \
											  "matRes: material resource to be used\n" \
											  "batchStart: first triangle index of mesh in geometry resource of parent model node\n" \
											  "batchCount: number of triangle indices used for drawing mesh\n" \
											  "vertRStart: first vertex in geometry resource of parent model node\n" \
											  "vertREnd: last vertex in Geometry resource of parent model node\n" \
											  "returns handle to the created node or 0 in case of failure";
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


static const char *horde3d_addJointNode_doc = "addJointNode(parent, name, jointIndex)\n" \
											   "adds a joint node to the scene\n\n" \
											   "parent: handle to parent node to which the new node will be attached\n" \
											   "name: name of the node\n" \
											   "jointIndex: index of joint in geometry resource of parent model node\n" \
											   "returns handle to the created node or 0 in case of failure";
static PyObject* horde3d_addJointNode(PyObject *self, PyObject *args)
{
	int parent;
	const char *name;
	int jointIndex;

	if(!PyArg_ParseTuple(args, "isi:addJointNode", &parent, &name, &jointIndex))
		return NULL;

	return Py_BuildValue("i", Horde3D::addJointNode(parent, name, jointIndex));
}


#ifdef PHOENIX_SPOT_POINT_LIGHTS
static const char *horde3d_addSpotLightNode_doc = "addSpotLightNode(parent, name, matRes, lightingContext, shadowContext)";// TODO
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



static const char *horde3d_addPointLightNode_doc = "addPointLightNode(parent, name, matRes, lightingContext, shadowContext)";// TODO
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
#else // PHOENIX_SPOT_POINT_LIGHTS

static const char *horde3d_addLightNode_doc = "addLightNode(parent, name, matRes, lightingContext, shadowContext)\n" \
											   "adds a light node to the scene\n\n" \
											   "parent: handle to parent node to which the new node will be attached\n" \
											   "name: name of the node\n" \
											   "matRes: material resource for light configuration or 0 if not used\n" \
											   "lightingContext: name of the shader context used for doing light calculations\n" \
											   "shadowContext: name of the shader context used for doing shadow map rendering\n" \
											   "returns handle to the created node or 0 in case of failure";
static PyObject* horde3d_addLightNode(PyObject *self, PyObject *args)
{
	int parent;
	const char *name;
	int matRes;
	const char *lightingContext;
	const char *shadowContext;

	if(!PyArg_ParseTuple(args, "isiss:addLightNode", &parent, &name, &matRes, &lightingContext, &shadowContext))
		return NULL;

	return Py_BuildValue("i", Horde3D::addLightNode(parent, name, matRes, lightingContext, shadowContext));
}
#endif // PHOENIX_SPOT_POINT_LIGHTS


static const char *horde3d_setLightContexts_doc = "setLightContexts(node, lightingContext, shadowContext)\n" \
												   "sets the shader contexts used by a light source\n\n"
												   "node: handle to the light node\n" \
												   "lightingContext: name of the shader context used for doing light calculations\n" \
												   "shadowContext: name of the shader context used for doing shadow map rendering\n" \
												   "returns True if successful, otherwise False";
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


static const char *horde3d_addCameraNode_doc = "addCameraNode(parent, name, pipeline)\n" \
												"adds a camera node to the scene\n\n" \
												"parant: handle to parent node to which the new node will be attached\n" \
												"name: name of the node\n" \
												"pipeline: pipeline resource used for rendering\n" \
												"returns handle to the created node or 0 in case of failure";
static PyObject* horde3d_addCameraNode(PyObject *self, PyObject *args)
{
	int parent;
	const char *name;
	int pipeline;

	if(!PyArg_ParseTuple(args, "isi:addCameraNode", &parent, &name, &pipeline))
		return NULL;

	return Py_BuildValue("i", Horde3D::addCameraNode(parent, name, pipeline));
}


static const char *horde3d_setupCameraView_doc = "setupCameraView(node, fov, aspect, nearDist, farDist)\n" \
												  "sets the planes of a camera viewing frustum\n\n" \
												  "node: handle to the camarea node\n" \
												  "fov: field of view angle\n" \
												  "aspect: aspect ratio\n" \
												  "nearDist: distance of near clipping plane\n" \
												  "farDist: distance of far clipping plane\n" \
												  "returs True if successful, otherwise False";
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


static const char *horde3d_calcCameraProjectionMatrix_doc = "calcCameraProjectionMatrix(node)\n" \
															 "calculates the camera projection matrix\n\n" \
															 "node: handle to camera node\n" \
															 "returns tuple of 16 floats representing projection matrix";
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


static const char *horde3d_addEmitterNode_doc = "addEmitterNode(parent, name, matRes, effectRes, maxParticleCount, respawnCount)\n" \
												 "adds an emitter node to the scene\n\n" \
												 "parent: handle to parent node to which the new node will be attached\n" \
												 "name: name of the node\n" \
												 "matRes: handle to material resource to be used\n" \
												 "effectRes: handle to effect resource to be used\n" \
												 "maxParticleCount: maximum number of particles living at the same time\n" \
												 "respawnCount: number of times a single particle is recreated after dying (-1 for infinite)\n" \
												 "returns handle to the created node or 0 in case of failure";
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


static const char *horde3d_advanceEmitterTime_doc = "advanceEmitterTime(node, delta)\n" \
													 "advances the time value of an emitter node\n\n" \
													 "node: handle to the node\n" \
													 "delta: time delta in seconds\n" \
													 "returns True if successful, otherwise False";
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


static const char *horde3d_hasEmitterFinished_doc = "hasEmitterFinished(node)\n" \
													 "checks if an emitter node is still alive\n\n" \
													 "node: handle to the node\n" \
													 "returns True if emitter node will no more emit any particles and has no remaining particles, otherwise False";
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
#ifdef PHOENIX_SPOT_POINT_LIGHTS
	H3D_CONSTANT(d, SpotLight, SceneNodeTypes);
	H3D_CONSTANT(d, PointLight, SceneNodeTypes);
#else // PHOENIX_SPOT_POINT_LIGHTS
	H3D_CONSTANT(d, Light, SceneNodeTypes);
#endif // PHOENIX_SPOT_POINT_LIGHTS
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



#define H3D_FUNCTION(name) {#name, horde3d_##name, METH_VARARGS, horde3d_##name ##_doc}

static PyMethodDef horde3d_methods[] =
{
	H3D_FUNCTION(getVersionString),
	H3D_FUNCTION(checkExtension),
	H3D_FUNCTION(init),
	H3D_FUNCTION(release),
	H3D_FUNCTION(resize),
	H3D_FUNCTION(render),
	H3D_FUNCTION(clear),
	H3D_FUNCTION(getMessage),
	H3D_FUNCTION(getOption),
	H3D_FUNCTION(setOption),
	H3D_FUNCTION(getStat),
	H3D_FUNCTION(showOverlay),
	H3D_FUNCTION(clearOverlays),
	H3D_FUNCTION(getResourceType),
	H3D_FUNCTION(getResourceName),
	H3D_FUNCTION(findResource),
	H3D_FUNCTION(addResource),
	H3D_FUNCTION(cloneResource),
	H3D_FUNCTION(removeResource),
	H3D_FUNCTION(loadResource),
	H3D_FUNCTION(isResourceLoaded),
	H3D_FUNCTION(unloadResource),
	H3D_FUNCTION(getResourceParami),
	H3D_FUNCTION(setResourceParami),
	H3D_FUNCTION(getResourceParamf),
	H3D_FUNCTION(setResourceParamf),
	H3D_FUNCTION(getResourceParamstr),
	H3D_FUNCTION(setResourceParamstr),
	//{"getResourceData", horde3d_getResourceData, METH_VARARGS},// FIXME implement function first
	H3D_FUNCTION(updateResourceData),
	H3D_FUNCTION(queryUnloadedResource),
	H3D_FUNCTION(releaseUnusedResources),
	H3D_FUNCTION(createTexture2D),
	H3D_FUNCTION(setShaderPreambles),
	H3D_FUNCTION(setMaterialUniform),
	H3D_FUNCTION(setPipelineStageActivation),
	H3D_FUNCTION(getPipelineRenderTargetData),
	H3D_FUNCTION(getNodeType),
	H3D_FUNCTION(getNodeParent),
	H3D_FUNCTION(setNodeParent),
	H3D_FUNCTION(getNodeChild),
	H3D_FUNCTION(addNodes),
	H3D_FUNCTION(removeNode),
	H3D_FUNCTION(setNodeActivation),
	H3D_FUNCTION(checkNodeTransformFlag),
	H3D_FUNCTION(getNodeTransform),
	H3D_FUNCTION(setNodeTransform),
	H3D_FUNCTION(getNodeTransformMatrices),
	H3D_FUNCTION(setNodeTransformMatrix),
	H3D_FUNCTION(getNodeParamf),
	H3D_FUNCTION(setNodeParamf),
	H3D_FUNCTION(getNodeParami),
	H3D_FUNCTION(setNodeParami),
	H3D_FUNCTION(getNodeParamstr),
	H3D_FUNCTION(setNodeParamstr),
	H3D_FUNCTION(getNodeAABB),
	H3D_FUNCTION(findNodes),
	H3D_FUNCTION(getNodeFindResult),
	H3D_FUNCTION(castRay),
	H3D_FUNCTION(getCastRayResult),
	H3D_FUNCTION(addGroupNode),
	H3D_FUNCTION(addModelNode),
	H3D_FUNCTION(setupModelAnimStage),
	H3D_FUNCTION(setModelAnimParams),
	H3D_FUNCTION(setModelMorpher),
	H3D_FUNCTION(addMeshNode),
	H3D_FUNCTION(addJointNode),
#ifdef PHOENIX_SPOT_POINT_LIGHTS
	H3D_FUNCTION(addSpotLightNode),
	H3D_FUNCTION(addPointLightNode),
#else // PHOENIX_SPOT_POINT_LIGHTS
	H3D_FUNCTION(addLightNode),
#endif // PHOENIX_SPOT_POINT_LIGHTS
	H3D_FUNCTION(setLightContexts),
	H3D_FUNCTION(addCameraNode),
	H3D_FUNCTION(setupCameraView),
	H3D_FUNCTION(calcCameraProjectionMatrix),
	H3D_FUNCTION(addEmitterNode),
	H3D_FUNCTION(advanceEmitterTime),
	H3D_FUNCTION(hasEmitterFinished),






	{"_getConstants", horde3d__getConstants, METH_VARARGS}, // not part of official API, used to get the constants and enums into Python

	{NULL, NULL}
};


PyMODINIT_FUNC inithorde3d(void)
{
	Py_InitModule("horde3d", horde3d_methods);
}


