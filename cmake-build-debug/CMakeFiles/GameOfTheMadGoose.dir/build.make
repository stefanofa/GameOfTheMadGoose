# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/stefanofa/Documenti/cl/clion-2018.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/stefanofa/Documenti/cl/clion-2018.2.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/stefanofa/CLionProjects/GameOfTheMadGoose

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GameOfTheMadGoose.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GameOfTheMadGoose.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GameOfTheMadGoose.dir/flags.make

CMakeFiles/GameOfTheMadGoose.dir/GOP.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/GOP.cpp.o: ../GOP.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/GOP.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/GOP.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/GOP.cpp

CMakeFiles/GameOfTheMadGoose.dir/GOP.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/GOP.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/GOP.cpp > CMakeFiles/GameOfTheMadGoose.dir/GOP.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/GOP.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/GOP.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/GOP.cpp -o CMakeFiles/GameOfTheMadGoose.dir/GOP.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/casella/Casella.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/casella/Casella.cpp.o: ../source/casella/Casella.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/casella/Casella.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/casella/Casella.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/Casella.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/casella/Casella.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/casella/Casella.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/Casella.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/casella/Casella.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/casella/Casella.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/casella/Casella.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/Casella.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/casella/Casella.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/giocatore/Giocatore.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/giocatore/Giocatore.cpp.o: ../source/giocatore/Giocatore.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/giocatore/Giocatore.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/giocatore/Giocatore.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/giocatore/Giocatore.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/giocatore/Giocatore.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/giocatore/Giocatore.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/giocatore/Giocatore.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/giocatore/Giocatore.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/giocatore/Giocatore.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/giocatore/Giocatore.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/giocatore/Giocatore.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/giocatore/Giocatore.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/mazzo/Mazzo.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/mazzo/Mazzo.cpp.o: ../source/mazzo/Mazzo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/mazzo/Mazzo.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/mazzo/Mazzo.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/mazzo/Mazzo.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/mazzo/Mazzo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/mazzo/Mazzo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/mazzo/Mazzo.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/mazzo/Mazzo.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/mazzo/Mazzo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/mazzo/Mazzo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/mazzo/Mazzo.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/mazzo/Mazzo.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/tabellone/Tabellone.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/tabellone/Tabellone.cpp.o: ../source/tabellone/Tabellone.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/tabellone/Tabellone.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/tabellone/Tabellone.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/tabellone/Tabellone.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/tabellone/Tabellone.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/tabellone/Tabellone.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/tabellone/Tabellone.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/tabellone/Tabellone.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/tabellone/Tabellone.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/tabellone/Tabellone.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/tabellone/Tabellone.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/tabellone/Tabellone.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/esecutore/Esecutore.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/esecutore/Esecutore.cpp.o: ../source/esecutore/Esecutore.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/esecutore/Esecutore.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/esecutore/Esecutore.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/esecutore/Esecutore.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/esecutore/Esecutore.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/esecutore/Esecutore.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/esecutore/Esecutore.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/esecutore/Esecutore.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/esecutore/Esecutore.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/esecutore/Esecutore.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/esecutore/Esecutore.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/esecutore/Esecutore.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/elements.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/elements.cpp.o: ../source/elements.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/elements.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/elements.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/elements.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/elements.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/elements.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/elements.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/elements.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/elements.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/elements.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/elements.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/elements.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaFermo.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaFermo.cpp.o: ../source/casella/CasellaFermo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaFermo.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaFermo.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/CasellaFermo.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaFermo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaFermo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/CasellaFermo.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaFermo.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaFermo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaFermo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/CasellaFermo.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaFermo.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPunti.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPunti.cpp.o: ../source/casella/CasellaPunti.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPunti.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPunti.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/CasellaPunti.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPunti.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPunti.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/CasellaPunti.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPunti.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPunti.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPunti.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/CasellaPunti.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPunti.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/carta/Carta.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/carta/Carta.cpp.o: ../source/carta/Carta.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/carta/Carta.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/carta/Carta.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/Carta.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/carta/Carta.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/carta/Carta.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/Carta.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/carta/Carta.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/carta/Carta.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/carta/Carta.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/Carta.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/carta/Carta.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaAbbassa.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaAbbassa.cpp.o: ../source/carta/CartaAbbassa.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaAbbassa.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaAbbassa.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaAbbassa.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaAbbassa.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaAbbassa.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaAbbassa.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaAbbassa.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaAbbassa.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaAbbassa.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaAbbassa.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaAbbassa.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaGOP.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaGOP.cpp.o: ../source/carta/CartaGOP.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaGOP.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaGOP.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaGOP.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaGOP.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaGOP.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaGOP.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaGOP.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaGOP.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaGOP.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaGOP.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaGOP.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaImmunita.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaImmunita.cpp.o: ../source/carta/CartaImmunita.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaImmunita.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaImmunita.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaImmunita.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaImmunita.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaImmunita.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaImmunita.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaImmunita.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaImmunita.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaImmunita.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaImmunita.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaImmunita.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaIndovina.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaIndovina.cpp.o: ../source/carta/CartaIndovina.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaIndovina.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaIndovina.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaIndovina.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaIndovina.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaIndovina.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaIndovina.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaIndovina.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaIndovina.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaIndovina.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaIndovina.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaIndovina.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaInverti.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaInverti.cpp.o: ../source/carta/CartaInverti.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaInverti.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaInverti.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaInverti.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaInverti.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaInverti.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaInverti.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaInverti.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaInverti.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaInverti.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaInverti.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaInverti.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaRaddoppia.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaRaddoppia.cpp.o: ../source/carta/CartaRaddoppia.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaRaddoppia.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaRaddoppia.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaRaddoppia.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaRaddoppia.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaRaddoppia.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaRaddoppia.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaRaddoppia.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaRaddoppia.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaRaddoppia.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/carta/CartaRaddoppia.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaRaddoppia.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPesca.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPesca.cpp.o: ../source/casella/CasellaPesca.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPesca.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPesca.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/CasellaPesca.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPesca.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPesca.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/CasellaPesca.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPesca.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPesca.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPesca.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/CasellaPesca.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPesca.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaSwitch.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaSwitch.cpp.o: ../source/casella/CasellaSwitch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaSwitch.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaSwitch.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/CasellaSwitch.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaSwitch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaSwitch.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/CasellaSwitch.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaSwitch.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaSwitch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaSwitch.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/CasellaSwitch.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaSwitch.cpp.s

CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaAllOrNothing.cpp.o: CMakeFiles/GameOfTheMadGoose.dir/flags.make
CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaAllOrNothing.cpp.o: ../source/casella/CasellaAllOrNothing.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaAllOrNothing.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaAllOrNothing.cpp.o -c /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/CasellaAllOrNothing.cpp

CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaAllOrNothing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaAllOrNothing.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/CasellaAllOrNothing.cpp > CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaAllOrNothing.cpp.i

CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaAllOrNothing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaAllOrNothing.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stefanofa/CLionProjects/GameOfTheMadGoose/source/casella/CasellaAllOrNothing.cpp -o CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaAllOrNothing.cpp.s

# Object files for target GameOfTheMadGoose
GameOfTheMadGoose_OBJECTS = \
"CMakeFiles/GameOfTheMadGoose.dir/GOP.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/casella/Casella.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/giocatore/Giocatore.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/mazzo/Mazzo.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/tabellone/Tabellone.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/esecutore/Esecutore.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/elements.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaFermo.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPunti.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/carta/Carta.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaAbbassa.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaGOP.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaImmunita.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaIndovina.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaInverti.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaRaddoppia.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPesca.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaSwitch.cpp.o" \
"CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaAllOrNothing.cpp.o"

# External object files for target GameOfTheMadGoose
GameOfTheMadGoose_EXTERNAL_OBJECTS =

GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/GOP.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/casella/Casella.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/giocatore/Giocatore.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/mazzo/Mazzo.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/tabellone/Tabellone.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/esecutore/Esecutore.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/elements.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaFermo.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPunti.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/carta/Carta.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaAbbassa.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaGOP.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaImmunita.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaIndovina.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaInverti.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/carta/CartaRaddoppia.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaPesca.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaSwitch.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/source/casella/CasellaAllOrNothing.cpp.o
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/build.make
GameOfTheMadGoose: CMakeFiles/GameOfTheMadGoose.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Linking CXX executable GameOfTheMadGoose"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GameOfTheMadGoose.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GameOfTheMadGoose.dir/build: GameOfTheMadGoose

.PHONY : CMakeFiles/GameOfTheMadGoose.dir/build

CMakeFiles/GameOfTheMadGoose.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GameOfTheMadGoose.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GameOfTheMadGoose.dir/clean

CMakeFiles/GameOfTheMadGoose.dir/depend:
	cd /home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stefanofa/CLionProjects/GameOfTheMadGoose /home/stefanofa/CLionProjects/GameOfTheMadGoose /home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug /home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug /home/stefanofa/CLionProjects/GameOfTheMadGoose/cmake-build-debug/CMakeFiles/GameOfTheMadGoose.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GameOfTheMadGoose.dir/depend

