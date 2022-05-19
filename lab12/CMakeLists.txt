cmake_minimum_required(VERSION 3.22)
project(lab12 C)

set(CMAKE_C_STANDARD 17)

add_executable(lab12 main.c linesegment.c linesegment.h point.c point.h triangle.h triangle.c digitalclock.c digitalclock.h towar.c towar.h)
