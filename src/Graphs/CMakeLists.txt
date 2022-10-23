add_library(bfs ${CMAKE_CURRENT_SOURCE_DIR}/BFS/733.flood_fill.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/BFS/463.Island_perimter.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/BFS/695.Max_island_area.cpp)
target_include_directories(bfs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/BFS)