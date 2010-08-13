#ifndef DEMOAPP_H_
#define DEMOAPP_H_

#include <GameEngine/utMath.h>

class DemoApp
{
public:

	DemoApp(int desktopWidth, int desktopHeight);
	~DemoApp();

	bool init(const char* fileName);
	void release();

	bool isRunning() {return m_running;} 
	
	void keyHandler();
	void mouseMoved(float x, float y);
	void mouseClick(int button, int action);
	void render();

	void keyPress( unsigned int param, bool pressed );
	void resize(int width, int height);

protected:

	void asymmetricFrustum( float userPos[3], float virtPos[3], float virtRot[3], 
                            const float screenWidth, const float screenHeight,
                            const float zFar, const float fovy, const float aspect );

private:
	void parseSocketData( int size, const char* data );
	int strtoken( char *str, char *separator, char *token[] );
	void pickNode( float x, float y );

	bool	m_running;
	char	m_keys[326];	
	float	m_camRX, m_camRY;
	float	m_eyeX, m_eyeY, m_mouseX, m_mouseY;
	float	m_pickingCoords[3];
	bool	m_mouseDown, m_enableMouseTracking;

	float	m_throwingStartedAt;

	int		m_camID;
	int		m_selectedEntity;
	int		m_savedMaterial;
	int		m_selectMaterial;
	int		m_selectedHordeID;
	int		m_fontMatRes;

	int		m_width, m_height;
	int		m_desktopWidth, m_desktopHeight;
};
#endif