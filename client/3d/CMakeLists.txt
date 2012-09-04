CMAKE_MINIMUM_REQUIRED(VERSION 2.8.1)
SET(CMAKE_D_COMPILER dmd)

PROJECT(NawiaClient3D D)

############### Dependencies ###############
#FIND_PACKAGE(Phobos)
#FIND_PACKAGE(Horde3D)
#FIND_PACKAGE(PolyVox)
############################################

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin 
	CACHE STRING "Where binaries files go" FORCE)

SET( GLOBAL_DMD_DEFS "-gc -debug -d" ) # in debug mode CMakeD appends -export-dynamic which breaks build
SET( CMAKE_D_FLAGS "${CMAKE_D_FLAGS} ${GLOBAL_DMD_DEFS} DerelictH3D.lib DerelictPVox.lib DerelictGLFW2.lib C:\\Users\\shd\\Documents\\src\\derelict3\\lib\\DerelictUtil.lib C:\\Users\\shd\\Documents\\src\\Derelict2\\lib\\DerelictUtil.lib")

#ADD_SUBDIRECTORY(external)
ADD_SUBDIRECTORY(src)
