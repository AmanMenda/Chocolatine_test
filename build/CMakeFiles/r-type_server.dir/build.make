# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/build

# Include any dependencies generated for this target.
include CMakeFiles/r-type_server.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/r-type_server.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/r-type_server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/r-type_server.dir/flags.make

CMakeFiles/r-type_server.dir/main.cpp.o: CMakeFiles/r-type_server.dir/flags.make
CMakeFiles/r-type_server.dir/main.cpp.o: ../main.cpp
CMakeFiles/r-type_server.dir/main.cpp.o: CMakeFiles/r-type_server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/r-type_server.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/r-type_server.dir/main.cpp.o -MF CMakeFiles/r-type_server.dir/main.cpp.o.d -o CMakeFiles/r-type_server.dir/main.cpp.o -c /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/main.cpp

CMakeFiles/r-type_server.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_server.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/main.cpp > CMakeFiles/r-type_server.dir/main.cpp.i

CMakeFiles/r-type_server.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_server.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/main.cpp -o CMakeFiles/r-type_server.dir/main.cpp.s

CMakeFiles/r-type_server.dir/Maths/Vector2D.cpp.o: CMakeFiles/r-type_server.dir/flags.make
CMakeFiles/r-type_server.dir/Maths/Vector2D.cpp.o: ../Maths/Vector2D.cpp
CMakeFiles/r-type_server.dir/Maths/Vector2D.cpp.o: CMakeFiles/r-type_server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/r-type_server.dir/Maths/Vector2D.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/r-type_server.dir/Maths/Vector2D.cpp.o -MF CMakeFiles/r-type_server.dir/Maths/Vector2D.cpp.o.d -o CMakeFiles/r-type_server.dir/Maths/Vector2D.cpp.o -c /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/Maths/Vector2D.cpp

CMakeFiles/r-type_server.dir/Maths/Vector2D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_server.dir/Maths/Vector2D.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/Maths/Vector2D.cpp > CMakeFiles/r-type_server.dir/Maths/Vector2D.cpp.i

CMakeFiles/r-type_server.dir/Maths/Vector2D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_server.dir/Maths/Vector2D.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/Maths/Vector2D.cpp -o CMakeFiles/r-type_server.dir/Maths/Vector2D.cpp.s

CMakeFiles/r-type_server.dir/Systems/RenderSystem.cpp.o: CMakeFiles/r-type_server.dir/flags.make
CMakeFiles/r-type_server.dir/Systems/RenderSystem.cpp.o: ../Systems/RenderSystem.cpp
CMakeFiles/r-type_server.dir/Systems/RenderSystem.cpp.o: CMakeFiles/r-type_server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/r-type_server.dir/Systems/RenderSystem.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/r-type_server.dir/Systems/RenderSystem.cpp.o -MF CMakeFiles/r-type_server.dir/Systems/RenderSystem.cpp.o.d -o CMakeFiles/r-type_server.dir/Systems/RenderSystem.cpp.o -c /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/Systems/RenderSystem.cpp

CMakeFiles/r-type_server.dir/Systems/RenderSystem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_server.dir/Systems/RenderSystem.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/Systems/RenderSystem.cpp > CMakeFiles/r-type_server.dir/Systems/RenderSystem.cpp.i

CMakeFiles/r-type_server.dir/Systems/RenderSystem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_server.dir/Systems/RenderSystem.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/Systems/RenderSystem.cpp -o CMakeFiles/r-type_server.dir/Systems/RenderSystem.cpp.s

CMakeFiles/r-type_server.dir/Systems/ControllableSystem.cpp.o: CMakeFiles/r-type_server.dir/flags.make
CMakeFiles/r-type_server.dir/Systems/ControllableSystem.cpp.o: ../Systems/ControllableSystem.cpp
CMakeFiles/r-type_server.dir/Systems/ControllableSystem.cpp.o: CMakeFiles/r-type_server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/r-type_server.dir/Systems/ControllableSystem.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/r-type_server.dir/Systems/ControllableSystem.cpp.o -MF CMakeFiles/r-type_server.dir/Systems/ControllableSystem.cpp.o.d -o CMakeFiles/r-type_server.dir/Systems/ControllableSystem.cpp.o -c /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/Systems/ControllableSystem.cpp

CMakeFiles/r-type_server.dir/Systems/ControllableSystem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_server.dir/Systems/ControllableSystem.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/Systems/ControllableSystem.cpp > CMakeFiles/r-type_server.dir/Systems/ControllableSystem.cpp.i

CMakeFiles/r-type_server.dir/Systems/ControllableSystem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_server.dir/Systems/ControllableSystem.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/Systems/ControllableSystem.cpp -o CMakeFiles/r-type_server.dir/Systems/ControllableSystem.cpp.s

# Object files for target r-type_server
r__type_server_OBJECTS = \
"CMakeFiles/r-type_server.dir/main.cpp.o" \
"CMakeFiles/r-type_server.dir/Maths/Vector2D.cpp.o" \
"CMakeFiles/r-type_server.dir/Systems/RenderSystem.cpp.o" \
"CMakeFiles/r-type_server.dir/Systems/ControllableSystem.cpp.o"

# External object files for target r-type_server
r__type_server_EXTERNAL_OBJECTS =

r-type_server: CMakeFiles/r-type_server.dir/main.cpp.o
r-type_server: CMakeFiles/r-type_server.dir/Maths/Vector2D.cpp.o
r-type_server: CMakeFiles/r-type_server.dir/Systems/RenderSystem.cpp.o
r-type_server: CMakeFiles/r-type_server.dir/Systems/ControllableSystem.cpp.o
r-type_server: CMakeFiles/r-type_server.dir/build.make
r-type_server: /root/.conan2/p/b/sfmlc35d06d508a2a/p/lib/libsfml-audio-s.a
r-type_server: /root/.conan2/p/flacb5b6ae72bca7d/p/lib/libFLAC++.a
r-type_server: /root/.conan2/p/flacb5b6ae72bca7d/p/lib/libFLAC.a
r-type_server: /root/.conan2/p/opena2c400da3f6bcb/p/lib/libopenal.a
r-type_server: /root/.conan2/p/libalc18832b4760c0/p/lib/libasound.a
r-type_server: /root/.conan2/p/vorbida3da5e8f831a/p/lib/libvorbisfile.a
r-type_server: /root/.conan2/p/vorbida3da5e8f831a/p/lib/libvorbisenc.a
r-type_server: /root/.conan2/p/vorbida3da5e8f831a/p/lib/libvorbis.a
r-type_server: /root/.conan2/p/oggaeaa6d18c3328/p/lib/libogg.a
r-type_server: /root/.conan2/p/b/sfmlc35d06d508a2a/p/lib/libsfml-network-s.a
r-type_server: /root/.conan2/p/b/sfmlc35d06d508a2a/p/lib/libsfml-graphics-s.a
r-type_server: /root/.conan2/p/freetfdebee3b746a7/p/lib/libfreetype.a
r-type_server: /root/.conan2/p/libpn34c7395a9a5db/p/lib/libpng.a
r-type_server: /root/.conan2/p/zlib3579ae9197e0e/p/lib/libz.a
r-type_server: /root/.conan2/p/bzip26d48265eb59fb/p/lib/libbz2.a
r-type_server: /root/.conan2/p/brotl360211fabd5fd/p/lib/libbrotlienc.a
r-type_server: /root/.conan2/p/brotl360211fabd5fd/p/lib/libbrotlidec.a
r-type_server: /root/.conan2/p/brotl360211fabd5fd/p/lib/libbrotlicommon.a
r-type_server: /root/.conan2/p/b/sfmlc35d06d508a2a/p/lib/libsfml-window-s.a
r-type_server: /root/.conan2/p/b/sfmlc35d06d508a2a/p/lib/libsfml-system-s.a
r-type_server: CMakeFiles/r-type_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable r-type_server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/r-type_server.dir/link.txt --verbose=$(VERBOSE)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Copying r-type_server executable to project directory"
	/usr/bin/cmake -E copy /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/build/r-type_server /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda

# Rule to build all files generated by this target.
CMakeFiles/r-type_server.dir/build: r-type_server
.PHONY : CMakeFiles/r-type_server.dir/build

CMakeFiles/r-type_server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/r-type_server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/r-type_server.dir/clean

CMakeFiles/r-type_server.dir/depend:
	cd /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/build /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/build /home/aman/B-CPP-500-COT-5-1-rtype-aman.menda/build/CMakeFiles/r-type_server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/r-type_server.dir/depend

