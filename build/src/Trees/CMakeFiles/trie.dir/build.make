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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rob/VScodeProjects/C++_all

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rob/VScodeProjects/C++_all/build

# Include any dependencies generated for this target.
include src/Trees/CMakeFiles/trie.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/Trees/CMakeFiles/trie.dir/compiler_depend.make

# Include the progress variables for this target.
include src/Trees/CMakeFiles/trie.dir/progress.make

# Include the compile flags for this target's objects.
include src/Trees/CMakeFiles/trie.dir/flags.make

src/Trees/CMakeFiles/trie.dir/Trie/trie.cpp.o: src/Trees/CMakeFiles/trie.dir/flags.make
src/Trees/CMakeFiles/trie.dir/Trie/trie.cpp.o: /home/rob/VScodeProjects/C++_all/src/Trees/Trie/trie.cpp
src/Trees/CMakeFiles/trie.dir/Trie/trie.cpp.o: src/Trees/CMakeFiles/trie.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rob/VScodeProjects/C++_all/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/Trees/CMakeFiles/trie.dir/Trie/trie.cpp.o"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Trees/CMakeFiles/trie.dir/Trie/trie.cpp.o -MF CMakeFiles/trie.dir/Trie/trie.cpp.o.d -o CMakeFiles/trie.dir/Trie/trie.cpp.o -c /home/rob/VScodeProjects/C++_all/src/Trees/Trie/trie.cpp

src/Trees/CMakeFiles/trie.dir/Trie/trie.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trie.dir/Trie/trie.cpp.i"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rob/VScodeProjects/C++_all/src/Trees/Trie/trie.cpp > CMakeFiles/trie.dir/Trie/trie.cpp.i

src/Trees/CMakeFiles/trie.dir/Trie/trie.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trie.dir/Trie/trie.cpp.s"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rob/VScodeProjects/C++_all/src/Trees/Trie/trie.cpp -o CMakeFiles/trie.dir/Trie/trie.cpp.s

# Object files for target trie
trie_OBJECTS = \
"CMakeFiles/trie.dir/Trie/trie.cpp.o"

# External object files for target trie
trie_EXTERNAL_OBJECTS =

src/Trees/libtrie.a: src/Trees/CMakeFiles/trie.dir/Trie/trie.cpp.o
src/Trees/libtrie.a: src/Trees/CMakeFiles/trie.dir/build.make
src/Trees/libtrie.a: src/Trees/CMakeFiles/trie.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rob/VScodeProjects/C++_all/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libtrie.a"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && $(CMAKE_COMMAND) -P CMakeFiles/trie.dir/cmake_clean_target.cmake
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/trie.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Trees/CMakeFiles/trie.dir/build: src/Trees/libtrie.a
.PHONY : src/Trees/CMakeFiles/trie.dir/build

src/Trees/CMakeFiles/trie.dir/clean:
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && $(CMAKE_COMMAND) -P CMakeFiles/trie.dir/cmake_clean.cmake
.PHONY : src/Trees/CMakeFiles/trie.dir/clean

src/Trees/CMakeFiles/trie.dir/depend:
	cd /home/rob/VScodeProjects/C++_all/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rob/VScodeProjects/C++_all /home/rob/VScodeProjects/C++_all/src/Trees /home/rob/VScodeProjects/C++_all/build /home/rob/VScodeProjects/C++_all/build/src/Trees /home/rob/VScodeProjects/C++_all/build/src/Trees/CMakeFiles/trie.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/Trees/CMakeFiles/trie.dir/depend

