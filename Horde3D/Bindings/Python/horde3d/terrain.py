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

from ctypes import *

if not 'c_bool' in globals():
	c_bool = c_int


__all__ = []



try:
	h3d = cdll.LoadLibrary('libHorde3D.so')
except OSError:
	h3d = cdll.LoadLibrary('Horde3D.dll')

if hasattr(h3d, 'addTerrainNode'):
	SNT_TerrainNode = 100
	__all__.append('SNT_TerrainNode')

	class TerrainNodeParams(object):
		HeightMapRes = 10000
		MaterialRes = 10001
		MeshQuality = 10002
		SkirtHeight = 10003
		BlockSize = 10004
	__all__.append('TerrainNodeParams')


	addTerrainNode = h3d.addTerrainNode
	addTerrainNode.restype = c_int
	addTerrainNode.argtypes = [c_int, c_char_p, c_int, c_int]
	__all__.append('addTerrainNode')

	_createGeometryResource = h3d.createGeometryResource
	_createGeometryResource.restype = c_int
	_createGeometryResource.argtypes = [c_int, c_char_p, c_float]
	def createGeometryResource(node, resName, meshQuality):
		return _createGeometryResource(node, resName, c_float(meshQuality))
	__all__.append('createGeometryResource')




