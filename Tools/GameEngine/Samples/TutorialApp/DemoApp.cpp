#include "DemoApp.h"

#include "GameEngine/GameEngine.h"

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
	if (!GameEngine::init()) return false;
	
	if (GameEngine::loadScene(fileName))
	{
		return true;
	}
	else
		return false;	
}

void DemoApp::keyHandler()
{		
	m_running = m_keys[27] == 0; // quit application on ESC
}

void DemoApp::mouseMoved(float x, float y)
{
}

void DemoApp::render()
{
	Horde3D::clearOverlays();
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
	Horde3D::setupViewport( 0, 0, width, height, true );
}