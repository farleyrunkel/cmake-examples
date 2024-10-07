cmake_minimum_required (VERSION 3.5)

project(dependencies)

# add cmake search path
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)

# Add sub directories
add_subdirectory(basic)
add_subdirectory(advance)
add_subdirectory(source)
