cmake_minimum_required(VERSION 3.22)
project(untitled2)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES main.cpp)
set(SOURCE_FILES Employees.cpp Employees.h)
set(SOURCE_FILES Sales.cpp Sales.h)
set(SOURCE_FILES Engineer.cpp Engineer.h)
add_executable(untitled2 main.cpp Employees.cpp Employees.h Sales.cpp Sales.h Engineer.cpp Engineer.h )
