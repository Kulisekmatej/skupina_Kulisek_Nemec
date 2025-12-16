cmake_minimum_required(VERSION 4.0)
project(skupina_Brdicka_Kulisek)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(skupina_Brdicka_Kulisek
        untitled/main.cpp
        Formule.h
        main.cpp
        Main/main.cpp
        Main/Formule.h)
