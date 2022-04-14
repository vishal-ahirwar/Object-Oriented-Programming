#ifndef _DERIVED_
#define _DERIVED_
#include "base.hpp"
class Derived final: public Base 
{
public:
    void say() const override;
    Derived();
    ~Derived() override;
    Derived(int);
};

// class SuperDerived:public Derived
// {

// };
#endif