#include"derived.hpp"
Derived::Derived()
{

};
Derived::~Derived()
{
    std::cerr<<"[Destructor Called]!\n";
};
void Derived::say()const
{
    std::cerr<<"[message] from Derived class!\n";
};
Derived::Derived(int ID):Base(ID)
{};
