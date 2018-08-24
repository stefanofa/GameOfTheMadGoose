cmake_minimum_required(VERSION 3.12)
project(GameOfTheMadGoose)

set(CMAKE_CXX_STANDARD 14)

add_executable(GameOfTheMadGoose main.cpp carta/Carta.cpp carta/Carta.h casella/Casella.cpp casella/Casella.h)