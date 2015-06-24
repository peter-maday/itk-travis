cmake_minimum_required(VERSION 2.8)

project(itk-travis)

LIST(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/test)

enable_testing()

set(DATA_DIR ${PROJECT_SOURCE_DIR}/data)

add_subdirectory(libfilter)
add_subdirectory(test)