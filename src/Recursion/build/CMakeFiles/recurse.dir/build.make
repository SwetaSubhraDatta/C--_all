# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.24.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.24.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/rob/VScodeProjects/C--_all/src/Recursion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rob/VScodeProjects/C--_all/src/Recursion/build

# Include any dependencies generated for this target.
include CMakeFiles/recurse.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/recurse.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/recurse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/recurse.dir/flags.make

CMakeFiles/recurse.dir/24.Swap_pairs.cpp.o: CMakeFiles/recurse.dir/flags.make
CMakeFiles/recurse.dir/24.Swap_pairs.cpp.o: /Users/rob/VScodeProjects/C--_all/src/Recursion/24.Swap_pairs.cpp
CMakeFiles/recurse.dir/24.Swap_pairs.cpp.o: CMakeFiles/recurse.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rob/VScodeProjects/C--_all/src/Recursion/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/recurse.dir/24.Swap_pairs.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/recurse.dir/24.Swap_pairs.cpp.o -MF CMakeFiles/recurse.dir/24.Swap_pairs.cpp.o.d -o CMakeFiles/recurse.dir/24.Swap_pairs.cpp.o -c /Users/rob/VScodeProjects/C--_all/src/Recursion/24.Swap_pairs.cpp

CMakeFiles/recurse.dir/24.Swap_pairs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/recurse.dir/24.Swap_pairs.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rob/VScodeProjects/C--_all/src/Recursion/24.Swap_pairs.cpp > CMakeFiles/recurse.dir/24.Swap_pairs.cpp.i

CMakeFiles/recurse.dir/24.Swap_pairs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/recurse.dir/24.Swap_pairs.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rob/VScodeProjects/C--_all/src/Recursion/24.Swap_pairs.cpp -o CMakeFiles/recurse.dir/24.Swap_pairs.cpp.s

# Object files for target recurse
recurse_OBJECTS = \
"CMakeFiles/recurse.dir/24.Swap_pairs.cpp.o"

# External object files for target recurse
recurse_EXTERNAL_OBJECTS =

librecurse.a: CMakeFiles/recurse.dir/24.Swap_pairs.cpp.o
librecurse.a: CMakeFiles/recurse.dir/build.make
librecurse.a: CMakeFiles/recurse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rob/VScodeProjects/C--_all/src/Recursion/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library librecurse.a"
	$(CMAKE_COMMAND) -P CMakeFiles/recurse.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/recurse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/recurse.dir/build: librecurse.a
.PHONY : CMakeFiles/recurse.dir/build

CMakeFiles/recurse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/recurse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/recurse.dir/clean

CMakeFiles/recurse.dir/depend:
	cd /Users/rob/VScodeProjects/C--_all/src/Recursion/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rob/VScodeProjects/C--_all/src/Recursion /Users/rob/VScodeProjects/C--_all/src/Recursion /Users/rob/VScodeProjects/C--_all/src/Recursion/build /Users/rob/VScodeProjects/C--_all/src/Recursion/build /Users/rob/VScodeProjects/C--_all/src/Recursion/build/CMakeFiles/recurse.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/recurse.dir/depend
