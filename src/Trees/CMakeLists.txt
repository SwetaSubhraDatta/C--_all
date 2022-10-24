add_library(bt  ${CMAKE_CURRENT_SOURCE_DIR}/BT/Binary_tree.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/BT/102.Binary_tree_level_order_traversal.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/BT/107.Reverse_level_order_transversal.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/BT/104.Max_depth_binary_tree.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/BT/111.Min_depth_of_binary_tree.cpp)
target_include_directories(bt PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/BT)