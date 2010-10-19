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
#include "DynLib.h"

#include "GameLog.h"

#if defined PLATFORM_WIN
#   define WIN32_LEAN_AND_MEAN
#   include <windows.h>
#endif

#if defined PLATFORM_MAC
#   include "macPlugins.h"
#endif


//-----------------------------------------------------------------------
DynLib::DynLib( const std::string& name ) : m_name( name ), m_hInst( 0x0 )
{
}

//-----------------------------------------------------------------------
DynLib::~DynLib()
{
}

//-----------------------------------------------------------------------
bool DynLib::load()
{
	// Already loaded ?
	if( m_hInst != 0x0 ) return true;

	// Log library load
	//GameLog::logMessage("Loading library %s", m_name.c_str());

	std::string name = m_name;
#if PLATFORM_LINUX
	// dlopen() does not add .so to the filename, like windows does for .dll
	if (name.substr(name.length() - 3, 3) != ".so")
		name += ".so";
#endif

	m_hInst = (DYNLIB_HANDLE)DYNLIB_LOAD( name.c_str() );

	if( m_hInst == 0x0 )
	{
		//GameLog::errorMessage( "Could not load dynamic library %s. System Error: %s", m_name.c_str(), dynlibError().c_str() );
		return false;
	}

	return true;
}

//-----------------------------------------------------------------------
bool DynLib::unload()
{
	// Log library unload        
	GameLog::logMessage("Unloading library %s", m_name);

	if( DYNLIB_UNLOAD( m_hInst ) )
	{
		GameLog::errorMessage( "Could not unload dynamic library %s. System Error: %s", m_name.c_str(), dynlibError().c_str() );
		return false;
	}
	return true;
}

//-----------------------------------------------------------------------
void* DynLib::getSymbol( const std::string& strName ) const
{
	return (void*)DYNLIB_GETSYM( m_hInst, strName.c_str() );
}

//-----------------------------------------------------------------------
std::string DynLib::dynlibError( void ) 
{
#if defined PLATFORM_WIN
	LPVOID lpMsgBuf; 
	FormatMessage( 
		FORMAT_MESSAGE_ALLOCATE_BUFFER | 
		FORMAT_MESSAGE_FROM_SYSTEM | 
		FORMAT_MESSAGE_IGNORE_INSERTS, 
		NULL, 
		GetLastError(), 
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), 
		(LPTSTR) &lpMsgBuf, 
		0, 
		NULL 
		); 
	std::string ret = (char*)lpMsgBuf;
	// Free the buffer.
	LocalFree( lpMsgBuf );
	return ret;
#elif defined PLATFORM_LINUX
	return std::string(dlerror());
#elif  defined PLATFORM_MAC
	return std::string(mac_errorBundle());
#else
	return "";
#endif
}

