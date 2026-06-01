cmake_minimum_required(VERSION 4.30)

project(dotc LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(myshell src/main.cpp)
