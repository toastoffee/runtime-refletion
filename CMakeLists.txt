cmake_minimum_required(VERSION 3.27)
project(runtime_refletion)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(runtime_refletion main.cpp
        src/register.cpp
        src/register.hpp
        src/type_descriptor.cpp
        src/type_descriptor.hpp
        src/class_register.cpp
        src/class_register.hpp
        src/object.cpp
        src/object.hpp
        src/register_helper.cpp
        src/register_helper.hpp
        src/registration.cpp
        src/registration.hpp
        src/type_resolver.cpp
        src/type_resolver.hpp
        src/type/utils.cpp
        src/type/utils.hpp
        src/type/type_info.cpp
        src/type/type_info.hpp)
