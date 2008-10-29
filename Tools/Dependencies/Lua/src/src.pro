TEMPLATE = lib

CONFIG += dll

CONFIG += debug_and_release
CONFIG += qt

QT -= gui core

DEFINES += LUA_BUILD_AS_DLL 		

HEADERS += lapi.h \
			lauxlib.h \
			lcode.h \
			ldebug.h \
			ldo.h \
			lfunc.h \
			lgc.h \
			llex.h \
			llimits.h \
			lmem.h \
			lobject.h \
			lopcodes.h \
			lparser.h \
			lstate.h \
			lstring.h \
			ltable.h \
			ltm.h \
			lua.h \
			luaconf.h \
			lualib.h \
			lundump.h \
			lvm.h \
			lzio.h 
SOURCES += lapi.c \
		lauxlib.c \
		lbaselib.c \
		lcode.c \
		ldblib.c \
		ldebug.c \
		ldo.c \
		ldump.c \
		lfunc.c \
		lgc.c \
		linit.c \
		liolib.c \
		llex.c \
		lmathlib.c  \
		lmem.c  \
		loadlib.c  \
		lobject.c \
		lopcodes.c \
		loslib.c \
		lparser.c \
		lstate.c \
		lstring.c \
		lstrlib.c \
		ltable.c \
		ltablib.c \
		ltm.c \
		lundump.c \
		lvm.c \
		lzio.c \
		print.c 

DESTDIR = ../../../Horde3DEditor/lib
DLLDESTDIR = ../../../Horde3DEditor/bin

CONFIG(debug, debug|release) { 	
	TARGET = Luad
	OBJECTS_DIR = ../../../Horde3DEditor/Build/Lua/Debug	
}

CONFIG(release, debug|release) { 
    
	TARGET = Lua
	OBJECTS_DIR = ../../../Horde3DEditor/Build/Lua/Release
}
