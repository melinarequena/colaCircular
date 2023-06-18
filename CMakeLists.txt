cmake_minimum_required(VERSION 3.24)
project(colaCircular C)

set(CMAKE_C_STANDARD 11)

add_executable(colaCircular main.c colaCircular.c colaCircular.h)
