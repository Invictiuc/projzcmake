cmake_minimum_required(VERSION 3.10)

project(calki)

set(CMAKE_CXX_STANDARD 17)

add_executable(calki
    MainApp/main.cpp 
    mathlib/match.cpp
    )
