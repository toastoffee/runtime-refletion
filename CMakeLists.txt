cmake_minimum_required(VERSION 3.27)
project(runtime_refletion)

set(CMAKE_CXX_STANDARD 11)

add_executable(runtime_refletion main.cpp
        src/register.cpp
        src/register.hpp
        src/type_descriptor.cpp
        src/type_descriptor.hpp
        src/type_resolver.cpp
        src/type_resolver.hpp
        src/class_register.cpp
        src/class_register.hpp)
