add_library(bt  ${CMAKE_CURRENT_SOURCE_DIR}/BT/Binary_tree.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/BT/102.Binary_tree_level_order_traversal.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/BT/107.Reverse_level_order_transversal.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/BT/104.Max_depth_binary_tree.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/BT/111.Min_depth_of_binary_tree.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/BT/543.Diameter_of_BT.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/BT/110.Balanced_Binary_tree.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/BT/100.Same_tree.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/BT/103.Zigzag_traversal.cpp)
target_include_directories(bt PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/BT)