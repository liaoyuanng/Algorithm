# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mac3/Documents/Algorithm/RadixSort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mac3/Documents/Algorithm/RadixSort/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RadixSort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RadixSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RadixSort.dir/flags.make

CMakeFiles/RadixSort.dir/main.c.o: CMakeFiles/RadixSort.dir/flags.make
CMakeFiles/RadixSort.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mac3/Documents/Algorithm/RadixSort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/RadixSort.dir/main.c.o"
	/Applications/Xcode9.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/RadixSort.dir/main.c.o   -c /Users/mac3/Documents/Algorithm/RadixSort/main.c

CMakeFiles/RadixSort.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/RadixSort.dir/main.c.i"
	/Applications/Xcode9.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mac3/Documents/Algorithm/RadixSort/main.c > CMakeFiles/RadixSort.dir/main.c.i

CMakeFiles/RadixSort.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/RadixSort.dir/main.c.s"
	/Applications/Xcode9.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mac3/Documents/Algorithm/RadixSort/main.c -o CMakeFiles/RadixSort.dir/main.c.s

CMakeFiles/RadixSort.dir/main.c.o.requires:

.PHONY : CMakeFiles/RadixSort.dir/main.c.o.requires

CMakeFiles/RadixSort.dir/main.c.o.provides: CMakeFiles/RadixSort.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/RadixSort.dir/build.make CMakeFiles/RadixSort.dir/main.c.o.provides.build
.PHONY : CMakeFiles/RadixSort.dir/main.c.o.provides

CMakeFiles/RadixSort.dir/main.c.o.provides.build: CMakeFiles/RadixSort.dir/main.c.o


# Object files for target RadixSort
RadixSort_OBJECTS = \
"CMakeFiles/RadixSort.dir/main.c.o"

# External object files for target RadixSort
RadixSort_EXTERNAL_OBJECTS =

RadixSort: CMakeFiles/RadixSort.dir/main.c.o
RadixSort: CMakeFiles/RadixSort.dir/build.make
RadixSort: CMakeFiles/RadixSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mac3/Documents/Algorithm/RadixSort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable RadixSort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RadixSort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RadixSort.dir/build: RadixSort

.PHONY : CMakeFiles/RadixSort.dir/build

CMakeFiles/RadixSort.dir/requires: CMakeFiles/RadixSort.dir/main.c.o.requires

.PHONY : CMakeFiles/RadixSort.dir/requires

CMakeFiles/RadixSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RadixSort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RadixSort.dir/clean

CMakeFiles/RadixSort.dir/depend:
	cd /Users/mac3/Documents/Algorithm/RadixSort/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mac3/Documents/Algorithm/RadixSort /Users/mac3/Documents/Algorithm/RadixSort /Users/mac3/Documents/Algorithm/RadixSort/cmake-build-debug /Users/mac3/Documents/Algorithm/RadixSort/cmake-build-debug /Users/mac3/Documents/Algorithm/RadixSort/cmake-build-debug/CMakeFiles/RadixSort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RadixSort.dir/depend

