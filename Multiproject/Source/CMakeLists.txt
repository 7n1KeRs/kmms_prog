cmake_minimum_required(VERSION 4.2.3)

project(Multiproject)

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(obuchaika)
add_subdirectory(bubble_sort)
add_subdirectory(vector_list)

set(CMAKE_SUPPRESS_REGENERATION true)