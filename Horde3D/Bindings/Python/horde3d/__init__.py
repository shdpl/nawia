# *************************************************************************************************
#
# Horde3D
#   Next-Generation Graphics Engine
# --------------------------------------
# Copyright (C) 2006-2009 Nicolas Schulz
#               2008-2009 Florian Noeding (Python wrapper)
#
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
#
# *************************************************************************************************

# Updated to Horde3D version beta 3

from ctypes import *

if not 'c_bool' in globals():
	c_bool = c_int


__all__ = []

try:
	import utils
	__all__.append('utils')
except:
	pass

try:
	import terrain
	__all__.append('terrain')
except:
	pass

try:
	import sound
	__all__.append('sound')
except:
	pass


try:
	h3d = cdll.LoadLibrary('libHorde3D.so')
except OSError:
	h3d = cdll.LoadLibrary('Horde3D.dll')


RootNode = 1
__all__.append('RootNode')


class EngineOptions(object):
	MaxLogLevel = 1
	MaxNumMessages = 2
	TrilinearFilterung = 3
	MaxAnisotropy = 4
	TexCompression = 5
	LoadTextures = 6
	FastAnimation = 7
	ShadowMapSize = 8
	SampleCount = 9
	WireframeMode = 10
	DebugViewMode = 11
	DumpFailedShaders = 12
__all__.append('EngineOptions')


class EngineStats(object):
	TriCount = 100
	BatchCount = 101
	LightPassCount = 102
	FrameTime = 103
	CustomTime = 104
__all__.append('EngineStats')


class ResourceTypes(object):
	Undefined = 0
	SceneGraph = 1
	Geometry = 2
	Animation = 3
	Material = 4
	Code = 5
	Shader = 6
	Texture = 7
	ParticleEffect = 8
	Pipeline = 9
__all__.append('ResourceTypes')


class ResourceFlags(object):
	NoQuery = 1
	NoTexCompression = 2
	NoTexMipmaps = 4
__all__.append('ResourceFlags')


class GeometryResParams(object):
	VertexCount = 200
	IndexCount = 201
	VertexData = 202
	IndexData = 203
__all__.append('GeometryResParams')


class AnimationResParams(object):
	FrameCount = 300
__all__.append('AnimationResParams')


class MaterialResParams(object):
	Class = 400
	Link = 401
	Shader = 402
__all__.append('MaterialResParams')


class TextureResParams(object):
	PixelData = 700
	TexType = 701
	TexFormat = 702
	Width = 703
	Height = 704
__all__.append('TextureResParams')


class EffectResParams(object):
	LifeMin = 900
	LifeMax = 901
	MoveVelMin = 902
	MoveVelMax = 903
	MoveVelEndRate = 904
	RotVelMin = 905
	RotVelMax = 906
	RotVelEndRate = 907
	SizeMin = 908
	SizeMax = 909
	SizeEndRate = 910
	Col_R_Min = 911
	Col_R_Max = 912
	Col_R_EndRate = 913
	Col_G_Min = 914
	Col_G_Max = 915
	Col_G_EndRate = 916
	Col_B_Min = 917
	Col_B_Max = 918
	Col_B_EndRate = 919
	Col_A_Min = 920		 ##NEW
	Col_A_Max = 921		 ##NEW
	Col_A_EndRate = 922	 ##NEW
__all__.append('EffectResParams')


class SceneNodeTypes(object):
	Undefined = 0
	Group = 1
	Model = 2
	Mesh = 3
	Joint = 4
	Light = 5
	Camera = 6
	Emitter = 7
__all__.append('SceneNodeTypes')


class SceneNodeParams(object):
	Name = 1
	AttachmentString = 2
__all__.append('SceneNodeParams')


class ModelNodeParams(object):
	GeometryRes = 200
	SoftwareSkinning = 201
	LodDist1 = 202
	LodDist2 = 203
	LodDist3 = 204
	LodDist4 = 205
__all__.append('ModelNodeParams')


class MeshNodeParams(object):
	MaterialRes = 300
	BatchStart = 301
	BatchCount = 302
	VertRStart = 303
	VertREnd = 304
	LodLevel = 305
__all__.append('MeshNodeParams')


class JointNodeParams(object):
	JointIndex = 400
__all__.append('JointNodeParams')


class LightNodeParams(object):
	MaterialRes = 500
	Radius = 501
	FOV = 502
	Col_R = 503
	Col_G = 504
	Col_B = 505
	ShadowMapCount = 506
	ShadowSplitLambda = 507
	ShadowMapBias = 508
__all__.append('LightNodeParams')


class CameraNodeParams(object):
	PipelineRes = 600
	OutputTex = 601
	OutputBufferIndex = 602
	LeftPlane = 603
	RightPlane = 604
	BottomPlane = 605
	TopPlane = 606
	NearPlane = 607
	FarPlane = 608
	Orthographic = 609
	OcclusionCulling = 610
__all__.append('CameraNodeParams')


class EmitterNodeParams(object):
	MaterialRes = 700
	ParticleEffectRes = 701
	MaxCount = 702
	RespawnCount = 703
	Delay = 704
	EmissionRate = 705
	SpreadAngle = 706
	ForceX = 707
	ForceY = 708
	ForceZ = 709
__all__.append('EmitterNodeParams')



getVersionString = h3d.getVersionString
getVersionString.restype = c_char_p
getVersionString.argtypes = []
__all__.append('getVersionString')


checkExtension = h3d.checkExtension
checkExtension.restype = c_bool
checkExtension.argtypes = [c_char_p]
__all__.append('checkExtension')


init = h3d.init
init.restype = c_bool
init.argtypes = []
__all__.append('init')


release = h3d.release
release.restype = None
release.argtypes = []
__all__.append('release')


setupViewport = h3d.setupViewport
setupViewport.restype = None
setupViewport.argtypes = [c_int, c_int, c_int, c_int, c_bool]
__all__.append('setupViewport')


render = h3d.render
render.restype = c_bool
render.argtypes = [c_int]
__all__.append('render')


finalizeFrame = h3d.finalizeFrame
finalizeFrame.restype = c_bool
finalizeFrame.argtypes = []
__all__.append('finalizeFrame')


clear = h3d.clear
clear.restype = None
clear.argtypes = []
__all__.append('clear')


_getMessage = h3d.getMessage
_getMessage.restype = c_char_p
_getMessage.argtypes = [POINTER(c_int), POINTER(c_float)]
def getMessage():
	i = c_int()
	f = c_float()
	s = _getMessage(byref(i), byref(f))

	return (s, i.value, f.value)
__all__.append('getMessage')


getOption = h3d.getOption
getOption.restype = c_float
getOption.argtypes = [c_int]
__all__.append('getOption')


_setOption = h3d.setOption
_setOption.restype = c_bool
_setOption.argtypes = [c_int, c_float]
def setOption(param, value):
	return _setOption(param, c_float(value))
__all__.append('setOption')


_getStat = h3d.getStat
_getStat.restype = c_float
_getStat.argtypes = [c_int, c_bool]
def getStat(param, reset):
	return _getStat(param, reset).value
__all__.append('getStat')


_showOverlay = h3d.showOverlay
_showOverlay.restype = None
_showOverlay.argtypes = [
		c_float, c_float, c_float, c_float,
		c_float, c_float, c_float, c_float,
		c_float, c_float, c_float, c_float,
		c_float, c_float, c_float, c_float,
		c_float, c_float, c_float, c_float,
		c_int, c_int]
def showOverlay(
		x_tl, y_tl, u_tl, v_tl,
		x_bl, y_bl, u_bl, v_bl,
		x_br, y_br, u_br, v_br,
		x_tr, y_tr, u_tr, v_tr,
		r, g, b, a,
		materialRes, layer):
	return _showOverlay(
			c_float(x_tl), c_float(y_tl), c_float(u_tl), c_float(v_tl),
			c_float(x_bl), c_float(y_bl), c_float(u_bl), c_float(v_bl),
			c_float(x_br), c_float(y_br), c_float(u_br), c_float(v_br),
			c_float(x_tr), c_float(y_tr), c_float(u_tr), c_float(v_tr),
			c_float(r), c_float(g), c_float(b), c_float(a),
			materialRes, layer
			)
__all__.append('showOverlay')


clearOverlays = h3d.clearOverlays
clearOverlays.restype = None
clearOverlays.argtypes = []
__all__.append('clearOverlays')


getResourceType = h3d.getResourceType
getResourceType.restype = c_int
getResourceType.argtypes = [c_int]
__all__.append('getResourceType')


getResourceName = h3d.getResourceName
getResourceName.restype = c_char_p
getResourceName.argtypes = [c_int]
__all__.append('getResourceName')


getNextResource = h3d.getNextResource
getNextResource.restype = c_int
getNextResource.append = [c_int, c_int]
__all__.append('getNextResource')


findResource = h3d.findResource
findResource.restype = c_int
findResource.argtypes = [c_int, c_char_p]
__all__.append('findResource')


addResource = h3d.addResource
addResource.restype = c_int
addResource.argtypes = [c_int, c_char_p, c_int]
__all__.append('addResource')


cloneResource = h3d.cloneResource
cloneResource.restype = c_int
cloneResource.argtypes = [c_int, c_char_p]
__all__.append('cloneResource')

removeResource = h3d.removeResource
removeResource.restype = c_int
removeResource.argtypes = [c_int]
__all__.append('removeResource')


isResourceLoaded = h3d.isResourceLoaded
isResourceLoaded.restype = c_bool
isResourceLoaded.argtypes = [c_int]
__all__.append('isResourceLoaded')


_loadResource = h3d.loadResource
_loadResource.restype = c_bool
_loadResource.argtypes = [c_int, c_void_p, c_int]
def loadResource(res, data):
	return _loadResource(res, data, len(data))
__all__.append('loadResource')


unloadResource = h3d.unloadResource
unloadResource.restype = c_bool
unloadResource.argtypes = [c_int]
__all__.append('unloadResource')


getResourceParami = h3d.getResourceParami
getResourceParami.restype = c_int
getResourceParami.argtypes = [c_int, c_int]
__all__.append('getResourceParami')

setResourceParami = h3d.setResourceParami
setResourceParami.restype = c_bool
setResourceParami.argtypes = [c_int, c_int, c_int]
__all__.append('setResourceParami')


_getResourceParamf = h3d.getResourceParamf
_getResourceParamf.restype = c_float
_getResourceParamf.argtypes = [c_int, c_int]
def getResourceParamf(res, param):
	return _getResourceParamf(res, param).value
__all__.append('getResourceParamf')


_setResourceParamf = h3d.setResourceParamf
_setResourceParamf.restype = c_bool
_setResourceParamf.argtypes = [c_int, c_int, c_float]
def setResourceParamf(res, param, value):
	return _setResourceParamf(res, param, c_float(value))
__all__.append('setResourceParamf')


getResourceParamstr = h3d.getResourceParamstr
getResourceParamstr.restype = c_char_p
getResourceParamstr.argtypes = [c_int, c_int]
__all__.append('getResourceParamstr')


setResourceParamstr = h3d.getResourceParamstr
setResourceParamstr.restype = c_bool
setResourceParamstr.argtypes = [c_int, c_int, c_char_p]
__all__.append('setResourceParamstr')


# getResourceData
getResourceData = h3d.getResourceData
getResourceData.restype = c_void_p
getResourceData.argtypes = [c_int, c_int]
__all__.append('getResourceData')

_updateResourceData = h3d.updateResourceData
_updateResourceData.restype = c_bool
_updateResourceData.argtypes = [c_int, c_int, c_void_p, c_int]
def updateResourceData(res, param, data):
	return _updateResourceData(res, param, data, len(data))
__all__.append('updateResourceData')

queryUnloadedResource = h3d.queryUnloadedResource
queryUnloadedResource.restype = c_int
queryUnloadedResource.argtypes = [c_int]
__all__.append('queryUnloadedResource')


releaseUnusedResources = h3d.releaseUnusedResources
releaseUnusedResources.restype = None
releaseUnusedResources.argtypes = []
__all__.append('releaseUnusedResources')


createTexture2D = h3d.createTexture2D
createTexture2D.restype = c_int
createTexture2D.argtypes = [c_char_p, c_int, c_int, c_int, c_bool]
__all__.append('createTexture2D')


setShaderPreambles = h3d.setShaderPreambles
setShaderPreambles.restype = None
setShaderPreambles.argtypes = [c_char_p, c_char_p]
__all__.append('setShaderPreambles')


_setMaterialUniform = h3d.setMaterialUniform
_setMaterialUniform.restype = c_bool
_setMaterialUniform.argtypes = [c_int, c_char_p, c_float, c_float, c_float, c_float]
def setMaterialUniform(materialRes, name, a, b, c, d):
	return _setMaterialUniform(materialRes, name, c_float(a), c_float(b), c_float(c), c_float(d))
__all__.append('setMaterialUniform')


setMaterialSampler = h3d.setMaterialSampler
setMaterialSampler.restype = c_bool
setMaterialSampler.argtypes = [c_int, c_char_p, c_int]
__all__.append('setMaterialSampler')


setPipelineStageActivation = h3d.setPipelineStageActivation
setPipelineStageActivation.restype = c_bool
setPipelineStageActivation.argtypes = [c_int, c_char_p, c_bool]
__all__.append('setPipelineStageActivation')


_getPipelineRenderTargetData = h3d.getPipelineRenderTargetData
_getPipelineRenderTargetData.restype = c_bool
_getPipelineRenderTargetData.argtypes = [c_int, c_char_p, c_int, POINTER(c_int), POINTER(c_int), POINTER(c_int), POINTER(c_float), c_int]
def getPipelineRenderTargetData(pipelineRes, targetName, bufIndex):
	width = c_int()
	height = c_int()
	compCount = c_int()

	# get values for width, height, compCount to calculate needed buffer size
	_getPipelineRenderTargetData(pipelineRes, targetName, bufIndex, byref(width), byref(height), byref(compCount), None, 0)

	# get data
	bufferSize = 4 * width * height * compCount
	buffer = (c_float * (bufferSize / 4))()
	_getPipelineRenderTargetData(pipelineRes, targetName, buffer, None, None, None, buffer)

	return [x for x in buffer] # FIXME really make a normal list of floats out of this array?
__all__.append('getPipelineRenderTargetData')


getNodeType = h3d.getNodeType
getNodeType.restype = c_int
getNodeType.argtypes = [c_int]
__all__.append('getNodeType')


getNodeParent = h3d.getNodeParent
getNodeParent.restype = c_int
getNodeParent.argtypes = [c_int]
__all__.append('getNodeParent')


setNodeParent = h3d.setNodeParent
setNodeParent.restype = c_int
setNodeParent.argtypes = [c_int, c_int]
__all__.append('setNodeParent')


getNodeChild = h3d.getNodeChild
getNodeChild.restype = c_int
getNodeChild.argtypes = [c_int, c_int]
__all__.append('getNodeChild')


addNodes = h3d.addNodes
addNodes.restype = c_int
addNodes.argtypes = [c_int, c_int]
__all__.append('addNodes')


removeNode = h3d.removeNode
removeNode.restype = c_bool
removeNode.argtypes = [c_int]
__all__.append('removeNode')


setNodeActivation = h3d.setNodeActivation
setNodeActivation.restype = c_bool
setNodeActivation.argtypes = [c_int, c_bool]
__all__.append('setNodeActivation')


checkNodeTransformFlag = h3d.checkNodeTransformFlag
checkNodeTransformFlag.restype = c_bool
checkNodeTransformFlag.argtypes = [c_int, c_bool]
__all__.append('checkNodeTransformFlag')


_getNodeTransform = h3d.getNodeTransform
_getNodeTransform.restype = c_bool
_getNodeTransform.argtypes = [c_int,
		POINTER(c_float), POINTER(c_float), POINTER(c_float),
		POINTER(c_float), POINTER(c_float), POINTER(c_float),
		POINTER(c_float), POINTER(c_float), POINTER(c_float),
		]
def getNodeTransform(node):
	tx, ty, tz = c_float(), c_float(), c_float()
	rx, ry, rz = c_float(), c_float(), c_float()
	sx, sy, sz = c_float(), c_float(), c_float()

	# FIXME really assert?
	assert(_getNodeTransform(node,
		byref(tx), byref(ty), byref(tz),
		byref(rx), byref(ry), byref(rz),
		byref(sx), byref(sy), byref(sz),
		))

	return [
			[tx.value, ty.value, tz.value]
			[rx.value, ry.value, rz.value]
			[sx.value, sy.value, sz.value]
			]
__all__.append('getNodeTransform')


_setNodeTransform = h3d.setNodeTransform
_setNodeTransform.restype = c_bool
_setNodeTransform.argtypes = [c_int,
					c_float, c_float, c_float,
					c_float, c_float, c_float,
					c_float, c_float, c_float,
					]
def setNodeTransform(node, tx, ty, tz, rx, ry, rz, sx, sy, sz):
	return _setNodeTransform(node,
			c_float(tx), c_float(ty), c_float(tz),
			c_float(rx), c_float(ry), c_float(rz),
			c_float(sx), c_float(sy), c_float(sz),
			)
__all__.append('setNodeTransform')


_getNodeTransformMatrices = h3d.getNodeTransformMatrices
_getNodeTransformMatrices.restype = c_bool
_getNodeTransformMatrices.argtypes = [c_int, POINTER(c_float * 16), POINTER(c_float * 16)]
def getNodeTransformMatrices(node):
	t = c_float * 16
	rel = t()
	abs = t()
	# FIXME really assert?
	assert(_getNodeTransformMatrices(node, byref(rel), byref(abs)))

	a = tuple([x for x in rel])
	b = tuple([x for x in abs])
	return (a, b)
__all__.append('getNodeTransformMatrices')


_setNodeTransformMatrix = h3d.setNodeTransformMatrix
_setNodeTransformMatrix.restype = c_bool
_setNodeTransformMatrix.argtypes = [c_int, c_float * 16]
def setNodeTransformMatrix(node, mat):
	t = c_float * 16
	f16 = t()
	for i in range(16):
		f16[i] = mat[i]
	# FIXME really assert?
	assert(_setNodeTransformMatrix(node, f16))
__all__.append('setNodeTransformMatrix')


_getNodeParamf = h3d.getNodeParamf
_getNodeParamf.restype = c_float
_getNodeParamf.argtypes = [c_int, c_int]
def getNodeParamf(node, param):
	return _getNodeParamf(node, param).value
__all__.append('getNodeParamf')


_setNodeParamf = h3d.setNodeParamf
_setNodeParamf.restype = c_bool
_setNodeParamf.argtypes = [c_int, c_int, c_float]
def setNodeParamf(node, param, value):
	return _setNodeParamf(node, param, c_float(value))
__all__.append('setNodeParamf')


getNodeParami = h3d.getNodeParami
getNodeParami.restype = c_int
getNodeParami.argtypes = [c_int, c_int]
__all__.append('getNodeParami')

setNodeParami = h3d.setNodeParami
setNodeParami.restype = c_bool
setNodeParami.argtypes = [c_int, c_int, c_int]
__all__.append('setNodeParami')


getNodeParamstr = h3d.getNodeParamstr
getNodeParamstr.restype = c_char_p
getNodeParamstr.argtypes = [c_int, c_int]
__all__.append('getNodeParamstr')


setNodeParamstr = h3d.setNodeParamstr
setNodeParamstr.restype = c_bool
setNodeParamstr.argtypes = [c_int, c_int, c_char_p]
__all__.append('setNodeParamstr')


_getNodeAABB = h3d.getNodeAABB
_getNodeAABB.restype = c_bool
_getNodeAABB.argtypes = [c_int,
		POINTER(c_float), POINTER(c_float), POINTER(c_float),
		POINTER(c_float), POINTER(c_float), POINTER(c_float),
		]
def getNodeAABB(node):
	minX, minY, minZ = c_float(), c_float(), c_float()
	maxX, maxY, maxZ = c_float(), c_float(), c_float()

	# FIXME really assert?
	assert(_getNodeAABB(node,
		byref(minX), byref(minY), byref(minZ),
		byref(maxX), byref(maxY), byref(maxZ),
		))
	return [[minX, minY, minZ], [maxX, maxY, maxZ]]
__all__.append('getNodeAABB')


findNodes = h3d.findNodes
findNodes.restype = c_int
findNodes.argtypes = [c_int, c_char_p, c_int]
__all__.append('findNodes')


getNodeFindResult = h3d.getNodeFindResult
getNodeFindResult.restype = c_int
getNodeFindResult.argtypes = [c_int]
__all__.append('getNodeFindResult')


_castRay = h3d.castRay
_castRay.restype = c_int
_castRay.argtypes = [c_int,
		c_float, c_float, c_float,
		c_float, c_float, c_float,
		c_int]
def castRay(node, ox, oy, oz, dx, dy, dz, numNearest):
	return _castRay(node,
			c_float(ox), c_float(oy), c_float(oz),
			c_float(dx), c_float(dy), c_float(dz),
			numNearest)
__all__.append('castRay')


_getCastRayResult = h3d.getCastRayResult
_getCastRayResult.restype = c_bool
_getCastRayResult.argtypes = [c_int, POINTER(c_int), POINTER(c_float), POINTER(c_float * 3)]
def getCastRayResult(index):
	i = c_int()
	f = c_float()
	f3 = (c_float * 3)()

	# FIXME really assert? throw exception?
	assert(_getCastRayResult(index, byref(i), byref(f), byref(f3)))

	return [i.value, f.value, tuple([x for x in f3])]
__all__.append('getCastRayResult')


checkNodeVisibility = h3d.checkNodeVisibility
checkNodeVisibility.restype = c_int
checkNodeVisibility.argtypes = [c_int, c_int, c_bool, c_bool]
__all__.append('checkNodeVisibility')


addGroupNode = h3d.addGroupNode
addGroupNode.restype = c_int
addGroupNode.argtypes = [c_int, c_char_p]
__all__.append('addGroupNode')


addModelNode = h3d.addModelNode
addModelNode.restype = c_int
addModelNode.argtypes = [c_int, c_char_p, c_int]
__all__.append('addModelNode')


setupModelAnimStage = h3d.setupModelAnimStage
setupModelAnimStage.restype = c_bool
setupModelAnimStage.argtypes = [c_int, c_int, c_int, c_char_p, c_bool]
__all__.append('setupModelAnimStage')


_setModelAnimParams = h3d.setModelAnimParams
_setModelAnimParams.restype = c_bool
_setModelAnimParams.argtypes = [c_int, c_int, c_float, c_float]
def setModelAnimParams(modelNode, stage, time, weight):
	return _setModelAnimParams(modelNode, stage, c_float(time), c_float(weight))
__all__.append('setModelAnimParams')



_setModelMorper = h3d.setModelMorpher
_setModelMorper.restype = c_bool
_setModelMorper.argtypes = [c_int, c_char_p, c_float]
def setModelMorpher(modelNode, target, weight):
	return _setModelMorper(modelNode, target, c_float(weight))
__all__.append('setModelMorpher')


addMeshNode = h3d.addMeshNode
addMeshNode.restype = c_int
addMeshNode.argtypes = [c_int, c_char_p, c_int, c_int, c_int, c_int, c_int]
__all__.append('addMeshNode')


addJointNode = h3d.addJointNode
addJointNode.restype = c_int
addJointNode.argtypes = [c_int, c_char_p, c_int]
__all__.append('addJointNode')


addLightNode = h3d.addLightNode
addLightNode.restype = c_int
addLightNode.argtypes = [c_int, c_char_p, c_int, c_char_p, c_char_p]
__all__.append('addLightNode')


setLightContexts = h3d.setLightContexts
setLightContexts.restype = c_bool
setLightContexts.argtypes = [c_int, c_char_p, c_char_p]
__all__.append('setLightContexts')


addCameraNode = h3d.addCameraNode
addCameraNode.restype = c_int
addCameraNode.argtypes = [c_int, c_char_p, c_int]
__all__.append('addCameraNode')


_setupCameraView = h3d.setupCameraView
_setupCameraView.restype = c_bool
_setupCameraView.argtypes = [c_int, c_float, c_float, c_float, c_float]
def setupCameraView(cameraNode, fov, aspect, nearDist, farDist):
	return _setupCameraView(cameraNode, c_float(fov), c_float(aspect), c_float(nearDist), c_float(farDist))
__all__.append('setupCameraView')


_getCameraProjectionMatrix = h3d.getCameraProjectionMatrix
_getCameraProjectionMatrix.restype = c_bool
_getCameraProjectionMatrix.argtypes = [c_int, c_float * 16]
def getCameraProjectionMatrix(node, mat):
	t = c_float * 16
	f16 = t()
	for i in range(16):
		f16[i] = mat[i]
	# FIXME really assert?
	assert(_getCameraProjectionMatrix(node, f16))
__all__.append('getCameraProjectionMatrix')


addEmitterNode = h3d.addEmitterNode
addEmitterNode.restype = c_int
addEmitterNode.argtypes = [c_int, c_char_p, c_int, c_int, c_int, c_int]
__all__.append('addEmitterNode')


_advanceEmitterTime = h3d.advanceEmitterTime
_advanceEmitterTime.restype = c_bool
_advanceEmitterTime.argtypes = [c_int, c_float]
def advanceEmitterTime(emitterNode, timeDelta):
	return _advanceEmitterTime(emitterNode, c_float(timeDelta))
__all__.append('advanceEmitterTime')


hasEmitterFinished = h3d.hasEmitterFinished
hasEmitterFinished.restype = c_bool
hasEmitterFinished.argtypes = [c_int]
__all__.append('hasEmitterFinished')



