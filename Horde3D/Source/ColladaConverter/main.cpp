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

#include "daeMain.h"
#include "converter.h"
#include "utPlatform.h"

#ifdef PLATFORM_WIN
#   define WIN32_LEAN_AND_MEAN 1
#	ifndef NOMINMAX
#		define NOMINMAX
#	endif
#	include <windows.h>
#	include <direct.h>
#else
#	include <sys/stat.h>
#endif

using namespace std;


int main( int argc, char **argv )
{
	log( "Horde3D Collada Converter" );
	log( "Version 1.0.0 Beta4" );
	log( "" );
	
	if( argc < 2 )
	{
		log( "Usage:" );
		log( "ColladaConv inputFile [optional arguments]" );
		log( "" );
		log( "inputFile       filename of the COLLADA document" );
		log( "-o outputName   name of the output files (without extension)" );
		log( "-dest outPath   destination path to which output is written" );
		log( "-noopt          disable geometry optimization" );
		log( "-anim           export animations only" );
		log( "-forceMat       force update of existing materials" );
		log( "-lodDist1       distance for LOD1" );
		log( "-lodDist2       distance for LOD2" );
		log( "-lodDist3       distance for LOD3" );
		log( "-lodDist4       distance for LOD4" );
		return 0;
	}
	
	string inName = argv[1];
	string outName = extractFileName( inName, false );
	string outPath = ".";
	bool forceMat = false, optimize = true, animsOnly = false;
	float lodDists[4] = { 10, 20, 40, 80 };

	for( int i = 2; i < argc; ++i )
	{
		if( strcmp( argv[i], "-o" ) == 0 )
		{
			if( argc > i + 1 )
			{	
				outName = argv[++i];
			}
			else
			{
				log( "Invalid argument" );
				return 0;
			}
		}
		else if( strcmp( argv[i], "-dest" ) == 0 )
		{
			if( argc > i + 1 )
			{	
				outPath = argv[++i];
			}
			else
			{
				log( "Invalid argument" );
				return 0;
			}
		}
		else if( strcmp( argv[i], "-noopt" ) == 0 )
		{
			optimize = false;
		}
		else if( strcmp( argv[i], "-anim" ) == 0 )
		{
			animsOnly = true;
		}
		else if( strcmp( argv[i], "-forceMat" ) == 0 )
		{
			forceMat = true;
		}
		else if( strcmp( argv[i], "-lodDist1" ) == 0 ||
		         strcmp( argv[i], "-lodDist2" ) == 0 ||
		         strcmp( argv[i], "-lodDist3" ) == 0 ||
		         strcmp( argv[i], "-lodDist4" ) == 0 )
		{
			if( argc > i + 1 )
			{	
				int index = 0;
				if( strcmp( argv[i], "-lodDist2" ) == 0 ) index = 1;
				else if( strcmp( argv[i], "-lodDist3" ) == 0 ) index = 2;
				else if( strcmp( argv[i], "-lodDist4" ) == 0 ) index = 3;
				
				lodDists[index] = (float)atof( argv[++i] );
			}
			else
			{
				log( "Invalid argument" );
				return 0;
			}
		}
		else
		{
			log( "Invalid argument" );
			return 0;
		}
	}

	ColladaDocument *colladaFile = new ColladaDocument();
	
	log( "Parsing collada file " + inName + "..." );
	if( !colladaFile->parseFile( inName ) )
	{
		return 0;
	}
	else
	{
		log( "Done." );
	}

	// Set output directory (needed when using drag&drop of input file on application)
#ifdef PLATFORM_WIN
	SetCurrentDirectory( extractFilePath( inName ).c_str() );
#endif
	
	// Convert
	log( "Converting data for model " + outName + "..." );
	if( !optimize ) log( "Geometry optimization disabled" );
	Converter *converter = new Converter( outPath, lodDists );
	converter->convertModel( *colladaFile, optimize );
	log( "Done." );
	
	if( !animsOnly )
	{
		_mkdir( (outPath + "/models").c_str() );
		_mkdir( (outPath + "/models/" + outName).c_str() );
		
		log( "Writing geometry..." );
		converter->saveModel( outName );
		log( "Done." );
		
		log( "Writing materials..." );
		converter->writeMaterials( *colladaFile, outName, forceMat );
		log( "Done." );
	}

	if( converter->hasAnimation() )
	{
		_mkdir( (outPath + "/animations").c_str() );
		log( "Writing animation..." );
		converter->writeAnimation( outName );
		log( "Done." );
	}

	log( "" );
	log( "Finished conversion." );
	
	delete colladaFile; colladaFile = 0x0;
	delete converter; converter = 0x0;
	
	return 1;
}
