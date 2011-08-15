#!/usr/bin/python

#
# Copyright (C) 2008 Florian Noeding (florian at noeding dot com)
#
# This file may be used under the terms of the GNU General Public
# License version 2.0 as published by the Free Software Foundation.
#
# This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
# WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
#



import re
import sys


def stripComments(s):
	# strip single line comments
	r = re.compile('//.*', re.MULTILINE)
	s = r.sub('', s)

	# strip multiline comments
	r = re.compile('/\*.*?\*/', re.MULTILINE | re.DOTALL)
	s = r.sub('', s)


	return s


def fixNewlines(s):
	return s.replace('\r\n', '\n')


def stripPreprocessor(s):
	r = []
	for line in s.splitlines():
		l = line.strip()
		if not l or l.startswith('#'):
			continue

		r.append(line)

	return '\n'.join(r)

if len(sys.argv) != 2:
	print 'Convert C++ header files to a derelict D binding'
	print
	print 'To use this tool just pass the path/filename to the C++ header of Horde3D you want to use. Then pipe the output of this program into a file. Example:'
	print './maked.py ../C++/Horde3D.h > horde3d.d'
	print './maked.py ../C++/Horde3DUtils.h > horde3dutils.d'
	sys.exit(1)

s = file(sys.argv[1]).read()
s = fixNewlines(s)
s = stripComments(s)
s = stripPreprocessor(s)

result = []
result.append('''// *************************************************************************************************
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

''')


# module name / namespace
rnamespace = re.compile('namespace (\w+)')
namespace = rnamespace.findall(s)
s = rnamespace.sub('', s)

assert(len(namespace) == 1)
namespace = namespace[0]

result.append('module derelict.horde3d.%s;' % namespace.lower())
result.append('\n\n')
result.append('private import derelict.util.loader;')

if namespace.lower() != 'horde3d':
	result.append('private import derelict.horde3d.horde3d;')

result.append('\n\n')

# typedefs
rtypedef = re.compile('(typedef [^;]+;)')
typedefs = rtypedef.findall(s)
s = rtypedef.sub('', s)

result.extend(typedefs)
result.append('\n')


# constants
rconstant = re.compile('const(.*?=.*?;)', re.MULTILINE | re.DOTALL)
constants = rconstant.findall(s)
s = rconstant.sub('', s)

for x in constants:
	result.append('const %s' % x)
result.append('\n')


# enums
renum = re.compile('struct\\s(\\w+)\\s*{\\s*enum\\s*\\w+\\s*{(.*?)}\\s*;?\\s*}\\s*', re.MULTILINE | re.DOTALL)
enums = renum.findall(s)
s = renum.sub('', s)

for x in enums:
	result.append('enum %s' % x[0])
	result.append('{')
	for line in x[1].splitlines():
		line = line.strip()
		if not line:
			continue
		result.append('\t%s' % line.strip())
	result.append('}')
	result.append('\n')
result.append('\n')



# functions, loader
rfunction = re.compile('DLL\\s*([^;]*?)\\s*(\\w+)\\s*\\(([^;]*?)\\)\\s*;')
functions = rfunction.findall(s)
s = rfunction.sub('', s)

def fixEnums(s):
	i = s.find('::')
	if i >= 0:
		j = i
		while j < len(s):
			if s[j].isspace():
				break
			j += 1
		s = s[0:i] + s[j:]

	return s


def fixTypes(s):
	s = s.replace('const', '')
	s = s.replace('unsigned ', 'u')
	s = s.replace('uchar', 'ubyte') # FIXME ??? there is no uchar type...
	s = fixEnums(s)

	return s


result.append('extern (C)')
result.append('{')
for x in functions:
	retType, fname, params = x

	retType = fixTypes(retType)
	params = fixTypes(params)


	result.append('\t typedef %s function(%s) pf%s;' % (retType.strip(), params.strip(), fname.strip()))

result.append('}')
result.append('\n')
result.append('struct %s' % namespace)
result.append('{')
result.append('static:')
for x in functions:
	result.append('\tpf%s %s;' % (x[1], x[1]))
result.append('}\n')
result.append('private void load(SharedLib lib)')
result.append('{')
result.append('\twith(%s)' % namespace)
result.append('\t{')
for x in functions:
	result.append('\t\tbindFunc(%s)("%s", lib);' % (x[1], x[1]))
result.append('\t}')
result.append('}')


result.append('''GenericLoader Derelict%s;
static this()
{
	Derelict%s.setup("%s.dll",
		"lib%s.so",
		"",
		&load);
}
''' % (namespace, namespace, namespace, namespace))


# check if we have converted everything
error = False
for x in s.splitlines():
	x = x.strip()
	if not x:
		continue
	if x in [';', '{', '}', '};']:
		continue
	
	if not error:
		print 'could not convert whole file!'
		print 'remaining:'

	error = True
	print x
if error:
	sys.exit(1)



print '\n'.join(result)
