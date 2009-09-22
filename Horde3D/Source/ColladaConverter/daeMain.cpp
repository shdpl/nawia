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
#include "utXMLParser.h"
#include "utils.h"

using namespace std;

bool ColladaDocument::parseFile( const string &fileName )
{
	// Parse Collada file
	XMLNode rootNode = XMLNode::parseFile( fileName.c_str(), "COLLADA" );
	if( rootNode.isEmpty() )
	{	
		log( "Error: File not found or invalid Collada document" );
		return false;
	}

	if( strcmp( rootNode.getAttribute( "version", "" ), "1.4.0") != 0 &&
		strcmp( rootNode.getAttribute( "version", "" ), "1.4.1") != 0 )
	{
		log( "Error: Unsupported Collada version" );
		return false;
	}

	// Parse asset
	XMLNode node1 = rootNode.getChildNode( "asset" );
	if( !node1.isEmpty() )
	{
		XMLNode node2 = node1.getChildNode( "up_axis" );
		if( !node2.isEmpty() && node2.getText() != 0x0 )
		{
			if( strcmp( node2.getText(), "Y_UP" ) == 0 ) y_up = true;
			else if( strcmp( node2.getText(), "Z_UP" ) == 0 ) y_up = false;
			else log( "Warning: Unsupported up-axis" );
		}
	}
	
	// Parse libraries
	libImages.parse( rootNode );

	libEffects.parse( rootNode );
	// Assign images
	for( unsigned int i = 0; i < libEffects.effects.size(); ++i )
	{
		DaeEffect &effect = *libEffects.effects[i];

		if( effect.diffuseMapId != "" )
		{
			effect.diffuseMap = libImages.findImage( effect.diffuseMapId );

			if( effect.diffuseMap == 0x0 )
				log(  "Warning: Image '" + effect.diffuseMapId + "' not found" );
		}
	}
	
	libMaterials.parse( rootNode );
	// Assign effects
	for( unsigned int i = 0; i < libMaterials.materials.size(); ++i )
	{
		DaeMaterial &material = *libMaterials.materials[i];

		material.effect = libEffects.findEffect( material.effectId );

		if( material.effect == 0x0 )
			log(  "Warning: Effect '" + material.effectId + "' not found" );
	}
	
	libGeometries.parse( rootNode );

	libControllers.parse( rootNode );

	libAnimations.parse( rootNode );
	
	libVisScenes.parse( rootNode );

	libNodes.parse( rootNode );

	// Visual scene instance
	bool foundScene = false;
	node1 = rootNode.getChildNode( "scene" );
	if( !node1.isEmpty() )
	{
		XMLNode node2 = node1.getChildNode( "instance_visual_scene" );
		if( !node2.isEmpty() )
		{
			string sceneId = node2.getAttribute( "url", "" );
			removeGate( sceneId );
			scene = libVisScenes.findVisualScene( sceneId );
			if( scene != 0x0 ) foundScene = true;

			if( !node2.getChildNode( "instance_visual_scene", 1 ).isEmpty() )
				log( "Warning: Found more than one scene instance; ignoring following instances" );
		}
	}
	
	if( !foundScene ) log( "Warning: No scene instance found" );
	
	return true;
}
