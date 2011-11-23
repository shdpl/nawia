#ifndef ALFREDAPP_H_
#define ALFREDAPP_H_

#include <string>
#include <vector>
#include <map>

#include "GameEngine/utMath.h"

#include "Horde3D/Horde3D.h"
#include "Horde3D/Horde3DUtils.h"

class AlfredApp
{
public:

	AlfredApp();
	~AlfredApp();

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

	bool m_running;
	char m_keys[512];
	int m_width, m_height;

	int m_alfred;
};

#endif
