#include "DemoApp.h"

#include "GameEngine/GameEngine.h"
#include "GameEngine/GameEngine_Animations.h"
#include "GameEngine/GameEngine_SAPI.h"
#include "GameEngine/GameEngine_SceneGraph.h"

#include "GameEngine/utMath.h" // utMath added to be able to use MAtrix4f and Vec3f

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
		m_camID = GameEngine::entityWorldID( "camera" ); // get world id of the camera
		m_characterID = GameEngine::entityWorldID( "Hans" ); // get Hans' world id

		m_camRX = 0; // initialize the camera rotation with 0
		m_camRY = 0;

		GameEngine::playAnim( m_characterID, "idle" ); // start to play Hans' idle animation
		GameEngine::playAnim( GameEngine::entityWorldID( "Marie" ), "idle" ); // start to play Marie's idle animation

		return true;
	}
	else
		return false;	
}

void DemoApp::keyHandler()
{
	if( m_keys['P'] )
	{
		GameEngine::speak( GameEngine::entityWorldID( "Marie" ), "Hello, how are you doing?" );
		m_keys['P'] = 0;
	}

	if( m_keys['W'] )	// W
	{
		float z = 50.0f / GameEngine::FPS(); 
		GameEngine::translateEntityLocal( m_characterID, 0, 0, z );

		if( !GameEngine::isPlaying( m_characterID, "walk" ) )
		{
			GameEngine::playAnim( m_characterID, "walk", 0, 1.0f, -1.0f, 40.0f, 0.0f );
		}
	}

	if( m_keys['A'] )	// A
	{
		float x = 50.0f / GameEngine::FPS(); 
		GameEngine::translateEntityLocal( m_characterID, x, 0, 0 );

		if( !GameEngine::isPlaying( m_characterID, "walk" ) )
		{
			GameEngine::playAnim( m_characterID, "walk", 0, 1.0f, -1.0f, 40.0f, 0.0f );
		}
	}

	if( m_keys['S'] )	// S
	{
		float z = -50.0f / GameEngine::FPS(); 
		GameEngine::translateEntityLocal( m_characterID, 0, 0, z );

		if( !GameEngine::isPlaying( m_characterID, "walk" ) )
		{
			GameEngine::playAnim( m_characterID, "walk", 0, 1.0f, -1.0f, 40.0f, 0.0f );
		}
	}

	if( m_keys['D'] )	// D
	{
		float x = -50.0f / GameEngine::FPS(); 
		GameEngine::translateEntityLocal( m_characterID, x, 0, 0 );

		if( !GameEngine::isPlaying( m_characterID, "walk" ) )
		{
			GameEngine::playAnim( m_characterID, "walk", 0, 1.0f, -1.0f, 40.0f, 0.0f );
		}
	}

	if ( !m_keys['W'] && !m_keys['A'] && !m_keys['S'] && !m_keys['D'] )
	{
		if( !GameEngine::isPlaying( m_characterID, "idle") )
		{
			GameEngine::playAnim( m_characterID, "idle", 0, 1.0f, -1.0f, 30.0f, 0.0f );
		}
	}

	if( m_keys[113] )  // F2
	{
		m_firstPersonView = !m_firstPersonView; // switch camera perspective (1st <-> 3rd person)
 
		m_keys[113] = 0;
	}

	if( m_keys[118] )  // F7
	{
		Horde3D::setOption( EngineOptions::DebugViewMode, Horde3D::getOption(EngineOptions::DebugViewMode) != 0.0f ? 0 : 1 );
 
		m_keys[118] = 0;
	}

	m_running = m_keys[27] == 0; // quit application on ESC
}

void DemoApp::mouseMoved(float x, float y)
{
	float ry = x * 3.0f / GameEngine::FPS();

	// rotate the character along the y-axis
	GameEngine::rotateEntityLocal( m_characterID, 0, -ry, 0 );

	// rotate view along the x-axis
	m_camRX += y * 3.0f / GameEngine::FPS();
}

void DemoApp::render()
{
	Horde3D::clearOverlays();
	keyHandler();
	
	// gets the transformation matrix from our character
	Matrix4f transformation( GameEngine::getEntityTransformation( m_characterID ) );
	// we are interested in the transformation and the rotation of Hans
	Vec3f translation, rotation, scale;
	transformation.decompose( translation, rotation, scale );

	GameEngine::setEntityTranslation( m_camID, translation.x, translation.y + 1.5f, translation.z );
	GameEngine::setEntityRotation( m_camID, m_camRX, radToDeg( rotation.y ) + 180, 0 );

	if( m_firstPersonView )
	{
		// 1st person view
		// We set the camera a it forth, otherwise some parts of the head would disturb the view.
		GameEngine::translateEntityLocal( m_camID, 0, 0, -0.2f );
	}
	else
	{
		// 3rd person view with an offset on the z-axis
		GameEngine::translateEntityLocal( m_camID, 0, 0, 7 );
	}

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
	Horde3D::setupViewport(0, 0, width, height, true;)pea
}