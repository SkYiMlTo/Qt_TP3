# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
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

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/Gogob/CLionProjects/TP3Qt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Gogob/CLionProjects/TP3Qt/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TP3Qt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TP3Qt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TP3Qt.dir/flags.make

CMakeFiles/TP3Qt.dir/main.cpp.o: CMakeFiles/TP3Qt.dir/flags.make
CMakeFiles/TP3Qt.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Gogob/CLionProjects/TP3Qt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TP3Qt.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TP3Qt.dir/main.cpp.o -c /mnt/c/Users/Gogob/CLionProjects/TP3Qt/main.cpp

CMakeFiles/TP3Qt.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TP3Qt.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Gogob/CLionProjects/TP3Qt/main.cpp > CMakeFiles/TP3Qt.dir/main.cpp.i

CMakeFiles/TP3Qt.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TP3Qt.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Gogob/CLionProjects/TP3Qt/main.cpp -o CMakeFiles/TP3Qt.dir/main.cpp.s

# Object files for target TP3Qt
TP3Qt_OBJECTS = \
"CMakeFiles/TP3Qt.dir/main.cpp.o"

# External object files for target TP3Qt
TP3Qt_EXTERNAL_OBJECTS =

TP3Qt: CMakeFiles/TP3Qt.dir/main.cpp.o
TP3Qt: CMakeFiles/TP3Qt.dir/build.make
TP3Qt: CMakeFiles/TP3Qt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Gogob/CLionProjects/TP3Qt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TP3Qt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TP3Qt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TP3Qt.dir/build: TP3Qt

.PHONY : CMakeFiles/TP3Qt.dir/build

CMakeFiles/TP3Qt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TP3Qt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TP3Qt.dir/clean

CMakeFiles/TP3Qt.dir/depend:
	cd /mnt/c/Users/Gogob/CLionProjects/TP3Qt/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Gogob/CLionProjects/TP3Qt /mnt/c/Users/Gogob/CLionProjects/TP3Qt /mnt/c/Users/Gogob/CLionProjects/TP3Qt/cmake-build-debug /mnt/c/Users/Gogob/CLionProjects/TP3Qt/cmake-build-debug /mnt/c/Users/Gogob/CLionProjects/TP3Qt/cmake-build-debug/CMakeFiles/TP3Qt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TP3Qt.dir/depend
