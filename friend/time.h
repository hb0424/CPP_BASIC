#ifndef TIME_H
#define TIME_H

namespace Friend{



class Time{
protected:
    int m_hours;
    int m_minutes;
public:
    Time();
    Time(int h, int m = 0);
    
    Time operator+(const Time &t) const;

    friend Time operator+(int n, const Time &t);
};


}
#endif