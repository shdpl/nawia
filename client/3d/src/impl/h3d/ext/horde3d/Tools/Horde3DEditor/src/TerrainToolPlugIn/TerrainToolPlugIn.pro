TEMPLATE = lib
CONFIG += plugin

CONFIG += debug_and_release
CONFIG += qt
QT += xml

include(../../qpluginbase.pri)

VERSION = 0.0.1

HEADERS += ConverterWizard.h \
		   TerrainToolPlugIn.h 
SOURCES += ConverterWizard.cpp \
           TerrainToolPlugIn.cpp
FORMS += ConverterWizard.ui

INCLUDEPATH+=../../include 
INCLUDEPATH+=../HordeSceneEditorCore

DESTDIR = ../../bin/plugins
UI_DIR = .

CONFIG(debug, debug|release) { 
	TARGET = TerrainToolPlugInd
	OBJECTS_DIR = ../../Build/TerrainToolPlugIn/Debug
	MOC_DIR = ../../Build/TerrainToolPlugIn/Debug
}

CONFIG(release, debug|release) { 
    
	TARGET = TerrainToolPlugIn
	OBJECTS_DIR = ../../Build/TerrainToolPlugIn/Release
	MOC_DIR = ../../Build/TerrainToolPlugIn/Release
	DEFINES+=QT_NO_DEBUG	
}

macx {
	CONFIG += x86 ppc
	QMAKE_MAC_SDK = /Developer/SDKs/MacOSX10.4u.sdk
	QMAKE_LFLAGS += -mmacosx-version-min=10.4
}

