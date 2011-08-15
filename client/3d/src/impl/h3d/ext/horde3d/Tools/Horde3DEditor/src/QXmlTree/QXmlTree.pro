TEMPLATE = lib
CONFIG += staticlib
CONFIG += debug_and_release

HEADERS = QXmlTreeNode.h \
          QXmlTreeView.h \
          QXmlTreeModel.h \
		  QXmlTreeUndoCommands.h \
		  QXmlNodePropertyCommand.h

SOURCES = QXmlTreeNode.cpp \
          QXmlTreeView.cpp \
          QXmlTreeModel.cpp  \
		  QXmlTreeUndoCommands.cpp

INCLUDEPATH+=../../include
DESTDIR = ../../lib
UI_DIR = .

CONFIG(debug, debug|release) { 
	TARGET = QXmlTreed
	OBJECTS_DIR = ../../Build/QXmlTree/Debug
	MOC_DIR = ../../Build/QXmlTree/Debug
}

CONFIG(release, debug|release) { 
	TARGET = QXmlTree
	OBJECTS_DIR = ../../Build/QXmlTree/Release
	MOC_DIR = ../../Build/QXmlTree/Release
	DEFINES+=QT_NO_DEBUG	
}

macx {
	CONFIG += x86 ppc
	QMAKE_MAC_SDK = /Developer/SDKs/MacOSX10.4u.sdk
	QMAKE_LFLAGS += -mmacosx-version-min=10.4
}

unix {	
	system(mkdir -p ../../include/QXmlTree)
	system(cp *.h ../../include/QXmlTree)
}

win32 {
	system(xcopy /y *.h ..\..\include\QXmlTree\)
}
