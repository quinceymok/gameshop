cmake_minimum_required(VERSION 3.21)
project(gameshop)

set(CMAKE_CXX_STANDARD 17)

add_executable(gameshop main.cpp game.cpp game.h persoon.cpp persoon.h)
