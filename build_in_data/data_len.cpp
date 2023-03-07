#include <iostream>

void data_len()
{
    short sData(0);
    std::cout << "short: " << sizeof sData << std::endl;
    
    int iData(0);
    std::cout << "int: " << sizeof iData << std::endl;

    long lData(0);
    std::cout << "long: " << sizeof lData << std::endl;

    long long llData(0);
    std::cout << "long long: " << sizeof llData << std::endl;

    float fData(0);
    std::cout << "float: " << sizeof fData << std::endl;

    double dData(0);
    std::cout << "double: " << sizeof dData << std::endl;

    char cData(0);
    std::cout << "char: " << sizeof cData << std::endl;

    bool bData(0);
    std::cout << "bool: " << sizeof bData << std::endl;
}