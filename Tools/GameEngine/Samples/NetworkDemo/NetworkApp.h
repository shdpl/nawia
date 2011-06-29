#ifndef NETWORKAPP_H_
#define NETWORKAPP_H_

#include "Horde3D/Horde3D.h"
#include "Horde3D/Horde3DUtils.h"

#include <set>
#include <map>
#include <string>

struct lua_State;

using namespace std;

class NetworkApp
{
public:

	NetworkApp();
	~NetworkApp();

	bool init(const char* fileName);

	bool isRunning() {return m_running;}
	
	void keyHandler();
	void render();

	static void keyboardCb(unsigned int param, bool pressed, void* userData);
	static void mouseButtonCb(float x, float y, void* userData);
	static void mouseCb(float x, float y, void* userData);
	static void renderCb(void* userData);
	static void resizeCb(void* userData, int width, int height);

	// Callbacks to handle network events
	static void clientConnectCb(size_t clientID);
	static void clientDisconnectCb(size_t clientID);
	static void stateRequestCb(std::string entityID, std::string componentID);

private:

	bool m_running;
	char m_keys[256];
	float m_camRX, m_camRY;
	char* m_networkState;

	static unsigned int m_character;
	static char m_sentence[100];

	// This will contain all the player entities' names, which can be assigned to newly connecting clients.
	static set<string>				m_availablePlayers;

	// This will contain the player entities currently assigned to connected clients.
	static map<size_t,string>		m_assignedPlayers;

	H3DRes _fontMatRes;
	H3DRes _logoMatRes;

	int          _statMode;

	int			m_camID;

	void	startServer();
	void	startClient();

	bool	m_networkStarted;

	void	updateCamera();

	
	/// The LUA Stack
	lua_State*		m_L;


};
#endif