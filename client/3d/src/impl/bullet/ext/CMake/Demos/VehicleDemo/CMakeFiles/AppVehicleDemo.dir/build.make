# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shd/src/nawia/client/3d/src/impl/bullet/ext

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shd/src/nawia/client/3d/src/impl/bullet/ext/CMake

# Include any dependencies generated for this target.
include Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/depend.make

# Include the progress variables for this target.
include Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/progress.make

# Include the compile flags for this target's objects.
include Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/flags.make

Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/VehicleDemo.o: Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/flags.make
Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/VehicleDemo.o: ../Demos/VehicleDemo/VehicleDemo.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shd/src/nawia/client/3d/src/impl/bullet/ext/CMake/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/VehicleDemo.o"
	cd /home/shd/src/nawia/client/3d/src/impl/bullet/ext/CMake/Demos/VehicleDemo && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/AppVehicleDemo.dir/VehicleDemo.o -c /home/shd/src/nawia/client/3d/src/impl/bullet/ext/Demos/VehicleDemo/VehicleDemo.cpp

Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/VehicleDemo.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppVehicleDemo.dir/VehicleDemo.i"
	cd /home/shd/src/nawia/client/3d/src/impl/bullet/ext/CMake/Demos/VehicleDemo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/shd/src/nawia/client/3d/src/impl/bullet/ext/Demos/VehicleDemo/VehicleDemo.cpp > CMakeFiles/AppVehicleDemo.dir/VehicleDemo.i

Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/VehicleDemo.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppVehicleDemo.dir/VehicleDemo.s"
	cd /home/shd/src/nawia/client/3d/src/impl/bullet/ext/CMake/Demos/VehicleDemo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/shd/src/nawia/client/3d/src/impl/bullet/ext/Demos/VehicleDemo/VehicleDemo.cpp -o CMakeFiles/AppVehicleDemo.dir/VehicleDemo.s

Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/VehicleDemo.o.requires:
.PHONY : Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/VehicleDemo.o.requires

Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/VehicleDemo.o.provides: Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/VehicleDemo.o.requires
	$(MAKE) -f Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/build.make Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/VehicleDemo.o.provides.build
.PHONY : Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/VehicleDemo.o.provides

Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/VehicleDemo.o.provides.build: Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/VehicleDemo.o

Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/main.o: Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/flags.make
Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/main.o: ../Demos/VehicleDemo/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shd/src/nawia/client/3d/src/impl/bullet/ext/CMake/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/main.o"
	cd /home/shd/src/nawia/client/3d/src/impl/bullet/ext/CMake/Demos/VehicleDemo && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/AppVehicleDemo.dir/main.o -c /home/shd/src/nawia/client/3d/src/impl/bullet/ext/Demos/VehicleDemo/main.cpp

Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppVehicleDemo.dir/main.i"
	cd /home/shd/src/nawia/client/3d/src/impl/bullet/ext/CMake/Demos/VehicleDemo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/shd/src/nawia/client/3d/src/impl/bullet/ext/Demos/VehicleDemo/main.cpp > CMakeFiles/AppVehicleDemo.dir/main.i

Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppVehicleDemo.dir/main.s"
	cd /home/shd/src/nawia/client/3d/src/impl/bullet/ext/CMake/Demos/VehicleDemo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/shd/src/nawia/client/3d/src/impl/bullet/ext/Demos/VehicleDemo/main.cpp -o CMakeFiles/AppVehicleDemo.dir/main.s

Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/main.o.requires:
.PHONY : Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/main.o.requires

Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/main.o.provides: Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/main.o.requires
	$(MAKE) -f Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/build.make Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/main.o.provides.build
.PHONY : Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/main.o.provides

Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/main.o.provides.build: Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/main.o

# Object files for target AppVehicleDemo
AppVehicleDemo_OBJECTS = \
"CMakeFiles/AppVehicleDemo.dir/VehicleDemo.o" \
"CMakeFiles/AppVehicleDemo.dir/main.o"

# External object files for target AppVehicleDemo
AppVehicleDemo_EXTERNAL_OBJECTS =

Demos/VehicleDemo/AppVehicleDemo: Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/VehicleDemo.o
Demos/VehicleDemo/AppVehicleDemo: Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/main.o
Demos/VehicleDemo/AppVehicleDemo: Demos/OpenGL/libOpenGLSupport.a
Demos/VehicleDemo/AppVehicleDemo: src/BulletDynamics/libBulletDynamics.a
Demos/VehicleDemo/AppVehicleDemo: src/BulletCollision/libBulletCollision.a
Demos/VehicleDemo/AppVehicleDemo: src/LinearMath/libLinearMath.a
Demos/VehicleDemo/AppVehicleDemo: /usr/lib/libglut.so
Demos/VehicleDemo/AppVehicleDemo: /usr/lib/libGL.so
Demos/VehicleDemo/AppVehicleDemo: /usr/lib/libGLU.so
Demos/VehicleDemo/AppVehicleDemo: Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/build.make
Demos/VehicleDemo/AppVehicleDemo: Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable AppVehicleDemo"
	cd /home/shd/src/nawia/client/3d/src/impl/bullet/ext/CMake/Demos/VehicleDemo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AppVehicleDemo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/build: Demos/VehicleDemo/AppVehicleDemo
.PHONY : Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/build

Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/requires: Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/VehicleDemo.o.requires
Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/requires: Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/main.o.requires
.PHONY : Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/requires

Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/clean:
	cd /home/shd/src/nawia/client/3d/src/impl/bullet/ext/CMake/Demos/VehicleDemo && $(CMAKE_COMMAND) -P CMakeFiles/AppVehicleDemo.dir/cmake_clean.cmake
.PHONY : Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/clean

Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/depend:
	cd /home/shd/src/nawia/client/3d/src/impl/bullet/ext/CMake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shd/src/nawia/client/3d/src/impl/bullet/ext /home/shd/src/nawia/client/3d/src/impl/bullet/ext/Demos/VehicleDemo /home/shd/src/nawia/client/3d/src/impl/bullet/ext/CMake /home/shd/src/nawia/client/3d/src/impl/bullet/ext/CMake/Demos/VehicleDemo /home/shd/src/nawia/client/3d/src/impl/bullet/ext/CMake/Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Demos/VehicleDemo/CMakeFiles/AppVehicleDemo.dir/depend

