TEMPLATE = lib
CONFIG += plugin

CONFIG += debug_and_release
CONFIG += qt

include(../../qpluginbase.pri)

VERSION = 1.0.0
QTDIR_build:REQUIRES = "!contains(QT_CONFIG, no-tga)"

SOURCES += main.cpp
SOURCES += qtgahandler.cpp
HEADERS += qtgahandler.h

DESTDIR  = ../../bin/plugins/imageformats

target.path += $$[QT_INSTALL_PLUGINS]/imageformats
INSTALLS += target

CONFIG(debug, debug|release) {	
	TARGET  = qtgad
	MOC_DIR = ../../Build/tgaPlugIn/Debug
	OBJECTS_DIR = ../../Build/tgaPlugIn/Debug
}

CONFIG(release, debug|release) { 
	TARGET  = qtga
	MOC_DIR = ../../Build/tgaPlugIn/Release
	OBJECTS_DIR = ../../Build/tgaPlugIn/Release
}

macx {
	CONFIG += x86 ppc
	QMAKE_MAC_SDK = /Developer/SDKs/MacOSX10.4u.sdk
	QMAKE_LFLAGS += -mmacosx-version-min=10.4
}