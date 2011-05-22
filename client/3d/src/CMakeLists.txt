include(UseDDeps)
include(UseDUnittest)

include_directories(.)

file(GLOB files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.d")
ADD_EXECUTABLE( NawiaClient3D ${files} )