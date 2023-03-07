#include <iostream>
#include "build_in_data/build_in_data.h"

int main()
{
    std::cout << "====== Data Len " << std::endl;
    data_len();
    
    std::cout << "====== Array init {} " << std::endl;
    array_init_CXX11();

    std::cout << "====== String init {} " << std::endl;
    string_CXX11();

    return 0;
}