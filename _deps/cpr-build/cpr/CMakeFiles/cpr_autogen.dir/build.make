# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/dev/Proxy_Check

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dev/Proxy_Check/build/Desktop-Release

# Utility rule file for cpr_autogen.

# Include any custom commands dependencies for this target.
include _deps/cpr-build/cpr/CMakeFiles/cpr_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/cpr-build/cpr/CMakeFiles/cpr_autogen.dir/progress.make

_deps/cpr-build/cpr/CMakeFiles/cpr_autogen: _deps/cpr-build/cpr/cpr_autogen/timestamp

_deps/cpr-build/cpr/cpr_autogen/timestamp: /home/dev/Qt/6.7.0/gcc_64/./libexec/moc
_deps/cpr-build/cpr/cpr_autogen/timestamp: /home/dev/Qt/6.7.0/gcc_64/./libexec/uic
_deps/cpr-build/cpr/cpr_autogen/timestamp: _deps/cpr-build/cpr/CMakeFiles/cpr_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/dev/Proxy_Check/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target cpr"
	cd /home/dev/Proxy_Check/build/Desktop-Release/_deps/cpr-build/cpr && /usr/bin/cmake -E cmake_autogen /home/dev/Proxy_Check/build/Desktop-Release/_deps/cpr-build/cpr/CMakeFiles/cpr_autogen.dir/AutogenInfo.json Release
	cd /home/dev/Proxy_Check/build/Desktop-Release/_deps/cpr-build/cpr && /usr/bin/cmake -E touch /home/dev/Proxy_Check/build/Desktop-Release/_deps/cpr-build/cpr/cpr_autogen/timestamp

cpr_autogen: _deps/cpr-build/cpr/CMakeFiles/cpr_autogen
cpr_autogen: _deps/cpr-build/cpr/cpr_autogen/timestamp
cpr_autogen: _deps/cpr-build/cpr/CMakeFiles/cpr_autogen.dir/build.make
.PHONY : cpr_autogen

# Rule to build all files generated by this target.
_deps/cpr-build/cpr/CMakeFiles/cpr_autogen.dir/build: cpr_autogen
.PHONY : _deps/cpr-build/cpr/CMakeFiles/cpr_autogen.dir/build

_deps/cpr-build/cpr/CMakeFiles/cpr_autogen.dir/clean:
	cd /home/dev/Proxy_Check/build/Desktop-Release/_deps/cpr-build/cpr && $(CMAKE_COMMAND) -P CMakeFiles/cpr_autogen.dir/cmake_clean.cmake
.PHONY : _deps/cpr-build/cpr/CMakeFiles/cpr_autogen.dir/clean

_deps/cpr-build/cpr/CMakeFiles/cpr_autogen.dir/depend:
	cd /home/dev/Proxy_Check/build/Desktop-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dev/Proxy_Check /home/dev/Proxy_Check/build/Desktop-Release/_deps/cpr-src/cpr /home/dev/Proxy_Check/build/Desktop-Release /home/dev/Proxy_Check/build/Desktop-Release/_deps/cpr-build/cpr /home/dev/Proxy_Check/build/Desktop-Release/_deps/cpr-build/cpr/CMakeFiles/cpr_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/cpr-build/cpr/CMakeFiles/cpr_autogen.dir/depend

