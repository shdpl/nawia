#ifndef ALFREDXPADAPP_H_
#define ALFREDXPADAPP_H_

#include <string>
#include <vector>

#include "Horde3D/Horde3D.h"
#include "Horde3D/Horde3DUtils.h"

class AlfredXpadApp
{
public:

	AlfredXpadApp();
	~AlfredXpadApp();

	bool init(const char* fileName);

	bool isRunning() {return m_running;}
	
	void keyHandler();
	void mouseMoved(float x, float y);
	void render();

	static void keyboardCb(unsigned int param, bool pressed, void* userData);
	static void mouseCb(float x, float y, void* userData);
	static void renderCb(void* userData);
	static void resizeCb(int width, int height, void* userData);

private:

	int strtoken(char *str, char *separator, char *token[]);
	void parseAU();

	bool m_running;
	char m_keys[256];
	float m_camRX, m_camRY;
	int m_width, m_height;

	int m_alfred;

	ResHandle m_logoMatRes;

	long			result;
	int				addrLen;

	float AUs[45];
	void setAU(int auID, float weight);
};

#endif