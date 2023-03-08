#include "time.h"
#include "iostream"
namespace Friend{

Time::Time()
{
    m_hours = m_minutes = 0;
}

Time::Time(int h, int m)
{
    m_hours = h;
    m_minutes = m;
}

Time Time::operator+(const Time &t) const
{
    std::cout << "  Time Time::operator+(const Time &t)" << std::endl;
    Time sum;
    sum.m_minutes = m_minutes + t.m_minutes;
    sum.m_hours = m_hours + t.m_hours + sum.m_minutes/60;
    sum.m_minutes %= 60;
    return sum;
}


Time operator+(int n, const Time &t)
{
    std::cout << "  friend Time operate+(int n, const Time &t)" << std::endl;

    return t + n;
}

}