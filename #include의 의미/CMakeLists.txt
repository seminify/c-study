cmake_minimum_required(VERSION 3.25)
project(_include_ C)

set(CMAKE_C_STANDARD 11)

add_executable(_include_ main.c header1.h header2.h)
