#ifndef _BASE_
#define _BASE_
#include<iostream>
class Base
{
    private:
    int x;
    public:
    int GetValue()const;
    Base(){};
    Base(int);
    ~Base();
    void say()const;
};

#endif