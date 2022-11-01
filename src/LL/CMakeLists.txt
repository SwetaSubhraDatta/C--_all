add_library(ll ${CMAKE_CURRENT_SOURCE_DIR}/core/ll.cpp
               ${CMAKE_CURRENT_SOURCE_DIR}/203.remove_ll_elements.cpp)
target_include_directories(ll PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/core)