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

INCLUDEPATH+=../../include \
             ../HordeSceneEditorCore \
             ../../../../Horde3D/Bindings/C++ \
             ../../../../Extensions/Terrain/Bindings/C++

LIBS += -L../../lib

DESTDIR = ../../bin/plugins
UI_DIR = .

CONFIG(debug, debug|release) { 
	LIBS += -lHordeSceneEditorCored
	LIBS += -lQXmlTreed
    LIBS += -lLuad
	LIBS += -lHorde3Dd
	LIBS += -lHorde3DUtilsd
	TARGET = QTerrainNodeExtensiond
	OBJECTS_DIR = ../../Build/QTerrainNodeExtension/Debug
	MOC_DIR = ../../Build/QTerrainNodeExtension/Debug
}

CONFIG(release, debug|release) { 
    
	TARGET = QTerrainNodeExtension
	LIBS += -lHordeSceneEditorCore
	LIBS += -lQXmlTree
	LIBS += -lLua
	LIBS += -lHorde3D
	LIBS += -lHorde3DUtils
    OBJECTS_DIR = ../../Build/QTerrainNodeExtension/Release
	MOC_DIR = ../../Build/QTerrainNodeExtension/Release
	DEFINES+=QT_NO_DEBUG	
}

unix {
	LIBS += -L../../bin
	DOLLAR=$
	QMAKE_RPATH = $${QMAKE_RPATH}$${DOLLAR}$${DOLLAR}ORIGIN
	QMAKE_LFLAGS+=\'$${QMAKE_RPATH}\'
}

macx {
	CONFIG += x86 ppc
	QMAKE_MAC_SDK = /Developer/SDKs/MacOSX10.4u.sdk
	QMAKE_LFLAGS += -mmacosx-version-min=10.4
}

