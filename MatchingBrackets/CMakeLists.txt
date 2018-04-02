cmake_minimum_required(VERSION 3.9)
project(MatchingBrackets C)

set(CMAKE_C_STANDARD 99)

add_executable(MatchingBrackets main.c Stack.h Stack.c)