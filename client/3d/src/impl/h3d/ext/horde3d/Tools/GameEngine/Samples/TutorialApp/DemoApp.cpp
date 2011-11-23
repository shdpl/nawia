#include "DemoApp.h"

#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_SceneGraph.h"

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
	if (!GameEngine::init()) return false;
	
	if (GameEngine::loadScene(fileName))
	{
		m_camID = GameEngine::entityWorldID("camera");
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
	keyHandler();
	
	GameEngine::update();
	
	h3dutDumpMessages();
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

void DemoApp::resizeCb(void *userData, int width, int height)
{	
	DemoApp* app = static_cast<DemoApp*>(userData);
	H3DNode camID = GameEngine::entitySceneGraphID( app->m_camID );
	h3dSetNodeParamI( camID, H3DCamera::ViewportXI, 0 );
	h3dSetNodeParamI( camID, H3DCamera::ViewportYI, 0 );
	h3dSetNodeParamI( camID, H3DCamera::ViewportWidthI, width );
	h3dSetNodeParamI( camID, H3DCamera::ViewportHeightI, height );	
	h3dResizePipelineBuffers( h3dGetNodeParamI( camID, H3DCamera::PipeResI ), width, height );
}