#!/usr/bin/env python

from distutils.core import setup, Extension
from distutils import sysconfig

ext_horde3d = Extension(
		name='horde3d.horde3d',
		sources=['horde3d/horde3d.cpp'],
		libraries=['Horde3D'],
		)

ext_horde3dutils = Extension(
		name='horde3d.horde3dutils',
		sources=['horde3d/horde3dutils.cpp'],
		libraries=['Horde3DUtils'],
		)

ext_horde3dterrain = Extension(
		name='horde3d.horde3dterrain',
		sources=['horde3d/horde3dterrain.cpp'],
		libraries=['Horde3D'],
		)

ext_modules = [ext_horde3d, ext_horde3dutils]

# uncomment the following line if you have disabled the terrain extension
ext_modules.append(ext_horde3dterrain)


# customize compiler to avoid warnings no -Wstrict-protoypes which is not supported by C++
distutils_customize_compiler = sysconfig.customize_compiler
def my_customize_compiler(compiler):
	retval = distutils_customize_compiler(compiler)

	try:
		compiler.compiler_so.remove('-Wstrict-prototypes')
	except (AttributeError, ValueError):
		pass

	return retval
sysconfig.customize_compiler = my_customize_compiler


setup(
		name='Horde3D',
		version='community svn trunk r33',
		description='Horde3D - Next-Generation Graphics Engine (python wrapper)',
		author='Florian Noeding',
		author_email='florian@noeding.com',
		license='LGPL',
		url='http://horde3d.org',
		packages=['horde3d'],
		scripts=[],
		ext_modules=ext_modules,
		)


