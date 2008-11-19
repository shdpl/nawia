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
	void render();

	void keyPress( unsigned int param, bool pressed );
	void resize(int width, int height);

protected:

	void asymmetricFrustum( float userPos[3], float virtPos[3], float virtRot[3], 
                            const float screenWidth, const float screenHeight,
                            const float zFar, const float fovy, const float aspect );

private:
	void parseSocketData( int size, const char* data );
	void pickNode( int x, int y );

	bool	m_running;
	char	m_keys[256];	
	float	m_camRX, m_camRY;

	int		m_camID;
	int		m_selectedEntity;
	int		m_savedMaterial;
	int		m_selectMaterial;

	int		m_width, m_height;
	int		m_desktopWidth, m_desktopHeight;
};
#endif