cmake_minimum_required(VERSION 3.12)
project(base_repo)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

set(INSTALL_DIR_WRAP ${CMAKE_SOURCE_DIR}/../our_host/deps)
set(INSTALL_DIR_CLIENTS ${CMAKE_SOURCE_DIR}/../client_host/deps)
set(INSTALL_DIR_ENDUSERS ${CMAKE_SOURCE_DIR}/../enduser_host/deps)

add_subdirectory(v2)
add_subdirectory(v1)

