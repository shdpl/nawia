include(UseDDeps)
include(UseDUnittest)

IF(NOT WIN32)
SET (d_header_path /usr/local/include/d/)
ENDIF(NOT WIN32)

include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/iface )


ADD_SUBDIRECTORY( ${CMAKE_CURRENT_SOURCE_DIR}/impl )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/h3d/ext )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/gl3n/ext )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/glfw/ext )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/otbm/ext/src )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/polyvox/ext )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/breakpad )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/bullet )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/csound )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/flac )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/glfw )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/h3d )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/lzma )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/lzo )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/openal )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/polyvox )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/theora )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/vorbis )

FILE(STRINGS ../build.rf files REGEX ^\".*\"$)
FOREACH(path ${files})
	STRING(REGEX REPLACE "^\"(.*)\"$" "\\1;" path ${path})
	FILE(TO_CMAKE_PATH ${path} path)
	STRING(REGEX REPLACE "^[a-zA-Z0-9]+/(.+)$" "\\1;" source "${path}")
	STRING(REGEX MATCH ^impl/[a-zA-Z0-9]+/ext/[a-zA-Z0-9]+/?.*$ matches "${source}")
	IF(NOT matches)
		SET(sources ${source} ${sources})
	ENDIF(NOT matches)
ENDFOREACH(path)

ADD_EXECUTABLE( NawiaClient3D
	${sources}
	${CMAKE_CURRENT_SOURCE_DIR}/impl/otbm/ext/src/otbm/parser.d
	${CMAKE_CURRENT_SOURCE_DIR}/impl/gl3n/ext/gl3n/interpolate.d
	${CMAKE_CURRENT_SOURCE_DIR}/impl/gl3n/ext/gl3n/util.d
	${CMAKE_CURRENT_SOURCE_DIR}/impl/gl3n/ext/gl3n/math.d
	${CMAKE_CURRENT_SOURCE_DIR}/impl/gl3n/ext/gl3n/linalg.d )

target_link_libraries(NawiaClient3D) #FIXME: orange dl shouldn't SWIG add it? // gl3n-dmd
