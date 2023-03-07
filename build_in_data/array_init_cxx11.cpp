#include <iostream>

void array_init_CXX11()
{
    {
        int arrNumbers[5] = {1, 2, 3, 4, 5};
        std::cout << "int arrNumbers[5] = {1, 2, 3, 4, 5};" << std::endl;
        for (int i = 0; i < sizeof(arrNumbers)/sizeof arrNumbers[0]; ++i)
        {
            std::cout << "arrNumbers[" << i << "]: " << arrNumbers[i] << std::endl;
        }
    }

    {
        int nArrSize = 5;
        int arrNumbers[nArrSize] = {1, 2, 3, 4, 5};
        std::cout << "int nArrSize = 5;" << std::endl;
        std::cout << "int arrNumbers[nArrSize] = {1, 2, 3, 4, 5};" << std::endl;
        for (int i = 0; i < sizeof(arrNumbers)/sizeof arrNumbers[0]; ++i)
        {
            std::cout << "arrNumbers[" << i << "]: " << arrNumbers[i] << std::endl;
        }
    }

    {
        int arrNumbers[5] = {1};
        std::cout << "int arrNumbers[5] = {1};" << std::endl;
        for (int i = 0; i < sizeof(arrNumbers)/sizeof arrNumbers[0]; ++i)
        {
            std::cout << "arrNumbers[" << i << "]: " << arrNumbers[i] << std::endl;
        }
    }

    {
        int arrNumbers[5] = {0};
        std::cout << "int arrNumbers[5] = {0};" << std::endl;
        for (int i = 0; i < sizeof(arrNumbers)/sizeof arrNumbers[0]; ++i)
        {
            std::cout << "arrNumbers[" << i << "]: " << arrNumbers[i] << std::endl;
        }
    }

    {
        int arrNumbers[5] = {};
        std::cout << "int arrNumbers[5] = {};" << std::endl;
        for (int i = 0; i < sizeof(arrNumbers)/sizeof arrNumbers[0]; ++i)
        {
            std::cout << "arrNumbers[" << i << "]: " << arrNumbers[i] << std::endl;
        }
    }
    
}