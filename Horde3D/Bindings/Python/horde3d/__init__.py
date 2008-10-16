# *************************************************************************************************
#
# Horde3D
#   Next-Generation Graphics Engine
# --------------------------------------
# Copyright (C) 2006-2008 Nicolas Schulz
#               2008 Florian Noeding (Python wrapper)
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

from horde3d import _getConstants as _h3dGetConstants
_getConstantFuncs = [_h3dGetConstants]

import horde3dutils as utils
from horde3d import *


# get optional extensions
try:
	import horde3dterrain as terrain
	from horde3dterrain import _getConstants as _h3dTerrainGetConstants

	_getConstantFuncs.append(_h3dTerrainGetConstants)
except ImportError:
	print 'terrain not available'


for gcf in _getConstantFuncs:
	for k, v in gcf().items():
		if type(v) == dict:
			s = 'class %s:\n\tpass' % k
			stmt = compile(s, 'horde3d', 'single')
			eval(stmt)

			for kk, vv in v.items():
				s = '%s.%s = %d' % (k, kk, vv)
				stmt = compile(s, 'horde3d', 'single')
				eval(stmt)

		else:
			s = '%s = %d' % (k, v)
			stmt = compile(s, 'horde3d', 'single')
			eval(stmt)


