project(base1)

add_library(base1_shared SHARED "src/base.cpp")
target_include_directories(base1_shared PUBLIC "include")
set_target_properties(base1_shared PROPERTIES OUTPUT_NAME base)


add_library(base1_static STATIC "src/base.cpp")
target_include_directories(base1_static PUBLIC "include")
set_target_properties(base1_static PROPERTIES OUTPUT_NAME base)

install(TARGETS base1_shared LIBRARY DESTINATION ${INSTALL_DIR_WRAP}/lib)
install(TARGETS base1_static ARCHIVE DESTINATION ${INSTALL_DIR_WRAP}/lib)
install(DIRECTORY "include" DESTINATION ${INSTALL_DIR_WRAP})
