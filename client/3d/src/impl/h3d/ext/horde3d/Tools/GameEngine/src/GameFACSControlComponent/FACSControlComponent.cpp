// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2008
// Programmers: Nikolaus Bee
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************
//
#include "FACSControlComponent.h"

#include "FACSControlManager.h"

#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEntity.h>
#include <GameEngine/GameLog.h>

#include <Horde3D/Horde3D.h>
#include <Horde3D/Horde3DUtils.h>

#include <XMLParser/utXMLParser.h>

using namespace std;

#define round(dbl) dbl >= 0.0 ? (int)(dbl + 0.5) : ((dbl - (double)(int)dbl) <= -0.5 ? (int)dbl : (int)(dbl - 0.5))

GameComponent* FACSControlComponent::createComponent( GameEntity* owner )
{
	return new FACSControlComponent( owner );
}

FACSControlComponent::FACSControlComponent(GameEntity* owner) : GameComponent(owner, "FACSControlComponent"), m_currentIntensity(1.0f), m_duration(0.1f)
{
	owner->addListener(GameEvent::FACS_SET_EXPRESSION, this); // deprecated
	owner->addListener(GameEvent::E_SPEAKING_STOPPED, this);
	owner->addListener(GameEvent::E_SET_FACS, this);

	FACSControlManager::instance()->addComponent(this);
}

FACSControlComponent::~FACSControlComponent()
{
	FACSControlManager::instance()->removeComponent(this);
}


void FACSControlComponent::executeEvent(GameEvent *event)
{
	switch(event->id())
	{
		case GameEvent::FACS_SET_EXPRESSION:
		{
			Property* prop =  static_cast<Property*>( event->data() );
			setFacialExpression( prop->Name, (float)prop->Value );
			break;
		}
		case GameEvent::E_SET_FACS:
		{
			const MorphTargetAnimation* facsExpression = static_cast<const MorphTargetAnimation*>( event->data() );
			setFacialExpression( facsExpression->Name, facsExpression->ToWeight, facsExpression->Duration );
			break;
		}
		case GameEvent::E_SPEAKING_STOPPED:
		{
			//10, 12, 16, 18, 20, 23, 24, 25, 27
			//setFacialExpression( m_currentExpression, 1.0f, 0.5f );
			break;
		}
	}
}

void FACSControlComponent::loadFromXml(const XMLNode* node)
{
	// TODO: define standard definition file?
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

			int k = fe.nChildNode( "AU" );
			map<int, float> auValues;
			for( int j = 0; j < k; j++ )
			{
				auValues[atoi( fe.getChildNode( "AU", j ).getAttribute( "id" ) )] = (float) atof( fe.getChildNode( "AU", j ).getAttribute( "value" ) );
			}

			m_expressions[name] = auValues;
			m_availableExpressions.push_back( name );
		}
	}
}

void FACSControlComponent::update()
{
}

void FACSControlComponent::render()
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

		MorphTargetAnimation morphTargetAnimData( au.c_str(), newAUs[(*iterOldAUs).first] * intensity, m_duration );
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
			MorphTargetAnimation morphTargetAnimData( "bottom_au_27", newAUs[(*iterOldAUs).first] * intensity, m_duration );
			GameEvent event( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData, this );
			if( m_owner->checkEvent( &event ) )
			{
				m_owner->executeEvent( &event );
			}

			MorphTargetAnimation morphTargetAnimData2( "bottomgums_au_27", newAUs[(*iterOldAUs).first] * intensity, m_duration );
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
			MorphTargetAnimation morphTargetAnimData( au.c_str(), (*iterNewAUs).second * intensity, m_duration );
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
				MorphTargetAnimation morphTargetAnimData( "bottom_au_27", (*iterNewAUs).second * intensity, m_duration );
				GameEvent event( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData, this );
				if( m_owner->checkEvent( &event ) )
				{
					m_owner->executeEvent( &event );
				}

				MorphTargetAnimation morphTargetAnimData2( "bottomgums_au_27", (*iterNewAUs).second * intensity, m_duration );
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

void FACSControlComponent::setFacialExpression( const string expression, const float intensity, const float duration )
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

		MorphTargetAnimation morphTargetAnimData( au.c_str(), newAUs[(*iterOldAUs).first] * intensity, duration );
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
			MorphTargetAnimation morphTargetAnimData( "bottom_au_27", newAUs[(*iterOldAUs).first] * intensity, duration );
			GameEvent event( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData, this );
			if( m_owner->checkEvent( &event ) )
			{
				m_owner->executeEvent( &event );
			}

			MorphTargetAnimation morphTargetAnimData2( "bottomgums_au_27", newAUs[(*iterOldAUs).first] * intensity, duration );
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
			MorphTargetAnimation morphTargetAnimData( au.c_str(), (*iterNewAUs).second * intensity, duration );
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
				MorphTargetAnimation morphTargetAnimData( "bottom_au_27", (*iterNewAUs).second * intensity, duration );
				GameEvent event( GameEvent::E_MORPH_TARGET_ANIM, &morphTargetAnimData, this );
				if( m_owner->checkEvent( &event ) )
				{
					m_owner->executeEvent( &event );
				}

				MorphTargetAnimation morphTargetAnimData2( "bottomgums_au_27", (*iterNewAUs).second * intensity, duration );
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

void FACSControlComponent::getAvailableExpressions( std::vector<std::string> &availableExpressions )
{
	availableExpressions = m_availableExpressions;
}