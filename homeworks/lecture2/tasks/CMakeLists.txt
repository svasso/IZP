cmake_minimum_required(VERSION 3.8)
project(tasks)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        exercise1.c
        exercise2.c
        exercise3.c
        exercise4.c
        exercise5.c
        exercise6.c
        exercise7.c)

add_executable(tasks ${SOURCE_FILES})