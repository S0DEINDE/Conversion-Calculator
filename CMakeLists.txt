cmake_minimum_required(VERSION 3.25)
project(Math_Calculator C)

set(CMAKE_C_STANDARD 11)

add_executable(Math_Calculator
        Calculator.c)

add_executable(Calculator Calculator.c)