#include"derived.hpp"
Derived::Derived()
{
      std::cerr<<"[Derived][Constructor Called]!\n";

};
Derived::~Derived()
{
    std::cerr<<"[Derived][Destructor Called]!\n";
};
void Derived::say()const
{
    std::cerr<<"[message] from Derived class!\n";
};
Derived::Derived(int ID):Base(ID)
{
      std::cerr<<"[Derived][Constructor Called]!\n";
};
