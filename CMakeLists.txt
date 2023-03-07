cmake_minimum_required(VERSION 3.0.0)
project(cpp_basic VERSION 0.1.0)

include(CTest)
enable_testing()

#libs
add_subdirectory (build_in_data)
add_subdirectory (friend)

add_executable(${PROJECT_NAME} main.cpp)

set(link_list)
list(APPEND link_list BuildInData)
list(APPEND link_list Friend)

target_link_libraries(${PROJECT_NAME} ${link_list})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
