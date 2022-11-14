project(base2)

add_library(base2_shared SHARED "src/base.cpp")
target_include_directories(base2_shared PUBLIC "include")
set_target_properties(base2_shared PROPERTIES OUTPUT_NAME base)


add_library(base2_static STATIC "src/base.cpp")
target_include_directories(base2_static PUBLIC "include")
set_target_properties(base2_static PROPERTIES OUTPUT_NAME base)

install(TARGETS base2_shared LIBRARY DESTINATION ${INSTALL_DIR_CLIENTS}/lib)
install(TARGETS base2_shared LIBRARY DESTINATION ${INSTALL_DIR_ENDUSERS}/lib)
install(TARGETS base2_static ARCHIVE DESTINATION ${INSTALL_DIR_CLIENTS}/lib)

install(DIRECTORY "include" DESTINATION ${INSTALL_DIR_CLIENTS})
install(DIRECTORY "include" DESTINATION ${INSTALL_DIR_ENDUSERS})
