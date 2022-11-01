cmake_minimum_required(VERSION 3.0)
project(all_projects)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)


include_directories(bitwise)

add_subdirectory(src/Actual_interview_questions)
add_subdirectory(src/LL)
add_subdirectory(src/Graphs)
add_subdirectory(src/Trees)
add_executable(all_projects main_ll.cpp)
target_link_libraries(all_projects bfs bitwise bt ll)
