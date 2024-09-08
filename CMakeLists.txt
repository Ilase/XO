cmake_minimum_required(VERSION 3.11)
project(
    XO
)
set(CMAKE_CXX_STANDARD 23)

set(
    XO_HEADERS
    include/node.hpp
    include/cond.hpp
)

set(
    SOURCES
    src/main.cpp
)

include_directories(include)

add_executable(
    ${PROJECT_NAME}
    ${SOURCES}
    ${XO_HEADERS}
)