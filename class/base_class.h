
#ifndef BASE_CLASS_H
#define BASE_CLASS_H
#include <iostream>
class parent{
private:
    int m_iP;
public:
    parent(){
        std::cout << "  parent()" << std::endl;
    }
    parent(int ip):m_iP(ip){
        std::cout << "  parent(int)" << std::endl;
    }
    virtual ~parent(){
        std::cout << "  ~parent()" <<std::endl;
    }
};

class child: public parent
{
private:
    /* data */
public:
    child(/* args */){
        std::cout << "  child()" << std::endl;
    };
    child(int ip):parent(ip){
        std::cout << "  child(int)" << std::endl;
    };
    virtual ~child(){
        std::cout << "  ~child()" <<std::endl;
    }
};

#endif