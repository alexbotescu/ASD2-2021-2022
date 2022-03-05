cmake_minimum_required(VERSION 3.21)
project(stacks C)

set(CMAKE_C_STANDARD 99)

add_executable(stacks main.c stack.h snode.h snode.c stack.c)
