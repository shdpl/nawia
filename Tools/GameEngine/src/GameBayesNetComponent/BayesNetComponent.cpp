// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// ****************************************************************************************
//

// ****************************************************************************************
//
// GameEngine BayesNet Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Ionut Damian
// 
// ****************************************************************************************     
#include "BayesNetComponent.h"

#include "BayesNetManager.h"

#include <GameEngine/GameEntity.h>
#include <GameEngine/GameLog.h>
#include <GameEngine/GameEngine.h>

#include <XMLParser/utXMLParser.h>

GameComponent* BayesNetComponent::createComponent( GameEntity* owner )
{
	return new BayesNetComponent( owner );
}

BayesNetComponent::BayesNetComponent(GameEntity* owner) : GameComponent(owner, "BayesNetComponent")
{
	BayesNetManager::instance()->addComponent(this);

#ifdef BAYESNET_DISABLED
	GameLog::errorMessage( "BayesNetComponent: component is disabled. All events and function callups to this component will be ignored." );
#endif
}

BayesNetComponent::~BayesNetComponent()
{
#ifndef BAYESNET_DISABLED
	bayesNet->~DSL_network();
#endif
	BayesNetManager::instance()->removeComponent(this);
}

void BayesNetComponent::loadFromXml(const XMLNode* node)
{
#ifndef BAYESNET_DISABLED
	const char* filename = node->getAttribute( "file" );
	if( filename == 0 || strcmp ( "", filename ) == 0 )
	{
		GameLog::errorMessage( "BayesNetComponent: file name empty or not defined" );
		return;
	}

	bayesNet = new DSL_network();
	bayesNet->ReadFile(filename);
	bayesNet->SetDefaultBNAlgorithm(DSL_ALG_BN_LAURITZEN);
	bayesNet->UpdateBeliefs();
#else
	bayesNet = 0;
#endif
}

void BayesNetComponent::update()
{
}

void BayesNetComponent::setNewCulture( int culutre )
{
#ifndef BAYESNET_DISABLED
	int node = bayesNet->FindNode("Culture");

	bayesNet->ClearAllEvidence();
	bayesNet->GetNode(node)->Value()->SetEvidence(culutre);
	bayesNet->UpdateBeliefs();
#endif
}

void BayesNetComponent::setNodeValue( const char* node_name, int value )
{
#ifndef BAYESNET_DISABLED
	int node = bayesNet->FindNode(node_name);

	bayesNet->GetNode(node)->Value()->SetEvidence(value);
	bayesNet->UpdateBeliefs();
#endif
}

double BayesNetComponent::getNodeValue( const char* node_name, int value_index )
{
#ifndef BAYESNET_DISABLED
	int node = bayesNet->FindNode(node_name);

	DSL_sysCoordinates coord(*(bayesNet->GetNode(node)->Value()));

	//DSL_sysCoordinates* coord = new DSL_sysCoordinates(*(bayesNet->GetNode(node)->Value()));
	coord.GoToCurrentPosition();
	coord.GoTo(value_index);

	return coord.UncheckedValue();
#else
	return 0;
#endif
}

#ifndef BAYESNET_DISABLED
DSL_network* BayesNetComponent::getNetwork(){return bayesNet;}
#else
void* BayesNetComponent::getNetwork(){return bayesNet;}
#endif

void BayesNetComponent::updateNetwork()
{
#ifndef BAYESNET_DISABLED
	bayesNet->UpdateBeliefs();
#endif
}
        