#include "SceneGraphSquirrel.h"
#include <Horde3D/Horde3D.h>
#include <Horde3D/Horde3DUtils.h>

#include <string>
//
//
// Horde3D Bindings

void HordeSquirrel::registerFunctions(SQVM* v)
{
	register_global(v,HordeSquirrel::showOverlay,"Horde_showOverlay");
	register_global(v,HordeSquirrel::clearOverlays,"Horde_clearOverlays");
	register_global(v,HordeSquirrel::clear,"Horde_clear");
	register_global(v,HordeSquirrel::getResourceType,"Horde_getResourceType");
	register_global(v,HordeSquirrel::getResourceName,"Horde_getResourceName");
	register_global(v,HordeSquirrel::findResource,"Horde_findResource");
	register_global(v,HordeSquirrel::addResource,"Horde_addResource");
	register_global(v,HordeSquirrel::cloneResource,"Horde_cloneResource");
	register_global(v,HordeSquirrel::removeResource,"Horde_removeResource");
	register_global(v,HordeSquirrel::loadResource,"Horde_loadResource");
	register_global(v,HordeSquirrel::loadResourceString,"Horde_loadResourceText");
	register_global(v,HordeSquirrel::unloadResource,"Horde_unloadResource");
	register_global(v,HordeSquirrel::addCameraNode,"Horde_addCameraNode");
	register_global(v,HordeSquirrel::addEmitterNode,"Horde_addEmitterNode");
	register_global(v,HordeSquirrel::addGroupNode,"Horde_addGroupNode");
	register_global(v,HordeSquirrel::addJointNode,"Horde_addJointNode");
	register_global(v,HordeSquirrel::addLightNode,"Horde_addLightNode");
	register_global(v,HordeSquirrel::addModelNode,"Horde_addModelNode");
	register_global(v,HordeSquirrel::addNodes,"Horde_addNodes");
	register_global(v,HordeSquirrel::advanceEmitterTime,"Horde_advanceEmitterTime");
	register_global(v,HordeSquirrel::castRay,"Horde_castRay");
	register_global(v,HordeSquirrel::checkNodeTransformFlag,"Horde_checkNodeTransformFlag");
	register_global(v,HordeSquirrel::createTexture2D,"Horde_createTexture2D");
	register_global(v,HordeSquirrel::findNodes,"Horde_findNodes");
	register_global(v,HordeSquirrel::getCastRayResult,"Horde_getCastRayResult");
	register_global(v,HordeSquirrel::getNodeFindResult,"Horde_getNodeFindResult");
	register_global(v,HordeSquirrel::getNodeParamF,"Horde_getNodeParamF");
	register_global(v,HordeSquirrel::getNodeParamI,"Horde_getNodeParamI");
	register_global(v,HordeSquirrel::getNodeParamS,"Horde_getNodeParamS");
	register_global(v,HordeSquirrel::getNodeParent,"Horde_getNodeParent");
	register_global(v,HordeSquirrel::getNodePosX,"Horde_getNodePosX");
	register_global(v,HordeSquirrel::getNodePosY,"Horde_getNodePosY");
	register_global(v,HordeSquirrel::getNodePosZ,"Horde_getNodePosZ");
	register_global(v,HordeSquirrel::getNodeRotX,"Horde_getNodeRotX");
	register_global(v,HordeSquirrel::getNodeRotY,"Horde_getNodeRotY");
	register_global(v,HordeSquirrel::getNodeRotZ,"Horde_getNodeRotZ");
	register_global(v,HordeSquirrel::getNodeScaleX,"Horde_getNodeScaleX");
	register_global(v,HordeSquirrel::getNodeScaleY,"Horde_getNodeScaleY");
	register_global(v,HordeSquirrel::getNodeScaleZ,"Horde_getNodeScaleZ");
	register_global(v,HordeSquirrel::getNodeType,"Horde_getNodeType");
	register_global(v,HordeSquirrel::getResourceParamF,"Horde_getResourceParamF");
	register_global(v,HordeSquirrel::getResourceParamI,"Horde_getResourceParamI");
	register_global(v,HordeSquirrel::getResourceParamS,"Horde_getResourceParamS");
	register_global(v,HordeSquirrel::getResourcePath,"Horde_getResourcePath");
	register_global(v,HordeSquirrel::getResourceType,"Horde_getResourceType");
	register_global(v,HordeSquirrel::hasEmitterFinished,"Horde_hasEmitterFinished");
	register_global(v,HordeSquirrel::loadResourcesFromDisk,"Horde_loadResourcesFromDisk");
	register_global(v,HordeSquirrel::pickNode,"Horde_pickNode");
	register_global(v,HordeSquirrel::queryUnloadedResource,"Horde_queryUnloadedResource");
	register_global(v,HordeSquirrel::releaseUnusedResources,"Horde_releaseUnusedResources");
	register_global(v,HordeSquirrel::removeNode,"Horde_removeNode");
	register_global(v,HordeSquirrel::setLightContexts,"Horde_setLightContexts");
	register_global(v,HordeSquirrel::setMaterialUniform,"Horde_setMaterialUniform");
	register_global(v,HordeSquirrel::setModelAnimParams,"Horde_setModelAnimParams");
	register_global(v,HordeSquirrel::setModelMorpher,"Horde_setModelMorpher");
	register_global(v,HordeSquirrel::setNodeActivation,"Horde_setNodeActivation");
	register_global(v,HordeSquirrel::setNodeParamF,"Horde_setNodeParamF");
	register_global(v,HordeSquirrel::setNodeParamI,"Horde_setNodeParamI");
	register_global(v,HordeSquirrel::setNodeParamS,"Horde_setNodeParamS");
	register_global(v,HordeSquirrel::setNodeParent,"Horde_setNodeParent");
	register_global(v,HordeSquirrel::setNodePosition,"Horde_setNodePosition");
	register_global(v,HordeSquirrel::setNodeRotation,"Horde_setNodeRotation");
	register_global(v,HordeSquirrel::setNodeScale,"Horde_setNodeScale");
	register_global(v,HordeSquirrel::setNodeTransform,"Horde_setNodeTransform");
	register_global(v,HordeSquirrel::setPipelineStageActivation,"Horde_setPipelineStage");
	register_global(v,HordeSquirrel::setResourceParamF,"Horde_setResourceParamF");
	register_global(v,HordeSquirrel::setResourceParamI,"Horde_setResourceParamI");
	register_global(v,HordeSquirrel::setResourceParamS,"Horde_setResourceParamS");
	register_global(v,HordeSquirrel::setResourcePath,"Horde_setResourcePath");
	register_global(v,HordeSquirrel::setShaderPreambles,"Horde_setShaderPreambles");
	register_global(v,HordeSquirrel::setupCameraView,"Horde_setupCameraView");
	register_global(v,HordeSquirrel::setupModelAnimStage,"Horde_setupModelAnimStage");
	register_global(v,HordeSquirrel::showFrameStats,"Horde_showFrameStats");
	register_global(v,HordeSquirrel::showText,"Horde_showText");
}

int HordeSquirrel::showOverlay(SQVM* v)
{
	float x_ll,y_ll,u_ll,v_ll,x_lr,y_lr,u_lr,v_lr,x_ur,y_ur,u_ur,v_ur,x_ul,y_ul,u_ul,v_ul;
	int layer = 0, res = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 18)
	{
		sq_getfloat(v,2,&x_ll);
		sq_getfloat(v,3,&u_ll);
		sq_getfloat(v,4,&u_ll);
		sq_getfloat(v,5,&v_ll);
		sq_getfloat(v,6,&x_lr);
		sq_getfloat(v,7,&y_lr);
		sq_getfloat(v,8,&u_lr);
		sq_getfloat(v,9,&v_lr);
		sq_getfloat(v,10,&x_ur);
		sq_getfloat(v,11,&y_ur);
		sq_getfloat(v,12,&u_ur);
		sq_getfloat(v,13,&v_ur);
		sq_getfloat(v,14,&x_ul);
		sq_getfloat(v,15,&y_ul);
		sq_getfloat(v,16,&u_ul);
		sq_getfloat(v,17,&v_ul);
		sq_getinteger(v,18,&layer);
		sq_getinteger(v,19,&res);
		Horde3D::showOverlay(x_ll,y_ll,u_ll,v_ll,x_lr,y_lr,u_lr,v_lr,x_ur,y_ur,u_ur,v_ur,x_ul,y_ul,u_ul,v_ul,layer,res);
	}
	return 0;
}
int HordeSquirrel::clearOverlays(SQVM* v)
{
	Horde3D::clearOverlays();
	return 0;
}
int HordeSquirrel::clear(SQVM* v)
{
	Horde3D::clear();
	return 0;
}

int HordeSquirrel::getResourceType(SQVM* v)
{
	int handle = 0;
	int retVal = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&handle);
		retVal = Horde3D::getResourceType(handle);
	}
	sq_pushinteger(v,retVal);
	return 1;
}
int HordeSquirrel::getResourceName(SQVM* v)
{
	int handle = 0;
	const char* retVal = 0;
	std::string tString;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&handle);
		retVal = Horde3D::getResourceName(handle);
	}
	tString = retVal;
	sq_pushstring(v,tString.c_str(),tString.size());
	return 1;
}
int HordeSquirrel::findResource(SQVM* v)
{
	int type = 0;
	const char* name;
	int retval = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&type);
		sq_getstring(v,3,&name);
		retval = Horde3D::findResource(ResourceTypes::List(type),name);
	}
	sq_pushinteger(v,retval);
	return 1;
}
int HordeSquirrel::addResource(SQVM* v)
{
	int type = 0;
	int flags = 0;
	const char* name;
	int retval = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&type);
		sq_getstring(v,3,&name);
		if(nargs > 3) sq_getinteger(v,4,&flags);
		retval = Horde3D::addResource(ResourceTypes::List(type),name,flags);
	}
	sq_pushinteger(v,retval);
	return 1;
}
int HordeSquirrel::cloneResource(SQVM* v)
{
	int handle = 0;
	const char* name;
	int retval = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&handle);
		sq_getstring(v,3,&name);
		retval = Horde3D::cloneResource(handle,name);
	}
	sq_pushinteger(v,retval);
	return 1;
}
int HordeSquirrel::removeResource(SQVM* v)
{
	int handle = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&handle);
		Horde3D::removeResource(handle);
	}
	return 0;
}
int HordeSquirrel::loadResource(SQVM* v)
{
	//Actually write a file by file resource loader
	//Think about writing a streamed loader
	return 0;
}
int HordeSquirrel::loadResourceString(SQVM* v)
{
	int handle = 0;
	const char* tData = 0;
	std::string data;
	bool retval;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&handle);
		sq_getstring(v,3,&tData);
		data = tData;
		retval = Horde3D::loadResource(handle,data.c_str(),data.size());
	}
	sq_pushbool(v,retval);
	return 1;
}
int HordeSquirrel::unloadResource(SQVM* v)
{
	int handle = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&handle);
		Horde3D::unloadResource(handle);
	}
	return 0;
}
int HordeSquirrel::getResourceParamI(SQVM* v)
{
	int handle = 0, param = 0, retVal = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&handle);
		sq_getinteger(v,3,&param);
		retVal = Horde3D::getResourceParami(handle,param);
	}
	sq_pushinteger(v,retVal);
	return 1;
}
int HordeSquirrel::getResourceParamS(SQVM* v)
{
	int handle = 0, param = 0;
	const char* retVal = 0;
	std::string tOut;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&handle);
		sq_getinteger(v,3,&param);
		retVal = Horde3D::getResourceParamstr(handle,param);
	}
	tOut = retVal;
	sq_pushstring(v,tOut.c_str(),tOut.size());
	return 1;
}
int HordeSquirrel::getResourceParamF(SQVM* v)
{
	int handle = 0, param = 0;
	float retVal = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&handle);
		sq_getinteger(v,3,&param);
		retVal = Horde3D::getResourceParamf(handle,param);
	}
	sq_pushfloat(v,retVal);
	return 1;
}
int HordeSquirrel::setResourceParamI(SQVM* v)
{
	int handle = 0, param = 0, value = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&handle);
		sq_getinteger(v,3,&param);
		sq_getinteger(v,4,&value);
		Horde3D::setResourceParami(handle,param,value);
	}
	return 0;
}
int HordeSquirrel::setResourceParamF(SQVM* v)
{
	int handle = 0, param = 0;
	float value = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&handle);
		sq_getinteger(v,3,&param);
		sq_getfloat(v,4,&value);
		Horde3D::setResourceParamf(handle,param,value);
	}
	return 0;
}
int HordeSquirrel::setResourceParamS(SQVM* v)
{
	int handle = 0, param = 0;
	const char* value = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&handle);
		sq_getinteger(v,3,&param);
		sq_getstring(v,4,&value);
		Horde3D::setResourceParamstr(handle,param,value);
	}
	return 0;
}
int HordeSquirrel::queryUnloadedResource(SQVM* v)
{
	int handle = 0;
	int index = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&index);
	}
	handle = Horde3D::queryUnloadedResource(index);
	sq_pushinteger(v,handle);
	return 1;
}
int HordeSquirrel::releaseUnusedResources(SQVM* v)
{
	Horde3D::releaseUnusedResources();
	return 0;
}

int HordeSquirrel::createTexture2D(SQVM* v)
{
	int handle = 0;
	const char* name;
	int flags = 0, width = 256, height = 256;
	SQBool renderable = 1;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getstring(v,2,&name);
		if(nargs > 5)
		{
			sq_getinteger(v,3,&flags);
			sq_getinteger(v,4,&width);
			sq_getinteger(v,5,&height);
			sq_getbool(v,6,&renderable);
		}
		handle = Horde3D::createTexture2D(name,flags,width,height,renderable);
	}
	sq_pushinteger(v,handle);
	return 1;
}
int HordeSquirrel::setShaderPreambles(SQVM* v)
{
	const char* vert;
	const char* frag;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getstring(v,2,&vert);
		sq_getstring(v,3,&vert);
		Horde3D::setShaderPreambles(vert,frag);
	}
	return 0;
}
int HordeSquirrel::setMaterialUniform(SQVM* v)
{
	int handle;
	float a = 0.0f, b = 0.0f, c = 0.0f, d = 0.0f;
	const char* name;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&handle);
		sq_getstring(v,3,&name);
		sq_getfloat(v,4,&a);
		if(nargs > 4) sq_getfloat(v,5,&b);
		if(nargs > 5) sq_getfloat(v,5,&c);
		if(nargs > 6) sq_getfloat(v,5,&d);
		Horde3D::setMaterialUniform(handle,name,a,b,c,d);
	}
	return 0;
}
int HordeSquirrel::setPipelineStageActivation(SQVM* v)
{
	int handle = 0;
	SQBool state;
	const char* name = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&handle);
		sq_getstring(v,3,&name);
		sq_getbool(v,4,&state);
		Horde3D::setPipelineStageActivation(handle,name,state);
	}
	return 0;
}

int HordeSquirrel::getNodeType(SQVM* v)
{
	int type = 0;
	int handle = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&handle);
		type = Horde3D::getNodeType(handle);
	}
	sq_pushinteger(v,type);
	return 1;
}
int HordeSquirrel::getNodeParent(SQVM* v)
{
	int parent = 0, handle = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		parent = Horde3D::getNodeParent(handle);
	}
	sq_pushinteger(v,parent);
	return 1;
}
int HordeSquirrel::setNodeParent(SQVM* v)
{
	int node = 0, parent = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&node);
		sq_getinteger(v,3,&parent);
		Horde3D::setNodeParent(node,parent);
	}
	return 0;
}
int HordeSquirrel::addNodes(SQVM* v)
{
	int handle = 0, parent = 0, resource = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&parent);
		sq_getinteger(v,3,&resource);
		handle = Horde3D::addNodes(parent,resource);
	}
	sq_pushinteger(v,handle);
	return 1;
}
int HordeSquirrel::removeNode(SQVM* v)
{
	int node = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&node);
		Horde3D::removeNode(node);
	}
	return 0;
}
int HordeSquirrel::setNodeActivation(SQVM* v)
{
	int node = 0;
	SQBool state = 1;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&node);
		if(nargs > 2) sq_getbool(v,3,&state);
		Horde3D::setNodeActivation(node,state);
	}
	return 0;
}
int HordeSquirrel::checkNodeTransformFlag(SQVM* v)
{
	int node = 0;
	SQBool state = 0;
	SQBool reset = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&node);
		if(nargs > 2) sq_getbool(v,3,&reset);
		state = Horde3D::checkNodeTransformFlag(node,reset);
	}
	sq_pushbool(v,state);
	return 1;
}
int HordeSquirrel::getNodeParamF(SQVM* v)
{
	int node = 0, param = 0;
	float value = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&node);
		sq_getinteger(v,3,&param);
		value = Horde3D::getNodeParamf(node,param);
	}
	sq_pushfloat(v,value);
	return 1;
}
int HordeSquirrel::setNodeParamF(SQVM* v)
{
	int node = 0, param = 0;
	float value = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&node);
		sq_getinteger(v,3,&param);
		sq_getfloat(v,4,&value);
		Horde3D::setNodeParamf(node,param,value);
	}
	return 0;
}
int HordeSquirrel::getNodeParamI(SQVM* v)
{
	int node = 0, param = 0;
	int value = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&node);
		sq_getinteger(v,3,&param);
		value = Horde3D::getNodeParami(node,param);
	}
	sq_pushinteger(v,value);
	return 1;
}
int HordeSquirrel::setNodeParamI(SQVM* v)
{
	int node = 0, param = 0;
	int value = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&node);
		sq_getinteger(v,3,&param);
		sq_getinteger(v,4,&value);
		Horde3D::setNodeParami(node,param,value);
	}
	return 0;
}
int HordeSquirrel::setNodeParamS(SQVM* v)
{
	int node = 0, param = 0;
	const char* value = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&node);
		sq_getinteger(v,3,&param);
		sq_getstring(v,4,&value);
		Horde3D::setNodeParamstr(node,param,value);
	}
	return 0;
}
int HordeSquirrel::getNodeParamS(SQVM* v)
{
	int node = 0, param = 0;
	const char* value = 0;
	std::string t;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&node);
		sq_getinteger(v,3,&param);
		value = Horde3D::getNodeParamstr(node,param);
	}
	t = value;
	sq_pushstring(v,t.c_str(),t.size());
	return 1;
}
int HordeSquirrel::findNodes(SQVM* v)
{
	int start = 0, type = 0;
	int retVal = 0;
	const char* name;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&start);
		sq_getstring(v,3,&name);
		sq_getinteger(v,4,&type);
		retVal = Horde3D::findNodes(start,name,type);
	}
	sq_pushinteger(v,retVal);
	return 1;
}
int HordeSquirrel::getNodeFindResult(SQVM* v)
{
	int index = 0;
	int retVal = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&index);
		retVal = Horde3D::getNodeFindResult(index);
	}
	sq_pushinteger(v,retVal);
	return 1;
}
int HordeSquirrel::castRay(SQVM* v)
{
	int node = 0, num = 0;
	float ox = 0.0f, oy = 0.0f, oz = 0.0f, dx = 0.0f, dy = 0.0f, dz = 0.0f;
	int retVal = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 8)
	{
		sq_getinteger(v,2,&node);
		sq_getfloat(v,3,&ox);
		sq_getfloat(v,4,&oy);
		sq_getfloat(v,5,&oz);
		sq_getfloat(v,6,&dx);
		sq_getfloat(v,7,&dy);
		sq_getfloat(v,8,&dz);
		sq_getinteger(v,9,&num);
		retVal = Horde3D::castRay(node,ox,oy,oz,dx,dy,dz,num);
	}
	sq_pushinteger(v,retVal);
	return 1;
}
int HordeSquirrel::getCastRayResult(SQVM* v)
{
	int index = 0, param = 0, node = 0;
	float distance;
	float intersection[3];
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&index);
		if(nargs > 2) sq_getinteger(v,3,&param);
		if(Horde3D::getCastRayResult(index,&node,&distance,&intersection[0]))
		{
			switch(param)
			{
			case 0:
				sq_pushinteger(v,node);
				break;
			case 1:
				sq_pushfloat(v,distance);
				break;
			case 2:
				sq_pushfloat(v,intersection[0]);
				break;
			case 3:
				sq_pushfloat(v,intersection[1]);
				break;
			case 4:
				sq_pushfloat(v,intersection[2]);
				break;
			}
			return 1;
		}
	}
	sq_pushinteger(v,0);
	return 1;
}

int HordeSquirrel::addGroupNode(SQVM* v)
{
	int retVal = 0, parent = 0;
	const char* name = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&parent);
		sq_getstring(v,3,&name);
		retVal = Horde3D::addGroupNode(parent,name);
	}
	sq_pushinteger(v,retVal);
	return 1;
}

int HordeSquirrel::addModelNode(SQVM* v)
{
	int retVal = 0, parent = 0, resource = 0;
	const char* name = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&parent);
		sq_getstring(v,3,&name);
		sq_getinteger(v,4,&resource);
		retVal = Horde3D::addModelNode(parent,name,resource);
	}
	sq_pushinteger(v,retVal);
	return 1;
}
int HordeSquirrel::setupModelAnimStage(SQVM* v)
{
	int retVal = 0, node = 0, stage = 0, resource = 0;
	SQBool additive = 0;
	const char* name = "";
	const char* start = "";
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&node);
		sq_getinteger(v,3,&stage);
		sq_getinteger(v,4,&resource);
		if(nargs > 4) sq_getstring(v,5,&start);
		if(nargs > 5) sq_getbool(v,6,&additive);
		retVal = Horde3D::setupModelAnimStage(node,stage,resource,start,additive);
	}
	sq_pushinteger(v,retVal);
	return 1;
}
int HordeSquirrel::setModelAnimParams(SQVM* v)
{
	int retVal = 0, node = 0, stage = 0;
	float weight = 0.0f, time = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 4)
	{
		sq_getinteger(v,2,&node);
		sq_getinteger(v,3,&stage);
		sq_getfloat(v,4,&time);
		sq_getfloat(v,5,&weight);
		retVal = Horde3D::setModelAnimParams(node,stage,time,weight);
	}
	sq_pushinteger(v,retVal);
	return 1;
}
int HordeSquirrel::setModelMorpher(SQVM* v)
{
	int retVal = 0, node = 0;
	const char* target = "";
	float weight = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&node);
		sq_getstring(v,3,&target);
		sq_getfloat(v,4,&weight);
		retVal = Horde3D::setModelMorpher(node,target,weight);
	}
	sq_pushinteger(v,retVal);
	return 1;
}

int HordeSquirrel::addJointNode(SQVM* v)
{
	int retVal = 0, parent = 0, index = 0;
	const char* name = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&parent);
		sq_getstring(v,3,&name);
		sq_getinteger(v,4,&index);
		retVal = Horde3D::addJointNode(parent,name,index);
	}
	sq_pushinteger(v,retVal);
	return 1;
}

int HordeSquirrel::addLightNode(SQVM* v)
{
	int retVal = 0, parent = 0, resource = 0;
	const char* name = 0;
	const char* lContext = 0;
	const char* sContext = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 5)
	{
		sq_getinteger(v,2,&parent);
		sq_getstring(v,3,&name);
		sq_getinteger(v,4,&resource);
		sq_getstring(v,5,&lContext);
		sq_getstring(v,6,&sContext);
		retVal = Horde3D::addLightNode(parent,name,resource,lContext,sContext);
	}
	sq_pushinteger(v,retVal);
	return 1;
}
int HordeSquirrel::setLightContexts(SQVM* v)
{
	int retVal = 0, node = 0;
	const char* lContext = 0;
	const char* sContext = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&node);
		sq_getstring(v,3,&lContext);
		sq_getstring(v,4,&sContext);
		retVal = Horde3D::setLightContexts(node,lContext,sContext);
	}
	sq_pushinteger(v,retVal);
	return 1;
}

int HordeSquirrel::addCameraNode(SQVM* v)
{
	int retVal = 0, parent = 0, resource = 0;
	const char* name = 0;
	const char* lContext = 0;
	const char* sContext = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&parent);
		sq_getstring(v,3,&name);
		sq_getinteger(v,4,&resource);
		retVal = Horde3D::addCameraNode(parent,name,resource);
	}
	sq_pushinteger(v,retVal);
	return 1;
}
int HordeSquirrel::setupCameraView(SQVM* v)
{
	int retVal = 0, node = 0;
	float fov = 90.0f, aspect = 1.0f, nearDist = 0.0f, farDist = 100.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 5)
	{
		sq_getinteger(v,2,&node);
		sq_getfloat(v,3,&fov);
		sq_getfloat(v,4,&aspect);
		sq_getfloat(v,5,&nearDist);
		sq_getfloat(v,6,&farDist);
		retVal = Horde3D::setupCameraView(node,fov,aspect,nearDist,farDist);
	}
	sq_pushinteger(v,retVal);
	return 1;
}

int HordeSquirrel::addEmitterNode(SQVM* v)
{
	int retVal = 0, parent = 0, resource = 0, effect = 0, count = 0, respawn = 0;
	const char* name = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 6)
	{
		sq_getinteger(v,2,&parent);
		sq_getstring(v,3,&name);
		sq_getinteger(v,4,&resource);
		sq_getinteger(v,5,&effect);
		sq_getinteger(v,6,&count);
		sq_getinteger(v,7,&respawn);
		retVal = Horde3D::addEmitterNode(parent,name,resource,effect,count,respawn);
	}
	sq_pushinteger(v,retVal);
	return 1;
}
int HordeSquirrel::advanceEmitterTime(SQVM* v)
{
	int retVal = 0, node = 0;
	float delta = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&node);
		sq_getfloat(v,3,&delta);
		retVal = Horde3D::advanceEmitterTime(node,delta);
	}
	sq_pushinteger(v,retVal);
	return 1;
}
int HordeSquirrel::hasEmitterFinished(SQVM* v)
{
	int retVal = 0, node = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&node);
		retVal = Horde3D::hasEmitterFinished(node);
	}
	sq_pushinteger(v,retVal);
	return 1;
}

int HordeSquirrel::setNodeTransform(SQVM* v)
{
	int node = 0;
	float x = 0.0f, y = 0.0f, z = 0.0f, rx = 0.0f, ry = 0.0f, rz = 0.0f, sx = 1.0f, sy = 1.0f, sz = 1.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 10)
	{
		sq_getinteger(v,2,&node);
		sq_getfloat(v,3,&x);
		sq_getfloat(v,4,&z);
		sq_getfloat(v,5,&y);
		sq_getfloat(v,6,&rx);
		sq_getfloat(v,7,&ry);
		sq_getfloat(v,8,&rz);
		sq_getfloat(v,9,&sx);
		sq_getfloat(v,10,&sy);
		sq_getfloat(v,11,&sz);
		Horde3D::setNodeTransform(node,x,y,z,rx,ry,rz,sx,sy,sz);
	}
	return 0;
}
int HordeSquirrel::setNodePosition(SQVM* v)
{
	int node = 0;
	float x = 0.0f, y = 0.0f, z = 0.0f, rx = 0.0f, ry = 0.0f, rz = 0.0f, sx = 1.0f, sy = 1.0f, sz = 1.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 4)
	{
		sq_getinteger(v,2,&node);
		Horde3D::getNodeTransform(node,&x,&y,&z,&rx,&ry,&rz,&sx,&sy,&sz);
		sq_getfloat(v,3,&x);
		sq_getfloat(v,4,&z);
		sq_getfloat(v,5,&y);
		Horde3D::setNodeTransform(node,x,y,z,rx,ry,rz,sx,sy,sz);
	}
	return 0;
}
int HordeSquirrel::setNodeRotation(SQVM* v)
{
	int node = 0;
	float x = 0.0f, y = 0.0f, z = 0.0f, rx = 0.0f, ry = 0.0f, rz = 0.0f, sx = 1.0f, sy = 1.0f, sz = 1.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 4)
	{
		sq_getinteger(v,2,&node);
		Horde3D::getNodeTransform(node,&x,&y,&z,&rx,&ry,&rz,&sx,&sy,&sz);
		sq_getfloat(v,3,&rx);
		sq_getfloat(v,4,&rz);
		sq_getfloat(v,5,&ry);
		Horde3D::setNodeTransform(node,x,y,z,rx,ry,rz,sx,sy,sz);
	}
	return 0;
}
int HordeSquirrel::setNodeScale(SQVM* v)
{
	int node = 0;
	float x = 0.0f, y = 0.0f, z = 0.0f, rx = 0.0f, ry = 0.0f, rz = 0.0f, sx = 1.0f, sy = 1.0f, sz = 1.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 4)
	{
		sq_getinteger(v,2,&node);
		Horde3D::getNodeTransform(node,&x,&y,&z,&rx,&ry,&rz,&sx,&sy,&sz);
		sq_getfloat(v,3,&sx);
		sq_getfloat(v,4,&sz);
		sq_getfloat(v,5,&sy);
		Horde3D::setNodeTransform(node,x,y,z,rx,ry,rz,sx,sy,sz);
	}
	return 0;
}
int HordeSquirrel::getNodePosX(SQVM* v)
{
	int node = 0;
	float value = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&node);
		Horde3D::getNodeTransform(node,&value,0,0,0,0,0,0,0,0);
	}
	sq_pushfloat(v,value);
	return 1;
}
int HordeSquirrel::getNodePosY(SQVM* v)
{
	int node = 0;
	float value = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&node);
		Horde3D::getNodeTransform(node,0,&value,0,0,0,0,0,0,0);
	}
	sq_pushfloat(v,value);
	return 1;
}
int HordeSquirrel::getNodePosZ(SQVM* v)
{
	int node = 0;
	float value = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&node);
		Horde3D::getNodeTransform(node,0,0,&value,0,0,0,0,0,0);
	}
	sq_pushfloat(v,value);
	return 1;
}
int HordeSquirrel::getNodeRotX(SQVM* v)
{
	int node = 0;
	float value = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&node);
		Horde3D::getNodeTransform(node,0,0,0,&value,0,0,0,0,0);
	}
	sq_pushfloat(v,value);
	return 1;
}
int HordeSquirrel::getNodeRotY(SQVM* v)
{
	int node = 0;
	float value = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&node);
		Horde3D::getNodeTransform(node,0,0,0,0,&value,0,0,0,0);
	}
	sq_pushfloat(v,value);
	return 1;
}
int HordeSquirrel::getNodeRotZ(SQVM* v)
{
	int node = 0;
	float value = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&node);
		Horde3D::getNodeTransform(node,0,0,0,0,0,&value,0,0,0);
	}
	sq_pushfloat(v,value);
	return 1;
}
int HordeSquirrel::getNodeScaleX(SQVM* v)
{
	int node = 0;
	float value = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&node);
		Horde3D::getNodeTransform(node,0,0,0,0,0,0,&value,0,0);
	}
	sq_pushfloat(v,value);
	return 1;
}
int HordeSquirrel::getNodeScaleY(SQVM* v)
{
	int node = 0;
	float value = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&node);
		Horde3D::getNodeTransform(node,0,0,0,0,0,0,0,&value,0);
	}
	sq_pushfloat(v,value);
	return 1;
}
int HordeSquirrel::getNodeScaleZ(SQVM* v)
{
	int node = 0;
	float value = 0.0f;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getinteger(v,2,&node);
		Horde3D::getNodeTransform(node,0,0,0,0,0,0,0,0,&value);
	}
	sq_pushfloat(v,value);
	return 1;
}

//
//
//

// Horde3DUtils Bindings

//
//
//

int HordeSquirrel::getResourcePath(SQVM* v)
{
	int type = 0;
	std::string path;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&type);
		path = Horde3DUtils::getResourcePath(type);
	}
	sq_pushstring(v,path.c_str(),path.size());
	return 1;
}
int HordeSquirrel::setResourcePath(SQVM* v)
{
	int type = 0;
	const char* path = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&type);
		sq_getstring(v,3,&path);
		Horde3DUtils::setResourcePath(type,path);
	}
	return 0;
}
int HordeSquirrel::loadResourcesFromDisk(SQVM* v)
{
	const char* contentDir = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 1)
	{
		sq_getstring(v,2,&contentDir);
	}
	Horde3DUtils::loadResourcesFromDisk(contentDir);
	return 0;
}
int HordeSquirrel::pickNode(SQVM* v)
{
	int node = 0, retVal = 0;
	float nwx = 0.0f, nwy = 0.0f;
	SQInteger nargs =  sq_gettop(v);
	if(nargs > 3)
	{
		sq_getinteger(v,2,&node);
		sq_getfloat(v,3,&nwx);
		sq_getfloat(v,4,&nwx);
		retVal = Horde3DUtils::pickNode(node,nwx,nwy);
	}
	sq_pushinteger(v,retVal);
	return 1;
}
int HordeSquirrel::showText(SQVM* v)
{
	int resource = 0, layer = 0;
	float x = 0.0f, y = 0.0f, size = 0.0f;
	const char* text = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 6)
	{
		sq_getstring(v,2,&text);
		sq_getfloat(v,3,&x);
		sq_getfloat(v,4,&y);
		sq_getfloat(v,5,&size);
		sq_getinteger(v,6,&layer);
		sq_getinteger(v,7,&resource);
		Horde3DUtils::showText(text,x,y,size,layer,resource);
	}
	return 0;
}
int HordeSquirrel::showFrameStats(SQVM* v)
{
	float fps = 0.0f;
	int resource = 0;
	SQInteger nargs = sq_gettop(v);
	if(nargs > 2)
	{
		sq_getinteger(v,2,&resource);
		sq_getfloat(v,3,&fps);
		Horde3DUtils::showFrameStats(resource,fps);
	}
	return 0;
}