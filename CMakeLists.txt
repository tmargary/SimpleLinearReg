# set minimum cmake version
cmake_minimum_required(VERSION 3.15)

# project name and language
project(SimpleLinearReg LANGUAGES CXX)

# require C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# main code
add_executable(main main.cpp)