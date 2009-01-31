#include "luaHorde3d.h"
#include "Horde3D.h"
#include "Horde3DUtils.h"

#include "lua.hpp"

#define ADD_CONSTANT(val, name) lua_pushnumber(L,val); \
                          lua_setfield(L, -2, name);

void addEngineOptionConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=EngineOptions::MaxLogLevel;
   ADD_CONSTANT(counter++, "MaxLogLevel");
   ADD_CONSTANT(counter++, "MaxNumMessages");
   ADD_CONSTANT(counter++, "TrilinearFiltering");
   ADD_CONSTANT(counter++, "AnisotropyFactor");
   ADD_CONSTANT(counter++, "TexCompression");
   ADD_CONSTANT(counter++, "LoadTextures");
   ADD_CONSTANT(counter++, "FastAnimation");
   ADD_CONSTANT(counter++, "ShadowMapSize");
   ADD_CONSTANT(counter++, "SampleCount");
   ADD_CONSTANT(counter++, "WireframeMode");
   ADD_CONSTANT(counter++, "DebugViewMode");
   lua_setglobal(L, "EngineOptions");
}

void addEngineStatConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=EngineStats::TriCount;
   ADD_CONSTANT(counter++, "TriCount");
   ADD_CONSTANT(counter++, "BatchCount");
   ADD_CONSTANT(counter++, "LightPassCount");
   lua_setglobal(L, "EngineStats");
}

void addResourceTypeConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=ResourceTypes::Undefined;
   ADD_CONSTANT(counter++, "Undefined");
   ADD_CONSTANT(counter++, "SceneGraph");
   ADD_CONSTANT(counter++, "Geometry");
   ADD_CONSTANT(counter++, "Animation");
   ADD_CONSTANT(counter++, "Material");
   ADD_CONSTANT(counter++, "Code");
   ADD_CONSTANT(counter++, "Shader");
   ADD_CONSTANT(counter++, "Texture2D");
   ADD_CONSTANT(counter++, "TextureCube");
   ADD_CONSTANT(counter++, "Effect");
   ADD_CONSTANT(counter++, "Pipeline");
   lua_setglobal(L, "ResourceTypes");
}

void addResourceFlagConstants(lua_State* L)
{
   lua_newtable(L);
   ADD_CONSTANT(ResourceFlags::NoQuery, "NoQuery");
   ADD_CONSTANT(ResourceFlags::NoTexPOTConversion, "NoTexPOTConversion");
   ADD_CONSTANT(ResourceFlags::NoTexCompression, "NoTexCompression");
   ADD_CONSTANT(ResourceFlags::NoTexMipmaps, "NoTexMipmaps");
   ADD_CONSTANT(ResourceFlags::NoTexFiltering, "NoTexFiltering");
   ADD_CONSTANT(ResourceFlags::NoTexRepeat,  "NoTexRepeat");
   lua_setglobal(L, "ResourceFlags");
}

void addGeometryResParamConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=GeometryResParams::VertexCount;
   ADD_CONSTANT(counter++, "VertexCount");
   ADD_CONSTANT(counter++, "IndexCount");
   ADD_CONSTANT(counter++, "VertexData");
   ADD_CONSTANT(counter++, "IndexData")
   lua_setglobal(L, "GeometryResParams");
}

void addAnimationResParamConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=AnimationResParams::FrameCount;
   ADD_CONSTANT(counter++, "FrameCount");
   lua_setglobal(L, "AnimationResParams");
}

void addMaterialResParamConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=MaterialResParams::Class;
   ADD_CONSTANT(counter++, "Class");
   ADD_CONSTANT(counter++, "Link");
   ADD_CONSTANT(counter++, "Shader");
   ADD_CONSTANT(counter++, "TexUnit_0");
   ADD_CONSTANT(counter++, "TexUnit_1");
   ADD_CONSTANT(counter++, "TexUnit_2");
   ADD_CONSTANT(counter++, "TexUnit_3");
   ADD_CONSTANT(counter++, "TexUnit_4");
   ADD_CONSTANT(counter++, "TexUnit_5");
   ADD_CONSTANT(counter++, "TexUnit_6");
   ADD_CONSTANT(counter++, "TexUnit_7");
   ADD_CONSTANT(counter++, "TexUnit_8");
   ADD_CONSTANT(counter++, "TexUnit_9");
   ADD_CONSTANT(counter++, "TexUnit_10");
   ADD_CONSTANT(counter++, "TexUnit_11");
   lua_setglobal(L, "MaterialResParams");
   
}

void addTextureResParamConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=TextureResParams::PixelData;
   ADD_CONSTANT(counter++, "PixelData");
   ADD_CONSTANT(counter++, "Width");
   ADD_CONSTANT(counter++, "Height");
   ADD_CONSTANT(counter++, "Comps");
   ADD_CONSTANT(counter++, "HDR");
   lua_setglobal(L, "TextureResParams");
}

void addEffectResParamConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=EffectResParams::LifeMin;
   ADD_CONSTANT(counter++, "LifeMin");
   ADD_CONSTANT(counter++, "LifeMax");
   ADD_CONSTANT(counter++, "MoveVelMin");
   ADD_CONSTANT(counter++, "MoveVelMax");
   ADD_CONSTANT(counter++, "RotVelMin");
   ADD_CONSTANT(counter++, "RotVelMax");
   ADD_CONSTANT(counter++, "RotVelEndRate");
   ADD_CONSTANT(counter++, "SizeMin");
   ADD_CONSTANT(counter++, "SizeMax");
   ADD_CONSTANT(counter++, "SizeEndRate");
   ADD_CONSTANT(counter++, "Col_R_Min");
   ADD_CONSTANT(counter++, "Col_R_Max");
   ADD_CONSTANT(counter++, "Col_R_EndRate");
   ADD_CONSTANT(counter++, "Col_G_Min");
   ADD_CONSTANT(counter++, "Col_G_Max");
   ADD_CONSTANT(counter++, "Col_G_EndRate");
   ADD_CONSTANT(counter++, "Col_B_Min");
   ADD_CONSTANT(counter++, "Col_B_Max");
   ADD_CONSTANT(counter++, "Col_B_EndRate");
   ADD_CONSTANT(counter++, "Col_A_Min");
   ADD_CONSTANT(counter++, "Col_A_Max");
   ADD_CONSTANT(counter++, "Col_A_EndRate");
   lua_setglobal(L, "EffectResParams");
}

void addSceneNodeTypeConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=SceneNodeTypes::Undefined;
   ADD_CONSTANT(counter++, "Undefined");
   ADD_CONSTANT(counter++, "Group");
   ADD_CONSTANT(counter++, "Model");
   ADD_CONSTANT(counter++, "Mesh");
   ADD_CONSTANT(counter++, "Joint");
   ADD_CONSTANT(counter++, "Light");
   ADD_CONSTANT(counter++, "Camera");
   ADD_CONSTANT(counter++, "Emitter");
   lua_setglobal(L, "SceneNodeTypes");
}

void addSceneNodeParamConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=SceneNodeParams::Name;
   ADD_CONSTANT(counter++, "Name");
   ADD_CONSTANT(counter++, "AttachmentString");
   lua_setglobal(L, "SceneNodeParams");
}

void addGroupNodeParamConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=GroupNodeParams::MinDist;
   ADD_CONSTANT(counter++, "MinDist");
   ADD_CONSTANT(counter++, "MaxDist");
   lua_setglobal(L, "GroupNodeParams");
}

void addModelNodeParamConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=ModelNodeParams::GeometryRes;
   ADD_CONSTANT(counter++, "GeometryRes");
   ADD_CONSTANT(counter++, "SoftwareSkinning");
   lua_setglobal(L, "ModelNodeParams");
}

void addMeshNodeParamConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=MeshNodeParams::MaterialRes;
   ADD_CONSTANT(counter++, "MaterialRes");
   ADD_CONSTANT(counter++, "BatchStart");
   ADD_CONSTANT(counter++, "BatchCount");
   ADD_CONSTANT(counter++, "VertRStart");
   ADD_CONSTANT(counter++, "VertREnd");
   lua_setglobal(L, "MeshNodeParams");
}


void addJointNodeParamConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=JointNodeParams::JointIndex;
   ADD_CONSTANT(counter++, "JointIndex");
   lua_setglobal(L, "JointNodeParams");
}

void addLightNodeParamConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=LightNodeParams::MaterialRes;
   ADD_CONSTANT(counter++, "MaterialRes");
   ADD_CONSTANT(counter++, "Radius");
   ADD_CONSTANT(counter++, "FOV");
   ADD_CONSTANT(counter++, "Col_R");
   ADD_CONSTANT(counter++, "Col_G");
   ADD_CONSTANT(counter++, "Col_B");
   ADD_CONSTANT(counter++, "ShadowMapCount");
   ADD_CONSTANT(counter++, "ShadowSplitLambda");
   ADD_CONSTANT(counter++, "ShadowMapBias");
   lua_setglobal(L, "LightNodeParams");
}

void addCameraNodeParamConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=CameraNodeParams::PipelineRes;
   ADD_CONSTANT(counter++, "PipelineRes");
   ADD_CONSTANT(counter++, "OutputTex");
   ADD_CONSTANT(counter++, "OutputBufferIndex");
   ADD_CONSTANT(counter++, "LeftPlane");
   ADD_CONSTANT(counter++, "RightPlane");
   ADD_CONSTANT(counter++, "BottomPlane");
   ADD_CONSTANT(counter++, "TopPlane");
   ADD_CONSTANT(counter++, "NearPlane");
   ADD_CONSTANT(counter++, "FarPlane");
   ADD_CONSTANT(counter++, "Orthographic");
   ADD_CONSTANT(counter++, "OcclusionCulling");
   lua_setglobal(L, "CameraNodeParams");
}

void addEmitterNodeParamConstants(lua_State* L)
{
   lua_newtable(L);
   int counter=EmitterNodeParams::MaterialRes;
   ADD_CONSTANT(counter++, "MaterialRes");
   ADD_CONSTANT(counter++, "EffectRes");
   ADD_CONSTANT(counter++, "MaxCount");
   ADD_CONSTANT(counter++, "RespawnCount");
   ADD_CONSTANT(counter++, "Delay");
   ADD_CONSTANT(counter++, "EmissionRate");
   ADD_CONSTANT(counter++, "SpreadAngle");
   ADD_CONSTANT(counter++, "ForceX");
   ADD_CONSTANT(counter++, "ForceY");
   ADD_CONSTANT(counter++, "ForceZ");
   lua_setglobal(L, "EmitterNodeParams");
}

static int lua_getVersionString(lua_State* L)
{
   lua_pushstring(L, Horde3D::getVersionString());
   return 1;
}

static int lua_checkExtension(lua_State* L)
{
   bool result=false;
   if(lua_gettop(L)!=1 || lua_isstring(L, 1)==false)
   {
      return 0;
   }

   const char* ext=lua_tostring(L, 1);
   lua_pop(L, 1);

   result=Horde3D::checkExtension(ext);
   lua_pushboolean(L, result);
   return 1;
}

static int lua_init(lua_State* L)
{
   bool result=Horde3D::init();
   lua_pushboolean(L, result);
   return 1;
}

static int lua_release(lua_State* L)
{
   Horde3D::release();
   return 0;
}

static int lua_setupViewport(lua_State* L)
{
   int x,y,w,h;
   bool resizeBuffers;

   if(lua_gettop(L)!=5)
   {
      return 0;
   }

   x=lua_tonumber(L, 1);
   y=lua_tonumber(L, 2);
   w=lua_tonumber(L, 3);
   h=lua_tonumber(L, 4);
   resizeBuffers( lua_toboolean(L, 5);
   lua_pop(L, 5);

   Horde3D::setupViewport(x,y,w,h,resizeBuffers);

   return 0;
}

static int lua_render(lua_State* L)
{
   int cameraHandle;
   bool result;
   
   if(lua_gettop(L)!=1)
   {
      return 0;
   }
   
   cameraHandle=lua_tonumber(L,1);
   lua_pop(L, 1);

   result=Horde3D::render(cameraHandle);
   lua_pushboolean(L, result);
   return 1;
}

static int lua_clear(lua_State* L)
{
   Horde3D::clear();
   return 0;
}

static int lua_getMessage(lua_State* L)
{
   int level;
   float time;
   const char* message;

   message=Horde3D::getMessage(&level, &time);
   lua_pushstring(L,message);
   lua_pushnumber(L, level);
   lua_pushnumber(L, time);
   
   return 3;
}

static int lua_getOption(lua_State* L)
{
   float result;
   int param;
   
   if(lua_gettop(L)!=1)
   {
      return 0;
   }
   
   param=lua_tonumber(L, 1);
   lua_pop(L, 1);
   result=Horde3D::getOption((EngineOptions::List)param);

   lua_pushnumber(L, result);
   return 1;
}

static int lua_setOption(lua_State* L)
{
   bool result;
   int param;
   float value;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   param=lua_tonumber(L, 1);
   value=lua_tonumber(L, 2);
   lua_pop(L, 2);

   result=Horde3D::setOption((EngineOptions::List)param, value);

   lua_pushboolean(L, result);
   return 1;
}

static int lua_getStat(lua_State* L)
{
   float result;
   bool reset;
   int param;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   param=lua_tonumber(L, 1);
   reset=lua_toboolean(L, 2);
   lua_pop(L,2);

   result=Horde3D::getStat((EngineStats::List)param, reset);
   lua_pushnumber(L, result);
   return 1;
}

static int lua_showOverlay(lua_State* L)
{
   float xll, yll, ull, vll;
   float xlr, ylr, ulr, vlr;
   float xur, yur, uur, vur;
   float xul, yul, uul, vul;
   int layer;
   int materialres;

   if(lua_gettop(L)!=18)
   {
      return 0;
   }

   xll=lua_tonumber(L,1);
   yll=lua_tonumber(L,2);
   ull=lua_tonumber(L,3);
   vll=lua_tonumber(L,4);
   xlr=lua_tonumber(L,5);
   ylr=lua_tonumber(L,6);
   ulr=lua_tonumber(L,7);
   vlr=lua_tonumber(L,8);
   xur=lua_tonumber(L,9);
   yur=lua_tonumber(L,10);
   uur=lua_tonumber(L,11);
   vur=lua_tonumber(L,12);
   xul=lua_tonumber(L,13);
   yul=lua_tonumber(L,14);
   uul=lua_tonumber(L,15);
   vul=lua_tonumber(L,16);
   layer=lua_tonumber(L,17);
   materialres=lua_tonumber(L, 18);
   lua_pop(L, 18);

   Horde3D::showOverlay(xll, yll, ull, vll,
                        xlr, ylr, ulr, vlr,
                        xur, yur, uur, vur, 
                        xul, yul, uul, vul,
                        layer, materialres);

   return 0;
}

static int lua_clearOverlays(lua_State* L)
{
   Horde3D::clearOverlays();
   return 0;
}

static int lua_getResourceType(lua_State* L)
{
   int resource;
   ResourceTypes::List result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   resource=lua_tonumber(L, 1);
   lua_pop(L,1);

   result=Horde3D::getResourceType(resource);
   lua_pushnumber(L, result);

   return 1;
}

static int lua_getResourceName(lua_State* L)
{
   int resource;
   const char* result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   resource=lua_tonumber(L, 1);
   lua_pop(L,1);

   result=Horde3D::getResourceName(resource);
   lua_pushstring(L, result);

   return 1;
}

static int lua_findResource(lua_State* L)
{
   int type;
   const char* name;
   int result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   type=lua_tonumber(L, 1);
   name=lua_tostring(L, 2);
   lua_pop(L, 2);

   result=Horde3D::findResource(ResourceTypes::List(type), name);
   if(result==0)
   {
      return 0;
   }

   lua_pushnumber(L, result);
   return 1;
}

static int lua_addResource(lua_State* L)
{
   int type;
   const char* name;
   int flags;
   int result;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   type=lua_tonumber(L, 1);
   name=lua_tostring(L, 2);
   flags=lua_tonumber(L, 3);
   lua_pop(L, 3);

   result=Horde3D::addResource(ResourceTypes::List(type), name, flags);
   if(result==0)
   {
      return 0;
   }

   lua_pushnumber(L,result);
   return 1;
}

static int lua_cloneResource(lua_State* L)
{
   int originalHandle;
   const char* name;
   int result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   originalHandle=lua_tonumber(L, 1);
   name=lua_tostring(L, 2);
   lua_pop(L, 2);

   result=Horde3D::cloneResource(originalHandle, name);
   if(result==0)
   {
      return 0;
   }

   lua_pushnumber(L, result);
   return 1;
}

static int lua_removeResource(lua_State* L)
{
   int handle;
   int result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   lua_pop(L, 1);

   result=Horde3D::removeResource(handle);
   if(result==0)
   {
      return 0;
   }

   lua_pushnumber(L, result);
   return 1;
}

static int lua_isResourceLoaded(lua_State* L)
{
   int handle;
   bool result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   lua_pop(L, 1);

   result=Horde3D::isResourceLoaded(handle);

   lua_pushboolean(L, result);
   return 1;
}

static int lua_loadResource(lua_State* L)
{
   int handle;
   const char* data;
   int size;
   bool result;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   data=(const char*)lua_touserdata(L, 2);
   size=lua_tonumber(L, 3);
   lua_pop(L, 3);

   result=Horde3D::loadResource(handle, data, size);

   lua_pushboolean(L, result);
   return 1;
}

static int lua_unloadResource(lua_State* L)
{
   int handle;
   int result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   lua_pop(L, 1);

   result=Horde3D::unloadResource(handle);
   if(result==0)
   {
      return 0;
   }

   lua_pushboolean(L, result);
   return 1;
}

static int lua_getResourceParami(lua_State* L)
{
   int handle;
   int param;
   int result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   param=lua_tonumber(L, 2);
   lua_pop(L, 2);

   result=Horde3D::getResourceParami(handle, param);

   lua_pushnumber(L, result);
   return 1;
}

static int lua_setResourceParami(lua_State* L)
{
   int handle;
   int param;
   int value;
   bool result;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   param=lua_tonumber(L, 2);
   value=lua_tonumber(L, 3);
   lua_pop(L, 3);

   result=Horde3D::setResourceParami(handle, param, value);

   lua_pushboolean(L,result);
   return 1;
}

static int lua_getResourceParamf(lua_State* L)
{
   int handle;
   int param;
   float result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   param=lua_tonumber(L, 2);
   lua_pop(L, 2);

   result=Horde3D::getResourceParamf(handle, param);

   lua_pushnumber(L,result);
   return 1;
}

static int lua_setResourceParamf(lua_State* L)
{
   int handle;
   int param;
   float value;
   bool result;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   param=lua_tonumber(L, 2);
   value=lua_tonumber(L, 3);
   lua_pop(L, 3);

   result=Horde3D::setResourceParamf(handle, param, value);

   lua_pushboolean(L,result);
   return 1;
}

static int lua_getResourceParamStr(lua_State* L)
{
   int handle;
   int param;
   const char*  result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   param=lua_tonumber(L, 2);
   lua_pop(L, 2);

   result=Horde3D::getResourceParamstr(handle, param);

   lua_pushstring(L,result);
   return 1;
}

static int lua_setResourceParamStr(lua_State* L)
{
   int handle;
   int param;
   const char* value;
   bool result;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   param=lua_tonumber(L, 2);
   value=lua_tostring(L, 3);
   lua_pop(L, 2);

   result=Horde3D::setResourceParamstr(handle, param, value);

   lua_pushboolean(L,result);
   return 1;
}

static int lua_getResourceData(lua_State* L)
{
   int handle;
   int param;
   void* result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   param=lua_tonumber(L, 2);
   lua_pop(L, 2);

   result=(void*)Horde3D::getResourceData(handle, param);

   lua_pushlightuserdata(L, result);
   return 1;
}


static int lua_updateResourceData(lua_State* L)
{
   int handle;
   int param;
   void* data;
   int size;
   bool result;

   if(lua_gettop(L)!=4)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   param=lua_tonumber(L, 2);
   data=lua_touserdata(L, 3);
   size=lua_tonumber(L, 4);
   lua_pop(L, 4);

   result=Horde3D::updateResourceData(handle, param, data, size);

   lua_pushboolean(L, result);
   return 1;
}

static int lua_queryUnloadedResource(lua_State* L)
{
   int index;
   int handle;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   index=lua_tonumber(L, 1);

   handle=Horde3D::queryUnloadedResource(index);
   if(handle==0)
   {
      return 0;
   }

   lua_pushnumber(L, handle);
   return 1;
}

static int lua_releaseUnusedResources(lua_State* L)
{
   Horde3D::releaseUnusedResources();
   return 0;
}

static int lua_createTexture2d(lua_State* L)
{
   const char* name;
   int flags;
   int width;
   int height;
   bool renderable;
   int result;

   if(lua_gettop(L)!=5)
   {
      return 0;
   }

   name=lua_tostring(L,1);
   flags=lua_tonumber(L,2);
   width=lua_tonumber(L,3);
   height=lua_tonumber(L,4);
   renderable=lua_toboolean(L,5);
   lua_pop(L,5);

   result=Horde3D::createTexture2D(name, flags, width, height, renderable);
   if(result==0)
   {
      return 0;
   }

   lua_pushnumber(L, result);

   return 1;
}

static int lua_setShaderPreambles(lua_State* L)
{
   const char* vertPreamble;
   const char* fragPreamble;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   vertPreamble=lua_tostring(L, 1);
   fragPreamble=lua_tostring(L,2);
   lua_pop(L,2);

   Horde3D::setShaderPreambles(vertPreamble, fragPreamble);

   return 0;
}

static int lua_setMaterialUniform(lua_State* L)
{
   int handle;
   const char* name;
   float a,b,c,d;
   bool result;

   if(lua_gettop(L)!=6)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   name=lua_tostring(L, 2);
   a=lua_tonumber(L,3);
   b=lua_tonumber(L,4);
   c=lua_tonumber(L,5);
   d=lua_tonumber(L,6);
   lua_pop(L,6);

   result=Horde3D::setMaterialUniform(handle, name, a,b,c,d);
   lua_pushboolean(L, result);

   return 1;
}

static int lua_setPipelineStageActivation(lua_State* L)
{
   int handle;
   const char* name;
   bool enable;
   bool result;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   handle=lua_tonumber(L,1);
   name=lua_tostring(L,2);
   enable=lua_toboolean(L,3);
   lua_pop(L,3);

   result=Horde3D::setPipelineStageActivation(handle, name, enable);
   lua_pushboolean(L, result);   
   return 1;
}

static int lua_getPipelineRenderTargetData(lua_State* L)
{
   //still not implemented
   return 0;
}

static int lua_getNodeType(lua_State* L)
{
   int handle;
   int result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   lua_pop(L,1);

   result=Horde3D::getNodeType(handle);
   lua_pushnumber(L, result);

   return 1;
}

static int lua_getNodeParent(lua_State* L)
{
   int handle;
   int result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   lua_pop(L,1);

   result=Horde3D::getNodeParent(handle);
   lua_pushnumber(L, result);

   return 1;
}

static int lua_setNodeParent(lua_State* L)
{
   int handle;
   int parent;
   bool result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   parent=lua_tonumber(L, 2);
   lua_pop(L,2);

   result=Horde3D::setNodeParent(handle, parent);
   lua_pushboolean(L, result);

   return 1;
}

static int lua_getNodeChild(lua_State* L)
{
   int handle;
   int index;
   int result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   index=lua_tonumber(L, 2);
   lua_pop(L,2);

   result=Horde3D::getNodeChild(handle, index);
   lua_pushnumber(L, result);

   return 1;
}

static int lua_addNodes(lua_State* L)
{
   int parent;
   int sceneGraph;
   int result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   parent=lua_tonumber(L, 1);
   sceneGraph=lua_tonumber(L, 2);
   lua_pop(L,2);

   result=Horde3D::addNodes(parent, sceneGraph);
   if(result==0)
   {
      return 0;
   }

   lua_pushnumber(L, result);
   return 1;
}

static int lua_removeNode(lua_State* L)
{
   int handle;
   bool result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   lua_pop(L,1);

   result=Horde3D::removeNode(handle);
   lua_pushboolean(L, result);
   return 1;
}

static int lua_setNodeActivation(lua_State* L)
{
   int handle;
   bool active;
   bool result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   active=lua_toboolean(L, 2);
   lua_pop(L,2);

   result=Horde3D::setNodeActivation(handle, active);
   lua_pushboolean(L, result);
   return 1;
}

static int lua_checkNodeTransformFlag(lua_State* L)
{
   int handle;
   bool reset;
   bool result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   reset=lua_toboolean(L, 2);
   lua_pop(L,2);

   result=Horde3D::checkNodeTransformFlag(handle, reset);
   lua_pushboolean(L, result);
   return 1;
}

static int lua_getNodeTransmform(lua_State* L)
{
   int handle;
   float tx, ty, tz;
   float rx, ry, rz;
   float sx, sy, sz;
   bool result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   lua_pop(L,1);

   result=Horde3D::getNodeTransform(handle, &tx, &ty, &tz, 
                                            &rx, &ry, &rz, 
                                            &sx, &sy, &sz);
   if(result==false)
   {
      return 0;
   }

   lua_pushnumber(L, tx);
   lua_pushnumber(L, ty);
   lua_pushnumber(L, tz);
   lua_pushnumber(L, rx);
   lua_pushnumber(L, ry);
   lua_pushnumber(L, rz);
   lua_pushnumber(L, sx);
   lua_pushnumber(L, sy);
   lua_pushnumber(L, sz);
   return 9;
}

static int lua_setNodeTrasform(lua_State* L)
{
   int handle;
   float tx, ty, tz;
   float rx, ry, rz;
   float sx, sy, sz;
   bool result;

   if(lua_gettop(L)!=10)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   tx=lua_tonumber(L, 2);
   ty=lua_tonumber(L, 3);
   tz=lua_tonumber(L, 4);
   rx=lua_tonumber(L, 5);
   ry=lua_tonumber(L, 6);
   rz=lua_tonumber(L, 7);
   sx=lua_tonumber(L, 8);
   sy=lua_tonumber(L, 9);
   sz=lua_tonumber(L, 10);
   lua_pop(L,10);

   result=Horde3D::setNodeTransform(handle, tx, ty, tz, 
                                            rx, ry, rz, 
                                            sx, sy, sz);
   lua_pushboolean(L, result);
   return 1;
}

static int lua_getNodeTransformMatrices(lua_State* L)
{
	int node = luaL_checkint( L, 1 );
	const float *relMatrix = 0, *absMatrix;
	bool result = Horde3D::getNodeTransformMatrices( node, &relMatrix, &absMatrix );

	lua_pushboolean( L, result );
	lua_pushnumber( L, relMatrix[0] ); lua_pushnumber( L, relMatrix[1] ); lua_pushnumber( L, relMatrix[2] ); lua_pushnumber( L, relMatrix[3] );
	lua_pushnumber( L, relMatrix[4] ); lua_pushnumber( L, relMatrix[5] ); lua_pushnumber( L, relMatrix[6] ); lua_pushnumber( L, relMatrix[7] );
	lua_pushnumber( L, relMatrix[8] ); lua_pushnumber( L, relMatrix[9] ); lua_pushnumber( L, relMatrix[10] ); lua_pushnumber( L, relMatrix[11] );
	lua_pushnumber( L, relMatrix[12] ); lua_pushnumber( L, relMatrix[13] ); lua_pushnumber( L, relMatrix[14] ); lua_pushnumber( L, relMatrix[15] );

	lua_pushnumber( L, absMatrix[0] ); lua_pushnumber( L, absMatrix[1] ); lua_pushnumber( L, absMatrix[2] ); lua_pushnumber( L, absMatrix[3] );
	lua_pushnumber( L, absMatrix[4] ); lua_pushnumber( L, absMatrix[5] ); lua_pushnumber( L, absMatrix[6] ); lua_pushnumber( L, absMatrix[7] );
	lua_pushnumber( L, absMatrix[8] ); lua_pushnumber( L, absMatrix[9] ); lua_pushnumber( L, absMatrix[10] ); lua_pushnumber( L, absMatrix[11] );
	lua_pushnumber( L, absMatrix[12] ); lua_pushnumber( L, absMatrix[13] ); lua_pushnumber( L, absMatrix[14] ); lua_pushnumber( L, absMatrix[15] );

	return 33;			
}

static int lua_setNodeTransformMatrix(lua_State* L)
{
   int node;
   float matrix[16];
   bool result;

   if(lua_gettop(L)!=17)
   {
      return 0;
   }

   node=lua_tonumber(L,1);
   matrix[0]=lua_tonumber(L,2);
   matrix[1]=lua_tonumber(L,3);
   matrix[2]=lua_tonumber(L,4);
   matrix[3]=lua_tonumber(L,5);
   matrix[4]=lua_tonumber(L,6);
   matrix[5]=lua_tonumber(L,7);
   matrix[6]=lua_tonumber(L,8);
   matrix[7]=lua_tonumber(L,9);
   matrix[8]=lua_tonumber(L,10);
   matrix[9]=lua_tonumber(L,11);
   matrix[10]=lua_tonumber(L,12);
   matrix[11]=lua_tonumber(L,13);
   matrix[12]=lua_tonumber(L,14);
   matrix[13]=lua_tonumber(L,15);
   matrix[14]=lua_tonumber(L,16);
   matrix[15]=lua_tonumber(L,17);
   lua_pop(L, 17);

   result=Horde3D::setNodeTransformMatrix(node, matrix);

   lua_pushboolean(L, result);
   return 1;
}

static int lua_getNodeParamf(lua_State* L)
{
   int handle;
   int param;
   float result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   param=lua_tonumber(L, 2);
   lua_pop(L,2);

   result=Horde3D::getNodeParamf(handle, param);

   lua_pushnumber(L, result);
   return 1;
}

static int lua_setNodeParamf(lua_State* L)
{
   int handle;
   int param;
   float value;
   bool result;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   param=lua_tonumber(L, 2);
   value=lua_tonumber(L, 3);
   lua_pop(L,3);

   result=Horde3D::setNodeParamf(handle, param, value);

   lua_pushboolean(L, result);
   return 1;
}

static int lua_getNodeParami(lua_State* L)
{
   int handle;
   int param;
   int result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   param=lua_tonumber(L, 2);
   lua_pop(L,2);

   result=Horde3D::getNodeParami(handle, param);

   lua_pushnumber(L, result);
   return 1;
}

static int lua_setNodeParami(lua_State* L)
{
   int handle;
   int param;
   int value;
   bool result;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   param=lua_tonumber(L, 2);
   value=lua_tonumber(L, 3);
   lua_pop(L,3);

   result=Horde3D::setNodeParami(handle, param, value);

   lua_pushboolean(L, result);
   return 1;
}

static int lua_getNodeParamStr(lua_State* L)
{
   int handle;
   int param;
   const char* result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   param=lua_tonumber(L, 2);
   lua_pop(L,2);

   result=Horde3D::getNodeParamstr(handle, param);

   lua_pushstring(L, result);
   return 1;
}

static int lua_setNodeParamStr(lua_State* L)
{
   int handle;
   int param;
   const char* value;
   bool result;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   param=lua_tonumber(L, 2);
   value=lua_tostring(L, 3);
   lua_pop(L,3);

   result=Horde3D::setNodeParamstr(handle, param, value);

   lua_pushboolean(L, result);
   return 1;
}

static int lua_getNodeAABB(lua_State* L)
{
   int node;
   float minX, minY, minZ;
   float maxX, maxY, maxZ;
   bool result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   node=lua_tonumber(L, 1);
   lua_pop(L, 1);

   result=Horde3D::getNodeAABB(node, &minX, &minY, &minZ, &maxX, &maxY, &maxZ);
   
   if(result==false)
   {
      return 0;
   }

   lua_pushnumber(L, minX);
   lua_pushnumber(L, minY);
   lua_pushnumber(L, minZ);
   lua_pushnumber(L, maxX);
   lua_pushnumber(L, maxY);
   lua_pushnumber(L, maxZ);

   return 6;
}

static int lua_findNodes(lua_State* L)
{
   int handle;
   const char* name;
   int type;
   int result;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   handle=lua_tonumber(L, 1);
   name=lua_tostring(L, 2);
   type=lua_tonumber(L, 3);
   lua_pop(L,3);

   result=Horde3D::findNodes(handle, name, type);

   if(result==0)
   {
      return 0;
   }

   lua_pushnumber(L, result);
   return 1;
}

static int lua_getNodeFindResult(lua_State* L)
{
   int index;
   int result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   index=lua_tonumber(L, 1);
   lua_pop(L,1);

   result=Horde3D::getNodeFindResult(index);
  
   if(result==0)
   {
      return 0;
   }

   lua_pushnumber(L, result);
   return 1;
}

static int lua_castRay(lua_State* L)
{
   int node;
   float ox, oy, oz;
   float dx, dy, dz;
   int numNearest;
   int result;

   if(lua_gettop(L)!=8)
   {
      return 0;
   }

   node=lua_tonumber(L, 1);
   ox=lua_tonumber(L, 2);
   oy=lua_tonumber(L, 3);
   oz=lua_tonumber(L, 4);
   dx=lua_tonumber(L, 5);
   dy=lua_tonumber(L, 6);
   dz=lua_tonumber(L, 7);
   numNearest=lua_tonumber(L,8);
   lua_pop(L, 8);

   result=Horde3D::castRay(node, ox, oy, oz, dx, dy, dz, numNearest);

   if(result==0)
   {
      return 0;
   }

   lua_pushnumber(L, result);
   return 1;
}

static int lua_getCastRayResult(lua_State* L)
{
   int index;
   int handle;
   float distance;
   float intersection[3];
   bool result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   index=lua_tonumber(L, 1);
   lua_pop(L,1);

   result=Horde3D::getCastRayResult(index, &handle, &distance, intersection);
   if(result==false)
   {
      return 0;
   }
   
   lua_pushnumber(L, handle);
   lua_pushnumber(L, distance);
   lua_pushnumber(L, intersection[0]);
   lua_pushnumber(L, intersection[1]);
   lua_pushnumber(L, intersection[2]);

   return 5;
}

static int lua_addGroupNode(lua_State* L)
{
   int parent;
   const char* name;
   int result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   parent=lua_tonumber(L,1);
   name=lua_tostring(L,2);
   lua_pop(L,2);

   result=Horde3D::addGroupNode(parent, name);
   if(result==0)
   {
      return 0;
   }
   lua_pushnumber(L, result);
   return 1;
}

static int lua_addModelNode(lua_State* L)
{
   int parent;
   const char* name;
   int geometryHandle;
   int result;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   parent=lua_tonumber(L,1);
   name=lua_tostring(L,2);
   geometryHandle=lua_tonumber(L, 3);
   lua_pop(L,3);

   result=Horde3D::addModelNode(parent, name, geometryHandle);
   if(result==0)
   {
      return 0;
   }
   lua_pushnumber(L, result);
   return 1;
}

static int lua_setupModelAnimStage(lua_State* L)
{
   int modelHandle;
   int stage;
   int animationHandle;
   const char* startNode;
   bool additive;
   bool result;

   if(lua_gettop(L)!=5)
   {
      return 0;
   }

   modelHandle=lua_tonumber(L, 1);
   stage=lua_tonumber(L, 2);
   animationHandle=lua_tonumber(L, 3);
   startNode=lua_tostring(L,4);
   additive=lua_toboolean(L, 5);
   lua_pop(L, 5);

   result=Horde3D::setupModelAnimStage(modelHandle, stage, animationHandle, startNode, additive);
   lua_pushboolean(L, result);
   return 1;
}

static int lua_setModelAnimParams(lua_State* L)
{
   int modelHandle;
   int stage;
   float time;
   float weight;
   bool result;

   if(lua_gettop(L)!=4)
   {
      return 0;
   }

   modelHandle=lua_tonumber(L, 1);
   stage=lua_tonumber(L, 2);
   time=lua_tonumber(L, 3);
   weight=lua_tonumber(L,4);
   lua_pop(L, 4);

   result=Horde3D::setModelAnimParams(modelHandle, stage, time, weight);
   lua_pushboolean(L, result);
   return 1;
}

static int lua_setModelMorpher(lua_State* L)
{
   int modelHandle;
   const char* target;
   float weight;
   bool result;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   modelHandle=lua_tonumber(L, 1);
   target=lua_tostring(L, 2);
   weight=lua_tonumber(L, 3);
   lua_pop(L, 5);

   result=Horde3D::setModelMorpher(modelHandle, target, weight);
   lua_pushboolean(L, result);
   return 1;
}

static int lua_addMeshNode(lua_State* L)
{
   int parent;
   const char* name;
   int materialHandle;
   int batchStart;
   int batchCount;
   int vertRStart;
   int vertREnd;
   int result;

   if(lua_gettop(L)!=7)
   {
      return 0;
   }

   parent=lua_tonumber(L, 1);
   name=lua_tostring(L, 2);
   materialHandle=lua_tonumber(L, 3);
   batchStart=lua_tonumber(L,4);
   batchCount=lua_tonumber(L, 5);
   vertRStart=lua_tonumber(L, 6);
   vertREnd=lua_tonumber(L, 7);
   lua_pop(L, 7);

   result=Horde3D::addMeshNode(parent, name, materialHandle, batchStart, batchCount, vertRStart, vertREnd);
   lua_pushboolean(L, result);
   return 1;
}

static int lua_addJointNode(lua_State* L)
{
   int parent;
   const char* name;
   int index;
   int result;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   parent=lua_tonumber(L,1);
   name=lua_tostring(L,2);
   index=lua_tonumber(L, 3);
   lua_pop(L,3);

   result=Horde3D::addJointNode(parent, name, index);
   if(result==0)
   {
      return 0;
   }
   lua_pushnumber(L, result);
   return 1;
}

static int lua_addLightNode(lua_State* L)
{
   int parent;
   const char* name;
   int materialHandle;
   const char* lightContext;
   const char* shadowContext;

   int result;

   if(lua_gettop(L)!=5)
   {
      return 0;
   }

   parent=lua_tonumber(L,1);
   name=lua_tostring(L,2);
   materialHandle=lua_tonumber(L, 3);
   lightContext=lua_tostring(L, 4);
   shadowContext=lua_tostring(L, 5);
   lua_pop(L,5);

   result=Horde3D::addLightNode(parent, name, materialHandle, lightContext, shadowContext);
   if(result==0)
   {
      return 0;
   }
   lua_pushnumber(L, result);
   return 1;
}

static int lua_setLightContexts(lua_State* L)
{
   int lightNode;
   const char* lightContext;
   const char* shadowContext;

   int result;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   lightNode=lua_tonumber(L, 1);
   lightContext=lua_tostring(L, 2);
   shadowContext=lua_tostring(L, 3);
   lua_pop(L,3);

   result=Horde3D::setLightContexts(lightNode, lightContext, shadowContext);
   
   lua_pushboolean(L, result);
   return 1;
}

static int lua_addCameraNode(lua_State* L)
{
   int parent;
   const char* name;
   int pipelineHandle;
   int result;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   parent=lua_tonumber(L,1);
   name=lua_tostring(L,2);
   pipelineHandle=lua_tonumber(L, 3);
   lua_pop(L,3);

   result=Horde3D::addCameraNode(parent, name, pipelineHandle);
   if(result==0)
   {
      return 0;
   }
   lua_pushnumber(L, result);
   return 1;
}

static int lua_setupCameraView(lua_State* L)
{
   int camera;
   float fov;
   float aspect;
   float nearDist;
   float farDist;
   bool result;

   if(lua_gettop(L)!=5)
   {
      return 0;
   }

   camera=lua_tonumber(L,1);
   fov=lua_tonumber(L,2);
   aspect=lua_tonumber(L,3);
   nearDist=lua_tonumber(L,4);
   farDist=lua_tonumber(L,5);
   lua_pop(L,5);

   result=Horde3D::setupCameraView(camera, fov, aspect, nearDist, farDist);
   lua_pushboolean(L, result);
   return 1;
}

static int lua_getCameraProjectionMatrix(lua_State* L)
{
   int camera;
   float matrix[16];
   bool result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   camera=lua_tonumber(L, 1);
   lua_pop(L, 1);

   result=Horde3D::getCameraProjectionMatrix(camera, matrix);

   if(result==false)
   {
      return 0;
   }

   lua_pushnumber(L,matrix[0]);
   lua_pushnumber(L,matrix[1]);
   lua_pushnumber(L,matrix[2]);
   lua_pushnumber(L,matrix[3]);
   lua_pushnumber(L,matrix[4]);
   lua_pushnumber(L,matrix[5]);
   lua_pushnumber(L,matrix[6]);
   lua_pushnumber(L,matrix[7]);
   lua_pushnumber(L,matrix[8]);
   lua_pushnumber(L,matrix[9]);
   lua_pushnumber(L,matrix[10]);
   lua_pushnumber(L,matrix[11]);
   lua_pushnumber(L,matrix[12]);
   lua_pushnumber(L,matrix[13]);
   lua_pushnumber(L,matrix[14]);
   lua_pushnumber(L,matrix[15]);

   return 16;
}

static int lua_addEmitterNode(lua_State* L)
{
   int parent;
   const char* name;
   int materialHandle;
   int effectHandle;
   int maxParticleCount;
   int respawnCount;
   int result;

   if(lua_gettop(L)!=6)
   {
      return 0;
   }

   parent=lua_tonumber(L,1);
   name=lua_tostring(L,2);
   materialHandle=lua_tonumber(L,3);
   effectHandle=lua_tonumber(L,4);
   maxParticleCount=lua_tonumber(L,5);
   respawnCount=lua_tonumber(L,6);
   lua_pop(L,6);

   result=Horde3D::addEmitterNode(parent, name, materialHandle, 
                 effectHandle, maxParticleCount, respawnCount);
   if(result==0)
   {
      return 0;
   }

   lua_pushnumber(L, result);
   return 1;
}

static int lua_advanceEmitterTime(lua_State* L)
{
   int emitter;
   float time;
   bool result;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   emitter=lua_tonumber(L,1);
   time=lua_tonumber(L,2);
   lua_pop(L,2);

   result=Horde3D::advanceEmitterTime(emitter, time);
   lua_pushboolean(L, result);
   return 1;
}

static int lua_hasEmmiterFinished(lua_State* L)
{
   int handle;
   bool result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

  handle=lua_tonumber(L,1);
  lua_pop(L, 1);

  result=Horde3D::hasEmitterFinished(handle);
  lua_pushboolean(L, result);
  return 1;
}

//--------------------------HORDE 3D Util Functions------------------------
static int lua_freeMem(lua_State* L)
{
   char* mem;
      

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   mem=(char*)lua_touserdata(L,1);
   lua_pop(L, 1);

   Horde3DUtils::freeMem(&mem);

   return 0;
}

static int lua_dumpMessages(lua_State* L)
{
   bool result=Horde3DUtils::dumpMessages();
   lua_pushboolean(L,result);
   return 1;
}

static int lua_initOpenGL(lua_State* L)
{
   int hdc;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   hdc=lua_tonumber(L,1);
   lua_pop(L, 1);

   bool result=Horde3DUtils::initOpenGL(hdc);
   lua_pushboolean(L,result);

   return 1;
}

static int lua_releaseOpenGL(lua_State* L)
{
   Horde3DUtils::releaseOpenGL();
   return 0;
}

static int lua_swapBuffers(lua_State* L)
{
   Horde3DUtils::swapBuffers();
   return 0;
}

static int lua_getResourcePath(lua_State* L)
{
   int type;
   const char* result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }
   
   type=lua_tonumber(L, 1);
   lua_pop(L,1);

   result=Horde3DUtils::getResourcePath(type);
   lua_pushstring(L, result);

   return 1;
}

static int lua_setResourcePath(lua_State* L)
{
   int type;
   const char* path;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   type=lua_tonumber(L, 1);
   path=lua_tostring(L, 2);
   lua_pop(L,2);

   Horde3DUtils::setResourcePath(type, path);

   return 0;

}
static int lua_loadResourcesFromDisk(lua_State* L)
{
   const char* path;
   bool result;

   if(lua_gettop(L)!=1)
   {
      return 0;
   }

   path=lua_tostring(L, 1);
   lua_pop(L,1);

   result=Horde3DUtils::loadResourcesFromDisk(path);
   lua_pushboolean(L, result);

   return 1;
}

static int lua_createTGAImage(lua_State* L)
{
   //still not implemented
   return 0;
}

static int lua_pickRay(lua_State* L)
{
   int camera;
   float nwx, nwy;
   float ox, oy, oz;
   float dx, dy, dz;
 
   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   camera=lua_tonumber(L, 1);
   nwx=lua_tonumber(L, 2);
   nwy=lua_tonumber(L,3);
   lua_pop(L,3);

   Horde3DUtils::pickRay(camera, nwx, nwy, &ox, &oy, &oz, &dx, &dy, &dz);

   lua_pushnumber(L, ox);
   lua_pushnumber(L, oy);
   lua_pushnumber(L, oz);
   lua_pushnumber(L, dx);
   lua_pushnumber(L, dy);
   lua_pushnumber(L, dz);
   return 6;
}

static int lua_pickNode(lua_State* L)
{
   int camera;
   float nwx, nwy;
   int handle;

   if(lua_gettop(L)!=3)
   {
      return 0;
   }

   camera=lua_tonumber(L, 1);
   nwx=lua_tonumber(L, 2);
   nwy=lua_tonumber(L,3);
   lua_pop(L,3);

   handle=Horde3DUtils::pickNode(camera, nwx, nwy);
   if(handle==0)
   {
      return 0;
   }

   lua_pushnumber(L, handle);
   return 1;
}

static int lua_showText(lua_State* L)
{
   const char* text;
   float x, y;
   float size;
   int layer;
   int fontHandle;

   if(lua_gettop(L)!=6)
   {
      return 0;
   }

   text=lua_tostring(L, 1);
   x=lua_tonumber(L, 2);
   y=lua_tonumber(L,3);
   size=lua_tonumber(L,4);
   layer=lua_tonumber(L,5);
   fontHandle=lua_tonumber(L,6);
   lua_pop(L,6);

   Horde3DUtils::showText(text, x, y, size, layer, fontHandle);

   return 0;
}

static int lua_showFrameStats(lua_State* L)
{
   int fontHandle;
   float curFPS;

   if(lua_gettop(L)!=2)
   {
      return 0;
   }

   fontHandle=lua_tonumber(L,1);
   curFPS=lua_tonumber(L,2);
   lua_pop(L,2);

   Horde3DUtils::showFrameStats(fontHandle, curFPS);

   return 0;
}

//-------------------------------------------------------
static const struct luaL_Reg horde3dLib [] =
{
   {"getVersionString", lua_getVersionString},
   {"checkExtension", lua_checkExtension},
   {"init", lua_init},
   {"release", lua_release},
   {"setupViewport", lua_setupViewport},
   {"render", lua_render},
   {"clear", lua_clear},
   {"getMesasge", lua_getMessage},
   {"getOption", lua_getOption},
   {"setOption", lua_setOption},
   {"getStat", lua_getStat},
   {"showOverlay", lua_showOverlay},
   {"clearOverlays", lua_clearOverlays},
   {"getResourceType", lua_getResourceType},
   {"getResourceName", lua_getResourceName},
   {"findResource", lua_findResource},
   {"addResource", lua_addResource},
   {"cloneResource", lua_cloneResource},
   {"removeResource", lua_removeResource},
   {"isResourceLoaded", lua_isResourceLoaded},
   {"loadResource", lua_loadResource},
   {"unloadResource", lua_unloadResource},
   {"getResourceParami", lua_getResourceParami},
   {"setResourceParami", lua_setResourceParami},
   {"getResourceParamf", lua_getResourceParamf},
   {"setResourceParamf", lua_setResourceParamf},
   {"getResourceParamStr", lua_getResourceParamStr},
   {"setResourceParamStr", lua_setResourceParamStr},
   {"getResourceData", lua_getResourceData},
   {"updateResourceData", lua_updateResourceData},
   {"queryUnloadedResource", lua_queryUnloadedResource},
   {"releaseUnusedResources", lua_releaseUnusedResources},
   {"createTexture2d", lua_createTexture2d},
   {"setShaderPreambles", lua_setShaderPreambles},
   {"setMaterialUniform", lua_setMaterialUniform},
   {"setPipelineStageActivation", lua_setPipelineStageActivation},
   {"getPipelineRenderTargetData", lua_getPipelineRenderTargetData},
   {"getNodeType", lua_getNodeType},
   {"getNodeParent", lua_getNodeParent},
   {"setNodeParent", lua_setNodeParent},
   {"getNodeChild", lua_getNodeChild},
   {"addNodes", lua_addNodes},
   {"removeNode", lua_removeNode},
   {"setNodeActivation", lua_setNodeActivation},
   {"checkNodeTransformFlag", lua_checkNodeTransformFlag},
   {"getNodeTransform", lua_getNodeTransmform},
   {"setNodeTransform", lua_setNodeTrasform},
   {"getNodeTransformMatrices", lua_getNodeTransformMatrices},
   {"setNodeTransformMatrix", lua_setNodeTransformMatrix},
   {"getNodeParamf", lua_getNodeParamf},
   {"setNodeParamf", lua_setNodeParamf},
   {"getNodeParami", lua_getNodeParami},
   {"setNodeParami", lua_setNodeParami},
   {"getNodeParamStr", lua_getNodeParamStr},
   {"setNodeParamStr", lua_setNodeParamStr},
   {"getNodeAABB", lua_getNodeAABB},
   {"findNodes", lua_findNodes},
   {"getNodeFindResult", lua_getNodeFindResult},
   {"castRay", lua_castRay},
   {"getCastResult", lua_getCastRayResult},
   {"addGroupNode", lua_addGroupNode},
   {"addModelNode", lua_addModelNode},
   {"setupModelAnimStage", lua_setupModelAnimStage},
   {"setModelAnimParams", lua_setModelAnimParams},
   {"setModelMorpher", lua_setModelMorpher},
   {"addMeshNode", lua_addMeshNode},
   {"addJoinNode", lua_addJointNode},
   {"addLightNode", lua_addLightNode},
   {"setLightContexts", lua_setLightContexts},
   {"addCameraNode", lua_addCameraNode},
   {"setupCameraView", lua_setupCameraView},
   {"getCameraProjectionMatrix", lua_getCameraProjectionMatrix},
   {"addEmitterNode", lua_addEmitterNode},
   {"advanceEmitterTime", lua_advanceEmitterTime},
   {"hasEmitterFinished", lua_hasEmmiterFinished},

   {NULL, NULL} //sentinel
};

static const struct luaL_Reg horde3dUtilLib [] =
{
   //Horde 3D utility 
   {"freeMem", lua_freeMem},
   {"dumpMessages", lua_dumpMessages},
   {"initOpenGL", lua_initOpenGL},
   {"releaseOpenGL", lua_releaseOpenGL},
   {"swapBuffers", lua_swapBuffers},
   {"getResourcePath", lua_getResourcePath},
   {"setResourcePath", lua_setResourcePath},
   {"loadResourcesFromDisk", lua_loadResourcesFromDisk},
   {"createTGAImage", lua_createTGAImage},
   {"pickNode", lua_pickNode},
   {"pickRay", lua_pickRay},
   {"showText", lua_showText},
   {"showFrameStats", lua_showFrameStats},

   {NULL, NULL} //sentinel
};

int luaopen_Horde3d(lua_State* L)
{
   //create the library table
   luaL_register(L, "Horde3d", horde3dLib);
   lua_pushnumber(L, 1);
   lua_setfield(L, -2, "RootNode");
   lua_pop(L,1);

   //create the utility table
   luaL_register(L, "Horde3dUtils", horde3dUtilLib);
   lua_pop(L,1);

   //create the enums tables
   addEngineOptionConstants(L);
   addEngineStatConstants(L);
   addResourceTypeConstants(L);
   addResourceFlagConstants(L);
   addGeometryResParamConstants(L);
   addAnimationResParamConstants(L);
   addMaterialResParamConstants(L);
   addTextureResParamConstants(L);
   addEffectResParamConstants(L);
   addSceneNodeTypeConstants(L);
   addSceneNodeParamConstants(L);
   addGroupNodeParamConstants(L);
   addModelNodeParamConstants(L);
   addMeshNodeParamConstants(L);
   addJointNodeParamConstants(L);
   addLightNodeParamConstants(L);
   addCameraNodeParamConstants(L);
   addEmitterNodeParamConstants(L);

   return 0;
}

