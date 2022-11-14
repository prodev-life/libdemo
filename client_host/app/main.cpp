#include "base/base.h"
#include "wrap/wrap.h"
#include <iostream>

int main()
{

    int* addr = nullptr;
    int ver;
    base::init_library();
    base::base2_specific();
    std::cout << "After base::init_library():\n";
    ver = base::get_version();
    addr = base::get_version_address();
    std::cout << "ver: " << ver << " addr: " << addr
              << " base2_specific: " << base::base2_specific() << "\n";

    wrap::init_base_library();
    wrap::invoke_base1_specific();
    std::cout << "After wrap::init_base_library():\n";
    ver = wrap::get_base_version();
    addr = wrap::get_base_version_address();
    std::cout << "ver:  " << ver << " addr: " << addr
              << " base1_specific: " << wrap::invoke_base1_specific() << "\n";
    return 0;
}