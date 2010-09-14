// *************************************************************************************************
//
// Horde3D
//   Next-Generation Graphics Engine
// --------------------------------------
// Copyright (C) 2006-2011 Nicolas Schulz
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************

#ifndef _utPlatform_H_
#define _utPlatform_H_

#include <assert.h>

#if defined( WIN32 ) || defined( _WINDOWS )
#	if !defined( PLATFORM_WIN )
#		define PLATFORM_WIN
#	endif
#elif defined( __APPLE__ ) || defined( __APPLE_CC__ )
#   if !defined( PLATFORM_MAC )
#      define PLATFORM_MAC
#   endif
#else
#	if !defined( PLATFORM_LINUX )
#		define PLATFORM_LINUX
#	endif
#endif


#ifndef DLLEXP
#	ifdef PLATFORM_WIN
#		define DLLEXP extern "C" __declspec( dllexport )
#	else
#		if defined( __GNUC__ ) && __GNUC__ >= 4
#		  define DLLEXP extern "C" __attribute__ ((visibility("default")))
#   	else
#		  define DLLEXP extern "C"
#   	endif
#	endif
#endif

#ifndef PLATFORM_WIN
#	define _stricmp strcasecmp
#	define _mkdir( name ) mkdir( name, 0755 )
#endif

#ifndef _MSC_VER
#	define strncpy_s( dst, dstSize, src, count ) strncpy( dst, src, count < dstSize ? count : dstSize )
#endif

typedef long long int64;
typedef unsigned long long uint64;

// Runtime assertion
#if defined( _DEBUG )
#	define ASSERT( exp ) assert( exp );
#else
#	define ASSERT( exp )
#endif

// Support for MSVC static code analysis
#if defined( _MSC_VER ) && defined( _PREFAST_ )
#	define ASSERT( exp ) __analysis_assume( exp );
#endif

// Static compile-time assertion
namespace StaticAssert
{
	template< bool > struct FAILED;
	template<> struct FAILED< true > { };
}
#define ASSERT_STATIC( exp ) (StaticAssert::FAILED< (exp) != 0 >())


#ifdef _utPlatform_H___ValidatePlatform__
// Check the size of some common types
// Note: this function is never called but just wraps the compile time asserts
static void __ValidatePlatform__()
{
	ASSERT_STATIC( sizeof( int64 ) == 8 );
	ASSERT_STATIC( sizeof( int ) == 4 );
	ASSERT_STATIC( sizeof( short ) == 2 );
	ASSERT_STATIC( sizeof( char ) == 1 );
}
#endif

#endif // _utPlatform_H_
