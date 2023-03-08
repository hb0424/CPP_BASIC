#include "number.h"
#include <iostream>
namespace Friend
{

    Number::Number(int i):m_iNum(i)
    {
        std::cout << "  Number::Number(int i)" << std::endl;
    }

    Number::operator int() const
    {
        std::cout << "  Number::operator int() const" << std::endl;
        return m_iNum;
    }
}