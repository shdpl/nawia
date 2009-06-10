// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
// Programmers: Nikolaus Bee
//
// This file is part of the GameEngine of the University of Augsburg
// 
// You are not allowed to redistribute the code, if not explicitly authorized by the author
//
// ****************************************************************************************
#include "FACSControlComponent.h"

#include "FACSControlManager.h"

#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEntity.h>
#include <GameEngine/GameLog.h>

#include <XMLParser/utXMLParser.h>

using namespace std;

#define round(dbl) dbl >= 0.0 ? (int)(dbl + 0.5) : ((dbl - (double)(int)dbl) <= -0.5 ? (int)dbl : (int)(dbl - 0.5))

// TODO: put the available AUs in a definiton file to make the available AUs independent
const bool availableAUs[] = { true, true, false, true, true,	// 1-5
							true, true, false, true, true,		// 6-10
							true, true, true, true, true,		// 11-15
							true, true, true, false, true,		// 16-20
							false, true, true, true, true,		// 21-25
							false, true, false, false, false,	// 26-30
							false, false, false, false, false,	// 31-35
							false, false, false, false, false,	// 36-40
							false, false, true };				// 41-43

float au_01[21][21] = { 0 };
float au_02[21][21] = { 0 };
float au_04[21][21] = { 0 };
float au_05[21][21] = { 0 };
float au_06[21][21] = { 0 };
float au_07[21][21] = { 0 };
float au_11[21][21] = { 0 };
float au_12[21][21] = { 0 };
float au_20[21][21] = { 0 };

GameComponent* FACSControlComponent::createComponent( GameEntity* owner )
{
	return new FACSControlComponent( owner );
}

FACSControlComponent::FACSControlComponent(GameEntity* owner) : GameComponent(owner, "FACSControlComponent"), m_currentIntensity(1)
{
	FACSControlManager::instance()->addComponent(this);
}

FACSControlComponent::~FACSControlComponent()
{
	FACSControlManager::instance()->removeComponent(this);
}

void FACSControlComponent::loadFromXml(const XMLNode* node)
{
	// TODO: define standard definition file?
	// TODO: make it possible to define more than one facial expression definition file
	const char* filename = node->getAttribute( "file" );

	if( filename == 0 || strcmp ( "", filename ) == 0 )
	{
		GameLog::errorMessage( "FACSControlComponent: file name empty or not defined" );
	}
	else
	{
		XMLNode xmlNode = XMLNode::openFileHelper( filename, "Expression" );
		int n = xmlNode.nChildNode( "FacialExpression" );
		
		for( int i = 0; i < n; i++ )
		{
			XMLNode fe = xmlNode.getChildNode( "FacialExpression", i );
			string name( fe.getAttribute( "name" ) );

			float p = (float) atof( fe.getChildNode( "PAD", 0 ).getAttribute( "p", "0" ) );
			int p_i = (int) round( p * 10 + 10 );

			float a = (float) atof( fe.getChildNode( "PAD", 0 ).getAttribute( "a", "0" ) );
			int a_i = (int) round( a * 10 + 10 );

			float d = (float) atof( fe.getChildNode( "PAD", 0 ).getAttribute( "d", "0" ) );
			int d_i = (int) round( d * 10 + 10 );

			int k = fe.nChildNode( "AU" );
			map<int, float> auValues;
			for( int j = 0; j < k; j++ )
			{
				auValues[atoi( fe.getChildNode( "AU", j ).getAttribute( "id" ) )] = (float) atof( fe.getChildNode( "AU", j ).getAttribute( "value" ) );
				switch( atoi( fe.getChildNode( "AU", j ).getAttribute( "id" ) ) )
				{
				case 1:
					// anti alias?
					au_01[p_i][a_i] = (float) atof( fe.getChildNode( "AU", j ).getAttribute( "value" ) );
					break;
				case 2:
					au_02[p_i][a_i] = (float) atof( fe.getChildNode( "AU", j ).getAttribute( "value" ) );
					break;
				case 4:
					au_04[p_i][a_i] = (float) atof( fe.getChildNode( "AU", j ).getAttribute( "value" ) );
					break;
				case 5:
					au_05[p_i][a_i] = (float) atof( fe.getChildNode( "AU", j ).getAttribute( "value" ) );
					break;
				case 6:
					au_06[p_i][a_i] = (float) atof( fe.getChildNode( "AU", j ).getAttribute( "value" ) );
					break;
				case 7:
					au_07[p_i][a_i] = (float) atof( fe.getChildNode( "AU", j ).getAttribute( "value" ) );
					break;
				case 11:
					au_11[p_i][a_i] = (float) atof( fe.getChildNode( "AU", j ).getAttribute( "value" ) );
					break;
				case 12:
					au_12[p_i][a_i] = (float) atof( fe.getChildNode( "AU", j ).getAttribute( "value" ) );
					break;
				case 20:
					au_20[p_i][a_i] = (float) atof( fe.getChildNode( "AU", j ).getAttribute( "value" ) );
					break;
				default:
					// log file warning?
					break;
				}
			}

			m_expressions[name] = auValues;
			m_availableExpressions.push_back( name );
		}
	}
}

void FACSControlComponent::update()
{
}

void FACSControlComponent::setFacialExpression( const string expression, const float intensity )
{
	map<int, float> oldAUs = m_expressions[m_currentExpression];
	map<int, float>::iterator iterOldAUs;

	map<int, float> newAUs = m_expressions[expression];
	map<int, float>::iterator iterNewAUs;

	// resetting old morph targets
	for( iterOldAUs = oldAUs.begin(); iterOldAUs != oldAUs.end(); iterOldAUs++ )
	{
		char buffer[10];
		sprintf( buffer, "AU_%02i", (*iterOldAUs).first );
		string au( buffer );

		MorphTargetAnimation morphTargetAnimData( au.c_str(), newAUs[(*iterOldAUs).first] * intensity, 0.1f );
		GameEvent event( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData, this );
		if( m_owner->checkEvent( &event ) )
		{
			m_owner->executeEvent( &event );
		}
		else
		{
			//			MorphTarget morphTargetData( au.c_str(), newAUs[(*iterOldAUs).first] );
			//			GameEvent event(GameEvent::E_MORPH_TARGET, &morphTargetData, this);
			//			if (m_owner->checkEvent(&event)) m_owner->executeEvent(&event);
			// TODO: add warning about missing <MorphtargetAnimation /> here? Avoid spaming the log file...
		}

		// Special treatment for AU27
		if( (*iterOldAUs).first == 27 )
		{
			MorphTargetAnimation morphTargetAnimData( "bottom_au_27", newAUs[(*iterOldAUs).first] * intensity, 0.1f );
			GameEvent event( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData, this );
			if( m_owner->checkEvent( &event ) )
			{
				m_owner->executeEvent( &event );
			}

			MorphTargetAnimation morphTargetAnimData2( "bottomgums_au_27", newAUs[(*iterOldAUs).first] * intensity, 0.1f );
			GameEvent event2( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData2, this );
			if( m_owner->checkEvent( &event2 ) )
			{
				m_owner->executeEvent( &event2 );
			}
		}
	}

	// setting new morph targets
	for( iterNewAUs = newAUs.begin(); iterNewAUs != newAUs.end(); iterNewAUs++ )
	{
		char buffer[10];
		sprintf( buffer, "AU_%02i", (*iterNewAUs).first);
		string au( buffer );

		if( oldAUs[(*iterNewAUs).first] == 0 )
		{
			MorphTargetAnimation morphTargetAnimData( au.c_str(), (*iterNewAUs).second * intensity, 0.1f );
			GameEvent event( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData, this );
			if ( m_owner->checkEvent( &event ) )
			{
				m_owner->executeEvent( &event );
			}
			else
			{
				//				MorphTarget morphTargetData( au.c_str(), (*iterNewAUs).second );
				//				GameEvent event(GameEvent::E_MORPH_TARGET, &morphTargetData, this);
				//				if (m_owner->checkEvent(&event)) m_owner->executeEvent(&event);
				// TODO: add warning about missing <MorphtargetAnimation /> here? Avoid spaming the log file... (see above)
			}

			// Special treatment for AU27
			if( (*iterNewAUs).first == 27 )
			{
				MorphTargetAnimation morphTargetAnimData( "bottom_au_27", (*iterNewAUs).second * intensity, 0.1f );
				GameEvent event( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData, this );
				if( m_owner->checkEvent( &event ) )
				{
					m_owner->executeEvent( &event );
				}

				MorphTargetAnimation morphTargetAnimData2( "bottomgums_au_27", (*iterNewAUs).second * intensity, 0.1f );
				GameEvent event2( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData2, this );
				if( m_owner->checkEvent( &event2 ) )
				{
					m_owner->executeEvent( &event2 );
				}
			}
		}
	}

	m_currentExpression = expression;
	m_currentIntensity = intensity;
}


void FACSControlComponent::setFacialExpressionPAD( float p, float a, float d )
{
	int p_i = (int) round( p * 10 + 10 );
	int a_i = (int) round( a * 10 + 10 );
	MorphTargetAnimation morphTargetAnimData01( "AU_01", au_01[p_i][a_i], 0.1f );
	GameEvent event01( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData01, this );
	if( m_owner->checkEvent( &event01 ) )
	{
		m_owner->executeEvent( &event01 );
	}
	
	MorphTargetAnimation morphTargetAnimData02( "AU_02", au_02[p_i][a_i], 0.1f );
	GameEvent event02( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData02, this );
	if( m_owner->checkEvent( &event02 ) )
	{
		m_owner->executeEvent( &event02 );
	}

	MorphTargetAnimation morphTargetAnimData04( "AU_04", au_04[p_i][a_i], 0.1f );
	GameEvent event04( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData04, this );
	if( m_owner->checkEvent( &event04 ) )
	{
		m_owner->executeEvent( &event04 );
	}

	MorphTargetAnimation morphTargetAnimData05( "AU_05", au_05[p_i][a_i], 0.1f );
	GameEvent event05( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData05, this );
	if( m_owner->checkEvent( &event05 ) )
	{
		m_owner->executeEvent( &event05 );
	}

	MorphTargetAnimation morphTargetAnimData06( "AU_06", au_06[p_i][a_i], 0.1f );
	GameEvent event06( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData06, this );
	if( m_owner->checkEvent( &event06 ) )
	{
		m_owner->executeEvent( &event06 );
	}

	MorphTargetAnimation morphTargetAnimData07( "AU_07", au_07[p_i][a_i], 0.1f );
	GameEvent event07( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData07, this );
	if( m_owner->checkEvent( &event07 ) )
	{
		m_owner->executeEvent( &event07 );
	}

	MorphTargetAnimation morphTargetAnimData11( "AU_11", au_11[p_i][a_i], 0.1f );
	GameEvent event11( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData11, this );
	if( m_owner->checkEvent( &event11 ) )
	{
		m_owner->executeEvent( &event11 );
	}

	MorphTargetAnimation morphTargetAnimData12( "AU_12", au_12[p_i][a_i], 0.1f );
	GameEvent event12( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData12, this );
	if( m_owner->checkEvent( &event12 ) )
	{
		m_owner->executeEvent( &event12 );
	}

	MorphTargetAnimation morphTargetAnimData20( "AU_20", au_20[p_i][a_i], 0.1f );
	GameEvent event20( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData20, this );
	if( m_owner->checkEvent( &event20 ) )
	{
		m_owner->executeEvent( &event20 );
	}
}

void FACSControlComponent::resetFacialExpression()
{
	int size = sizeof( availableAUs ) / sizeof ( availableAUs[0] );
	for( int i = 0; i < size; i++ )
	{
		if( availableAUs[i] )
		{
			char buffer[10];
			sprintf( buffer, "AU_%02i", i+1 );
			string au( buffer );

			MorphTarget morphTargetData( au.c_str(), 0.0f );

			GameEvent event( GameEvent::E_MORPH_TARGET, &morphTargetData, this );		
			if( m_owner->checkEvent( &event ) ) m_owner->executeEvent( &event );
		}
	}
}

void FACSControlComponent::getAvailableExpressions( std::vector<std::string> &availableExpressions )
{
	availableExpressions = m_availableExpressions;
}