#include <iostream>
#include "build_in_data/build_in_data.h"
#include "friend/friend.h"

int main()
{
    std::cout << "====== Data Len " << std::endl;
    data_len();
    
    std::cout << "====== Array init {} " << std::endl;
    array_init_CXX11();

    std::cout << "====== String init {} " << std::endl;
    string_CXX11();

    std::cout << "====== friend " << std::endl;
    Friend::Time time;
    std::cout << "time + 3;" << std::endl;
    time + 3;
    std::cout << "3 + time; //非成员重载运算符" << std::endl;
    3 + time;
    return 0;
}