cmake_minimum_required(VERSION 3.0)
project(recursion)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)


add_library(dp ${CMAKE_CURRENT_SOURCE_DIR}/Dynammic_Programming/322.Coin_change.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/Dynammic_Programming/Fibonacci.cpp)
add_library(recurse ${CMAKE_CURRENT_SOURCE_DIR}/24.Swap_pairs.cpp)
add_executable(recursion main.cpp)
target_link_libraries(recursion dp recurse)
