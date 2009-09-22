// *************************************************************************************************
//
// Horde3D
//   Next-Generation Graphics Engine
// --------------------------------------
// Copyright (C) 2006-2009 Nicolas Schulz
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************

#ifndef _utils_H_
#define _utils_H_

#include "utMath.h"
#include <cstring>
#include <cstdlib>
#include <string>


bool parseString( char *s, unsigned int &pos, std::string &token );
bool parseFloat( char *s, unsigned int &pos, float &value );
bool parseUInt( char *s, unsigned int &pos, unsigned int &value );
bool parseInt( char *s, unsigned int &pos, int &value );
void removeGate( std::string &s );
std::string decodeURL( const std::string &url );
std::string extractFileName( const std::string &fullPath, bool extension );
std::string extractFilePath( const std::string &fullPath );

void log( const std::string &msg );

Matrix4f makeMatrix4f( float *floatArray16, bool y_up );

#endif // _utils_H_
