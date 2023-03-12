#include "vclass.h"
#include <iostream>

pvA::pvA(int i):m_iA(i)
{
    std::cout << "  pvA::pvA(int i)" << std::endl;
}

pvB::pvB(int iA, int iB):pvA(iA), m_iB(iB)
{
    std::cout << "  pvB::pvB(int iA, int iB)" << std::endl;
}
pvB::pvB(int iB):m_iB(iB), pvA(0)
{
    std::cout << "  pvB::pvB(int iB)" << std::endl;
}

pvC::pvC(int iA, int iC):pvA(iA), m_iC(iC)
{
    std::cout << "  pvC::pvC(int iA, int iC)" << std::endl;
}
pvC::pvC(int iC):m_iC(iC), pvA(0)
{
    std::cout << "  pvC::pvC(int iC)" << std::endl;
}

pvD::pvD(int iA, int iB, int iC):pvA(iA), pvB(iB), pvC(iC)
{
    std::cout << "  pvD::pvD(int iA, int iB, int iC)" << std::endl;
}