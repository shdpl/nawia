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

#include "Horde3D.h"
#include "utPlatform.h"
#include "utMath.h"
#include <math.h>
#ifdef PLATFORM_WIN
#	define WIN32_LEAN_AND_MEAN 1
#	define NOMINMAX
#	include <windows.h>
#endif
#ifndef PLATFORM_MAC
#	include <GL/gl.h>
#endif
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <fstream>
#include <iomanip>
using namespace std;

#ifdef __MINGW32__
#undef PLATFORM_WIN
#endif


struct InfoBox
{
	H3DRes  fontMatRes;
	float   x, y_row0;
	float   width;
	int     row;
} infoBox;

ofstream            outf;
map< int, string >  resourcePaths;

#ifdef PLATFORM_WIN
HDC    hDC = 0;
HGLRC  hRC = 0;
#endif


string cleanPath( string path )
{
	// Remove spaces at the beginning
	int cnt = 0;
	for( int i = 0; i < (int)path.length(); ++i )
	{
		if( path[i] != ' ' ) break;
		else ++cnt;
	}
	if( cnt > 0 ) path.erase( 0, cnt );

	// Remove slashes, backslashes and spaces at the end
	cnt = 0;
	for( int i = (int)path.length() - 1; i >= 0; --i )
	{
		if( path[i] != '/' && path[i] != '\\' && path[i] != ' ' ) break;
		else ++cnt;
	}

	if( cnt > 0 ) path.erase( path.length() - cnt, cnt );

	return path;
}


// =================================================================================================
// Exported API functions
// =================================================================================================

// TODO: Make OpenGL functions platform independent

DLLEXP bool h3dutInitOpenGL( int hdc )
{
#ifdef PLATFORM_WIN
	hDC = (HDC)(__int64)hdc;
	
	// Init OpenGL rendering context
	int pixelFormat;

	static PIXELFORMATDESCRIPTOR pfd = 
	{
		sizeof( PIXELFORMATDESCRIPTOR ),            // Size of this pixel format descriptor
		1,                                          // Version number
		PFD_DRAW_TO_WINDOW |                        // Format must support window
		PFD_SUPPORT_OPENGL |                        // Format must support OpenGL
		PFD_DOUBLEBUFFER,                           // Must support double buffering
		PFD_TYPE_RGBA,                              // Request a RGBA format
		32,                                         // Select our color depth
		0, 0, 0, 0, 0, 0,                           // Color bits ignored
		8,                                          // 8Bit alpha buffer
		0,                                          // Shift bit ignored
		0,                                          // No accumulation buffer
		0, 0, 0, 0,                                 // Accumulation bits ignored
		32,                                         // 32Bit z-buffer (depth buffer)  
		8,                                          // 8Bit stencil buffer
		0,                                          // No auxiliary buffer
		PFD_MAIN_PLANE,                             // Main drawing layer
		0,                                          // Reserved
		0, 0, 0                                     // Layer masks ignored
	};

	if( !(pixelFormat = ChoosePixelFormat( hDC, &pfd )) ) 
	{
		return false;
	}

	if( !SetPixelFormat( hDC, pixelFormat, &pfd ) ) 
	{
		return false;
	}

	if( !(hRC = wglCreateContext( hDC )) ) 
	{
		return false;
	}

	if( !wglMakeCurrent( hDC, hRC ) ) 
	{
		wglDeleteContext( hRC );
		return false;
	}

	return true;
	
#else
	return false;
#endif
}


DLLEXP void h3dutReleaseOpenGL()
{
#ifdef PLATFORM_WIN
	if( hDC == 0 || hRC == 0 ) return;

	if( !wglMakeCurrent( 0x0, 0x0 ) ) 
	{
		return;
	}
	if( !wglDeleteContext( hRC ) ) 
	{
		return;
	}
	hRC = 0;
#endif
}


DLLEXP void h3dutSwapBuffers()
{
#ifdef PLATFORM_WIN
	if( hDC == 0 || hRC == 0 ) return;

	SwapBuffers( hDC );
#endif
}


DLLEXP const char *h3dutGetResourcePath( int type )
{
	return resourcePaths[type].c_str();
}


DLLEXP void h3dutSetResourcePath( int type, const char *path )
{
	string s = path != 0x0 ? path : "";

	resourcePaths[type] = cleanPath( s );
}


DLLEXP bool h3dutLoadResourcesFromDisk( const char *contentDir )
{
	bool result = true;
	string dir;
	vector< string > dirs;

	// Split path string
	char *c = (char *)contentDir;
	do
	{
		if( *c != '|' && *c != '\0' )
			dir += *c;
		else
		{
			dir = cleanPath( dir );
			if( dir != "" ) dir += '/';
			dirs.push_back( dir );
			dir = "";
		}
	} while( *c++ != '\0' );
	
	// Get the first resource that needs to be loaded
	int res = h3dQueryUnloadedResource( 0 );
	
	while( res != 0 )
	{
		ifstream inf;
		
		// Loop over search paths and try to open files
		for( unsigned int i = 0; i < dirs.size(); ++i )
		{
			string fileName = dirs[i] + resourcePaths[h3dGetResType( res )] + "/" + h3dGetResName( res );
			inf.clear();
			inf.open( fileName.c_str(), ios::binary );
			if( inf.good() ) break;
		}

		// Open resource file
		if( inf.good() ) // Resource file found
		{
			// Find size of resource file
			inf.seekg( 0, ios::end );
			int size = inf.tellg();
			// Copy resource file to memory
			char *data = new char[size + 1];
			inf.seekg( 0 );
			inf.read( data, size );
			inf.close();
			// Null-terminate buffer - this is important for XML data
			data[size] = '\0';
			// Send resource data to engine
			result &= h3dLoadResource( res, data, size + 1 );
			delete[] data;
		}
		else // Resource file not found
		{
			// Tell engine to use the dafault resource by using NULL as data pointer
			h3dLoadResource( res, 0x0, 0 );
			result = false;
		}
		// Get next unloaded resource
		res = h3dQueryUnloadedResource( 0 );
	}

	return result;
}


DLLEXP bool h3dutDumpMessages()
{
	if( !outf.is_open() )
	{
		// Reset log file
		outf.setf( ios::fixed );
		outf.precision( 3 );
		outf.open( "Horde3D_Log.html", ios::out );
		if( !outf ) return false;

		outf << "<html>\n";
		outf << "<head>\n";
		outf << "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />\n";
		outf << "<title>Horde3D Log</title>\n";
		outf << "<style type=\"text/css\">\n";
		
		outf << "body, html {\n";
		outf << "background: #000000;\n";
		outf << "width: 1000px;\n";
		outf << "font-family: Arial;\n";
		outf << "font-size: 16px;\n";
		outf << "color: #C0C0C0;\n";
		outf << "}\n";

		outf << "h1 {\n";
		outf << "color : #FFFFFF;\n";
		outf << "border-bottom : 1px dotted #888888;\n";
		outf << "}\n";

		outf << "pre {\n";
		outf << "font-family : arial;\n";
		outf << "margin : 0;\n";
		outf << "}\n";

		outf << ".box {\n";
		outf << "border : 1px dotted #818286;\n";
		outf << "padding : 5px;\n";
		outf << "margin: 5px;\n";
		outf << "width: 950px;\n";
		outf << "background-color : #292929;\n";
		outf << "}\n";

		outf << ".err {\n";
		outf << "color: #EE1100;\n";
		outf << "font-weight: bold\n";
		outf << "}\n";

		outf << ".warn {\n";
		outf << "color: #FFCC00;\n";
		outf << "font-weight: bold\n";
		outf << "}\n";

		outf << ".info {\n";
		outf << "color: #C0C0C0;\n";
		outf << "}\n";

		outf << ".debug {\n";
		outf << "color: #CCA0A0;\n";
		outf << "}\n";

		outf << "</style>\n";
		outf << "</head>\n\n";

		outf << "<body>\n";
		outf << "<h1>Horde3D Log</h1>\n";
		outf << "<h3>" << h3dGetVersionString() << "</h3>\n";
		outf << "<div class=\"box\">\n";
		outf << "<table>\n";

		outf.flush();
	}

	int level;
	float time;
	string text = h3dGetMessage( &level, &time );
	
	while( text != "" )
	{
		outf << "<tr>\n";
		outf << "<td width=\"100\">";
		outf << time;
		outf << "</td>\n";
		outf << "<td class=\"";
		
		switch( level )
		{
		case 1:
			outf << "err";
			break;
		case 2:
			outf << "warn";
			break;
		case 3:
			outf << "info";
			break;
		default:
			outf << "debug";
		}
		
		outf << "\"><pre>\n";
		outf << text.c_str();
		outf << "\n</pre></td>\n";
		outf << "</tr>\n";

		outf.flush();
		
		text = h3dGetMessage( &level, &time );
	}
	
	return true;
}


DLLEXP void h3dutShowText( const char *text, float x, float y, float size, float colR,
                           float colG, float colB, H3DRes fontMaterialRes, int layer )
{
	if( text == 0x0 ) return;
	
	int pos = 0;
	float width = size;
	
	do
	{
		unsigned char ch = (unsigned char)*text++;

		float u0 = 0.0625f * (ch % 16);
		float v0 = 1.0f - 0.0625f * (ch / 16);

		h3dShowOverlay( x + width * 0.5f * pos, y, u0, v0,
		                x + width * 0.5f * pos, y + size, u0, v0 - 0.0625f,
		                x + width * 0.5f * pos + width, y + size, u0 + 0.0625f, v0 - 0.0625f,
		                x + width * 0.5f * pos + width, y, u0 + 0.0625f, v0,
		                colR, colG, colB, 1, fontMaterialRes, layer );
		++pos;
	} while( *text );
}


void beginInfoBox( float x, float y, float width, int numRows, const char *title,
                   H3DRes fontMaterialRes, H3DRes boxMaterialRes )
{
	float fontSize = 0.028f;
	float barHeight = fontSize + 0.01f;
	float bodyHeight = numRows * 0.035f + 0.005f;
	
	infoBox.fontMatRes = fontMaterialRes;
	infoBox.x = x;
	infoBox.y_row0 = y + barHeight + 0.005f;
	infoBox.width = width;
	infoBox.row = 0;
	
	// Title bar
	h3dShowOverlay( x, y, 0, 1, x, y + barHeight, 0, 0,
	                x + width, y + barHeight, 1, 0, x + width, y, 1, 1,
	                0.15f, 0.23f, 0.31f, 0.8f, boxMaterialRes, 6 );

	// Title text
	h3dutShowText( title, x + 0.005f, y + 0.005f, fontSize, 0.7f, 0.85f, 0.95f, fontMaterialRes, 7 );

	// Body
	float yy = y + barHeight;
	h3dShowOverlay( x, yy, 0, 1, x, yy + bodyHeight, 0, 0,
	                x + width, yy + bodyHeight, 1, 0, x + width, yy, 1, 1,
	                0.12f, 0.12f, 0.12f, 0.5f, boxMaterialRes, 6 );
}


void addInfoBoxRow( const char *column1, const char *column2 )
{
	float fontSize = 0.026f;
	float fontWidth = fontSize * 0.5f;
	float x = infoBox.x;
	float y = infoBox.y_row0 + infoBox.row++ * 0.035f;

	// First column
	h3dutShowText( column1, x + 0.005f, y, fontSize, 1, 1, 1, infoBox.fontMatRes, 7 );

	// Second column
	x = infoBox.x + infoBox.width - ((strlen( column2 ) - 1) * fontWidth + fontSize);
	h3dutShowText( column2, x - 0.005f, y, fontSize, 1, 1, 1, infoBox.fontMatRes, 7 );
}


DLLEXP void h3dutShowFrameStats( H3DRes fontMaterialRes, H3DRes boxMaterialRes, int mode )
{
	static stringstream text;
	static float curFPS = 30;
	static float timer = 100;
	static float fps = 30;
	static float frameTime = 0;
	static float customTime = 0;
	static float animTime = 0;

	// Calculate FPS
	float curFrameTime = h3dGetStat( H3DStats::FrameTime, true );
	curFPS = 1000.0f / curFrameTime;
	
	timer += curFrameTime / 1000.0f;
	if( timer > 0.8f )
	{	
		fps = curFPS;
		frameTime = curFrameTime;
		customTime = h3dGetStat( H3DStats::CustomTime, true );
		animTime = h3dGetStat( H3DStats::AnimationTime, true );
		timer = 0;
	}
	else
	{
		// Reset counters
		h3dGetStat( H3DStats::CustomTime, true );
		h3dGetStat( H3DStats::AnimationTime, true );
	}
	
	if( mode > 0 )
	{
		// InfoBox
		beginInfoBox( 0.03f, 0.03f, 0.3f, 4, "Frame Stats", fontMaterialRes, boxMaterialRes );
		
		// FPS
		text.str( "" );
		text << fixed << setprecision( 2 ) << fps;
		addInfoBoxRow( "FPS", text.str().c_str() );
		
		// Triangle count
		text.str( "" );
		text << (int)h3dGetStat( H3DStats::TriCount, true );
		addInfoBoxRow( "Tris", text.str().c_str() );
		
		// Number of batches
		text.str( "" );
		text << (int)h3dGetStat( H3DStats::BatchCount, true );
		addInfoBoxRow( "Batches", text.str().c_str() );
		
		// Number of lighting passes
		text.str( "" );
		text << (int)h3dGetStat( H3DStats::LightPassCount, true );
		addInfoBoxRow( "Lights", text.str().c_str() );
	}

	if( mode > 1 )
	{
		// CPU time
		beginInfoBox( 0.03f, 0.3f, 0.3f, 3, "CPU Time", fontMaterialRes, boxMaterialRes );
		
		// Frame time
		text.str( "" );
		text << frameTime << "ms";
		addInfoBoxRow( "Frame Total", text.str().c_str() );
		
		// Animation time
		text.str( "" );
		text << animTime << "ms";
		addInfoBoxRow( "Animation", text.str().c_str() );
		
		// Custom time
		text.str( "" );
		text << customTime << "ms";
		addInfoBoxRow( "Custom", text.str().c_str() );

		// Video memory
		beginInfoBox( 0.03f, 0.5f, 0.3f, 2, "VMem", fontMaterialRes, boxMaterialRes );
		
		// Textures
		text.str( "" );
		text << h3dGetStat( H3DStats::TextureVMem, false ) << "mb";
		addInfoBoxRow( "Textures", text.str().c_str() );
		
		// Geometry
		text.str( "" );
		text << h3dGetStat( H3DStats::GeometryVMem, false ) << "mb";
		addInfoBoxRow( "Geometry", text.str().c_str() );
	}
}


DLLEXP void h3dutFreeMem( char **ptr )
{
	if( ptr == 0x0 ) return;
	
	delete[] *ptr; *ptr = 0x0;
}


DLLEXP bool h3dutCreateTGAImage( const unsigned char *pixels, int width, int height, int bpp,
                                 char **outData, int *outSize )
{
	if( pixels == 0x0 || outData == 0x0 || outSize == 0x0 ) return false;
	
	*outData = 0x0; *outSize = 0;
	
	if( bpp != 24 && bpp != 32 ) return false;

	*outSize = width * height * (bpp / 8) + 18;
	char *data = new char[*outSize];
	*outData = data;

	// Build TGA header
	char c;
	short s;
	c = 0;      memcpy( data, &c, 1 ); data += 1;  // idLength
	c = 0;      memcpy( data, &c, 1 ); data += 1;  // colmapType
	c = 2;      memcpy( data, &c, 1 ); data += 1;  // imageType
	s = 0;      memcpy( data, &s, 2 ); data += 2;  // colmapStart
	s = 0;      memcpy( data, &s, 2 ); data += 2;  // colmapLength
	c = 16;     memcpy( data, &c, 1 ); data += 1;  // colmapBits
	s = 0;      memcpy( data, &s, 2 ); data += 2;  // x
	s = 0;      memcpy( data, &s, 2 ); data += 2;  // y
	s = width;  memcpy( data, &s, 2 ); data += 2;  // width
	s = height; memcpy( data, &s, 2 ); data += 2;  // height
	c = bpp;    memcpy( data, &c, 1 ); data += 1;  // bpp
	c = 0;      memcpy( data, &c, 1 ); data += 1;  // imageDesc

	// Copy data
	memcpy( data, pixels, width * height * (bpp / 8) );

	return true;
}


DLLEXP void h3dutPickRay( H3DNode cameraNode, float nwx, float nwy, float *ox, float *oy, float *oz,
                          float *dx, float *dy, float *dz )
{				
	// Transform from normalized window [0, 1] to normalized device coordinates [-1, 1]
	float cx( 2.0f * nwx - 1.0f );
	float cy( 2.0f * nwy - 1.0f );   
	
	// Get projection matrix
	Matrix4f projMat;
	h3dGetCameraProjMat( cameraNode, projMat.x );
	
	// Get camera view matrix
	const float *camTrans;
	h3dGetNodeTransMats( cameraNode, 0x0, &camTrans );		
	Matrix4f viewMat( camTrans );
	viewMat = viewMat.inverted();
	
	// Create inverse view-projection matrix for unprojection
	Matrix4f invViewProjMat = (projMat * viewMat).inverted();

	// Unproject
	Vec4f p0 = invViewProjMat * Vec4f( cx, cy, -1, 1 );
	Vec4f p1 = invViewProjMat * Vec4f( cx, cy, 1, 1 );
	p0.x /= p0.w; p0.y /= p0.w; p0.z /= p0.w;
	p1.x /= p1.w; p1.y /= p1.w; p1.z /= p1.w;
	
	if( h3dGetNodeParamI( cameraNode, H3DCamera::OrthoI ) == 1 )
	{
		float frustumWidth = h3dGetNodeParamF( cameraNode, H3DCamera::RightPlaneF, 0 ) -
		                     h3dGetNodeParamF( cameraNode, H3DCamera::LeftPlaneF, 0 );
		float frustumHeight = h3dGetNodeParamF( cameraNode, H3DCamera::TopPlaneF, 0 ) -
		                      h3dGetNodeParamF( cameraNode, H3DCamera::BottomPlaneF, 0 );
		
		Vec4f p2( cx, cy, 0, 1 );

		p2.x = cx * frustumWidth * 0.5f;
		p2.y = cy * frustumHeight * 0.5f;
		viewMat.x[12] = 0; viewMat.x[13] = 0; viewMat.x[14] = 0;
		p2 = viewMat.inverted() * p2;			

		*ox = camTrans[12] + p2.x;
		*oy = camTrans[13] + p2.y;
		*oz = camTrans[14] + p2.z;
	}
	else
	{
		*ox = camTrans[12];
		*oy = camTrans[13];
		*oz = camTrans[14];
	}
	*dx = p1.x - p0.x;
	*dy = p1.y - p0.y;
	*dz = p1.z - p0.z;
}

DLLEXP H3DNode h3dutPickNode( H3DNode cameraNode, float nwx, float nwy )
{	
	float ox, oy, oz, dx, dy, dz;
	h3dutPickRay( cameraNode, nwx, nwy, &ox, &oy, &oz, &dx, &dy, &dz );
	
	if( h3dCastRay( H3DRootNode, ox, oy, oz, dx, dy, dz, 1 ) == 0 )
	{
		return 0;
	}
	else
	{
		H3DNode intersectionNode = 0;
		if( h3dGetCastRayResult( 0, &intersectionNode, 0, 0 ) )
			return intersectionNode;
		else
			return 0;
	}

}


// =================================================================================================
// DLL entry point
// =================================================================================================

#ifdef PLATFORM_WIN
BOOL APIENTRY DllMain( HANDLE hModule, DWORD ul_reason_for_call, LPVOID lpReserved )
{
   switch( ul_reason_for_call )
	{
	case DLL_PROCESS_DETACH:
		// Close log file
		if( outf.is_open() )
		{
			outf << "</table>\n";
			outf << "</div>\n";
			outf << "</body>\n";
			outf << "</html>";
			outf.close();
		}
	break;
	}
	
	return TRUE;
}
#endif
