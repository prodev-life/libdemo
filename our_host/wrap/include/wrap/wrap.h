#pragma once

#define LIB_EXPORT __attribute__((visibility("default")))

namespace wrap
{
LIB_EXPORT void init_base_library();
LIB_EXPORT int get_base_version();
LIB_EXPORT int* get_base_version_address();
LIB_EXPORT int* invoke_base1_specific();
} // namespace wrap