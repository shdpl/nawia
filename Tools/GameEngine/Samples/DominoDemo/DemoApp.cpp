#include <iostream>

#include "DemoApp.H"

#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_SceneGraph.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Horde3D/Horde3D.h"
#include "Horde3D/Horde3DUtils.h"

DemoApp::DemoApp() : m_running(true)
{
	memset(m_keys, 0, sizeof(m_keys));
}

DemoApp::~DemoApp()
{
	GameEngine::release();
}

bool DemoApp::init(const char *fileName)
{
	if (GameEngine::init() && GameEngine::loadScene(fileName))
	{
		m_camID = GameEngine::entityWorldID("camera");
		m_camRX =0;
		m_camRY =0;
		return true;
	}
	else
		return false;	
}

void DemoApp::keyHandler()
{		
	unsigned int ball = GameEngine::entityWorldID("Ball");
	if( m_keys[118] )  // F7
	{
		Horde3D::setOption( EngineOptions::DebugViewMode, Horde3D::getOption(EngineOptions::DebugViewMode) != 0 ? 0 : 1 );	
		m_keys[118] = 0;
	}
	if( m_keys['W'] ) 
		GameEngine::translateEntityLocal(m_camID, 0, 0, -1);
	if( m_keys['S'] ) 
		GameEngine::translateEntityLocal(m_camID, 0, 0, 1);
	if( m_keys['A'] )
		GameEngine::translateEntityLocal(m_camID, -1, 0, 0);
	if( m_keys['D'] )
		GameEngine::translateEntityLocal(m_camID, 1, 0, 0);
	if( m_keys['I'] )
		GameEngine::translateEntityLocal( ball, 0, 0, 1 );
	if( m_keys['K'] )
		GameEngine::translateEntityLocal( ball, 0, 0, -1 );
	if( m_keys['J'] )
		GameEngine::translateEntityLocal( ball, -1, 0, 0 );
	if( m_keys['L'] )
		GameEngine::translateEntityLocal( ball, 1, 0, 0 );

	m_running = m_keys[27] == 0;
}

void DemoApp::mouseMoved(float x, float y)
{
	m_camRX += y * 0.001f * GameEngine::FPS();
	m_camRY -= x * 0.001f * GameEngine::FPS();
	GameEngine::setEntityRotation(m_camID, m_camRX, m_camRY, 0);
}

void DemoApp::render()
{
	keyHandler();
	GameEngine::update();
	Horde3DUtils::dumpMessages();
}

void DemoApp::keyboardCb(unsigned int param, bool pressed, void *userData)
{
	DemoApp* app = static_cast<DemoApp*>(userData);
	if (app)
	{
		app->m_keys[param] = pressed ? 1 : 0;
		if (!pressed)
			printf("%.3f\n",GameEngine::FPS());
	}
}

void DemoApp::mouseCb(float x, float y, void *userData)
{
	DemoApp* app = static_cast<DemoApp*>(userData);
	if (app) app->mouseMoved(x, y);
}

void DemoApp::renderCb(void *userData)
{
	DemoApp* app = static_cast<DemoApp*>(userData);
	if (app) app->render();
}

void DemoApp::resizeCb(int width, int height)
{	
	Horde3D::resize(0, 0, width, height);
}