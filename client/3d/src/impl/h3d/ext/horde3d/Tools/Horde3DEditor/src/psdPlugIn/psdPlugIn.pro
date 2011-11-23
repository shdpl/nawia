TEMPLATE = lib
CONFIG += plugin

CONFIG += debug_and_release
CONFIG += qt

include(../../qpluginbase.pri)

VERSION = 1.0.0
QTDIR_build:REQUIRES = "!contains(QT_CONFIG, no-psd)"

SOURCES += main.cpp
SOURCES += qpsdhandler.cpp
HEADERS += qpsdhandler.h

DESTDIR  = ../../bin/plugins/imageformats

target.path += $$[QT_INSTALL_PLUGINS]/imageformats
INSTALLS += target

CONFIG(debug, debug|release) {	
	TARGET  = qpsdd
	MOC_DIR = ../../Build/psdPlugIn/Debug
	OBJECTS_DIR = ../../Build/psdPlugIn/Debug
}

CONFIG(release, debug|release) { 
	TARGET  = qpsd
	MOC_DIR = ../../Build/psdPlugIn/Release
	OBJECTS_DIR = ../../Build/psdPlugIn/Release
}

macx {
	CONFIG += x86 ppc
	QMAKE_MAC_SDK = /Developer/SDKs/MacOSX10.4u.sdk
	QMAKE_LFLAGS += -mmacosx-version-min=10.4
}