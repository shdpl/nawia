# *************************************************************************************************
#
# Horde3D
#   Next-Generation Graphics Engine
# --------------------------------------
# Copyright (C) 2006-2009 Nicolas Schulz
#               2008-2010 Florian Noeding (Python wrapper)
#               2009      Alex Fuller (updates for SVN 331)
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

# Horde3D version beta 4 (svn r386)

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


class Options(object):
	MaxLogLevel = 1
	MaxNumMessages = 2
	TrilinearFiltering = 3
	MaxAnisotropy = 4
	TexCompression = 5
	SRGBLinearization = 6
	LoadTextures = 7
	FastAnimation = 8
	ShadowMapSize = 9
	SampleCount = 10
	WireframeMode = 11
	DebugViewMode = 12
	DumpFailedShaders = 13
	GatherTimeStats = 14
__all__.append('Options')


class Stats(object):
	TriCount = 100
	BatchCount = 101
	LightPassCount = 102
	FrameTime = 103
	AnimationTime = 104
	CustomTime = 105
	TextureVMem = 106
	GeometryVMem = 107
__all__.append('Stats')


class ResTypes(object):
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
__all__.append('ResTypes')


class ResFlags(object):
	NoQuery = 1
	NoTexCompression = 2
	NoTexMipmaps = 4
	TexCubemap = 8
	TexDynamic = 16
	TexRenderable = 32
	TexSRGB = 64
__all__.append('ResFlags')


class Formats(object):
	Unknown = 0
	TEX_BGRA8 = 1
	TEX_DXT1 = 2
	TEX_DXT3 = 3
	TEX_DXT5 = 4
	TEX_RGBA16F = 5
	TEX_RGBA32F = 6
__all__.append('Formats')


class GeoRes(object):
	GeometryElem = 200
	GeoIndexCountI = 201
	GeoVertexCountI = 202
	GeoIndices16I = 203
	GeoIndexStream = 204
	GeoVertPosStream = 205
	GeoVertTanStream = 206
	GeoVertStaticStream = 207
__all__.append('GeoRes')


class AnimRes(object):
	EntityElem = 300
	EntFrameCountI = 301
__all__.append('AnimRes')


class MatRes(object):
	MaterialElem = 400
	SamplerElem = 401
	UniformElem = 402
	MatClassStr = 403
	MatLinkI = 404
	MatShaderI = 405
	SampNameStr = 406
	SampTexStr = 407
	UnifNameStr = 408
	UnifValueF4 = 409
__all__.append('MatRes')


class ShaderRes(object):
	ContextElem = 600
	SamplerElem = 601
	UniformElem = 602
	ContNameStr = 603
	SampNameStr = 604
	UnifNameStr = 605
	UnifSizeI = 606
	UnifDefValueF4 = 607
__all__.append('ShaderRes')


class TexRes(object):
	TextureElem = 700
	ImageElem = 701
	TexFormatI = 702
	TexSliceCountI = 703
	ImgWidthI = 704
	ImgHeightI = 705
	ImgPixelStream = 706
__all__.append('TexRes')


class PartEffRes(object):
	ParticleElem = 800
	ChanMoveVelElem = 801
	ChanRotVelElem = 802
	ChanSizeElem = 803
	ChanColRElem = 804
	ChanColGElem = 805
	ChanColBElem = 806
	ChanCalAElem = 807
	PartLifeMinF = 808
	PartLifeMaxF = 809
	ChanStartMinF = 810
	ChanStartMaxF = 811
	ChanEndRateF = 812
__all__.append('PartEffRes')


class PipeRes(object):
	StageElem = 900
	StageNameStr = 901
	StageActivationI = 902
__all__.append('PipeRes')


class NodeTypes(object):
	Undefined = 0
	Group = 1
	Model = 2
	Mesh = 3
	Joint = 4
	Light = 5
	Camera = 6
	Emitter = 7
__all__.append('NodeTypes')


class NodeParams(object):
	NameStr = 1
	AttachmentStr = 2
__all__.append('NodeParams')


class Model(object):
	GeoResI = 200
	SWSkinningI = 201
	LodDist1F = 202
	LodDist2F = 203
	LodDist3F = 204
	LodDist4F = 205
__all__.append('Model')


class Mesh(object):
	MatResI = 300
	BatchStartI = 301
	BatchCountI = 302
	VertRStartI = 303
	VertREndI = 304
	LodLevelI = 305
__all__.append('Mesh')


class Joint(object):
	JointIndexI = 400
__all__.append('Joint')


class Light(object):
	MatResI = 500
	RadiusF = 501
	FovF = 502
	ColorF3 = 503
	ColorMultiplierF = 504
	ShadowMapCountI = 505
	ShadowSplitLambdaF = 506
	ShadowMapBiasF = 507
	LightingContextStr = 508
	ShadowContextStr = 509
__all__.append('Light')


class Camera(object):
	PipeResI = 600
	OutTexResI = 601
	OutBufIndexI = 602
	LeftPlaneF = 603
	RightPlaneF = 604
	BottomPlaneF = 605
	TopPlaneF = 606
	NearPlaneF = 607
	FarPlaneF = 608
	OrthoI = 609
	OccCullingI = 610
__all__.append('Camera')


class Emitter(object):
	MatResI = 700
	PartEffResI = 701
	MaxCountI = 702
	RespawnCountI = 703
	DelayF = 704
	EmissionRateF = 705
	SpreadAngleF = 706
	ForceF3 = 707
__all__.append('Emitter')



getVersionString = h3d.h3dGetVersionString
getVersionString.restype = c_char_p
getVersionString.argtypes = []
__all__.append('getVersionString')


checkExtension = h3d.h3dCheckExtension
checkExtension.restype = c_bool
checkExtension.argtypes = [c_char_p]
__all__.append('checkExtension')


getError = h3d.h3dGetError
getError.restype = c_bool
getError.argtypes = []
__all__.append('getError')


init = h3d.h3dInit
init.restype = c_bool
init.argtypes = []
__all__.append('init')


release = h3d.h3dRelease
release.restype = None
release.argtypes = []
__all__.append('release')


setupViewport = h3d.h3dSetupViewport
setupViewport.restype = None
setupViewport.argtypes = [c_int, c_int, c_int, c_int, c_bool]
__all__.append('setupViewport')


render = h3d.h3dRender
render.restype = c_bool
render.argtypes = [c_int]
__all__.append('render')


finalizeFrame = h3d.h3dFinalizeFrame
finalizeFrame.restype = None
finalizeFrame.argtypes = []
__all__.append('finalizeFrame')


clear = h3d.h3dClear
clear.restype = None
clear.argtypes = []
__all__.append('clear')


_getMessage = h3d.h3dGetMessage
_getMessage.restype = c_char_p
_getMessage.argtypes = [POINTER(c_int), POINTER(c_float)]
def getMessage():
	i = c_int()
	f = c_float()
	s = _getMessage(byref(i), byref(f))

	return (s, i.value, f.value)
__all__.append('getMessage')


getOption = h3d.h3dGetOption
getOption.restype = c_float
getOption.argtypes = [c_int]
__all__.append('getOption')


_setOption = h3d.h3dSetOption
_setOption.restype = c_bool
_setOption.argtypes = [c_int, c_float]
def setOption(param, value):
	return _setOption(param, c_float(value))
__all__.append('setOption')


_getStat = h3d.h3dGetStat
_getStat.restype = c_float
_getStat.argtypes = [c_int, c_bool]
def getStat(param, reset):
	return _getStat(param, reset).value
__all__.append('getStat')


_showOverlay = h3d.h3dShowOverlay
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


clearOverlays = h3d.h3dClearOverlays
clearOverlays.restype = None
clearOverlays.argtypes = []
__all__.append('clearOverlays')


getResType = h3d.h3dGetResType
getResType.restype = c_int
getResType.argtypes = [c_int]
__all__.append('getResType')


getResName = h3d.h3dGetResName
getResName.restype = c_char_p
getResName.argtypes = [c_int]
__all__.append('getResName')


getNextResource = h3d.h3dGetNextResource
getNextResource.restype = c_int
getNextResource.append = [c_int, c_int]
__all__.append('getNextResource')


findResource = h3d.h3dFindResource
findResource.restype = c_int
findResource.argtypes = [c_int, c_char_p]
__all__.append('findResource')


addResource = h3d.h3dAddResource
addResource.restype = c_int
addResource.argtypes = [c_int, c_char_p, c_int]
__all__.append('addResource')


cloneResource = h3d.h3dCloneResource
cloneResource.restype = c_int
cloneResource.argtypes = [c_int, c_char_p]
__all__.append('cloneResource')


removeResource = h3d.h3dRemoveResource
removeResource.restype = c_int
removeResource.argtypes = [c_int]
__all__.append('removeResource')


isResLoaded = h3d.h3dIsResLoaded
isResLoaded.restype = c_bool
isResLoaded.argtypes = [c_int]
__all__.append('isResLoaded')


_loadResource = h3d.h3dLoadResource
_loadResource.restype = c_bool
_loadResource.argtypes = [c_int, c_void_p, c_int]
def loadResource(res, data):
	return _loadResource(res, data, len(data))
__all__.append('loadResource')


unloadResource = h3d.h3dUnloadResource
unloadResource.restype = None
unloadResource.argtypes = [c_int]
__all__.append('unloadResource')


getResElemCount = h3d.h3dGetResElemCount
getResElemCount.restype = c_int
getResElemCount.argtypes = [c_int, c_int]
__all__.append('getResElemCount')


findResElem = h3d.h3dFindResElem
findResElem.restype = c_int
findResElem.argtypes = [c_int, c_int, c_int, c_char_p]
__all__.append('findResElem')


getResParamI = h3d.h3dGetResParamI
getResParamI.restype = c_int
getResParamI.argtypes = [c_int, c_int, c_int, c_int]
__all__.append('getResParamI')


setResParamI = h3d.h3dSetResParamI
setResParamI.restype = None
setResParamI.argtypes = [c_int, c_int, c_int, c_int, c_int]
__all__.append('setResParamI')


_getResParamF = h3d.h3dGetResParamF
_getResParamF.restype = c_float
_getResParamF.argtypes = [c_int, c_int, c_int, c_int, c_int]
def getResParamF(res, param):
	return _getResParamF(res, param).value
__all__.append('getResParamF')


_setResParamF = h3d.h3dSetResParamF
_setResParamF.restype = None
_setResParamF.argtypes = [c_int, c_int, c_int, c_int, c_int, c_float]
def setResParamF(res, elem, elemIdx, param, compIdx, value):
	return _setResParamF(res, elem, elemIdx, param, compIdx, c_float(value))
__all__.append('setResParamF')


getResParamStr = h3d.h3dGetResParamStr
getResParamStr.restype = c_char_p
getResParamStr.argtypes = [c_int, c_int, c_int, c_int]
__all__.append('getResParamStr')


setResParamStr = h3d.h3dGetResParamStr
setResParamStr.restype = c_bool
setResParamStr.argtypes = [c_int, c_int, c_int, c_int, c_char_p]
__all__.append('setResParamStr')


mapResStream = h3d.h3dMapResStream
mapResStream.restype = c_void_p
mapResStream.argtypes = [c_int, c_int, c_int, c_int, c_bool, c_bool]
__all__.append('mapResStream')


unmapResStream = h3d.h3dUnmapResStream
unmapResStream.restype = None
unmapResStream.argtypes = [c_int]
__all__.append('unmapResStream')


queryUnloadedResource = h3d.h3dQueryUnloadedResource
queryUnloadedResource.restype = c_int
queryUnloadedResource.argtypes = [c_int]
__all__.append('queryUnloadedResource')


releaseUnusedResources = h3d.h3dReleaseUnusedResources
releaseUnusedResources.restype = None
releaseUnusedResources.argtypes = []
__all__.append('releaseUnusedResources')


createTexture = h3d.h3dCreateTexture
createTexture.restype = c_int
createTexture.argtypes = [c_char_p, c_int, c_int, c_int, c_int]
__all__.append('createTexture')


setShaderPreambles = h3d.h3dSetShaderPreambles
setShaderPreambles.restype = None
setShaderPreambles.argtypes = [c_char_p, c_char_p]
__all__.append('setShaderPreambles')


_setMaterialUniform = h3d.h3dSetMaterialUniform
_setMaterialUniform.restype = c_bool
_setMaterialUniform.argtypes = [c_int, c_char_p, c_float, c_float, c_float, c_float]
def setMaterialUniform(materialRes, name, a, b, c, d):
	return _setMaterialUniform(materialRes, name, c_float(a), c_float(b), c_float(c), c_float(d))
__all__.append('setMaterialUniform')


_getPipelineRenderTargetData = h3d.h3dGetPipelineRenderTargetData
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


getNodeType = h3d.h3dGetNodeType
getNodeType.restype = c_int
getNodeType.argtypes = [c_int]
__all__.append('getNodeType')


getNodeParent = h3d.h3dGetNodeParent
getNodeParent.restype = c_int
getNodeParent.argtypes = [c_int]
__all__.append('getNodeParent')


setNodeParent = h3d.h3dSetNodeParent
setNodeParent.restype = c_bool
setNodeParent.argtypes = [c_int, c_int]
__all__.append('setNodeParent')


getNodeChild = h3d.h3dGetNodeChild
getNodeChild.restype = c_int
getNodeChild.argtypes = [c_int, c_int]
__all__.append('getNodeChild')


addNodes = h3d.h3dAddNodes
addNodes.restype = c_int
addNodes.argtypes = [c_int, c_int]
__all__.append('addNodes')


removeNode = h3d.h3dRemoveNode
removeNode.restype = None
removeNode.argtypes = [c_int]
__all__.append('removeNode')


setNodeActivation = h3d.h3dSetNodeActivation
setNodeActivation.restype = None
setNodeActivation.argtypes = [c_int, c_bool]
__all__.append('setNodeActivation')


checkNodeTransFlag = h3d.h3dCheckNodeTransFlag
checkNodeTransFlag.restype = c_bool
checkNodeTransFlag.argtypes = [c_int, c_bool]
__all__.append('checkNodeTransFlag')


_getNodeTransform = h3d.h3dGetNodeTransform
_getNodeTransform.restype = None
_getNodeTransform.argtypes = [c_int,
		POINTER(c_float), POINTER(c_float), POINTER(c_float),
		POINTER(c_float), POINTER(c_float), POINTER(c_float),
		POINTER(c_float), POINTER(c_float), POINTER(c_float),
		]
def getNodeTransform(node):
	tx, ty, tz = c_float(), c_float(), c_float()
	rx, ry, rz = c_float(), c_float(), c_float()
	sx, sy, sz = c_float(), c_float(), c_float()

	_getNodeTransform(node,
			byref(tx), byref(ty), byref(tz),
			byref(rx), byref(ry), byref(rz),
			byref(sx), byref(sy), byref(sz),
			)

	return [
			[tx.value, ty.value, tz.value],
			[rx.value, ry.value, rz.value],
			[sx.value, sy.value, sz.value]
			]
	__all__.append('getNodeTransform')


_setNodeTransform = h3d.h3dSetNodeTransform
_setNodeTransform.restype = None
_setNodeTransform.argtypes = [c_int,
		c_float, c_float, c_float,
		c_float, c_float, c_float,
		c_float, c_float, c_float,
		]
def setNodeTransform(node, tx, ty, tz, rx, ry, rz, sx, sy, sz):
	_setNodeTransform(node,
			c_float(tx), c_float(ty), c_float(tz),
			c_float(rx), c_float(ry), c_float(rz),
			c_float(sx), c_float(sy), c_float(sz),
			)
	__all__.append('setNodeTransform')


_getNodeTransMats = h3d.h3dGetNodeTransMats
_getNodeTransMats.restype = None
_getNodeTransMats.argtypes = [c_int, POINTER(POINTER(c_float)), POINTER(POINTER(c_float))]
def getNodeTransMats(node):
	tt = c_float
	rel = pointer(tt())
	abs = pointer(tt())
	_getNodeTransMats(node, byref(rel), byref(abs))

	rel = [rel[i] for i in range(16)]
	abs = [abs[i] for i in range(16)]
	return (rel, abs)
__all__.append('getNodeTransMats')


_setNodeTransMat = h3d.h3dSetNodeTransMat
_setNodeTransMat.restype = None
_setNodeTransMat.argtypes = [c_int, c_float * 16]
def setNodeTransMat(node, mat):
	t = c_float * 16
	f16 = t()
	for i in range(16):
		f16[i] = mat[i]
	_setNodeTransMat(node, f16)
__all__.append('setNodeTransMat')


getNodeParamI = h3d.h3dGetNodeParamI
getNodeParamI.restype = c_int
getNodeParamI.argtypes = [c_int, c_int]
__all__.append('getNodeParamI')

setNodeParamI = h3d.h3dSetNodeParamI
setNodeParamI.restype = None
setNodeParamI.argtypes = [c_int, c_int, c_int]
__all__.append('setNodeParamI')


_getNodeParamF = h3d.h3dGetNodeParamF
_getNodeParamF.restype = c_float
_getNodeParamF.argtypes = [c_int, c_int, c_int]
def getNodeParamF(node, param, idx):
	return _getNodeParamF(node, param, idx).value
__all__.append('getNodeParamF')


_setNodeParamF = h3d.h3dSetNodeParamF
_setNodeParamF.restype = None
_setNodeParamF.argtypes = [c_int, c_int, c_int, c_float]
def setNodeParamF(node, param, idx, value):
	return _setNodeParamF(node, param, idx, c_float(value))
__all__.append('setNodeParamF')


getNodeParamStr = h3d.h3dGetNodeParamStr
getNodeParamStr.restype = c_char_p
getNodeParamStr.argtypes = [c_int, c_int]
__all__.append('getNodeParamStr')


setNodeParamStr = h3d.h3dSetNodeParamStr
setNodeParamStr.restype = None
setNodeParamStr.argtypes = [c_int, c_int, c_char_p]
__all__.append('setNodeParamStr')


_getNodeAABB = h3d.h3dGetNodeAABB
_getNodeAABB.restype = None
_getNodeAABB.argtypes = [c_int,
		POINTER(c_float), POINTER(c_float), POINTER(c_float),
		POINTER(c_float), POINTER(c_float), POINTER(c_float),
		]
def getNodeAABB(node):
	minX, minY, minZ = c_float(), c_float(), c_float()
	maxX, maxY, maxZ = c_float(), c_float(), c_float()

	_getNodeAABB(node,
			byref(minX), byref(minY), byref(minZ),
			byref(maxX), byref(maxY), byref(maxZ),
			)
	return [[minX, minY, minZ], [maxX, maxY, maxZ]]
__all__.append('getNodeAABB')


findNodes = h3d.h3dFindNodes
findNodes.restype = c_int
findNodes.argtypes = [c_int, c_char_p, c_int]
__all__.append('findNodes')


getNodeFindResult = h3d.h3dGetNodeFindResult
getNodeFindResult.restype = c_int
getNodeFindResult.argtypes = [c_int]
__all__.append('getNodeFindResult')


_castRay = h3d.h3dCastRay
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


_getCastRayResult = h3d.h3dGetCastRayResult
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


checkNodeVisibility = h3d.h3dCheckNodeVisibility
checkNodeVisibility.restype = c_int
checkNodeVisibility.argtypes = [c_int, c_int, c_bool, c_bool]
__all__.append('checkNodeVisibility')


addGroupNode = h3d.h3dAddGroupNode
addGroupNode.restype = c_int
addGroupNode.argtypes = [c_int, c_char_p]
__all__.append('addGroupNode')


addModelNode = h3d.h3dAddModelNode
addModelNode.restype = c_int
addModelNode.argtypes = [c_int, c_char_p, c_int]
__all__.append('addModelNode')


setupModelAnimStage = h3d.h3dSetupModelAnimStage
setupModelAnimStage.restype = None
setupModelAnimStage.argtypes = [c_int, c_int, c_int, c_int, c_char_p, c_bool]
__all__.append('setupModelAnimStage')


_setModelAnimParams = h3d.h3dSetModelAnimParams
_setModelAnimParams.restype = None
_setModelAnimParams.argtypes = [c_int, c_int, c_float, c_float]
def setModelAnimParams(modelNode, stage, time, weight):
	_setModelAnimParams(modelNode, stage, c_float(time), c_float(weight))
__all__.append('setModelAnimParams')



_setModelMorper = h3d.h3dSetModelMorpher
_setModelMorper.restype = c_bool
_setModelMorper.argtypes = [c_int, c_char_p, c_float]
def setModelMorpher(modelNode, target, weight):
	return _setModelMorper(modelNode, target, c_float(weight))
__all__.append('setModelMorpher')


addMeshNode = h3d.h3dAddMeshNode
addMeshNode.restype = c_int
addMeshNode.argtypes = [c_int, c_char_p, c_int, c_int, c_int, c_int, c_int]
__all__.append('addMeshNode')


addJointNode = h3d.h3dAddJointNode
addJointNode.restype = c_int
addJointNode.argtypes = [c_int, c_char_p, c_int]
__all__.append('addJointNode')


addLightNode = h3d.h3dAddLightNode
addLightNode.restype = c_int
addLightNode.argtypes = [c_int, c_char_p, c_int, c_char_p, c_char_p]
__all__.append('addLightNode')


addCameraNode = h3d.h3dAddCameraNode
addCameraNode.restype = c_int
addCameraNode.argtypes = [c_int, c_char_p, c_int]
__all__.append('addCameraNode')


_setupCameraView = h3d.h3dSetupCameraView
_setupCameraView.restype = None
_setupCameraView.argtypes = [c_int, c_float, c_float, c_float, c_float]
def setupCameraView(cameraNode, fov, aspect, nearDist, farDist):
	_setupCameraView(cameraNode, c_float(fov), c_float(aspect), c_float(nearDist), c_float(farDist))
__all__.append('setupCameraView')


_getCameraProjMat = h3d.h3dGetCameraProjMat
_getCameraProjMat.restype = None
_getCameraProjMat.argtypes = [c_int, POINTER(c_float)]
def getCameraProjMat(node):
	buffer = (c_float * 16)
	_getCameraProjMat(node, buffer)

	return [x.value for x in buffer]
__all__.append('getCameraProjMat')


addEmitterNode = h3d.h3dAddEmitterNode
addEmitterNode.restype = c_int
addEmitterNode.argtypes = [c_int, c_char_p, c_int, c_int, c_int, c_int]
__all__.append('addEmitterNode')


_advanceEmitterTime = h3d.h3dAdvanceEmitterTime
_advanceEmitterTime.restype = None
_advanceEmitterTime.argtypes = [c_int, c_float]
def advanceEmitterTime(emitterNode, timeDelta):
	_advanceEmitterTime(emitterNode, c_float(timeDelta))
__all__.append('advanceEmitterTime')


hasEmitterFinished = h3d.h3dHasEmitterFinished
hasEmitterFinished.restype = c_bool
hasEmitterFinished.argtypes = [c_int]
__all__.append('hasEmitterFinished')



