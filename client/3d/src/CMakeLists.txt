include(UseDDeps)
include(UseDUnittest)

include_directories(.)

include_directories( ${PROJECT_SOURCE_DIR}/src/iface )

include_directories( ${PROJECT_SOURCE_DIR}/src/impl/nawia )
include_directories( ${PROJECT_SOURCE_DIR}/src/impl/h3d )
include_directories( ${PROJECT_SOURCE_DIR}/src/impl/h3d/ext)
include_directories( ${PROJECT_SOURCE_DIR}/src/impl/breakpad )
include_directories( ${PROJECT_SOURCE_DIR}/src/impl/bullet )
include_directories( ${PROJECT_SOURCE_DIR}/src/impl/csound )
include_directories( ${PROJECT_SOURCE_DIR}/src/impl/flac )
include_directories( ${PROJECT_SOURCE_DIR}/src/impl/glfw )
include_directories( ${PROJECT_SOURCE_DIR}/src/impl/glfw/ext )
include_directories( ${PROJECT_SOURCE_DIR}/src/impl/openal )
include_directories( ${PROJECT_SOURCE_DIR}/src/impl/polyvox )
include_directories( ${PROJECT_SOURCE_DIR}/src/impl/theora )
include_directories( ${PROJECT_SOURCE_DIR}/src/impl/vorbis )

file(GLOB files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.d")
ADD_EXECUTABLE( NawiaClient3D ${files} )
