#include"derived.hpp"
int main(void)
{

    Base *d2=new Derived(120);
    // Derived*d2=new Base(67); you can't

    d2->say();
    std::cerr<<"\nd2->GetValue()const : "<<d2->GetValue();

    std::cout<<"\n\n[Call] Successfully Done!\n\n";
    
    return 0;
}