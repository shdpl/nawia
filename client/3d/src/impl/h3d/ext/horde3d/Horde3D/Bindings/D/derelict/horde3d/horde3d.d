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


module derelict.horde3d.horde3d;



private import derelict.util.loader;



typedef int ResHandle;
typedef int NodeHandle;


const  NodeHandle RootNode = 1;


enum EngineOptions
{
	MaxLogLevel = 1,
	MaxNumMessages,
	TrilinearFiltering,
	AnisotropyFactor,
	TexCompression,
	LoadTextures,
	FastAnimation,
	ShadowMapSize,
	SampleCount,
	WireframeMode,
	DebugViewMode
}


enum EngineStats
{
	TriCount = 100,
	BatchCount,
	LightPassCount
}


enum ResourceTypes
{
	Undefined = 0,
	SceneGraph,
	Geometry,
	Animation,
	Material,
	Code,
	Shader,
	Texture2D,
	TextureCube,
	Effect,
	Pipeline
}


enum ResourceFlags
{
	NoQuery = 1,
	NoTexPOTConversion = 2,
	NoTexCompression = 4,
	NoTexMipmaps = 8,
	NoTexFiltering = 16,
	NoTexRepeat = 32
}


enum GeometryResParams
{
	VertexCount = 200,
	IndexCount,
	VertexData,
	IndexData
}


enum AnimationResParams
{
	FrameCount = 300
}


enum MaterialResParams
{
	Class = 400,
	Link,
	Shader,
	TexUnit_0,
	TexUnit_1,
	TexUnit_2,
	TexUnit_3,
	TexUnit_4,
	TexUnit_5,
	TexUnit_6,
	TexUnit_7,
	TexUnit_8,
	TexUnit_9,
	TexUnit_10,
	TexUnit_11
}


enum TextureResParams
{
	PixelData = 700,
	Width,
	Height,
	Comps,
	HDR
}


enum EffectResParams
{
	LifeMin = 900,
	LifeMax,
	MoveVelMin,
	MoveVelMax,
	MoveVelEndRate,
	RotVelMin,
	RotVelMax,
	RotVelEndRate,
	SizeMin,
	SizeMax,
	SizeEndRate,
	Col_R_Min,
	Col_R_Max,
	Col_R_EndRate,
	Col_G_Min,
	Col_G_Max,
	Col_G_EndRate,
	Col_B_Min,
	Col_B_Max,
	Col_B_EndRate,
	Col_A_Min,
	Col_A_Max,
	Col_A_EndRate
}


enum SceneNodeTypes
{
	Undefined = 0,
	Group,
	Model,
	Mesh,
	Joint,
	Light,
	Camera,
	Emitter
}


enum SceneNodeParams
{
	Name = 1,
	AttachmentString
}


enum GroupNodeParams
{
	MinDist = 100,
	MaxDist
}


enum ModelNodeParams
{
	GeometryRes = 200,
	SoftwareSkinning
}


enum MeshNodeParams
{
	MaterialRes = 300,
	BatchStart,
	BatchCount,
	VertRStart,
	VertREnd
}


enum JointNodeParams
{
	JointIndex = 400
}


enum LightNodeParams
{
	MaterialRes = 500,
	Radius,
	FOV,
	Col_R,
	Col_G,
	Col_B,
	ShadowMapCount,
	ShadowSplitLambda,
	ShadowMapBias
}


enum CameraNodeParams
{
	PipelineRes = 600,
	OutputTex,
	OutputBufferIndex,
	LeftPlane,
	RightPlane,
	BottomPlane,
	TopPlane,
	NearPlane,
	FarPlane,
	Orthographic,
	OcclusionCulling
}


enum EmitterNodeParams
{
	MaterialRes = 700,
	EffectRes,
	MaxCount,
	RespawnCount,
	Delay,
	EmissionRate,
	SpreadAngle,
	ForceX,
	ForceY,
	ForceZ
}




extern (C)
{
	 typedef char * function() pfgetVersionString;
	 typedef bool function(char *extensionName) pfcheckExtension;
	 typedef bool function() pfinit;
	 typedef void function() pfrelease;
	 typedef void function(int x, int y, int width, int height) pfresize;
	 typedef bool function(NodeHandle cameraNode) pfrender;
	 typedef void function() pfclear;
	 typedef char * function(int *level, float *time) pfgetMessage;
	 typedef float function(EngineOptions param) pfgetOption;
	 typedef bool function(EngineOptions param, float value) pfsetOption;
	 typedef float function(EngineStats param, bool reset) pfgetStat;
	 typedef void function(float x_ll, float y_ll, float u_ll, float v_ll,
						  float x_lr, float y_lr, float u_lr, float v_lr,
						  float x_ur, float y_ur, float u_ur, float v_ur,
						  float x_ul, float y_ul, float u_ul, float v_ul,
						  int layer, ResHandle materialRes) pfshowOverlay;
	 typedef void function() pfclearOverlays;
	 typedef ResourceTypes function(ResHandle res) pfgetResourceType;
	 typedef char * function(ResHandle res) pfgetResourceName;
	 typedef ResHandle function(ResourceTypes type,  char *name) pffindResource;
	 typedef ResHandle function(ResourceTypes type,  char *name, int flags) pfaddResource;
	 typedef ResHandle function(ResHandle sourceRes,  char *name) pfcloneResource;
	 typedef int function(ResHandle res) pfremoveResource;
	 typedef bool function(ResHandle res) pfisResourceLoaded;
	 typedef bool function(ResHandle res,  char *data, int size) pfloadResource;
	 typedef bool function(ResHandle res) pfunloadResource;
	 typedef int function(ResHandle res, int param) pfgetResourceParami;
	 typedef bool function(ResHandle res, int param, int value) pfsetResourceParami;
	 typedef float function(ResHandle res, int param) pfgetResourceParamf;
	 typedef bool function(ResHandle res, int param, float value) pfsetResourceParamf;
	 typedef char * function(ResHandle res, int param) pfgetResourceParamstr;
	 typedef bool function(ResHandle res, int param,  char *value) pfsetResourceParamstr;
	 typedef void * function(ResHandle res, int param) pfgetResourceData;
	 typedef bool function(ResHandle res, int param,  void *data, int size) pfupdateResourceData;
	 typedef ResHandle function(int index) pfqueryUnloadedResource;
	 typedef void function() pfreleaseUnusedResources;
	 typedef ResHandle function(char *name, int flags, int width, int height, bool renderable) pfcreateTexture2D;
	 typedef void function(char *vertPreamble,  char *fragPreamble) pfsetShaderPreambles;
	 typedef bool function(ResHandle materialRes,  char *name, float a, float b, float c, float d) pfsetMaterialUniform;
	 typedef bool function(ResHandle pipelineRes,  char *stageName, bool enabled) pfsetPipelineStageActivation;
	 typedef bool function(ResHandle pipelineRes,  char *targetName,
										  int bufIndex, int *width, int *height, int *compCount,
										  float *dataBuffer, int bufferSize) pfgetPipelineRenderTargetData;
	 typedef int function(NodeHandle node) pfgetNodeType;
	 typedef NodeHandle function(NodeHandle node) pfgetNodeParent;
	 typedef bool function(NodeHandle node, NodeHandle parent) pfsetNodeParent;
	 typedef NodeHandle function(NodeHandle node, int index) pfgetNodeChild;
	 typedef NodeHandle function(NodeHandle parent, ResHandle sceneGraphRes) pfaddNodes;
	 typedef bool function(NodeHandle node) pfremoveNode;
	 typedef bool function(NodeHandle node, bool active) pfsetNodeActivation;
	 typedef bool function(NodeHandle node, bool reset) pfcheckNodeTransformFlag;
	 typedef bool function(NodeHandle node, float *tx, float *ty, float *tz,
							   float *rx, float *ry, float *rz, float *sx, float *sy, float *sz) pfgetNodeTransform;
	 typedef bool function(NodeHandle node, float tx, float ty, float tz,
							   float rx, float ry, float rz, float sx, float sy, float sz) pfsetNodeTransform;
	 typedef bool function(NodeHandle node,  float **relMat,  float **absMat) pfgetNodeTransformMatrices;
	 typedef bool function(NodeHandle node,  float *mat4x4) pfsetNodeTransformMatrix;
	 typedef float function(NodeHandle node, int param) pfgetNodeParamf;
	 typedef bool function(NodeHandle node, int param, float value) pfsetNodeParamf;
	 typedef int function(NodeHandle node, int param) pfgetNodeParami;
	 typedef bool function(NodeHandle node, int param, int value) pfsetNodeParami;
	 typedef char * function(NodeHandle node, int param) pfgetNodeParamstr;
	 typedef bool function(NodeHandle node, int param,  char *value) pfsetNodeParamstr;
	 typedef bool function(NodeHandle node, float *minX, float *minY, float *minZ,
						  float *maxX, float *maxY, float *maxZ) pfgetNodeAABB;
	 typedef int function(NodeHandle startNode,  char *name, int type) pffindNodes;
	 typedef NodeHandle function(int index) pfgetNodeFindResult;
	 typedef int function(NodeHandle node, float ox, float oy, float oz, float dx, float dy, float dz, int numNearest) pfcastRay;
	 typedef bool function(int index, NodeHandle *node, float *distance, float *intersection) pfgetCastRayResult;
	 typedef NodeHandle function(NodeHandle parent,  char *name) pfaddGroupNode;
	 typedef NodeHandle function(NodeHandle parent,  char *name, ResHandle geometryRes) pfaddModelNode;
	 typedef bool function(NodeHandle modelNode, int stage, ResHandle animationRes,
								   char *startNode, bool additive) pfsetupModelAnimStage;
	 typedef bool function(NodeHandle modelNode, int stage, float time, float weight) pfsetModelAnimParams;
	 typedef bool function(NodeHandle modelNode,  char *target, float weight) pfsetModelMorpher;
	 typedef NodeHandle function(NodeHandle parent,  char *name, ResHandle materialRes, 
								int batchStart, int batchCount, int vertRStart, int vertREnd) pfaddMeshNode;
	 typedef NodeHandle function(NodeHandle parent,  char *name, int jointIndex) pfaddJointNode;
	 typedef NodeHandle function(NodeHandle parent,  char *name, ResHandle materialRes,
								  char *lightingContext,  char *shadowContext) pfaddLightNode;
	 typedef bool function(NodeHandle lightNode,  char *lightingContext,  char *shadowContext) pfsetLightContexts;
	 typedef NodeHandle function(NodeHandle parent,  char *name, ResHandle pipelineRes) pfaddCameraNode;
	 typedef bool function(NodeHandle cameraNode, float fov, float aspect, float nearDist, float farDist) pfsetupCameraView;
	 typedef bool function(NodeHandle cameraNode, float *projMat) pfcalcCameraProjectionMatrix;
	 typedef NodeHandle function(NodeHandle parent,  char *name, ResHandle materialRes,
								   ResHandle effectRes, int maxParticleCount, int respawnCount) pfaddEmitterNode;
	 typedef bool function(NodeHandle emitterNode, float timeDelta) pfadvanceEmitterTime;
	 typedef bool function(NodeHandle emitterNode) pfhasEmitterFinished;
}


struct Horde3D
{
static:
	pfgetVersionString getVersionString;
	pfcheckExtension checkExtension;
	pfinit init;
	pfrelease release;
	pfresize resize;
	pfrender render;
	pfclear clear;
	pfgetMessage getMessage;
	pfgetOption getOption;
	pfsetOption setOption;
	pfgetStat getStat;
	pfshowOverlay showOverlay;
	pfclearOverlays clearOverlays;
	pfgetResourceType getResourceType;
	pfgetResourceName getResourceName;
	pffindResource findResource;
	pfaddResource addResource;
	pfcloneResource cloneResource;
	pfremoveResource removeResource;
	pfisResourceLoaded isResourceLoaded;
	pfloadResource loadResource;
	pfunloadResource unloadResource;
	pfgetResourceParami getResourceParami;
	pfsetResourceParami setResourceParami;
	pfgetResourceParamf getResourceParamf;
	pfsetResourceParamf setResourceParamf;
	pfgetResourceParamstr getResourceParamstr;
	pfsetResourceParamstr setResourceParamstr;
	pfgetResourceData getResourceData;
	pfupdateResourceData updateResourceData;
	pfqueryUnloadedResource queryUnloadedResource;
	pfreleaseUnusedResources releaseUnusedResources;
	pfcreateTexture2D createTexture2D;
	pfsetShaderPreambles setShaderPreambles;
	pfsetMaterialUniform setMaterialUniform;
	pfsetPipelineStageActivation setPipelineStageActivation;
	pfgetPipelineRenderTargetData getPipelineRenderTargetData;
	pfgetNodeType getNodeType;
	pfgetNodeParent getNodeParent;
	pfsetNodeParent setNodeParent;
	pfgetNodeChild getNodeChild;
	pfaddNodes addNodes;
	pfremoveNode removeNode;
	pfsetNodeActivation setNodeActivation;
	pfcheckNodeTransformFlag checkNodeTransformFlag;
	pfgetNodeTransform getNodeTransform;
	pfsetNodeTransform setNodeTransform;
	pfgetNodeTransformMatrices getNodeTransformMatrices;
	pfsetNodeTransformMatrix setNodeTransformMatrix;
	pfgetNodeParamf getNodeParamf;
	pfsetNodeParamf setNodeParamf;
	pfgetNodeParami getNodeParami;
	pfsetNodeParami setNodeParami;
	pfgetNodeParamstr getNodeParamstr;
	pfsetNodeParamstr setNodeParamstr;
	pfgetNodeAABB getNodeAABB;
	pffindNodes findNodes;
	pfgetNodeFindResult getNodeFindResult;
	pfcastRay castRay;
	pfgetCastRayResult getCastRayResult;
	pfaddGroupNode addGroupNode;
	pfaddModelNode addModelNode;
	pfsetupModelAnimStage setupModelAnimStage;
	pfsetModelAnimParams setModelAnimParams;
	pfsetModelMorpher setModelMorpher;
	pfaddMeshNode addMeshNode;
	pfaddJointNode addJointNode;
	pfaddLightNode addLightNode;
	pfsetLightContexts setLightContexts;
	pfaddCameraNode addCameraNode;
	pfsetupCameraView setupCameraView;
	pfcalcCameraProjectionMatrix calcCameraProjectionMatrix;
	pfaddEmitterNode addEmitterNode;
	pfadvanceEmitterTime advanceEmitterTime;
	pfhasEmitterFinished hasEmitterFinished;
}

private void load(SharedLib lib)
{
	with(Horde3D)
	{
		bindFunc(getVersionString)("getVersionString", lib);
		bindFunc(checkExtension)("checkExtension", lib);
		bindFunc(init)("init", lib);
		bindFunc(release)("release", lib);
		bindFunc(resize)("resize", lib);
		bindFunc(render)("render", lib);
		bindFunc(clear)("clear", lib);
		bindFunc(getMessage)("getMessage", lib);
		bindFunc(getOption)("getOption", lib);
		bindFunc(setOption)("setOption", lib);
		bindFunc(getStat)("getStat", lib);
		bindFunc(showOverlay)("showOverlay", lib);
		bindFunc(clearOverlays)("clearOverlays", lib);
		bindFunc(getResourceType)("getResourceType", lib);
		bindFunc(getResourceName)("getResourceName", lib);
		bindFunc(findResource)("findResource", lib);
		bindFunc(addResource)("addResource", lib);
		bindFunc(cloneResource)("cloneResource", lib);
		bindFunc(removeResource)("removeResource", lib);
		bindFunc(isResourceLoaded)("isResourceLoaded", lib);
		bindFunc(loadResource)("loadResource", lib);
		bindFunc(unloadResource)("unloadResource", lib);
		bindFunc(getResourceParami)("getResourceParami", lib);
		bindFunc(setResourceParami)("setResourceParami", lib);
		bindFunc(getResourceParamf)("getResourceParamf", lib);
		bindFunc(setResourceParamf)("setResourceParamf", lib);
		bindFunc(getResourceParamstr)("getResourceParamstr", lib);
		bindFunc(setResourceParamstr)("setResourceParamstr", lib);
		bindFunc(getResourceData)("getResourceData", lib);
		bindFunc(updateResourceData)("updateResourceData", lib);
		bindFunc(queryUnloadedResource)("queryUnloadedResource", lib);
		bindFunc(releaseUnusedResources)("releaseUnusedResources", lib);
		bindFunc(createTexture2D)("createTexture2D", lib);
		bindFunc(setShaderPreambles)("setShaderPreambles", lib);
		bindFunc(setMaterialUniform)("setMaterialUniform", lib);
		bindFunc(setPipelineStageActivation)("setPipelineStageActivation", lib);
		bindFunc(getPipelineRenderTargetData)("getPipelineRenderTargetData", lib);
		bindFunc(getNodeType)("getNodeType", lib);
		bindFunc(getNodeParent)("getNodeParent", lib);
		bindFunc(setNodeParent)("setNodeParent", lib);
		bindFunc(getNodeChild)("getNodeChild", lib);
		bindFunc(addNodes)("addNodes", lib);
		bindFunc(removeNode)("removeNode", lib);
		bindFunc(setNodeActivation)("setNodeActivation", lib);
		bindFunc(checkNodeTransformFlag)("checkNodeTransformFlag", lib);
		bindFunc(getNodeTransform)("getNodeTransform", lib);
		bindFunc(setNodeTransform)("setNodeTransform", lib);
		bindFunc(getNodeTransformMatrices)("getNodeTransformMatrices", lib);
		bindFunc(setNodeTransformMatrix)("setNodeTransformMatrix", lib);
		bindFunc(getNodeParamf)("getNodeParamf", lib);
		bindFunc(setNodeParamf)("setNodeParamf", lib);
		bindFunc(getNodeParami)("getNodeParami", lib);
		bindFunc(setNodeParami)("setNodeParami", lib);
		bindFunc(getNodeParamstr)("getNodeParamstr", lib);
		bindFunc(setNodeParamstr)("setNodeParamstr", lib);
		bindFunc(getNodeAABB)("getNodeAABB", lib);
		bindFunc(findNodes)("findNodes", lib);
		bindFunc(getNodeFindResult)("getNodeFindResult", lib);
		bindFunc(castRay)("castRay", lib);
		bindFunc(getCastRayResult)("getCastRayResult", lib);
		bindFunc(addGroupNode)("addGroupNode", lib);
		bindFunc(addModelNode)("addModelNode", lib);
		bindFunc(setupModelAnimStage)("setupModelAnimStage", lib);
		bindFunc(setModelAnimParams)("setModelAnimParams", lib);
		bindFunc(setModelMorpher)("setModelMorpher", lib);
		bindFunc(addMeshNode)("addMeshNode", lib);
		bindFunc(addJointNode)("addJointNode", lib);
		bindFunc(addLightNode)("addLightNode", lib);
		bindFunc(setLightContexts)("setLightContexts", lib);
		bindFunc(addCameraNode)("addCameraNode", lib);
		bindFunc(setupCameraView)("setupCameraView", lib);
		bindFunc(calcCameraProjectionMatrix)("calcCameraProjectionMatrix", lib);
		bindFunc(addEmitterNode)("addEmitterNode", lib);
		bindFunc(advanceEmitterTime)("advanceEmitterTime", lib);
		bindFunc(hasEmitterFinished)("hasEmitterFinished", lib);
	}
}
GenericLoader DerelictHorde3D;
static this()
{
	DerelictHorde3D.setup("Horde3D.dll",
		"libHorde3D.so",
		"",
		&load);
}

