cmake_minimum_required(VERSION 3.18)
project(Test C)

set(SOURCES "${CMAKE_HOME_DIRECTORY}/src/sources")
set(HEADERS "${CMAKE_HOME_DIRECTORY}/src/includes")

include_directories(
    ${CMAKE_HOME_DIRECTORY}/src
)

add_executable(
    main
    ${SOURCES}/main.c
)