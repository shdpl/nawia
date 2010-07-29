#include <iostream>
#include <sstream>

#include "AlfredApp.h"

#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_Animations.h"
#include "GameEngine/GameEngine_FACSControl.h"
#include "GameEngine/GameEngine_IK.h"
#include "GameEngine/GameEngine_SAPI.h"
#include "GameEngine/GameEngine_SceneGraph.h"
#include <GameEngine/GameEntity.h>

#include <stdio.h>
#include <math.h>

using namespace std;

int AlfredApp::strtoken( char *str, char *separator, char *token[] )
{
	int i = 0;
	token[0] = strtok( str, separator );

	while( token[i] ) {
		i++;
		token[i] = strtok( NULL, separator );
	}

	return i;
}


AlfredApp::AlfredApp() : m_running(true)
{
	memset(m_keys, 0, sizeof(m_keys));
}

AlfredApp::~AlfredApp()
{
	GameEngine::release();
}

bool AlfredApp::init(const char *fileName)
{
	if (GameEngine::init() && GameEngine::loadScene(fileName))
	{		
		return true;
	}
	else
	{
		return false;
	}
}

void AlfredApp::keyHandler()
{		

	if( m_keys['1'] )  // 1
	{	
		// morph target name, value, time
		MorphTargetAnimation blink( "AU_43", 1.0f, 0.05f );
		GameEvent blinkEvent( GameEvent::E_MORPH_TARGET_ANIM, &blink, NULL );
		GameEngine::sendEvent( GameEngine::entityWorldID( "Alfred" ), &blinkEvent );
		const char* utterance = "Hello world!";
		GameEvent speakEvent( GameEvent::E_SPEAK, GameEventData(utterance), NULL );
		GameEngine::sendEvent( GameEngine::entityWorldID( "Alfred" ), &speakEvent );

		m_keys['1'] = 0;
	}

	if( m_keys['2'] )
	{
		// IKData(targetX, targetY, targetZ, moveLEye, moveREye, moveNeck, head_pitch)
		// targetX, targetY, targetZ: gaze target position (floats)
		// moveLEye: move left eye (true or false)
		// moveNeck: move head (true or false)
		GameEvent gazeEvent(GameEvent::IK_GAZE, new IKData(-1.5f, 5.4f, 10.0f, false, false, true, 0), NULL);
		GameEngine::sendEvent( GameEngine::entityWorldID( "Alfred" ) , &gazeEvent );

		m_keys['2'] = 0;
	}

	m_running = m_keys[27] == 0;
}

void AlfredApp::mouseMoved(float x, float y)
{
}

void AlfredApp::render()
{
	h3dClearOverlays();
	keyHandler();

	GameEngine::update();
	h3dutDumpMessages();
}

void AlfredApp::keyboardCb(unsigned int param, bool pressed, void *userData)
{
	AlfredApp* app = static_cast<AlfredApp*>(userData);
	if (app)
	{
		app->m_keys[param] = pressed ? 1 : 0;
	}
}

void AlfredApp::mouseCb(float x, float y, void *userData)
{
	AlfredApp* app = static_cast<AlfredApp*>(userData);
	if (app) app->mouseMoved(x, y);
}

void AlfredApp::renderCb(void *userData)
{
	AlfredApp* app = static_cast<AlfredApp*>(userData);
	if (app) app->render();
}

void AlfredApp::resizeCb(int width, int height, void *userData)
{	
	AlfredApp* app = static_cast<AlfredApp*>(userData);
	if (app)
	{
		app->m_width = width;
		app->m_height = height;
	}

	h3dSetupViewport(0, 0, width, height,true);
	h3dSetupCameraView( GameEngine::entitySceneGraphID( GameEngine::entityWorldID( "Camera" ) ), 28.6f, (float) width / height, 0.1f, 1000.0f );
}