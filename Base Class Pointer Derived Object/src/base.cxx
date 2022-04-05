#include"base.hpp"
Base::Base(int ID)
{
    this->x=ID;
};
void Base::say()const
{
    std::cerr<<"\n[message] from base class ... \n";

};

int Base::GetValue()const{return this->x;};

Base::~Base(){std::cerr<<"[Destructor Called]";};
