# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_SOURCE_DIR = /Users/mvukolov/Documents/filler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mvukolov/Documents/filler/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/filler_mvukolov.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/filler_mvukolov.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/filler_mvukolov.dir/flags.make

CMakeFiles/filler_mvukolov.dir/srcs/filler.c.o: CMakeFiles/filler_mvukolov.dir/flags.make
CMakeFiles/filler_mvukolov.dir/srcs/filler.c.o: ../srcs/filler.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mvukolov/Documents/filler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/filler_mvukolov.dir/srcs/filler.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filler_mvukolov.dir/srcs/filler.c.o   -c /Users/mvukolov/Documents/filler/srcs/filler.c

CMakeFiles/filler_mvukolov.dir/srcs/filler.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filler_mvukolov.dir/srcs/filler.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mvukolov/Documents/filler/srcs/filler.c > CMakeFiles/filler_mvukolov.dir/srcs/filler.c.i

CMakeFiles/filler_mvukolov.dir/srcs/filler.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filler_mvukolov.dir/srcs/filler.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mvukolov/Documents/filler/srcs/filler.c -o CMakeFiles/filler_mvukolov.dir/srcs/filler.c.s

CMakeFiles/filler_mvukolov.dir/srcs/filler.c.o.requires:

.PHONY : CMakeFiles/filler_mvukolov.dir/srcs/filler.c.o.requires

CMakeFiles/filler_mvukolov.dir/srcs/filler.c.o.provides: CMakeFiles/filler_mvukolov.dir/srcs/filler.c.o.requires
	$(MAKE) -f CMakeFiles/filler_mvukolov.dir/build.make CMakeFiles/filler_mvukolov.dir/srcs/filler.c.o.provides.build
.PHONY : CMakeFiles/filler_mvukolov.dir/srcs/filler.c.o.provides

CMakeFiles/filler_mvukolov.dir/srcs/filler.c.o.provides.build: CMakeFiles/filler_mvukolov.dir/srcs/filler.c.o


CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.o: CMakeFiles/filler_mvukolov.dir/flags.make
CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.o: ../get_next_line/get_next_line.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mvukolov/Documents/filler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.o   -c /Users/mvukolov/Documents/filler/get_next_line/get_next_line.c

CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mvukolov/Documents/filler/get_next_line/get_next_line.c > CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.i

CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mvukolov/Documents/filler/get_next_line/get_next_line.c -o CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.s

CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.o.requires:

.PHONY : CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.o.requires

CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.o.provides: CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.o.requires
	$(MAKE) -f CMakeFiles/filler_mvukolov.dir/build.make CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.o.provides.build
.PHONY : CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.o.provides

CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.o.provides.build: CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.o


CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.o: CMakeFiles/filler_mvukolov.dir/flags.make
CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.o: ../srcs/get_current_map.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mvukolov/Documents/filler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.o   -c /Users/mvukolov/Documents/filler/srcs/get_current_map.c

CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mvukolov/Documents/filler/srcs/get_current_map.c > CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.i

CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mvukolov/Documents/filler/srcs/get_current_map.c -o CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.s

CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.o.requires:

.PHONY : CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.o.requires

CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.o.provides: CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.o.requires
	$(MAKE) -f CMakeFiles/filler_mvukolov.dir/build.make CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.o.provides.build
.PHONY : CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.o.provides

CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.o.provides.build: CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.o


CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.o: CMakeFiles/filler_mvukolov.dir/flags.make
CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.o: ../srcs/can_place.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mvukolov/Documents/filler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.o   -c /Users/mvukolov/Documents/filler/srcs/can_place.c

CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mvukolov/Documents/filler/srcs/can_place.c > CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.i

CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mvukolov/Documents/filler/srcs/can_place.c -o CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.s

CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.o.requires:

.PHONY : CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.o.requires

CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.o.provides: CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.o.requires
	$(MAKE) -f CMakeFiles/filler_mvukolov.dir/build.make CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.o.provides.build
.PHONY : CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.o.provides

CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.o.provides.build: CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.o


CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.o: CMakeFiles/filler_mvukolov.dir/flags.make
CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.o: ../srcs/calculate_direction.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mvukolov/Documents/filler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.o   -c /Users/mvukolov/Documents/filler/srcs/calculate_direction.c

CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mvukolov/Documents/filler/srcs/calculate_direction.c > CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.i

CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mvukolov/Documents/filler/srcs/calculate_direction.c -o CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.s

CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.o.requires:

.PHONY : CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.o.requires

CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.o.provides: CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.o.requires
	$(MAKE) -f CMakeFiles/filler_mvukolov.dir/build.make CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.o.provides.build
.PHONY : CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.o.provides

CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.o.provides.build: CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.o


CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.o: CMakeFiles/filler_mvukolov.dir/flags.make
CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.o: ../srcs/external_functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mvukolov/Documents/filler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.o   -c /Users/mvukolov/Documents/filler/srcs/external_functions.c

CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mvukolov/Documents/filler/srcs/external_functions.c > CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.i

CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mvukolov/Documents/filler/srcs/external_functions.c -o CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.s

CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.o.requires:

.PHONY : CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.o.requires

CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.o.provides: CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.o.requires
	$(MAKE) -f CMakeFiles/filler_mvukolov.dir/build.make CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.o.provides.build
.PHONY : CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.o.provides

CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.o.provides.build: CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.o


# Object files for target filler_mvukolov
filler_mvukolov_OBJECTS = \
"CMakeFiles/filler_mvukolov.dir/srcs/filler.c.o" \
"CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.o" \
"CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.o" \
"CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.o" \
"CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.o" \
"CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.o"

# External object files for target filler_mvukolov
filler_mvukolov_EXTERNAL_OBJECTS =

filler_mvukolov: CMakeFiles/filler_mvukolov.dir/srcs/filler.c.o
filler_mvukolov: CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.o
filler_mvukolov: CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.o
filler_mvukolov: CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.o
filler_mvukolov: CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.o
filler_mvukolov: CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.o
filler_mvukolov: CMakeFiles/filler_mvukolov.dir/build.make
filler_mvukolov: ft_printf/libftprintf/liblibft.a
filler_mvukolov: ft_printf/libft_printf.a
filler_mvukolov: CMakeFiles/filler_mvukolov.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mvukolov/Documents/filler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable filler_mvukolov"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/filler_mvukolov.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/filler_mvukolov.dir/build: filler_mvukolov

.PHONY : CMakeFiles/filler_mvukolov.dir/build

CMakeFiles/filler_mvukolov.dir/requires: CMakeFiles/filler_mvukolov.dir/srcs/filler.c.o.requires
CMakeFiles/filler_mvukolov.dir/requires: CMakeFiles/filler_mvukolov.dir/get_next_line/get_next_line.c.o.requires
CMakeFiles/filler_mvukolov.dir/requires: CMakeFiles/filler_mvukolov.dir/srcs/get_current_map.c.o.requires
CMakeFiles/filler_mvukolov.dir/requires: CMakeFiles/filler_mvukolov.dir/srcs/can_place.c.o.requires
CMakeFiles/filler_mvukolov.dir/requires: CMakeFiles/filler_mvukolov.dir/srcs/calculate_direction.c.o.requires
CMakeFiles/filler_mvukolov.dir/requires: CMakeFiles/filler_mvukolov.dir/srcs/external_functions.c.o.requires

.PHONY : CMakeFiles/filler_mvukolov.dir/requires

CMakeFiles/filler_mvukolov.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/filler_mvukolov.dir/cmake_clean.cmake
.PHONY : CMakeFiles/filler_mvukolov.dir/clean

CMakeFiles/filler_mvukolov.dir/depend:
	cd /Users/mvukolov/Documents/filler/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mvukolov/Documents/filler /Users/mvukolov/Documents/filler /Users/mvukolov/Documents/filler/cmake-build-debug /Users/mvukolov/Documents/filler/cmake-build-debug /Users/mvukolov/Documents/filler/cmake-build-debug/CMakeFiles/filler_mvukolov.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/filler_mvukolov.dir/depend

