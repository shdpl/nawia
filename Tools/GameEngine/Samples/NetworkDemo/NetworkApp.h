#ifndef NETWORKAPP_H_
#define NETWORKAPP_H_

#include "Horde3D/Horde3D.h"
#include "Horde3D/Horde3DUtils.h"

struct lua_State;

class NetworkApp
{
public:

	NetworkApp();
	~NetworkApp();

	bool init(const char* fileName);

	bool isRunning() {return m_running;}
	
	void keyHandler();
	void mouseMoved(float x, float y);
	void render();

	static void keyboardCb(unsigned int param, bool pressed, void* userData);
	static void mouseButtonCb(float x, float y, void* userData);
	static void mouseCb(float x, float y, void* userData);
	static void renderCb(void* userData);
	static void resizeCb(void* userData, int width, int height);

private:

	bool m_running;
	char m_keys[256];
	float m_camRX, m_camRY;
	unsigned int m_character;
	char* m_networkState;
	char m_sentence[100];
	H3DRes _fontMatRes;
	H3DRes _logoMatRes;

	int          _statMode;

	int			m_camID;

	void	startServer();
	void	startClient(const char* character);

	bool	m_networkStarted;

	void	updateCamera();

	
	/// The LUA Stack
	lua_State*		m_L;


};
#endif