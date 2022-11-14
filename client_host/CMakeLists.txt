cmake_minimum_required(VERSION 3.12)
project(client_host)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

set(DEPS_DIR ${CMAKE_SOURCE_DIR}/deps)
set(INSTALL_DIR ${CMAKE_SOURCE_DIR}/../enduser_host)

add_subdirectory(app)

