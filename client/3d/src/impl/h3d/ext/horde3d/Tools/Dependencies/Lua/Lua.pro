TEMPLATE = lib

CONFIG += dll

CONFIG += debug_and_release
CONFIG += qt

QT -= gui core

HEADERS += src/lapi.h \
			src/lauxlib.h \
			src/lcode.h \
			src/ldebug.h \
			src/ldo.h \
			src/lfunc.h \
			src/lgc.h \
			src/llex.h \
			src/llimits.h \
			src/lmem.h \
			src/lobject.h \
			src/lopcodes.h \
			src/lparser.h \
			src/lstate.h \
			src/lstring.h \
			src/ltable.h \
			src/ltm.h \
			src/lua.h \
			src/luaconf.h \
			src/lualib.h \
			src/lundump.h \
			src/lvm.h \
			src/lzio.h 
SOURCES += src/lapi.c \
		src/lauxlib.c \
		src/lbaselib.c \
		src/lcode.c \
		src/ldblib.c \
		src/ldebug.c \
		src/ldo.c \
		src/ldump.c \
		src/lfunc.c \
		src/lgc.c \
		src/linit.c \
		src/liolib.c \
		src/llex.c \
		src/lmathlib.c  \
		src/lmem.c  \
		src/loadlib.c  \
		src/lobject.c \
		src/lopcodes.c \
		src/loslib.c \
		src/lparser.c \
		src/lstate.c \
		src/lstring.c \
		src/lstrlib.c \
		src/ltable.c \
		src/ltablib.c \
		src/ltm.c \
		src/lundump.c \
		src/lvm.c \
		src/lzio.c \
		src/print.c 

CONFIG(debug, debug|release) {
        TARGET = Luad
        OBJECTS_DIR = ../../Horde3DEditor/Build/Lua/Debug
}

CONFIG(release, debug|release) {

        TARGET = Lua
        OBJECTS_DIR = ../../Horde3DEditor/Build/Lua/Release
}

unix {
    DESTDIR = ../../Horde3DEditor/bin
    system(mkdir -p ../../Horde3DEditor/include/Lua)
    system(cp src/lua.h src/luaconf.h src/lualib.h src/lauxlib.h ../../Horde3DEditor/include/Lua)
}

win32 {
    DEFINES += LUA_BUILD_AS_DLL
    DESTDIR = ../../Horde3DEditor/lib
    DLLDESTDIR = ../../Horde3DEditor/bin
    system( xcopy src\lua.h ..\..\Horde3DEditor\include\Lua\ /y  )
	system( xcopy src\luaconf.h ..\..\Horde3DEditor\include\Lua\ /y  )
	system( xcopy src\lualib.h ..\..\Horde3DEditor\include\Lua\ /y  )
	system( xcopy src\lauxlib.h ..\..\Horde3DEditor\include\Lua\ /y  )	  
}

macx {
        DESTDIR = ../../Horde3DEditor/bin
        CONFIG += x86 ppc
        QMAKE_MAC_SDK = /Developer/SDKs/MacOSX10.4u.sdk
        QMAKE_LFLAGS += -mmacosx-version-min=10.4
}
