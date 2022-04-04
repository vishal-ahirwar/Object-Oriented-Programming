#include "derived.h"
Derived::Derived()
{
    std::cerr << "Derived Constructor called!\n";
};
Derived::Derived(int data)
{
    std::cerr << "Derived constructor called with param of  :" << data << "\n";
};
Derived::Derived(int data, const char *base_msg) : Base::Base(base_msg)
{
    std::cerr << "Derived contructor called with param of :" << data << "\nbut base called by derived!\n";
};

Derived::~Derived()
{
    std::cerr << "Derived Destructor Called!\n";
};
