cmake_minimum_required(VERSION 4.2.3)

project(Multiproject)

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(obuchaika)
add_subdirectory(bubble_sort)

set(CMAKE_SUPPRESS_REGENERATION true)