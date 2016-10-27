cmake_minimum_required(VERSION 2.8.9)
project(Archivos)

include_directories(include)

set(SOURCES src/main.cpp src/Archivos.cpp)

add_executable(Archivos ${SOURCES})