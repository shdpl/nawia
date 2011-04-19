#ifndef _STD_INC_
#define _STD_INC_

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

#include <windows.h>
#include <Windowsx.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <tchar.h>

//#include <GLFW/glfw.h>
#include <GameEngine/utMath.h>
#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEntity.h>
#include <GameEngine/GameEvent.h>

// Include Game Components 
#include <GameEngine/GameEngine_Animations.h>
#include <GameEngine/GameEngine_FACSControl.h>
#include <GameEngine/GameEngine_IK.h>
#include <GameEngine/GameEngine_Sapi.h>
#include <GameEngine/GameEngine_SceneGraph.h>
#include <GameEngine/GameEngine_ScenePlayer.h>
#include <GameEngine/GameEngine_Socket.h>
#include <GameEngine/GameEngine_Sound.h>
#include <GameEngine/GameEngine_CameraControl.h>

// Include Horde 3D
#include <Horde3D/Horde3DUtils.h>
#include <Horde3D/Horde3D.h>

// Load Horde 3D Libraries
#pragma comment (lib, "Horde3D_vc100d.lib")
#pragma comment (lib, "Horde3DUtils_vc100d.lib")

// Load Game Engine Libraries
#ifdef _DEBUG
#pragma comment (lib, "GameEngineCored.lib")
#pragma comment (lib, "GameSceneGraphComponentd.lib")
#pragma comment (lib, "GameSocketComponentd.lib")
#else
#pragma comment (lib, "GameEngineCore.lib")
#pragma comment (lib, "GameSceneGraphComponent.lib")
#endif


int const WINDOW_WIDTH = 800;
int const WINDOW_HEIGHT = 600;
int const WINDOW_FULLSCREEN = false;

//char const * const splashScreenFile = "SplashScreen.tga";

#ifdef _UNICODE
	const wchar_t * const WINDOW_TITLE = L"MULTIMEDIA PROJEKT WS10/11";
#else
	const char * const WINDOW_TITLE = "MULTIMEDIA PROJEKT WS10/11";
#endif
#endif


int strtoken(char *str, char *separator, char *token[]);
