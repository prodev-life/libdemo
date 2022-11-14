#include "base/base.h"

namespace base
{
int s_version = 0;
void init_library()
{
    s_version = 1;
}

int get_version()
{
    return s_version;
}
int* get_version_address()
{
    return &s_version;
}

int s_base1_specific = 0;
int* base1_specific()
{
    return &s_base1_specific;
}
} // namespace base