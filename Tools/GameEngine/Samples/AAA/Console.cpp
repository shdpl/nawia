#include "Console.h"

Console::Console() : mConsole(NULL) { 
	mConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTitle(_T(""));
}

Console::~Console() {}

void Console::print(char const * msg, WORD flags) const {
	SetConsoleTextAttribute(mConsole, flags);
	printf(msg);
}


