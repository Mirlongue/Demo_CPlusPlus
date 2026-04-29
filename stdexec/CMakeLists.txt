cmake_minimum_required(VERSION 3.29)

project(demo)

# copy build_bak/* to build/  for use local cache
# cancel the comment on the next line
# set(FETCHCONTENT_FULLY_DISCONNECTED ON)

add_subdirectory(stdexec)

add_executable(demo
    main.cpp)

target_link_libraries(demo PRIVATE STDEXEC::stdexec)