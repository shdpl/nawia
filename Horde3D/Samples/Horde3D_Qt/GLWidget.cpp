#include "GLWidget.h"

#include <QMessageBox>
#include <QApplication>
#include <QTime>
#include <QKeyEvent>
#include <math.h>

#include <Horde3DUtils.h>

float degToRad( float f ) 
{
	return f * (3.1415926f / 180.0f);
}

GLWidget::GLWidget(QWidget *parent)	: QGLWidget(parent), m_initialized( false )
{	
	m_x = 5; m_y = 3; m_z = 19; m_rx = 7; m_ry = 15; m_velocity = 10.0f;
	m_curFPS = 30;

	m_statMode = 0;
	m_freeze = false; m_debugViewMode = false; m_wireframeMode = false;
	m_animTime = 0; m_weight = 1.0f;
	m_cam = 0;

	m_left = m_right = m_forward = m_backward = false;
	m_fullScreen = false;

	m_contentDir = qApp->applicationDirPath() + "../../Content";

	setFocusPolicy(Qt::StrongFocus);
}

GLWidget::~GLWidget()
{
	h3dRelease();
}


void GLWidget::initializeGL()
{
	if ( ( m_initialized = h3dInit() ) == false)
	{
		h3dutDumpMessages();
		QMessageBox::warning(this, tr("Error"), tr("Error initializing Horde3D!"));
	}

	// Set options
	h3dSetOption( H3DOptions::LoadTextures, 1 );
	h3dSetOption( H3DOptions::TexCompression, 0 );
	h3dSetOption( H3DOptions::FastAnimation, 0 );
	h3dSetOption( H3DOptions::MaxAnisotropy, 4 );
	h3dSetOption( H3DOptions::ShadowMapSize, 2048 );

	// Add resources
	// Pipelines
	m_hdrPipeRes = h3dAddResource( H3DResTypes::Pipeline, "pipelines/hdr.pipeline.xml", 0 );
	m_forwardPipeRes = h3dAddResource( H3DResTypes::Pipeline, "pipelines/forward.pipeline.xml", 0 );
	// Overlays
	m_fontMatRes = h3dAddResource( H3DResTypes::Material, "overlays/font.material.xml", 0 );
	m_panelMatRes = h3dAddResource( H3DResTypes::Material, "overlays/panel.material.xml", 0 );
	m_logoMatRes = h3dAddResource( H3DResTypes::Material, "overlays/logo.material.xml", 0 );
	// Environment
	H3DRes envRes = h3dAddResource( H3DResTypes::SceneGraph, "models/sphere/sphere.scene.xml", 0 );
	// Knight
	H3DRes knightRes = h3dAddResource( H3DResTypes::SceneGraph, "models/knight/knight.scene.xml", 0 );
	H3DRes knightAnim1Res = h3dAddResource( H3DResTypes::Animation, "animations/knight_order.anim", 0 );
	H3DRes knightAnim2Res = h3dAddResource( H3DResTypes::Animation, "animations/knight_attack.anim", 0 );
	// Particle system
	H3DRes particleSysRes = h3dAddResource( H3DResTypes::SceneGraph, "particles/particleSys1/particleSys1.scene.xml", 0 );
	
	// Load resources
	h3dutLoadResourcesFromDisk( qPrintable( m_contentDir ) );

	// Add scene nodes
	// Add camera
	m_cam = h3dAddCameraNode( H3DRootNode, "Camera", m_hdrPipeRes );
	//h3dSetNodeParamI( _cam, H3DCamera::OccCullingI, 1 );
	// Add environment
	H3DNode env = h3dAddNodes( H3DRootNode, envRes );
	h3dSetNodeTransform( env, 0, -20, 0, 0, 0, 0, 20, 20, 20 );
	// Add knight
	m_knight = h3dAddNodes( H3DRootNode, knightRes );
	h3dSetNodeTransform( m_knight, 0, 0, 0, 0, 180, 0, 0.1f, 0.1f, 0.1f );
	h3dSetupModelAnimStage( m_knight, 0, knightAnim1Res, 0, "", false );
	h3dSetupModelAnimStage( m_knight, 1, knightAnim2Res, 0, "", false );
	// Attach particle system to hand joint
	h3dFindNodes( m_knight, "Bip01_R_Hand", H3DNodeTypes::Joint );
	H3DNode hand = h3dGetNodeFindResult( 0 );
	m_particleSys = h3dAddNodes( hand, particleSysRes );
	h3dSetNodeTransform( m_particleSys, 0, 40, 0, 90, 0, 0, 1, 1, 1 );

	// Add light source
	H3DNode light = h3dAddLightNode( H3DRootNode, "Light1", 0, "LIGHTING", "SHADOWMAP" );
	h3dSetNodeTransform( light, 0, 15, 10, -60, 0, 0, 1, 1, 1 );
	h3dSetNodeParamF( light, H3DLight::RadiusF, 0, 30 );
	h3dSetNodeParamF( light, H3DLight::FovF, 0, 90 );
	h3dSetNodeParamI( light, H3DLight::ShadowMapCountI, 1 );
	h3dSetNodeParamF( light, H3DLight::ShadowMapBiasF, 0, 0.01f );
	h3dSetNodeParamF( light, H3DLight::ColorF3, 0, 1.0f );
	h3dSetNodeParamF( light, H3DLight::ColorF3, 1, 0.8f );
	h3dSetNodeParamF( light, H3DLight::ColorF3, 2, 0.7f );

	// Customize post processing effects
	H3DNode matRes = h3dFindResource( H3DResTypes::Material, "pipelines/postHDR.material.xml" );
	h3dSetMaterialUniform( matRes, "hdrExposure", 2.5f, 0, 0, 0 );
	h3dSetMaterialUniform( matRes, "hdrBrightThres", 0.5f, 0, 0, 0 );
	h3dSetMaterialUniform( matRes, "hdrBrightOffset", 0.08f, 0, 0, 0 );

	startTimer(0);
}

void GLWidget::resizeGL(int width, int height)
{	
	if ( m_initialized )
	{
		// Resize viewport
		h3dSetNodeParamI( m_cam, H3DCamera::ViewportXI, 0 );
		h3dSetNodeParamI( m_cam, H3DCamera::ViewportYI, 0 );
		h3dSetNodeParamI( m_cam, H3DCamera::ViewportWidthI, width );
		h3dSetNodeParamI( m_cam, H3DCamera::ViewportHeightI, height );
		
		// Set virtual camera parameters
		h3dSetupCameraView( m_cam, 45.0f, (float)width / height, 0.1f, 1000.0f );
		h3dResizePipelineBuffers( m_hdrPipeRes, width, height );
		h3dResizePipelineBuffers( m_forwardPipeRes, width, height );
	}
}

void GLWidget::timerEvent( QTimerEvent *ev )
{
	updateGL();
}

void GLWidget::keyPressEvent( QKeyEvent *ev )
{
	// --------------
	// Key-down state
	// --------------
	if( ev->key() == Qt::Key_Space )
		m_freeze = !m_freeze;
	else if( ev->key() == Qt::Key_Escape )
	{
		if( m_fullScreen ) 
		{
			showNormal();
			m_fullScreen = false;
		}
		else close();
	}
	else if( ev->key() == Qt::Key_F1 && !m_fullScreen )
	{
		m_fullScreen = true;
		showFullScreen();
	}
	else if( ev->key() == Qt::Key_F3 )
	{
		if( h3dGetNodeParamI( m_cam, H3DCamera::PipeResI ) == m_hdrPipeRes )
			h3dSetNodeParamI( m_cam, H3DCamera::PipeResI, m_forwardPipeRes );
		else
			h3dSetNodeParamI( m_cam, H3DCamera::PipeResI, m_hdrPipeRes );
	}	
	else if( ev->key() == Qt::Key_F7 )
		m_debugViewMode = !m_debugViewMode;
	else if( ev->key() == Qt::Key_F8 )  // F8
		m_wireframeMode = !m_wireframeMode;	
	else if( ev->key() == Qt::Key_F9 )  // F9
	{
		m_statMode += 1;
		if( m_statMode > H3DUTMaxStatMode ) m_statMode = 0;
	}		
	else if( ev->key() == Qt::Key_W )
		m_forward = true;
	else if( ev->key() == Qt::Key_S )
		m_backward = true;
	else if( ev->key() == Qt::Key_A )
		m_left = true;
	else if( ev->key() == Qt::Key_D)
		m_right = true;	
	else if( ev->key() == Qt::Key_1 )
	{
		// Change blend weight
		m_weight += 2 / m_curFPS;
		if( m_weight > 1 ) m_weight = 1;
	}
	else if( ev->key() == Qt::Key_2 )
	{
		// Change blend weight
		m_weight -= 2 / m_curFPS;
		if( m_weight < 0 ) m_weight = 0;
	}
	else
	{
		ev->ignore();
		return;
	}
	ev->accept();
}

void GLWidget::keyReleaseEvent( QKeyEvent *ev )
{
	if( ev->key() == Qt::Key_W )
		m_forward = false;
	else if( ev->key() == Qt::Key_S )	
		m_backward = false;			
	else if( ev->key() == Qt::Key_A )
		m_left = false;
	else if( ev->key() == Qt::Key_D)	
		m_right = false;		
}

void GLWidget::paintGL()
{
	static QTime initTime(QTime::currentTime());
	static int fps = 0;	
	++fps;	
	int mseconds = initTime.msecsTo( QTime::currentTime() );	
	if( fps%5 == 0 && mseconds >= 2000)
	{							
		// Calculate frame rate
		m_curFPS =  fps * 1000.0f / mseconds;;
		// Reset counter
		fps = 0;
		initTime = QTime::currentTime();
	}	
	
	h3dSetOption( H3DOptions::DebugViewMode, m_debugViewMode ? 1.0f : 0.0f );
	h3dSetOption( H3DOptions::WireframeMode, m_wireframeMode ? 1.0f : 0.0f );
	
	if( !m_freeze )
	{
		m_animTime += 1.0f / m_curFPS;

		// Do animation blending
		h3dSetModelAnimParams( m_knight, 0, m_animTime * 24.0f, m_weight );
		h3dSetModelAnimParams( m_knight, 1, m_animTime * 24.0f, 1.0f - m_weight );

		// Animate particle systems (several emitters in a group node)
		unsigned int cnt = cnt = h3dFindNodes( m_particleSys, "", H3DNodeTypes::Emitter );
		for( unsigned int i = 0; i < cnt; ++i )
			h3dAdvanceEmitterTime( h3dGetNodeFindResult( i ), 1.0f / m_curFPS );
	}

	float curVel = m_velocity / m_curFPS;	

	if( m_forward )
	{
		// Move forward
		m_x -= sinf( degToRad( m_ry ) ) * cosf( -degToRad( m_rx ) ) * curVel;
		m_y -= sinf( -degToRad( m_rx ) ) * curVel;
		m_z -= cosf( degToRad( m_ry ) ) * cosf( -degToRad( m_rx ) ) * curVel;
	}
	if( m_backward )
	{
		// Move backward
		m_x += sinf( degToRad( m_ry ) ) * cosf( -degToRad( m_rx ) ) * curVel;
		m_y += sinf( -degToRad( m_rx ) ) * curVel;
		m_z += cosf( degToRad( m_ry ) ) * cosf( -degToRad( m_rx ) ) * curVel;
	}
	if( m_left )
	{
		// Strafe left
		m_x += sinf( degToRad( m_ry - 90) ) * curVel;
		m_z += cosf( degToRad( m_ry - 90 ) ) * curVel;
	}
	if( m_right )
	{
		// Strafe right
		m_x += sinf( degToRad( m_ry + 90 ) ) * curVel;
		m_z += cosf( degToRad( m_ry + 90 ) ) * curVel;
	}

	// Set camera parameters
	h3dSetNodeTransform( m_cam, m_x, m_y, m_z, m_rx ,m_ry, 0, 1, 1, 1 );
	
	// Show stats
	h3dutShowFrameStats( m_fontMatRes, m_panelMatRes, m_statMode );
	if( m_statMode > 0 )
	{	
		// Display weight
		QString text = QString::number( m_weight, 103, 2 );		
		h3dutShowText( qPrintable( text ), 0.03f, 0.24f, 0.026f, 1, 1, 1, m_fontMatRes );
	}

	// Show logo
	const float ww = (float)h3dGetNodeParamI( m_cam, H3DCamera::ViewportWidthI ) /
	                 (float)h3dGetNodeParamI( m_cam, H3DCamera::ViewportHeightI );
	const float ovLogo[] = { ww-0.4f, 0.8f, 0, 1,  ww-0.4f, 1, 0, 0,  ww, 1, 1, 0,  ww, 0.8f, 1, 1 };
	h3dShowOverlays( ovLogo, 4, 1.f, 1.f, 1.f, 1.f, m_logoMatRes, 0 );
	
	// Render scene
	h3dRender( m_cam );

	// Finish rendering of frame
	h3dFinalizeFrame();

	// Remove all overlays
	h3dClearOverlays();

	// Write all messages to log file
	h3dutDumpMessages();
}

