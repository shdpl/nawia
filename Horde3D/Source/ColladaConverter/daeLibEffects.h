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

#ifndef _daeLibEffects_H_
#define _daeLibEffects_H_

#include "utXMLParser.h"
#include "daeLibImages.h"
#include <string>
#include <vector>


struct DaeEffect
{
	std::string  id;
	std::string  name;
	std::string  diffuseMapId;
	DaeImage     *diffuseMap;


	DaeEffect()
	{
		diffuseMap = 0x0;
	}
	

	bool parse( const XMLNode &effectNode )
	{
		id = effectNode.getAttribute( "id", "" );
		if( id == "" ) return false;
		name = effectNode.getAttribute( "name", "" );

		XMLNode node1 = effectNode.getChildNode( "profile_COMMON" );
		if( node1.isEmpty() ) return true;

		XMLNode node2 = node1.getChildNode( "technique" );
		if( node2.isEmpty() ) return true;

		XMLNode node3 = node2.getChildNode( "phong" );
		if( node3.isEmpty() ) node3 = node2.getChildNode( "blinn" );
		if( node3.isEmpty() ) node3 = node2.getChildNode( "lambert" );
		if( node3.isEmpty() ) return true;

		XMLNode node4 = node3.getChildNode( "diffuse" );
		if( node4.isEmpty() ) return true;

		XMLNode node5 = node4.getChildNode( "texture" );
		if( node5.isEmpty() ) return true;

		std::string samplerId = node5.getAttribute( "texture", "" );
		if( samplerId == "" )return true;

		// This is a hack to support files that don't completely respect the COLLADA standard
		// and use the texture image directly instead of sampler2D
		if( node1.getChildNode( "newparam" ).isEmpty() )
		{
			diffuseMapId = samplerId;
			return true;
		}
		
		// Find sampler
		std::string surfaceId;
		int nodeItr2 = 0;
		node2 = node1.getChildNode( "newparam", nodeItr2 );
		while( !node2.isEmpty() )
		{
			if( node2.getAttribute( "sid" ) != 0x0 &&
				strcmp( node2.getAttribute( "sid" ), samplerId.c_str() ) == 0 )
			{
				node3 = node2.getChildNode( "sampler2D" );
				if( node3.isEmpty() ) return true;

				node4 = node3.getChildNode( "source" );
				if( node4.isEmpty() ) return true;

				if( node4.getText() != 0x0 )
					surfaceId = node4.getText();

				break;
			}
			
			node2 = node1.getChildNode( "newparam", ++nodeItr2 );
		}

		// Find surface
		nodeItr2 = 0;
		node2 = node1.getChildNode( "newparam", nodeItr2 );
		while( !node2.isEmpty() )
		{
			if( node2.getAttribute( "sid" ) != 0x0 &&
				strcmp( node2.getAttribute( "sid" ), surfaceId.c_str() ) == 0 )
			{
				node3 = node2.getChildNode( "surface" );
				if( node3.isEmpty() || node3.getAttribute( "type" ) == 0x0 ) return true;

				if( strcmp( node3.getAttribute( "type" ), "2D" ) == 0 )
				{
					node4 = node3.getChildNode( "init_from" );
					if( node4.isEmpty() ) return true;

					if( node4.getText() != 0x0 )
						diffuseMapId = node4.getText();
				}

				break;
			}
			
			node2 = node1.getChildNode( "newparam", ++nodeItr2 );
		}
		
		return true;
	}
};


struct DaeLibEffects
{
	std::vector< DaeEffect * >  effects;

	
	~DaeLibEffects()
	{
		for( unsigned int i = 0; i < effects.size(); ++i ) delete effects[i];
	}
	

	DaeEffect *findEffect( const std::string &id )
	{
		if( id == "" ) return 0x0;
		
		for( unsigned int i = 0; i < effects.size(); ++i )
		{
			if( effects[i]->id == id ) return effects[i];
		}

		return 0x0;
	}


	bool parse( const XMLNode &rootNode )
	{
		XMLNode node1 = rootNode.getChildNode( "library_effects" );
		if( node1.isEmpty() ) return true;

		int nodeItr2 = 0;
		XMLNode node2 = node1.getChildNode( "effect", nodeItr2 );
		while( !node2.isEmpty() )
		{
			DaeEffect *effect = new DaeEffect();
			if( effect->parse( node2 ) ) effects.push_back( effect );
			else delete effect;

			node2 = node1.getChildNode( "effect", ++nodeItr2 );
		}
		
		return true;
	}
};

#endif // _daeLibEffects_H_
