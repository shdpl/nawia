include(UseDDeps)
include(UseDUnittest)

SET (d_header_path /usr/local/include/d/dmd/druntime/import/ )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/iface )


ADD_SUBDIRECTORY( ${CMAKE_CURRENT_SOURCE_DIR}/impl )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/h3d/ext )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/impl/glfw/ext )
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

file(STRINGS ../build.rf files REGEX ^\".*\"$)
FOREACH(file ${files})
	STRING(REGEX REPLACE "^\"[a-zA-Z0-9]+/(.+)\"$" "\\1;" source "${file}")
	STRING(REGEX MATCH ^impl/[a-zA-Z0-9]+/ext/[a-zA-Z0-9]+/.*$ matches "${source}")
	IF(NOT matches)
		SET(sources ${source} ${sources})
	ENDIF(NOT matches)
ENDFOREACH(file)

ADD_EXECUTABLE( NawiaClient3D ${sources} ${d_header_path}/glfw.d ${d_header_path}/glfw_im.d ${d_header_path}/horde3d.d ${d_header_path}/horde3d_im.d ${d_header_path}/horde3dutils.d ${d_header_path}/horde3dutils_im.d) #${d_header_path}/PolyVoxCore.d ${d_header_path}/PolyVoxCore_im.d )

target_link_libraries(NawiaClient3D dl) #FIXME: shouldn't SWIG add it?
