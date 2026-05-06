cmake_minimum_required(VERSION 3.29)
project(demo)

add_executable(demo
     main.cpp
     cas_0/cas_0.cpp)

target_include_directories(demo PUBLIC
     ${CMAKE_CURRENT_SOURCE_DIR}/cas_0
)


