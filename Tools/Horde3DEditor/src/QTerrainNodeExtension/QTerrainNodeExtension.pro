TEMPLATE = lib
CONFIG += plugin

CONFIG += debug_and_release
CONFIG += qt
QT += xml

include(../../qpluginbase.pri)

VERSION = 0.0.1

HEADERS += QTerrainNodePage.h \
		   QTerrainNode.h \
		   ExtTerrainPlugIn.h
SOURCES += QTerrainNodePage.cpp \
           QTerrainNode.cpp \
		   ExtTerrainPlugIn.cpp
FORMS += QTerrainNodePage.ui

INCLUDEPATH+=../../include 
INCLUDEPATH+=../HordeSceneEditorCore

LIBS += -L../../lib

DESTDIR = ../../bin/plugins
UI_DIR = .

CONFIG(debug, debug|release) { 
	LIBS += -lHordeSceneEditorCored
	LIBS += -lQXmlTreed
	TARGET = QTerrainNodeExtensiond
	OBJECTS_DIR = ../../Build/QTerrainNodeExtension/Debug
	MOC_DIR = ../../Build/QTerrainNodeExtension/Debug
}

CONFIG(release, debug|release) { 
    
	TARGET = QTerrainNodeExtension
	LIBS += -lHordeSceneEditorCore
	LIBS += -lQXmlTree
	OBJECTS_DIR = ../../Build/QTerrainNodeExtension/Release
	MOC_DIR = ../../Build/QTerrainNodeExtension/Release
	DEFINES+=QT_NO_DEBUG	
}

win32 {
	LIBS += -lHorde3D_vc8
	LIBS += -lHorde3DUtils_vc8
	LIBS += -lLua
}
unix {
	LIBS += -L../../bin
	LIBS += -lHorde3D
	LIBS += -lHorde3DUtils		
	LIBS += -llua
	DOLLAR=$
	QMAKE_RPATH = $${QMAKE_RPATH}$${DOLLAR}$${DOLLAR}ORIGIN
	QMAKE_LFLAGS+=\'$${QMAKE_RPATH}\'
}

macx {
	CONFIG += x86 ppc
	QMAKE_MAC_SDK = /Developer/SDKs/MacOSX10.4u.sdk
	QMAKE_LFLAGS += -mmacosx-version-min=10.4
}

