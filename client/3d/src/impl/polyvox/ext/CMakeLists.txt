set(CMAKE_C_CREATE_SHARED_MODULE 0)
FIND_PACKAGE(SWIG REQUIRED)
if(SWIG_FOUND)
	#include(${SWIG_USE_FILE})

        #include_directories(${CMAKE_CURRENT_SOURCE_DIR}/polyvox/library/PolyVoxCore/include ${CMAKE_CURRENT_SOURCE_DIR}/polyvox/library/PolyVoxCore/include/PolyVoxCore)
	#link_directories(${PolyVoxCore_BINARY_DIR})

	#SET(CMAKE_SWIG_FLAGS "-d2")
	#set_source_files_properties(${CMAKE_CURRENT_SOURCE_DIR}/polyvox/library/bindings/PolyVoxCore.i PROPERTIES CPLUSPLUS ON)

	#swig_add_module(PolyVoxCoreD d ${CMAKE_CURRENT_SOURCE_DIR}/polyvox/library/bindings/PolyVoxCore.i)
	#set_target_properties(PolyVoxCoreD PROPERTIES LINKER_LANGUAGE C)
        #swig_link_libraries(PolyVoxCoreD PolyVoxCore)
endif()
