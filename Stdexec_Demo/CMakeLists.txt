cmake_minimum_required(VERSION 3.29)

project(demo)

# build_bak
# set(FETCHCONTENT_FULLY_DISCONNECTED ON)

add_subdirectory(stdexec)

add_executable(demo
    main.cpp)

target_link_libraries(demo PRIVATE STDEXEC::stdexec)