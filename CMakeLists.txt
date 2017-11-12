cmake_minimum_required (VERSION 3.1)
project (FilesGetter)
set (PROJECT_NAME files_getter)
set (CMAKE_CXX_STANDARD 11)

set (SRC_DIR src)
file (GLOB_RECURSE SRC ${SRC_DIR}/*.cpp)
set (HEADERS_DIR include)
include_directories (${HEADERS_DIR})

add_executable (${PROJECT_NAME} ${SRC})
