##--------------------------------------------
## Variables.
##--------------------------------------------

## Find D compiler and parse its version.
find_program(DC NAMES dmd ldc gdmd)
if (DC)
    get_filename_component(dc_path ${DC} PATH)
    if("${dc_path}" STREQUAL ${CMAKE_BINARY_DIR})
        get_filename_component(DC ${DC} NAME)
    endif("${dc_path}" STREQUAL ${CMAKE_BINARY_DIR})
    exec_program(${DC} ARGS "" OUTPUT_VARIABLE d_output)
    string(REGEX MATCH "(Digital Mars|DMD32|DMD64) D Compiler v[0-9]\\.[0-9]+" dmd_version "${d_output}")
    if (dmd_version)
        set(D_IS_MARS true)
        set(D_IS_DMD true)
        string(REGEX REPLACE "(.+) v[0-9]\\.[0-9]+" "\\1" D_COMPILER_NAME "${dmd_version}")
        string(REGEX REPLACE "${D_COMPILER_NAME} v([0-9])\\.[0-9]+" "\\1" D_VERSION "${dmd_version}")
        string(REGEX REPLACE "${D_COMPILER_NAME} v[0-9]\\.([0-9]+)" "\\1" D_FRONTEND "${dmd_version}")
    else (dmd_version)
	string(REGEX MATCH "LLVM-based D Compiler" is_ldc "${d_output}")
	if (is_ldc)
	    exec_program(${DC} ARGS "--version" OUTPUT_VARIABLE d_output)
	    string(REGEX MATCH "based on DMD v[0-9]\\.[0-9]+" ldc_version "${d_output}")
	    set(D_IS_LLVM true)
	    set(D_IS_LDC true)
	    if(ldc_version)
		set(D_IS_LLVM true)
		set(D_COMPILER_NAME "LLVM-based D Compiler")
		string(REGEX REPLACE "based on DMD v([0-9])\\.[0-9]+" "\\1" D_VERSION "${ldc_version}")
		string(REGEX REPLACE "based on DMD v[0-9]\\.([0-9]+)" "\\1" D_FRONTEND "${ldc_version}")
	    else(ldc_version)
		message(FATAL_ERROR "LDC compiler found, but the version can not be processed")
	    endif(ldc_version)
	else (is_ldc)
    string(REGEX MATCH "gdc" is_gdc "${d_output}")
    if(is_gdc)
        set(D_COMPILER_NAME "GDC-based D Compiler")
        set(D_VERSION 2)
    else(is_gdc)
        message(FATAL_ERROR "D compiler is not found")
    endif(is_gdc)
    endif(is_ldc)
    endif(dmd_version)
    message(STATUS "D compiler found -- ${D_COMPILER_NAME} v${D_VERSION}.${D_FRONTEND}")
else (DC)
    message(FATAL_ERROR "D compiler is not found")
endif (DC)

## Get D compiler path.
get_filename_component(DC_PATH ${DC} PATH)
if("${DC_PATH}" STREQUAL "")
    find_program(dc_path_tmp ${DC})
    get_filename_component(DC_PATH ${dc_path_tmp} PATH)
    mark_as_advanced(dc_path_tmp)
endif("${DC_PATH}" STREQUAL "")
get_filename_component(dc_parent_dir ${DC_PATH} NAME)
if("${dc_parent_dir}" STREQUAL "bin")
    get_filename_component(DC_PATH ${DC_PATH} PATH)
endif("${dc_parent_dir}" STREQUAL "bin")

#option(ONE_BUILD_COMMAND "Build in one command" "OFF")
set(ONE_BUILD_COMMAND OFF) ## TODO: test it and uncomment the previous line.

if (NOT ONE_BUILD_COMMAND)
    if(D_IS_MARS)
        set(opt_tmp "ON")
    else(D_IS_MARS)
        set(opt_tmp "OFF")
    endif(D_IS_MARS)
    option(SINGLE_D_OBJECT "Build all d sources to one object file" ${opt_tmp})
    if(D_IS_LLVM)
        set(D_FLAGS ${D_FLAGS} -singleobj)
    endif(D_IS_LLVM)
    if(CMAKE_HOST_WIN32 AND D_IS_MARS)
        set(D_MODULES_PER_OBJECT 200 CACHE STRING "Max number of modules per object file")
    else(CMAKE_HOST_WIN32 AND D_IS_MARS)
        set(D_MODULES_PER_OBJECT 10000 CACHE STRING "Max number of modules per object file")
    endif(CMAKE_HOST_WIN32 AND D_IS_MARS)
endif(NOT ONE_BUILD_COMMAND)

## Specific flags for build configurations.
## TODO: Add another targets.
set(D_RELEASE_FLAGS -O -release)
set(D_DEBUG_FLAGS -g )
if(D_IS_LLVM)
    set(D_RELEASE_FLAGS ${D_RELEASE_FLAGS} -enable-inlining)
    set(D_VERSION_FLAG -d-version)
    set(D_DEBUG_FLAG -d-debug)
else(D_IS_LLVM)
    set(D_RELEASE_FLAGS ${D_RELEASE_FLAGS} -inline)
    set(D_VERSION_FLAG -version)
    set(D_DEBUG_FLAG -debug)
endif(D_IS_LLVM)
if(CMAKE_HOST_WIN32)
    # Linking fails with this. Commenting out for now.
    # set(D_RELEASE_FLAGS ${D_RELEASE_FLAGS} -L/subsystem:windows)
endif(CMAKE_HOST_WIN32)
set(D_DEBUG_FLAGS ${D_DEBUG_FLAGS} ${D_DEBUG_FLAG})

# Unittest flags.
option(UNITTEST "Includes unittests" "OFF")
if(UNITTEST)
    set(D_FLAGS ${D_FLAGS} -unittest)
endif(UNITTEST)

## Settings.
if(CMAKE_HOST_WIN32)
    set(D_OBJECT_SUFFIX .obj)
    if(D_IS_MARS)
      set(D_LIB_SUFFIX .lib)
      set(D_LIB_PREFIX )
    elseif(D_IS_LDC)
      set(D_LIB_SUFFIX .a)
      set(D_LIB_PREFIX lib)
    endif(D_IS_MARS)
elseif(CMAKE_HOST_UNIX)
    set(D_LIB_SUFFIX .a)
    set(D_LIB_PREFIX lib)
    set(D_OBJECT_SUFFIX .o)
endif(CMAKE_HOST_WIN32)

##--------------------------------------------
## Macros and functions.
##--------------------------------------------

macro(add_d_flags option)
    foreach(arg_tmp ${ARGN})
	set(D_FLAGS ${D_FLAGS} ${option}=${arg_tmp})
    endforeach(arg_tmp ${ARGN})
endmacro(add_d_flags option)

macro(add_d_versions)
    add_d_flags(${D_VERSION_FLAG} ${ARGN})
endmacro(add_d_versions)

macro(add_d_debugs)
    add_d_flags(${D_DEBUG_FLAG} ${ARGN})
endmacro(add_d_debugs)

## Make a native path.
## Usage:
##	set(path c:/file_path/file_name.cpp)
##	make_native_path(path)
##	message(STATUS ${path})
## Output:
##	-- "c:\file_path\file_name.cpp"
## Command "file(TO_NATIVE_PATH ...)" gives incorrect results on Windows
macro(make_native_path pathname)
    if(CMAKE_HOST_WIN32)
	# An extra \\ escape is necessary to get a \ through CMake's processing.
	string(REPLACE "/" "\\" ${pathname} "${${pathname}}")
	# Enclose with UNESCAPED quotes.  This means we need to escape our
	# quotes once here, i.e. with \"
	set(${pathname} \"${${pathname}}\")
    endif(CMAKE_HOST_WIN32)
endmacro(make_native_path)

##
## Example:
##	set(path 24.3+23.bin)
##	obj_path(path)
##	message(STATUS ${path})
## Example output:
##	-- 24\.3\+23\.bin
macro(regex_safe_string outvariable)
    set(${outvariable} ${ARGN})
    set(__regex_chars__ ^ $ . ] [ - * + ? | \( \))
    foreach(__regex_char__ ${__regex_chars__})
	string(REPLACE "${__regex_char__}"
	    "\\${__regex_char__}" ${outvariable} ${${outvariable}}
	    )
    endforeach(__regex_char__ ${__regex_chars__})
endmacro(regex_safe_string outvariable)

## Remove unnecessary path to the object file.
## path -- path to object file.
## Example:
##	set(path ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/target.dir/main.d.obj)
##	obj_path(path)
##	message(STATUS ${path})
## Example output:
##	-- CMakeFiles/target.dir/main.d.obj
macro(obj_path path)
    regex_safe_string(cbd_safe_tmp ${CMAKE_CURRENT_BINARY_DIR})
    regex_safe_string(csd_safe_tmp ${CMAKE_CURRENT_SOURCE_DIR})
    set(regexp_str_tmp "(${cbd_safe_tmp}/|${csd_safe_tmp}/|)(.+)")
    string(REGEX REPLACE ${regexp_str_tmp} "\\2" ${path} "${${path}}")
endmacro(obj_path path)

## Compile d files.
## target -- name of a new target.
## objects_list -- created object files.
## params -- sources files.
macro(compile_d_files target objects_list)
    set(${objects_list})
    set(tmp_dir_tmp ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/${target}.dir)

    set(type_tmp SOURCES)
    set(SOURCES_tmp )
    set(FLAGS_tmp )

    ## Parse parameters list.
    set(params_tmp SOURCES FLAGS)
    foreach(arg_tmp ${ARGN})
	set(found_type_tmp)
	if(NOT found_type_tmp)
	    foreach(param_tmp ${params_tmp})
		if(arg_tmp STREQUAL param_tmp)
		    set(type_tmp ${param_tmp})
		    set(found_type_tmp 1)
		    break(param_tmp ${params_tmp})
		endif(arg_tmp STREQUAL param_tmp)
	    endforeach(param_tmp ${params_tmp})
	endif(NOT found_type_tmp)
	if(NOT found_type_tmp)
	    set(${type_tmp}_tmp ${${type_tmp}_tmp} ${arg_tmp})
	endif(NOT found_type_tmp)
    endforeach(arg_tmp ${ARGN})

    if(NOT SINGLE_D_OBJECT)
	set(${objects_list})
	foreach (d_source_p_tmp ${SOURCES_tmp})
	    get_filename_component(ext_tmp ${d_source_p_tmp} EXT)
	    find_file(d_source_p_tmp ${d_source_p_tmp} PATHS ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}
		  ${CMAKE_BINARY_DIR} ${CMAKE_SOURCE_DIR})
	    set (d_source_tmp ${d_source_p_tmp})
	    obj_path(d_source_tmp)
	    set(d_obj_tmp ${tmp_dir_tmp}/${d_source_tmp}${D_OBJECT_SUFFIX})
	    set(${objects_list} ${${objects_list}} ${d_obj_tmp})
	    get_filename_component(path_tmp ${d_obj_tmp} PATH)
	    file(MAKE_DIRECTORY ${path_tmp})
	    set(d_obj_out_tmp ${d_obj_tmp})
	    obj_path(d_obj_out_tmp)
	    #get_imported_files(depends_tmp ${d_source_p_tmp}) ## Too slow.....
	    add_custom_command(OUTPUT "${d_obj_tmp}"
			COMMAND "${DC}"
			ARGS ${FLAGS_tmp} ${d_source_p_tmp} -c -of${d_obj_tmp}
			COMMENT "Building ${d_obj_out_tmp}"
			DEPENDS ${d_source_p} ${depends_tmp}
			WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
		    )
	endforeach (d_source_p_tmp ${SOURCES_tmp})
    else(NOT SINGLE_D_OBJECT)
	if(D_IS_LDC)
	    set(FLAGS_tmp ${FLAGS_tmp} -oq )
	endif(D_IS_LDC)
	set(count_objects_tmp 0)
	set(files${count_objects_tmp}_tmp )
	set(counter_tmp 0)
	set(files_tmp )
	set(objects_tmp )
	foreach (d_source_p_tmp ${SOURCES_tmp})
	    math(EXPR counter_tmp "${counter_tmp} + 1")
	    set(files${count_objects_tmp}_tmp ${files${count_objects_tmp}_tmp} ${d_source_p_tmp})
	    if(counter_tmp GREATER D_MODULES_PER_OBJECT)
		math(EXPR count_objects_tmp "${count_objects_tmp} + 1")
		set(files${count_objects_tmp}_tmp )
		set(counter_tmp 0)
	    endif(counter_tmp GREATER D_MODULES_PER_OBJECT)
	endforeach (d_source_p_tmp ${SOURCES_tmp})

	if(files${count_objects_tmp}_tmp)
	    math(EXPR count_objects_tmp "${count_objects_tmp} + 1")
	endif(files${count_objects_tmp}_tmp)

	set(id_tmp 0)
	while(id_tmp LESS ${count_objects_tmp})
	    set(object_tmp ${tmp_dir_tmp}/${target}${id_tmp}${D_OBJECT_SUFFIX})
	    set(d_obj_out_tmp ${${object_tmp}})
	    obj_path(d_obj_out_tmp)
	    set(parameters_tmp ${FLAGS_tmp} -c ${files${id_tmp}_tmp} -of${object_tmp})
	    set(parameters_list_file_tmp ${tmp_dir_tmp}/parameters${id_tmp}_obj)
	    if(CMAKE_HOST_WIN32)
		file(REMOVE ${parameters_list_file_tmp})
		foreach(arg_tmp ${parameters_tmp})
		    file(APPEND ${parameters_list_file_tmp} "${arg_tmp}\n")
		endforeach(arg_tmp)
		set(param_tmp @${parameters_list_file_tmp})
	    elseif(CMAKE_HOST_UNIX)
		set(param_tmp ${parameters_tmp})
	    endif(CMAKE_HOST_WIN32)
	    #get_imported_files(depends_tmp ${ARGN})
	    add_custom_command(OUTPUT "${object_tmp}"
			    COMMAND "${DC}"
			    ARGS ${param_tmp}
			    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
			    DEPENDS ${files${id_tmp}_tmp} ${depends_tmp}
			    COMMENT ""
			)
	    set(objects_tmp ${objects_tmp} ${object_tmp})
	    math(EXPR id_tmp "${id_tmp} + 1")
	endwhile(id_tmp LESS ${count_objects_tmp})

	set(${objects_list} ${objects_tmp})
    endif(NOT SINGLE_D_OBJECT)
    #add_custom_target(${target} DEPENDS "${${objects_list}}")
endmacro(compile_d_files objects_list)


## Add D target.
## name -- target name.
## Params:
##	TYPE -- target type.
##		STATIC -- static library.
##		SHARED -- shared library.
##		BINARY -- executable.
## 	SOURCES -- sources of the target.
##	INCLUDES -- include paths.
## 	FLAGS -- build flags.
##	LIBS -- libraries for link.
##	LIB_PATHS -- libraries paths.
##	DEPENDS -- target depends.
macro(add_d_target name)
    set(type_tmp SOURCES)
    set(TYPE_tmp)
    set(INCLUDES_tmp )
    set(FLAGS_tmp )
    set(SOURCES_tmp )
    set(GEN_FILES_tmp )
    set(OBJECTS_tmp )
    set(LIBS_tmp )
    set(LIB_PATHS_tmp)
    set(DEPENDS_tmp)
    set(OUTPUT_PATH_tmp )
    set(compile_flags_tmp ${D_FLAGS})
    set(additional_commands_tmp )
    set(detect_deps_tmp 1)
    set(link_flags_tmp )

    ## Parse parameters list.
    set(params_tmp TYPE INCLUDES FLAGS SOURCES NO_DEPS_SOURCES OBJECTS LIBS LIB_PATHS DEPENDS OUTPUT_PATH)

    foreach(arg_tmp ${ARGN})
	set(found_type_tmp)
	if(${arg_tmp} STREQUAL "NOT_DETECT_DEPENDS")
	    set(detect_deps_tmp 0)
	    set(found_type_tmp 1)
	endif(${arg_tmp} STREQUAL "NOT_DETECT_DEPENDS")
	if(NOT found_type_tmp)
	    foreach(param_tmp ${params_tmp})
		if(arg_tmp STREQUAL param_tmp)
		    set(type_tmp ${param_tmp})
		    set(found_type_tmp 1)
		    break(param_tmp ${params_tmp})
		endif(arg_tmp STREQUAL param_tmp)
	    endforeach(param_tmp ${params_tmp})
	endif(NOT found_type_tmp)
	if(NOT found_type_tmp)
	    set(${type_tmp}_tmp ${${type_tmp}_tmp} ${arg_tmp})
	endif(NOT found_type_tmp)
    endforeach(arg_tmp ${ARGN})

    ## Init target type.
    if (OUTPUT_PATH_tmp)
	set(output_name_tmp "${OUTPUT_PATH_tmp}")
    endif (OUTPUT_PATH_tmp)
    if("${TYPE_tmp}" STREQUAL "STATIC")
	set(link_flags_tmp ${link_flags_tmp} -lib)
	if(NOT OUTPUT_PATH_tmp)
	    if(ARCHIVE_OUTPUT_DIRECTORY)
		set(output_name_tmp ${ARCHIVE_OUTPUT_DIRECTORY})
	    else(ARCHIVE_OUTPUT_DIRECTORY)
		set(output_name_tmp ${CMAKE_CURRENT_BINARY_DIR}/lib)
	    endif(ARCHIVE_OUTPUT_DIRECTORY)
	endif(NOT OUTPUT_PATH_tmp)
	set(output_name_tmp ${output_name_tmp}/${D_LIB_PREFIX}${name}${D_LIB_SUFFIX})
    elseif("${TYPE_tmp}" STREQUAL "BINARY")
	set(build_binary_tmp 1)
	if(NOT OUTPUT_PATH_tmp)
	    if(RUNTIME_OUTPUT_DIRECTORY)
		set(output_name ${RUNTIME_OUTPUT_DIRECTORY})
	    else(RUNTIME_OUTPUT_DIRECTORY)
		set(output_name_tmp ${CMAKE_CURRENT_BINARY_DIR}/bin)
	    endif(RUNTIME_OUTPUT_DIRECTORY)
	endif(NOT OUTPUT_PATH_tmp)
	set(output_name_tmp ${output_name_tmp}/${name}${CMAKE_EXECUTABLE_SUFFIX})
    elseif("${TYPE_tmp}" STREQUAL "SHARED")
	if(D_IS_MARS)
	    message(FATAL_ERROR "DMD does not support building shared libraries")
	endif(D_IS_MARS)
	if(NOT OUTPUT_PATH_tmp)
	    if(LIBRARY_OUTPUT_DIRECTORY)
		set(output_name_tmp ${LIBRARY_OUTPUT_DIRECTORY})
	    else(LIBRARY_OUTPUT_DIRECTORY)
		set(output_name_tmp ${CMAKE_CURRENT_BINARY_DIR}/lib)
	    endif(LIBRARY_OUTPUT_DIRECTORY)
	endif(NOT OUTPUT_PATH_tmp)
	set(build_binary 1)
	set(output_name_tmp ${output_name_tmp}/${CMAKE_SHARED_LIBRARY_PREFIX}${name}${CMAKE_SHARED_LIBRARY_SUFFIX})
	set(link_flags_tmp ${compile_flags_tmp} -L-shared)
    else("${TYPE_tmp}" STREQUAL "STATIC")
	message(FATAL_ERROR "D target ${TYPE_tmp} not supported")
    endif("${TYPE_tmp}" STREQUAL "STATIC")

    ## Include paths.
    foreach(inc_tmp ${INCLUDES_tmp} ${D_INCLUDES})
	set(compile_flags_tmp ${compile_flags_tmp} -I${inc_tmp})
    endforeach(inc_tmp ${INCLUDES_tmp} ${D_INCLUDES})

    ## Libraries and paths of them.
    set(libs_tmp)
    if(build_binary_tmp)
	if(D_IS_MARS AND CMAKE_HOST_WIN32)
	    foreach(lib_path_tmp ${LIB_PATHS_tmp} ${D_LIB_PATHS})
		make_native_path(lib_path_tmp)
		string(REPLACE "/" "\\" lib_path_tmp "${lib_path_tmp}//")
		set(lib_path_tmp \"${lib_path_tmp}\")
		set(link_flags_tmp ${link_flags_tmp} -L+${lib_path_tmp})
	    endforeach(lib_path_tmp ${LIB_PATHS_tmp} ${D_LIB_PATHS})
	    #set(additional_commands_tmp COMMAND set ARGS LIB=)
	    #foreach(lib_path_tmp ${LIB_PATHS_tmp} ${D_LIB_PATHS})
		#MAKE_NATIVE_PATH(lib_path_tmp)
		#set(additional_commands_tmp ${additional_commands_tmp}${lib_path_tmp};)
	    #endforeach(lib_path_tmp ${LIB_PATHS_tmp} ${D_LIB_PATHS})
	else(D_IS_MARS AND CMAKE_HOST_WIN32)
	    foreach(lib_path_tmp ${LIB_PATHS_tmp} ${D_LIB_PATHS})
		set(link_flags_tmp ${link_flags_tmp} -L-L${lib_path_tmp})
	    endforeach(lib_path_tmp ${LIB_PATHS_tmp} ${D_LIB_PATHS})
	endif(D_IS_MARS AND CMAKE_HOST_WIN32)
	foreach(lib_tmp ${LIBS_tmp} ${D_LIBS})
	    if(D_IS_MARS AND CMAKE_HOST_WIN32)
		set(link_flags_tmp ${link_flags_tmp} -L+${lib_tmp})
	    else(D_IS_MARS AND CMAKE_HOST_WIN32)
		set(link_flags_tmp ${link_flags_tmp} -L-l${lib_tmp})
	    endif(D_IS_MARS AND CMAKE_HOST_WIN32)
	endforeach(lib_tmp ${LIBS_tmp} ${D_LIBS})
    endif(build_binary_tmp)

    set(not_obj_tmp ${ONE_BUILD_COMMAND})
    ## Ldc not support -lib flag.
    if(ONE_BUILD_COMMAND AND ${TYPE_tmp} STREQUAL "STATIC" AND D_IS_LLVM)
	set(not_obj_tmp OFF)
    endif(ONE_BUILD_COMMAND AND ${TYPE_tmp} STREQUAL "STATIC" AND D_IS_LLVM)

    if(build_binary_tmp AND NOT D_IS_MARS)
	set(compile_flags_tmp ${compile_flags_tmp} -od${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/${name}.dir)
    endif(build_binary_tmp AND NOT D_IS_MARS)

    if(CMAKE_BUILD_TYPE)
	string(TOUPPER ${CMAKE_BUILD_TYPE} CMAKE_BUILD_TYPE_UPPER)
	set(compile_flags_tmp ${compile_flags_tmp} ${D_${CMAKE_BUILD_TYPE_UPPER}_FLAGS})
    endif(CMAKE_BUILD_TYPE)

    if(detect_deps_tmp)
	message(STATUS "Getting dependencies for ${name}")
	get_files_depends(tmp ${SOURCES_tmp})
	set(SOURCES_tmp ${tmp})
    endif(detect_deps_tmp)
    set(SOURCES_tmp ${SOURCES_tmp} ${NO_DEPS_SOURCES_tmp})

    set(used_ar_tmp)
    get_filename_component(output_path_tmp ${output_name_tmp} PATH)
    if (NOT not_obj_tmp)
	compile_d_files(${name} objs_tmp ${SOURCES_tmp} FLAGS ${compile_flags_tmp})
	set(SOURCES_tmp ${objs_tmp})
	if(NOT D_IS_MARS AND ${TYPE_tmp} STREQUAL "STATIC")
	    set(parameters_tmp rcs ${output_name_tmp} ${SOURCES_tmp} ${OBJECTS_tmp})
	    set(parameters_list_file_tmp ${tmp_dir_tmp}/parameters)
	    if(CMAKE_HOST_WIN32)
		file(REMOVE ${parameters_list_file_tmp})
		foreach(arg_tmp ${parameters_tmp})
		    file(APPEND ${parameters_list_file_tmp} "${arg_tmp}\n")
		endforeach(arg_tmp)
		set(param_tmp @${parameters_list_file_tmp})
	    elseif(CMAKE_HOST_UNIX)
		set(param_tmp ${parameters_tmp})
	    endif(CMAKE_HOST_WIN32)
	    add_custom_command(
				OUTPUT "${output_name_tmp}"
				COMMAND "${CMAKE_AR}"
				ARGS ${param_tmp}
				DEPENDS ${SOURCES_tmp}
				COMMENT "Linking ${lib_name}"
			    )
	    set(used_ar_tmp 1)
	endif(NOT D_IS_MARS AND ${TYPE_tmp} STREQUAL "STATIC")
    endif (NOT not_obj_tmp)

    if (NOT used_ar_tmp)
	set(output_name_native_tmp ${output_name_tmp})
	if(D_IS_MARS)
	    set(additional_commands_tmp ${additional_commands_tmp} COMMAND ${CMAKE_COMMAND} -E make_directory ${output_path_tmp})
	    make_native_path(output_name_native_tmp)
	endif(D_IS_MARS)
	set(parameters_tmp ${compile_flags_tmp} ${link_flags_tmp} ${SOURCES_tmp} ${OBJECTS_tmp} -of${output_name_native_tmp})
	set(parameters_list_file_tmp ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/${name}.dir/parameters)
	if(CMAKE_HOST_WIN32)
	    file(REMOVE ${parameters_list_file_tmp})
	    foreach(arg_tmp ${parameters_tmp})
		file(APPEND ${parameters_list_file_tmp} "${arg_tmp}\n")
	    endforeach(arg_tmp)
	    set(param_tmp @${parameters_list_file_tmp})
	elseif(CMAKE_HOST_UNIX)
	    set(param_tmp ${parameters_tmp})
	endif(CMAKE_HOST_WIN32)
	#get_imported_files(depends_tmp ${SOURCES_tmp})
	add_custom_command(
		      OUTPUT ${output_name_tmp}
		      ${additional_commands_tmp}
		      COMMAND ${DC}
		      ARGS ${param_tmp}
		      DEPENDS  ${SOURCES_tmp} ${depends_tmp}
		      WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
		      COMMENT "Linking ${name}"
		  )
    endif(NOT used_ar_tmp)
    add_custom_target(${name} ALL DEPENDS ${DEPENDS_tmp} ${output_name_tmp})
endmacro(add_d_target name)

## Add static library target.
macro(add_d_static_lib name)
    add_d_target(${name} TYPE STATIC SOURCES ${ARGN})
endmacro(add_d_static_lib name)

## Add binary target.
macro(add_d_program name)
    add_d_target(${name} TYPE BINARY SOURCES ${ARGN})
endmacro(add_d_program name)

## Add shared library target.
macro(add_d_shared_lib name)
    add_d_target(${name} TYPE SHARED SOURCES ${ARGN})
endmacro(add_d_shared_lib name)

## Add library target.
## Library will shared if it supported.
macro(add_d_lib name)
    if(D_IS_MARS)
	add_d_target(${name} TYPE STATIC ${ARGN})
    else(D_IS_MARS)
	add_d_target(${name} TYPE SHARED ${ARGN})
    endif(D_IS_MARS)
endmacro(add_d_lib name)

##
macro(get_imported_files_old imported)
    execute_process(COMMAND ${DC} -c -o- -v ${compile_flags_tmp} ${ARGN}
                  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                  OUTPUT_VARIABLE dc_output_tmp

    )
    string(REGEX MATCHALL "import[^(]*([^)]*)" dc_output_tmp "${dc_output_tmp}")

    ## Initial filter.
    regex_safe_string(tmp ${CMAKE_CURRENT_SOURCE_DIR})
    regex_safe_string(tmp2 ${CMAKE_CURRENT_BINARY_DIR})
    set(regex_includes_tmp "${tmp}|${tmp2}")

    set(${imported})
    foreach(import_tmp ${dc_output_tmp})
	## Getting a next import.
	string(REGEX REPLACE "import[^(]*\\(([^)]*)" "\\1" import_tmp ${import_tmp})
	## Filtering.
	string(REPLACE "\\" "/" import_tmp ${import_tmp})
	string(REGEX MATCH "(${regex_includes_tmp})" found "${import_tmp}")
	if(CMAKE_HOST_WIN32)
	    string(SUBSTRING "${import_tmp}" 1 2 first_sym_tmp)
	    set(full_path_tmp)
	    if(${first_sym_tmp} STREQUAL ":/")
		set(full_path_tmp 1)
	    endif(${first_sym_tmp} STREQUAL ":/")
	elseif(CMAKE_HOST_UNIX)
	    string(SUBSTRING "${import_tmp}" 0 1 first_sym_tmp)
	    set(full_path_tmp)
	    if(${first_sym_tmp} STREQUAL "/")
		set(full_path_tmp 1)
	    endif(${first_sym_tmp} STREQUAL "/")
	endif(CMAKE_HOST_WIN32)
	if(found OR NOT full_path_tmp)
	    set(${imported} ${${imported}} ${import_tmp})
	endif(found OR NOT full_path_tmp)
    endforeach(import_tmp ${dc_output_tmp})
endmacro(get_imported_files_old imported)

macro(filter_paths result)
    set(${result})
    set(read_now_tmp paths)
    set(include_tmp)
    set(paths_tmp)
    foreach(arg_tmp ${ARGN})
	set(founded_tmp)
	if(${arg_tmp} STREQUAL "INCLUDE_PATHS")
	    set(read_now_tmp includes)
	    set(founded_tmp 1)
	elseif(${arg_tmp} STREQUAL "INCLUDE_CURRENT_DIR")
	    set(locale_tmp 1)
	    set(read_now_tmp paths)
	    set(founded_tmp 1)
	endif(${arg_tmp} STREQUAL "INCLUDE_PATHS")
	if(NOT founded_tmp)
	    set(${read_now_tmp}_tmp ${${read_now_tmp}_tmp} ${arg_tmp})
	endif(NOT founded_tmp)
    endforeach(arg_tmp ${ARGN})
    regex_safe_string(include_tmp ${includes_tmp})
    set(regex_include_tmp)
    set(is_first_tmp 1)
    foreach(include_tmp ${includes_tmp})
	if(is_first_tmp)
	    set(is_first_tmp 1)
	else(is_first_tmp)
	    set(regex_includes_tmp ${regex_includes_tmp}|)
	endif(is_first_tmp)
	set(regex_includes_tmp ${regex_includes_tmp}${include_tmp})
    endforeach(include_tmp ${include_tmp})
    foreach(path_tmp ${paths_tmp})
	file(TO_CMAKE_PATH path_tmp ${path_tmp})
	string(REGEX MATCH "(${regex_includes_tmp})[^/]*" found "${path_tmp}")
	set(full_path_tmp 1)
	if(locale_tmp)
	    string(SUBSTRING "${path_tmp}" 0 1 first_sym_tmp)
	    set(full_path_tmp)
	    if(${first_sym_tmp} STREQUAL "/")
		set(full_path_tmp 1)
	    endif(${first_sym_tmp} STREQUAL "/")
	endif(locale_tmp)
	if(NOT found AND full_path_tmp)
	else(NOT found AND full_path_tmp)
	    set(${result} ${${result}} ${path_tmp})
	endif(NOT found AND full_path_tmp)
    endforeach(path_tmp ${paths_tmp})
endmacro(filter_paths )

macro(get_files_depends out)
    set(deps_file_tmp ${CMAKE_CURRENT_BINARY_DIR}/${ARGN}.deps)
    set(update_deps_tmp 0)
    foreach(arg_tmp ${ARGN})
	if(NOT IS_ABSOLUTE arg_tmp)
	    set(arg_tmp ${CMAKE_CURRENT_SOURCE_DIR}/${arg_tmp})
	endif(NOT IS_ABSOLUTE arg_tmp)
	if(${arg_tmp} IS_NEWER_THAN ${deps_file_tmp})
	    set(update_deps_tmp 1)
	    break(arg_tmp ${ARGN})
	endif(${arg_tmp} IS_NEWER_THAN ${deps_file_tmp})
    endforeach(arg_tmp ${ARGN})
    if(update_deps_tmp)
	get_imported_files_old(${out} ${ARGN})
	#filter_paths(${out} ${${out}} INCLUDE_CURRENT_DIR INCLUDE_PATHS ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})
	set(${out} ${ARGN} ${${out}})
	file(WRITE ${deps_file_tmp} "${${out}}")
    else(update_deps_tmp)
	file(STRINGS ${deps_file_tmp} ${out})
    endif(update_deps_tmp)
endmacro(get_files_depends out)
