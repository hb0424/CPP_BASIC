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
    const Friend::Time time;
    std::cout << "time + 3; //the 3 will implicit to Time object until use 'explicit'" << std::endl;
    time + 3;
    std::cout << "3 + time; //非成员重载运算符" << std::endl;
    3 + time;

    std::cout << "====== implicit use of conversion function " << std::endl;
    std::cout << "int iNumber = Friend::Number(99) " << std::endl;
    int iNumber = Friend::Number(99);
    std::cout << "time + (int)Friend::Number(99); " << std::endl;
    time + (int)Friend::Number(99);
    return 0;
}