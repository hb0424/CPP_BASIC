#ifndef V_CLASS_H
#define V_CLASS_H

class pvA{
protected:
    int m_iA;
public:
    pvA(int i);
    //pvA(){}
    virtual int getA() = 0;
};

class pvB : virtual public pvA
{
private:
    int m_iB;
public:
    pvB(int iA, int iB);
    pvB(int iB);
    virtual int getA() {return m_iA;}
    virtual int getB() {return m_iB;}
};

class pvC : virtual public pvA
{
private:
    int m_iC;
public:
    pvC(int iA, int iC);
    pvC(int iC);
    virtual int getA() {return m_iA;}
    virtual int getC() {return m_iC;}
};

class pvD : public pvB, public pvC
{
public:
    virtual int getA() {return m_iA;}
    pvD(int iA, int iB, int iC);
};

#endif