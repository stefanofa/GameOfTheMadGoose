cmake_minimum_required(VERSION 3.12)
project(GameOfTheMadGoose)

set(CMAKE_CXX_STANDARD 14)

add_executable(GameOfTheMadGoose main.cpp carta/Carta.cpp carta/Carta.h casella/Casella.cpp casella/Casella.h giocatore/Giocatore.cpp giocatore/Giocatore.h mazzo/Mazzo.cpp mazzo/Mazzo.h tabellone/Tabellone.cpp tabellone/Tabellone.h)