cmake_minimum_required(VERSION 3.0.0)

# project name and language
project(DemoGtest VERSION 0.1.0 LANGUAGES CXX)

# set the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)


