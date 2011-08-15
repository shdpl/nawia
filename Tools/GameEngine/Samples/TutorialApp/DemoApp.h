#ifndef DEMOAPP_H_
#define DEMOAPP_H_

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
	static void resizeCb(void *userData, int width, int height);

private:

	int m_camID; // handle for the camera
	float m_camRX, m_camRY; // values for camera rotation

	int m_characterID; // handle for a character

	bool m_firstPersonView; // 1st person view?

	char m_keys[256];
	bool m_running;
};

#endif