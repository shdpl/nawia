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
#ifndef FACSCONTROLCOMPONENT_H_
#define FACSCONTROLCOMPONENT_H_

#include <GameEngine/config.h>
#include <GameEngine/GameComponent.h>

#include <string>
#include <map>

class FACSControlComponent : public GameComponent
{
public:
	static GameComponent*  createComponent( GameEntity* owner );

	FACSControlComponent(GameEntity* owner);
	virtual ~FACSControlComponent();

	bool checkEvent(GameEvent* event) { return true; }
	void executeEvent(GameEvent* event) {}
	void loadFromXml(const XMLNode* description);
	void update();

	void setFacialExpression( std::string expression, float intensity );
	void setFacialExpressionPAD( float p, float a, float d );
	void getAvailableExpressions( std::vector<std::string> &availableExpressions);

private:
	void resetFacialExpression();

	std::map<std::string, std::map<int, float>> m_expressions;
	std::vector<std::string> m_availableExpressions;
	std::string m_currentExpression;
	float  m_currentIntensity;
};

#endif
