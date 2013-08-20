cmake_minimum_required(VERSION 2.8)
project(Graph)

set(GRAPH_PATH "${CMAKE_CURRENT_SOURCE_DIR}/graph")
include_directories(${GRAPH_PATH})
file(GLOB GRAPH_SOURCES "${GRAPH_PATH}/*.cpp")
file(GLOB GRAPH_HEADERS "${GRAPH_PATH}/*.hpp")

add_executable(${PROJECT_NAME} main.cpp ${GRAPH_SOURCES} ${GRAPH_HEADERS})
