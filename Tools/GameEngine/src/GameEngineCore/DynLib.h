/*
-----------------------------------------------------------------------------
This source file is part of OGRE
    (Object-oriented Graphics Rendering Engine)
For the latest info, see http://www.ogre3d.org/

Copyright (c) 2000-2006 Torus Knot Software Ltd
Also see acknowledgements in Readme.html

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place - Suite 330, Boston, MA 02111-1307, USA, or go to
http://www.gnu.org/copyleft/lesser.txt.

You may alternatively use this source under the terms of a specific version of
the OGRE Unrestricted License provided you have obtained such a license from
Torus Knot Software Ltd.
-----------------------------------------------------------------------------
*/

#ifndef _DynLib_H__
#define _DynLib_H__

#include "config.h"

#include <string>

#if defined PLATFORM_WIN
#    define DYNLIB_HANDLE hInstance
#    define DYNLIB_LOAD( a ) LoadLibrary( a )
#    define DYNLIB_GETSYM( a, b ) GetProcAddress( a, b )
#    define DYNLIB_UNLOAD( a ) !FreeLibrary( a )

struct HINSTANCE__;
typedef struct HINSTANCE__* hInstance;

#elif defined PLATFORM_LINUX
#    define DYNLIB_HANDLE void*
#    define DYNLIB_LOAD( a ) dlopen( a, RTLD_LAZY | RTLD_GLOBAL)
#    define DYNLIB_GETSYM( a, b ) dlsym( a, b )
#    define DYNLIB_UNLOAD( a ) dlclose( a )

#elif PLATFORM_MAC
#    define DYNLIB_HANDLE CFBundleRef
#    define DYNLIB_LOAD( a ) mac_loadExeBundle( a )
#    define DYNLIB_GETSYM( a, b ) mac_getBundleSym( a, b )
#    define DYNLIB_UNLOAD( a ) mac_unloadExeBundle( a )
#endif

/** \addtogroup GameEngineCore
 * @{
 */
 
/** Resource holding data about a dynamic library.
    @remarks
        This class holds the data required to get symbols from
        libraries loaded at run-time (i.e. from DLL's for so's)
    @author
        Adrian Cearnãu (cearny@cearny.ro)
    @since
        27 January 2002
    @see
        Resource
*/
class DynLib
{
public:
	/** Default constructor - used by DynLibManager.
	@warning
	Do not call directly
	*/
	DynLib( const std::string& name );

	/** Default destructor.
	*/
	~DynLib();

	/** Load the library
	*/
	bool load();
	/** Unload the library
	*/
	bool unload();
	/// Get the name of the library
	const std::string& getName(void) const { return m_name; }

	/**
	Returns the address of the given symbol from the loaded library.
	@param
	strName The name of the symbol to search for
	@returns
	If the function succeeds, the returned value is a handle to
	the symbol.
	@par
	If the function fails, the returned value is <b>NULL</b>.

	*/
	void* getSymbol( const std::string& strName ) const;

protected:

	std::string		m_name;

	/// Handle to the loaded library.
	DYNLIB_HANDLE	m_hInst;

	/// Gets the last loading error
	std::string dynlibError(void);

};

/*! @}*/
#endif
