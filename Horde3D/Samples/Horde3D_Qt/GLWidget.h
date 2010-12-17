#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>

#include <Horde3D.h>

class GLWidget : public QGLWidget
{
	Q_OBJECT

public:
	GLWidget(QWidget *parent = 0);
	~GLWidget();

protected:

	void timerEvent( QTimerEvent *ev );
	void keyPressEvent( QKeyEvent *ev );
	void keyReleaseEvent( QKeyEvent *ev );

	void initializeGL();
	void resizeGL(int width, int height);

	void paintGL();

private:
	bool m_initialized;
	
	float              m_x, m_y, m_z, m_rx, m_ry;  // Viewer position and orientation
	float              m_velocity;  // Velocity for movement
	float              m_curFPS;
	

	int                m_statMode;
	bool               m_freeze, m_debugViewMode, m_wireframeMode;
	float              m_animTime, m_weight;

	bool				m_left, m_right, m_forward, m_backward;
	bool				m_fullScreen;

	// Engine objects
	H3DRes			m_fontMatRes, m_panelMatRes;
	H3DRes			m_logoMatRes, m_hdrPipeRes, m_forwardPipeRes;
	H3DNode			m_cam, m_knight, m_particleSys;

	QString			m_contentDir;
};

#endif // GLWIDGET_H
