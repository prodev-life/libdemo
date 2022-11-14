#pragma once

#define LIB_EXPORT __attribute__((visibility("default")))

namespace base
{
LIB_EXPORT void init_library();
LIB_EXPORT int get_version();
LIB_EXPORT int* get_version_address();
LIB_EXPORT int* base1_specific();
} // namespace base