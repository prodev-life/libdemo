cmake_minimum_required(VERSION 3.12)
project(our_host)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

set(DEPS_DIR ${CMAKE_SOURCE_DIR}/deps)
set(INSTALL_DIR_CLIENTS ${CMAKE_SOURCE_DIR}/../client_host/deps)
set(INSTALL_DIR_ENDUSERS ${CMAKE_SOURCE_DIR}/../enduser_host/deps)

add_subdirectory(wrap)

