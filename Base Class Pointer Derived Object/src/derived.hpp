#ifndef _DERIVED_
#define _DERIVED_
#include "base.hpp"
class Derived : public Base
{
public:
    void say() const;
    Derived();
    ~Derived() override;
    Derived(int);
};

#endif