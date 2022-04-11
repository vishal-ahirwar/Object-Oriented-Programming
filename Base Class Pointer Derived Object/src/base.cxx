#include"base.hpp"
Base::Base(int ID)
{
    this->x=ID;
      std::cerr<<"[Base][Constructor Called]!\n";
};
void Base::say()const
{
    std::cerr<<"\n[message] from base class ... \n";

};

int Base::GetValue()const{return this->x;};

Base::~Base(){  std::cerr<<"[Base][Destructor Called]!\n";};
