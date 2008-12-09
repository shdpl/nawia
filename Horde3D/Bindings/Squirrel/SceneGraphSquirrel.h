#ifndef _SceneGraphSquirrel_H_
#define _SceneGraphSquirrel_H_

#include "../../../Dependencies/SQUIRREL2/include/squirrel.h"

void register_global(HSQUIRRELVM v,SQFUNCTION f,const char *fname);

namespace HordeSquirrel
{
	void registerFunctions(SQVM* v);

	int showOverlay(SQVM* v);
	int clearOverlays(SQVM* v);
	int clear(SQVM* v);

	int getResourceType(SQVM* v);
	int getResourceName(SQVM* v);
	int findResource(SQVM* v);
	int addResource(SQVM* v);
	int cloneResource(SQVM* v);
	int removeResource(SQVM* v);
	int loadResource(SQVM* v);
	int loadResourceString(SQVM* v);
	int unloadResource(SQVM* v);
	int getResourceParamI(SQVM* v);
	int getResourceParamS(SQVM* v);
	int getResourceParamF(SQVM* v);
	int setResourceParamI(SQVM* v);
	int setResourceParamF(SQVM* v);
	int setResourceParamS(SQVM* v);
	int queryUnloadedResource(SQVM* v);
	int releaseUnusedResources(SQVM* v);

	int createTexture2D(SQVM* v);
	int setShaderPreambles(SQVM* v);
	int setMaterialUniform(SQVM* v);
	int setPipelineStageActivation(SQVM* v);

	int getNodeType(SQVM* v);
	int getNodeParent(SQVM* v);
	int setNodeParent(SQVM* v);
	int addNodes(SQVM* v);
	int removeNode(SQVM* v);
	int setNodeActivation(SQVM* v);
	int checkNodeTransformFlag(SQVM* v);
	int getNodeParamF(SQVM* v);
	int setNodeParamF(SQVM* v);
	int getNodeParamI(SQVM* v);
	int setNodeParamI(SQVM* v);
	int setNodeParamS(SQVM* v);
	int getNodeParamS(SQVM* v);
	int findNodes(SQVM* v);
	int getNodeFindResult(SQVM* v);
	int castRay(SQVM* v);
	int getCastRayResult(SQVM* v);

	int addGroupNode(SQVM* v);

	int addModelNode(SQVM* v);
	int setupModelAnimStage(SQVM* v);
	int setModelAnimParams(SQVM* v);
	int setModelMorpher(SQVM* v);

	int addJointNode(SQVM* v);

	int addLightNode(SQVM* v);
	int setLightContexts(SQVM* v);

	int addCameraNode(SQVM* v);
	int setupCameraView(SQVM* v);

	int addEmitterNode(SQVM* v);
	int advanceEmitterTime(SQVM* v);
	int hasEmitterFinished(SQVM* v);

	int setNodeTransform(SQVM* v);
	int setNodePosition(SQVM* v);
	int setNodeRotation(SQVM* v);
	int setNodeScale(SQVM* v);
	int getNodePosX(SQVM* v);
	int getNodePosY(SQVM* v);
	int getNodePosZ(SQVM* v);
	int getNodeRotX(SQVM* v);
	int getNodeRotY(SQVM* v);
	int getNodeRotZ(SQVM* v);
	int getNodeScaleX(SQVM* v);
	int getNodeScaleY(SQVM* v);
	int getNodeScaleZ(SQVM* v);

	//Utility Library
	int getResourcePath(SQVM* v);
	int setResourcePath(SQVM* v);
	int loadResourcesFromDisk(SQVM* v);
	int loadResource(SQVM* v);
	int pickNode(SQVM* v);
	int showText(SQVM* v);
	int showFrameStats(SQVM* v);
};

#endif