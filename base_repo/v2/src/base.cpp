#include "base/base.h"

namespace base
{

int s_version = 0;

void init_library()
{
    s_version = 2;
}
int get_version()
{
    return s_version;
}
int* get_version_address()
{
    return &s_version;
}

int s_base2_specific;
int* base2_specific()
{
    return &s_base2_specific;
}
} // namespace base