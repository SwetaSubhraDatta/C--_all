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
include src/Trees/CMakeFiles/bt.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/Trees/CMakeFiles/bt.dir/compiler_depend.make

# Include the progress variables for this target.
include src/Trees/CMakeFiles/bt.dir/progress.make

# Include the compile flags for this target's objects.
include src/Trees/CMakeFiles/bt.dir/flags.make

src/Trees/CMakeFiles/bt.dir/BT/Binary_tree.cpp.o: src/Trees/CMakeFiles/bt.dir/flags.make
src/Trees/CMakeFiles/bt.dir/BT/Binary_tree.cpp.o: /home/rob/VScodeProjects/C++_all/src/Trees/BT/Binary_tree.cpp
src/Trees/CMakeFiles/bt.dir/BT/Binary_tree.cpp.o: src/Trees/CMakeFiles/bt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rob/VScodeProjects/C++_all/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/Trees/CMakeFiles/bt.dir/BT/Binary_tree.cpp.o"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Trees/CMakeFiles/bt.dir/BT/Binary_tree.cpp.o -MF CMakeFiles/bt.dir/BT/Binary_tree.cpp.o.d -o CMakeFiles/bt.dir/BT/Binary_tree.cpp.o -c /home/rob/VScodeProjects/C++_all/src/Trees/BT/Binary_tree.cpp

src/Trees/CMakeFiles/bt.dir/BT/Binary_tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bt.dir/BT/Binary_tree.cpp.i"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rob/VScodeProjects/C++_all/src/Trees/BT/Binary_tree.cpp > CMakeFiles/bt.dir/BT/Binary_tree.cpp.i

src/Trees/CMakeFiles/bt.dir/BT/Binary_tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bt.dir/BT/Binary_tree.cpp.s"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rob/VScodeProjects/C++_all/src/Trees/BT/Binary_tree.cpp -o CMakeFiles/bt.dir/BT/Binary_tree.cpp.s

src/Trees/CMakeFiles/bt.dir/BT/102.Binary_tree_level_order_traversal.cpp.o: src/Trees/CMakeFiles/bt.dir/flags.make
src/Trees/CMakeFiles/bt.dir/BT/102.Binary_tree_level_order_traversal.cpp.o: /home/rob/VScodeProjects/C++_all/src/Trees/BT/102.Binary_tree_level_order_traversal.cpp
src/Trees/CMakeFiles/bt.dir/BT/102.Binary_tree_level_order_traversal.cpp.o: src/Trees/CMakeFiles/bt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rob/VScodeProjects/C++_all/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/Trees/CMakeFiles/bt.dir/BT/102.Binary_tree_level_order_traversal.cpp.o"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Trees/CMakeFiles/bt.dir/BT/102.Binary_tree_level_order_traversal.cpp.o -MF CMakeFiles/bt.dir/BT/102.Binary_tree_level_order_traversal.cpp.o.d -o CMakeFiles/bt.dir/BT/102.Binary_tree_level_order_traversal.cpp.o -c /home/rob/VScodeProjects/C++_all/src/Trees/BT/102.Binary_tree_level_order_traversal.cpp

src/Trees/CMakeFiles/bt.dir/BT/102.Binary_tree_level_order_traversal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bt.dir/BT/102.Binary_tree_level_order_traversal.cpp.i"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rob/VScodeProjects/C++_all/src/Trees/BT/102.Binary_tree_level_order_traversal.cpp > CMakeFiles/bt.dir/BT/102.Binary_tree_level_order_traversal.cpp.i

src/Trees/CMakeFiles/bt.dir/BT/102.Binary_tree_level_order_traversal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bt.dir/BT/102.Binary_tree_level_order_traversal.cpp.s"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rob/VScodeProjects/C++_all/src/Trees/BT/102.Binary_tree_level_order_traversal.cpp -o CMakeFiles/bt.dir/BT/102.Binary_tree_level_order_traversal.cpp.s

src/Trees/CMakeFiles/bt.dir/BT/107.Reverse_level_order_transversal.cpp.o: src/Trees/CMakeFiles/bt.dir/flags.make
src/Trees/CMakeFiles/bt.dir/BT/107.Reverse_level_order_transversal.cpp.o: /home/rob/VScodeProjects/C++_all/src/Trees/BT/107.Reverse_level_order_transversal.cpp
src/Trees/CMakeFiles/bt.dir/BT/107.Reverse_level_order_transversal.cpp.o: src/Trees/CMakeFiles/bt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rob/VScodeProjects/C++_all/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/Trees/CMakeFiles/bt.dir/BT/107.Reverse_level_order_transversal.cpp.o"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Trees/CMakeFiles/bt.dir/BT/107.Reverse_level_order_transversal.cpp.o -MF CMakeFiles/bt.dir/BT/107.Reverse_level_order_transversal.cpp.o.d -o CMakeFiles/bt.dir/BT/107.Reverse_level_order_transversal.cpp.o -c /home/rob/VScodeProjects/C++_all/src/Trees/BT/107.Reverse_level_order_transversal.cpp

src/Trees/CMakeFiles/bt.dir/BT/107.Reverse_level_order_transversal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bt.dir/BT/107.Reverse_level_order_transversal.cpp.i"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rob/VScodeProjects/C++_all/src/Trees/BT/107.Reverse_level_order_transversal.cpp > CMakeFiles/bt.dir/BT/107.Reverse_level_order_transversal.cpp.i

src/Trees/CMakeFiles/bt.dir/BT/107.Reverse_level_order_transversal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bt.dir/BT/107.Reverse_level_order_transversal.cpp.s"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rob/VScodeProjects/C++_all/src/Trees/BT/107.Reverse_level_order_transversal.cpp -o CMakeFiles/bt.dir/BT/107.Reverse_level_order_transversal.cpp.s

src/Trees/CMakeFiles/bt.dir/BT/104.Max_depth_binary_tree.cpp.o: src/Trees/CMakeFiles/bt.dir/flags.make
src/Trees/CMakeFiles/bt.dir/BT/104.Max_depth_binary_tree.cpp.o: /home/rob/VScodeProjects/C++_all/src/Trees/BT/104.Max_depth_binary_tree.cpp
src/Trees/CMakeFiles/bt.dir/BT/104.Max_depth_binary_tree.cpp.o: src/Trees/CMakeFiles/bt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rob/VScodeProjects/C++_all/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/Trees/CMakeFiles/bt.dir/BT/104.Max_depth_binary_tree.cpp.o"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Trees/CMakeFiles/bt.dir/BT/104.Max_depth_binary_tree.cpp.o -MF CMakeFiles/bt.dir/BT/104.Max_depth_binary_tree.cpp.o.d -o CMakeFiles/bt.dir/BT/104.Max_depth_binary_tree.cpp.o -c /home/rob/VScodeProjects/C++_all/src/Trees/BT/104.Max_depth_binary_tree.cpp

src/Trees/CMakeFiles/bt.dir/BT/104.Max_depth_binary_tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bt.dir/BT/104.Max_depth_binary_tree.cpp.i"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rob/VScodeProjects/C++_all/src/Trees/BT/104.Max_depth_binary_tree.cpp > CMakeFiles/bt.dir/BT/104.Max_depth_binary_tree.cpp.i

src/Trees/CMakeFiles/bt.dir/BT/104.Max_depth_binary_tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bt.dir/BT/104.Max_depth_binary_tree.cpp.s"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rob/VScodeProjects/C++_all/src/Trees/BT/104.Max_depth_binary_tree.cpp -o CMakeFiles/bt.dir/BT/104.Max_depth_binary_tree.cpp.s

src/Trees/CMakeFiles/bt.dir/BT/111.Min_depth_of_binary_tree.cpp.o: src/Trees/CMakeFiles/bt.dir/flags.make
src/Trees/CMakeFiles/bt.dir/BT/111.Min_depth_of_binary_tree.cpp.o: /home/rob/VScodeProjects/C++_all/src/Trees/BT/111.Min_depth_of_binary_tree.cpp
src/Trees/CMakeFiles/bt.dir/BT/111.Min_depth_of_binary_tree.cpp.o: src/Trees/CMakeFiles/bt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rob/VScodeProjects/C++_all/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/Trees/CMakeFiles/bt.dir/BT/111.Min_depth_of_binary_tree.cpp.o"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Trees/CMakeFiles/bt.dir/BT/111.Min_depth_of_binary_tree.cpp.o -MF CMakeFiles/bt.dir/BT/111.Min_depth_of_binary_tree.cpp.o.d -o CMakeFiles/bt.dir/BT/111.Min_depth_of_binary_tree.cpp.o -c /home/rob/VScodeProjects/C++_all/src/Trees/BT/111.Min_depth_of_binary_tree.cpp

src/Trees/CMakeFiles/bt.dir/BT/111.Min_depth_of_binary_tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bt.dir/BT/111.Min_depth_of_binary_tree.cpp.i"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rob/VScodeProjects/C++_all/src/Trees/BT/111.Min_depth_of_binary_tree.cpp > CMakeFiles/bt.dir/BT/111.Min_depth_of_binary_tree.cpp.i

src/Trees/CMakeFiles/bt.dir/BT/111.Min_depth_of_binary_tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bt.dir/BT/111.Min_depth_of_binary_tree.cpp.s"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rob/VScodeProjects/C++_all/src/Trees/BT/111.Min_depth_of_binary_tree.cpp -o CMakeFiles/bt.dir/BT/111.Min_depth_of_binary_tree.cpp.s

src/Trees/CMakeFiles/bt.dir/BT/543.Diameter_of_BT.cpp.o: src/Trees/CMakeFiles/bt.dir/flags.make
src/Trees/CMakeFiles/bt.dir/BT/543.Diameter_of_BT.cpp.o: /home/rob/VScodeProjects/C++_all/src/Trees/BT/543.Diameter_of_BT.cpp
src/Trees/CMakeFiles/bt.dir/BT/543.Diameter_of_BT.cpp.o: src/Trees/CMakeFiles/bt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rob/VScodeProjects/C++_all/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/Trees/CMakeFiles/bt.dir/BT/543.Diameter_of_BT.cpp.o"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Trees/CMakeFiles/bt.dir/BT/543.Diameter_of_BT.cpp.o -MF CMakeFiles/bt.dir/BT/543.Diameter_of_BT.cpp.o.d -o CMakeFiles/bt.dir/BT/543.Diameter_of_BT.cpp.o -c /home/rob/VScodeProjects/C++_all/src/Trees/BT/543.Diameter_of_BT.cpp

src/Trees/CMakeFiles/bt.dir/BT/543.Diameter_of_BT.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bt.dir/BT/543.Diameter_of_BT.cpp.i"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rob/VScodeProjects/C++_all/src/Trees/BT/543.Diameter_of_BT.cpp > CMakeFiles/bt.dir/BT/543.Diameter_of_BT.cpp.i

src/Trees/CMakeFiles/bt.dir/BT/543.Diameter_of_BT.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bt.dir/BT/543.Diameter_of_BT.cpp.s"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rob/VScodeProjects/C++_all/src/Trees/BT/543.Diameter_of_BT.cpp -o CMakeFiles/bt.dir/BT/543.Diameter_of_BT.cpp.s

src/Trees/CMakeFiles/bt.dir/BT/110.Balanced_Binary_tree.cpp.o: src/Trees/CMakeFiles/bt.dir/flags.make
src/Trees/CMakeFiles/bt.dir/BT/110.Balanced_Binary_tree.cpp.o: /home/rob/VScodeProjects/C++_all/src/Trees/BT/110.Balanced_Binary_tree.cpp
src/Trees/CMakeFiles/bt.dir/BT/110.Balanced_Binary_tree.cpp.o: src/Trees/CMakeFiles/bt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rob/VScodeProjects/C++_all/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/Trees/CMakeFiles/bt.dir/BT/110.Balanced_Binary_tree.cpp.o"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Trees/CMakeFiles/bt.dir/BT/110.Balanced_Binary_tree.cpp.o -MF CMakeFiles/bt.dir/BT/110.Balanced_Binary_tree.cpp.o.d -o CMakeFiles/bt.dir/BT/110.Balanced_Binary_tree.cpp.o -c /home/rob/VScodeProjects/C++_all/src/Trees/BT/110.Balanced_Binary_tree.cpp

src/Trees/CMakeFiles/bt.dir/BT/110.Balanced_Binary_tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bt.dir/BT/110.Balanced_Binary_tree.cpp.i"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rob/VScodeProjects/C++_all/src/Trees/BT/110.Balanced_Binary_tree.cpp > CMakeFiles/bt.dir/BT/110.Balanced_Binary_tree.cpp.i

src/Trees/CMakeFiles/bt.dir/BT/110.Balanced_Binary_tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bt.dir/BT/110.Balanced_Binary_tree.cpp.s"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rob/VScodeProjects/C++_all/src/Trees/BT/110.Balanced_Binary_tree.cpp -o CMakeFiles/bt.dir/BT/110.Balanced_Binary_tree.cpp.s

src/Trees/CMakeFiles/bt.dir/BT/100.Same_tree.cpp.o: src/Trees/CMakeFiles/bt.dir/flags.make
src/Trees/CMakeFiles/bt.dir/BT/100.Same_tree.cpp.o: /home/rob/VScodeProjects/C++_all/src/Trees/BT/100.Same_tree.cpp
src/Trees/CMakeFiles/bt.dir/BT/100.Same_tree.cpp.o: src/Trees/CMakeFiles/bt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rob/VScodeProjects/C++_all/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/Trees/CMakeFiles/bt.dir/BT/100.Same_tree.cpp.o"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Trees/CMakeFiles/bt.dir/BT/100.Same_tree.cpp.o -MF CMakeFiles/bt.dir/BT/100.Same_tree.cpp.o.d -o CMakeFiles/bt.dir/BT/100.Same_tree.cpp.o -c /home/rob/VScodeProjects/C++_all/src/Trees/BT/100.Same_tree.cpp

src/Trees/CMakeFiles/bt.dir/BT/100.Same_tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bt.dir/BT/100.Same_tree.cpp.i"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rob/VScodeProjects/C++_all/src/Trees/BT/100.Same_tree.cpp > CMakeFiles/bt.dir/BT/100.Same_tree.cpp.i

src/Trees/CMakeFiles/bt.dir/BT/100.Same_tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bt.dir/BT/100.Same_tree.cpp.s"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rob/VScodeProjects/C++_all/src/Trees/BT/100.Same_tree.cpp -o CMakeFiles/bt.dir/BT/100.Same_tree.cpp.s

src/Trees/CMakeFiles/bt.dir/BT/103.Zigzag_traversal.cpp.o: src/Trees/CMakeFiles/bt.dir/flags.make
src/Trees/CMakeFiles/bt.dir/BT/103.Zigzag_traversal.cpp.o: /home/rob/VScodeProjects/C++_all/src/Trees/BT/103.Zigzag_traversal.cpp
src/Trees/CMakeFiles/bt.dir/BT/103.Zigzag_traversal.cpp.o: src/Trees/CMakeFiles/bt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rob/VScodeProjects/C++_all/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/Trees/CMakeFiles/bt.dir/BT/103.Zigzag_traversal.cpp.o"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Trees/CMakeFiles/bt.dir/BT/103.Zigzag_traversal.cpp.o -MF CMakeFiles/bt.dir/BT/103.Zigzag_traversal.cpp.o.d -o CMakeFiles/bt.dir/BT/103.Zigzag_traversal.cpp.o -c /home/rob/VScodeProjects/C++_all/src/Trees/BT/103.Zigzag_traversal.cpp

src/Trees/CMakeFiles/bt.dir/BT/103.Zigzag_traversal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bt.dir/BT/103.Zigzag_traversal.cpp.i"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rob/VScodeProjects/C++_all/src/Trees/BT/103.Zigzag_traversal.cpp > CMakeFiles/bt.dir/BT/103.Zigzag_traversal.cpp.i

src/Trees/CMakeFiles/bt.dir/BT/103.Zigzag_traversal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bt.dir/BT/103.Zigzag_traversal.cpp.s"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rob/VScodeProjects/C++_all/src/Trees/BT/103.Zigzag_traversal.cpp -o CMakeFiles/bt.dir/BT/103.Zigzag_traversal.cpp.s

src/Trees/CMakeFiles/bt.dir/BT/545.Boundary_of_bt.cpp.o: src/Trees/CMakeFiles/bt.dir/flags.make
src/Trees/CMakeFiles/bt.dir/BT/545.Boundary_of_bt.cpp.o: /home/rob/VScodeProjects/C++_all/src/Trees/BT/545.Boundary_of_bt.cpp
src/Trees/CMakeFiles/bt.dir/BT/545.Boundary_of_bt.cpp.o: src/Trees/CMakeFiles/bt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rob/VScodeProjects/C++_all/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/Trees/CMakeFiles/bt.dir/BT/545.Boundary_of_bt.cpp.o"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Trees/CMakeFiles/bt.dir/BT/545.Boundary_of_bt.cpp.o -MF CMakeFiles/bt.dir/BT/545.Boundary_of_bt.cpp.o.d -o CMakeFiles/bt.dir/BT/545.Boundary_of_bt.cpp.o -c /home/rob/VScodeProjects/C++_all/src/Trees/BT/545.Boundary_of_bt.cpp

src/Trees/CMakeFiles/bt.dir/BT/545.Boundary_of_bt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bt.dir/BT/545.Boundary_of_bt.cpp.i"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rob/VScodeProjects/C++_all/src/Trees/BT/545.Boundary_of_bt.cpp > CMakeFiles/bt.dir/BT/545.Boundary_of_bt.cpp.i

src/Trees/CMakeFiles/bt.dir/BT/545.Boundary_of_bt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bt.dir/BT/545.Boundary_of_bt.cpp.s"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rob/VScodeProjects/C++_all/src/Trees/BT/545.Boundary_of_bt.cpp -o CMakeFiles/bt.dir/BT/545.Boundary_of_bt.cpp.s

src/Trees/CMakeFiles/bt.dir/BT/gfg1.View_of_bt.cpp.o: src/Trees/CMakeFiles/bt.dir/flags.make
src/Trees/CMakeFiles/bt.dir/BT/gfg1.View_of_bt.cpp.o: /home/rob/VScodeProjects/C++_all/src/Trees/BT/gfg1.View_of_bt.cpp
src/Trees/CMakeFiles/bt.dir/BT/gfg1.View_of_bt.cpp.o: src/Trees/CMakeFiles/bt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rob/VScodeProjects/C++_all/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/Trees/CMakeFiles/bt.dir/BT/gfg1.View_of_bt.cpp.o"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Trees/CMakeFiles/bt.dir/BT/gfg1.View_of_bt.cpp.o -MF CMakeFiles/bt.dir/BT/gfg1.View_of_bt.cpp.o.d -o CMakeFiles/bt.dir/BT/gfg1.View_of_bt.cpp.o -c /home/rob/VScodeProjects/C++_all/src/Trees/BT/gfg1.View_of_bt.cpp

src/Trees/CMakeFiles/bt.dir/BT/gfg1.View_of_bt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bt.dir/BT/gfg1.View_of_bt.cpp.i"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rob/VScodeProjects/C++_all/src/Trees/BT/gfg1.View_of_bt.cpp > CMakeFiles/bt.dir/BT/gfg1.View_of_bt.cpp.i

src/Trees/CMakeFiles/bt.dir/BT/gfg1.View_of_bt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bt.dir/BT/gfg1.View_of_bt.cpp.s"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rob/VScodeProjects/C++_all/src/Trees/BT/gfg1.View_of_bt.cpp -o CMakeFiles/bt.dir/BT/gfg1.View_of_bt.cpp.s

# Object files for target bt
bt_OBJECTS = \
"CMakeFiles/bt.dir/BT/Binary_tree.cpp.o" \
"CMakeFiles/bt.dir/BT/102.Binary_tree_level_order_traversal.cpp.o" \
"CMakeFiles/bt.dir/BT/107.Reverse_level_order_transversal.cpp.o" \
"CMakeFiles/bt.dir/BT/104.Max_depth_binary_tree.cpp.o" \
"CMakeFiles/bt.dir/BT/111.Min_depth_of_binary_tree.cpp.o" \
"CMakeFiles/bt.dir/BT/543.Diameter_of_BT.cpp.o" \
"CMakeFiles/bt.dir/BT/110.Balanced_Binary_tree.cpp.o" \
"CMakeFiles/bt.dir/BT/100.Same_tree.cpp.o" \
"CMakeFiles/bt.dir/BT/103.Zigzag_traversal.cpp.o" \
"CMakeFiles/bt.dir/BT/545.Boundary_of_bt.cpp.o" \
"CMakeFiles/bt.dir/BT/gfg1.View_of_bt.cpp.o"

# External object files for target bt
bt_EXTERNAL_OBJECTS =

src/Trees/libbt.a: src/Trees/CMakeFiles/bt.dir/BT/Binary_tree.cpp.o
src/Trees/libbt.a: src/Trees/CMakeFiles/bt.dir/BT/102.Binary_tree_level_order_traversal.cpp.o
src/Trees/libbt.a: src/Trees/CMakeFiles/bt.dir/BT/107.Reverse_level_order_transversal.cpp.o
src/Trees/libbt.a: src/Trees/CMakeFiles/bt.dir/BT/104.Max_depth_binary_tree.cpp.o
src/Trees/libbt.a: src/Trees/CMakeFiles/bt.dir/BT/111.Min_depth_of_binary_tree.cpp.o
src/Trees/libbt.a: src/Trees/CMakeFiles/bt.dir/BT/543.Diameter_of_BT.cpp.o
src/Trees/libbt.a: src/Trees/CMakeFiles/bt.dir/BT/110.Balanced_Binary_tree.cpp.o
src/Trees/libbt.a: src/Trees/CMakeFiles/bt.dir/BT/100.Same_tree.cpp.o
src/Trees/libbt.a: src/Trees/CMakeFiles/bt.dir/BT/103.Zigzag_traversal.cpp.o
src/Trees/libbt.a: src/Trees/CMakeFiles/bt.dir/BT/545.Boundary_of_bt.cpp.o
src/Trees/libbt.a: src/Trees/CMakeFiles/bt.dir/BT/gfg1.View_of_bt.cpp.o
src/Trees/libbt.a: src/Trees/CMakeFiles/bt.dir/build.make
src/Trees/libbt.a: src/Trees/CMakeFiles/bt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rob/VScodeProjects/C++_all/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX static library libbt.a"
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && $(CMAKE_COMMAND) -P CMakeFiles/bt.dir/cmake_clean_target.cmake
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Trees/CMakeFiles/bt.dir/build: src/Trees/libbt.a
.PHONY : src/Trees/CMakeFiles/bt.dir/build

src/Trees/CMakeFiles/bt.dir/clean:
	cd /home/rob/VScodeProjects/C++_all/build/src/Trees && $(CMAKE_COMMAND) -P CMakeFiles/bt.dir/cmake_clean.cmake
.PHONY : src/Trees/CMakeFiles/bt.dir/clean

src/Trees/CMakeFiles/bt.dir/depend:
	cd /home/rob/VScodeProjects/C++_all/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rob/VScodeProjects/C++_all /home/rob/VScodeProjects/C++_all/src/Trees /home/rob/VScodeProjects/C++_all/build /home/rob/VScodeProjects/C++_all/build/src/Trees /home/rob/VScodeProjects/C++_all/build/src/Trees/CMakeFiles/bt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/Trees/CMakeFiles/bt.dir/depend

