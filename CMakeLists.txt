cmake_minimum_required(VERSION 2.8)
project(Graph)

set(CMAKE_BUILD_TYPE "Debug")

set(WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
set(GRAPH_PATH "${CMAKE_CURRENT_SOURCE_DIR}/graph")
include_directories(${GRAPH_PATH})

set(GRAPH_SOURCES main.cpp
    "${GRAPH_PATH}/loadMatrix.cpp")
set(GRAPH_HEADERS "${GRAPH_PATH}/graph.hpp")
set(TXTDAT "Adjacency Matrix.txt")

add_executable(${PROJECT_NAME} ${GRAPH_SOURCES} ${GRAPH_HEADERS} ${TXTDAT})
install(TARGETS ${PROJECT_NAME} DESTINATION Graph)

include(CPack)
