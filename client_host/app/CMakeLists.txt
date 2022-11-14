project(app)


add_executable(app_01 main.cpp)
target_include_directories(app_01 PRIVATE ${DEPS_DIR}/include)
target_link_libraries(app_01 ${DEPS_DIR}/lib/libbase.so ${DEPS_DIR}/lib/libwrap_base_a.so)

add_executable(app_02 main.cpp)
target_include_directories(app_02 PRIVATE ${DEPS_DIR}/include)
target_link_libraries(app_02 ${DEPS_DIR}/lib/libwrap_base_a.so ${DEPS_DIR}/lib/libbase.so)

add_executable(app_03 main.cpp)
target_include_directories(app_03 PRIVATE ${DEPS_DIR}/include)
target_link_libraries(app_03 ${DEPS_DIR}/lib/libbase.a ${DEPS_DIR}/lib/libwrap_base_a.so)

add_executable(app_04 main.cpp)
target_include_directories(app_04 PRIVATE ${DEPS_DIR}/include)
target_link_libraries(app_04 ${DEPS_DIR}/lib/libwrap_base_a.so ${DEPS_DIR}/lib/libbase.a)

install(TARGETS app_01 app_02 app_03 app_04 DESTINATION ${INSTALL_DIR})