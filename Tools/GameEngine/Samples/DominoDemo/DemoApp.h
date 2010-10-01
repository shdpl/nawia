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
	bool m_running;
	char m_keys[256];
	float m_camRX, m_camRY;
	int	  m_camID;
};
#endif