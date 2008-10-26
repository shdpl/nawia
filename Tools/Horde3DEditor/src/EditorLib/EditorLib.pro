TEMPLATE = lib
CONFIG += staticlib
CONFIG += debug_and_release

HEADERS = HighLighter.h \
          LuaFunctions.h \
          TextEdit.h

SOURCES = HighLighter.cpp \
          LuaFunctions.cpp \
          TextEdit.cpp 

INCLUDEPATH+=../../include
DESTDIR = ../../lib
UI_DIR = .

CONFIG(debug, debug|release) { 
	TARGET = EditorLibd
	OBJECTS_DIR = ../../Build/EditorLib/Debug
	MOC_DIR = ../../Build/EditorLib/Debug
}

CONFIG(release, debug|release) { 
    
	TARGET = EditorLib
	OBJECTS_DIR = ../../Build/EditorLib/Release
	MOC_DIR = ../../Build/EditorLib/Release
	DEFINES+=QT_NO_DEBUG	
}

unix {	
	system(mkdir -p ../../include/EditorLib)
	system(cp *.h ../../include/EditorLib)
}

win32 {
	system(xcopy /y *.h ..\..\include\EditorLib\)
}

macx {
	CONFIG += x86 ppc
	QMAKE_MAC_SDK = /Developer/SDKs/MacOSX10.4u.sdk
	QMAKE_LFLAGS += -mmacosx-version-min=10.4
}
