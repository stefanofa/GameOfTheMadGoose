cmake_minimum_required(VERSION 3.12)
project(GameOfTheMadGoose)

set(CMAKE_CXX_STANDARD 14)

add_executable(GameOfTheMadGoose main.cpp source/carta/Carta.cpp source/carta/Carta.h source/casella/Casella.cpp source/casella/Casella.h source/giocatore/Giocatore.cpp source/giocatore/Giocatore.h source/mazzo/Mazzo.cpp source/mazzo/Mazzo.h source/tabellone/Tabellone.cpp source/tabellone/Tabellone.h source/esecutore/Esecutore.cpp source/esecutore/Esecutore.h source/elements.cpp source/elements.h source/casella/CasellaFermo.cpp source/casella/CasellaFermo.h source/casella/CasellaPunti.cpp source/casella/CasellaPunti.h)