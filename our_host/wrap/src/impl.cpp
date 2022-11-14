#include "base/base.h"
#include "wrap/wrap.h"

namespace wrap
{
void init_base_library()
{
    base::init_library();
}
int get_base_version()
{
    return base::get_version();
}

int* get_base_version_address()
{
    return base::get_version_address();
}

int* invoke_base1_specific()
{
    return base::base1_specific();
}

} // namespace wrap