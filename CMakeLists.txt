cmake_minimum_required(VERSION 3.12)
project(akarmi)

set(CMAKE_CXX_STANDARD 14)

add_executable(akarmi main.cpp ingredient.cpp ingredient.h func.h dishes.cpp dishes.h)