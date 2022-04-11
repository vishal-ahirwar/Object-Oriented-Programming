#include"derived.hpp"
int main(void)
{

    Base *d2=new Derived(120);

    delete d2;
    std::cout<<"\n\n[Call] Successfully Done!\n\n";
    
    return 0;
}