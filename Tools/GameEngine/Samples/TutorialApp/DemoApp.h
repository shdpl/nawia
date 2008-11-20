#ifndef DEMOAPP_H_
#define DEMOAPP_H_

#include "Horde3D/Horde3D.h"
#include "Horde3D/Horde3DUtils.h"

class DemoApp
{
public:

	DemoApp();
	~DemoApp();

	bool init(const char* fileName);
	bool isRunning() {return m_running;}
	
	void keyHandler();
	void mouseMoved(float x, float y);
	void render();

	static void keyboardCb(unsigned int param, bool pressed, void* userData);
	static void mouseCb(float x, float y, void* userData);
	static void renderCb(void* userData);
	static void resizeCb(int width, int height);

private:

	char m_keys[256];
	bool m_running;
	
	float m_camRX, m_camRY;
	int	m_camID, m_characterID;
};

#endif