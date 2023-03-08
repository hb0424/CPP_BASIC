#ifndef NUMBER_H
#define NUMBER_H

namespace Friend
{
    class Number{
    protected:
        int m_iNum;
    
    public:
        Number(int i = 0);
        operator int() const;

    };
}

#endif