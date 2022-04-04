#ifndef DERIVED
#define DERIVED
#include"base.h"
class Derived:public Base
{
    public:
    Derived();
    Derived(int);
    Derived(int,const char*);
    ~Derived();
};

#endif