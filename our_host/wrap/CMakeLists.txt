project(wrap)

add_library(wrap_base_a SHARED "src/impl.cpp")
target_include_directories(wrap_base_a PUBLIC "include" PRIVATE ${DEPS_DIR}/include)
target_link_libraries(wrap_base_a ${DEPS_DIR}/lib/libbase.a)
set_target_properties(wrap_base_a PROPERTIES OUTPUT_NAME wrap_base_a)

install(TARGETS wrap_base_a LIBRARY DESTINATION ${INSTALL_DIR_CLIENTS}/lib)
install(TARGETS wrap_base_a LIBRARY DESTINATION ${INSTALL_DIR_ENDUSERS}/lib)
install(DIRECTORY "include" DESTINATION ${INSTALL_DIR_CLIENTS})
install(DIRECTORY "include" DESTINATION ${INSTALL_DIR_ENDUSERS})