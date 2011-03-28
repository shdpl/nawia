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
// Advanced Agent Animation
//
// -------------------------
// Copyright (C) 2011 Ionut Damian
//
// ****************************************************************************************
//
// For information on how to use AAA, please read the readme.txt in the project folder 
// (ex: GameEngine\Samples\AAA\readme.txt) or check out the website at: 
// http://mm-werkstatt.informatik.uni-augsburg.de/projects/aaa/
//
// ****************************************************************************************
#include "Bayesnet.h"
#include "GameEngine/GameEngine_Bayesnet.h"
#include "GameEngine/GameEngine.h"

Bayesnet::Bayesnet() {}

/* Setzen der Evidenzen und Abfrage der Knoten */
void Bayesnet::processBayesNet(int culture)
{
	double se_result[3];
	double speed_result[3];
	double sound_result[3];
	int att_node = GameEngine::entityWorldID("camera");

	//set new culture
	GameEngine::Bayes_setCulture( att_node, culture );

	se_result[0] = GameEngine::Bayes_getNodeValue( att_node, "SpatialEx", 0 );
	se_result[1] = GameEngine::Bayes_getNodeValue( att_node, "SpatialEx", 1 );
	se_result[2] = GameEngine::Bayes_getNodeValue( att_node, "SpatialEx", 2 );

	sound_result[0] = GameEngine::Bayes_getNodeValue( att_node, "Sound", 0 );
	sound_result[1] = GameEngine::Bayes_getNodeValue( att_node, "Sound", 1 );
	sound_result[2] = GameEngine::Bayes_getNodeValue( att_node, "Sound", 2 );

	speed_result[0] = GameEngine::Bayes_getNodeValue( att_node, "Speed", 0 );
	speed_result[1] = GameEngine::Bayes_getNodeValue( att_node, "Speed", 1 );
	speed_result[2] = GameEngine::Bayes_getNodeValue( att_node, "Speed", 2 );


	//Find the most probable solution
	if( se_result[0] >= se_result[2] )
		if( se_result[0] >= se_result[1] ) cur_se = "low";
		else cur_se = "medium";
	else if( se_result[2] > se_result[1] ) cur_se = "high";
		 else cur_se = "medium"; 

	//Find the most probable solution
	if( sound_result[0] >= sound_result[2] )
		if( sound_result[0] >= sound_result[1] ) cur_sound = "low";
		else cur_sound = "medium";
	else if( sound_result[2] > sound_result[1] ) cur_sound = "high";
		 else cur_sound = "medium"; 

	//Find the most probable solution
	if( speed_result[0] >= speed_result[2] )
		if( speed_result[0] >= speed_result[1] ) cur_speed = "low";
		else cur_speed = "medium";
	else if( speed_result[2] > speed_result[1] ) cur_speed = "high";
		 else cur_speed = "medium"; 
}
