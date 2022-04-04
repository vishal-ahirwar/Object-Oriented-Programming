#include"base.h"

Base::Base()
{
    std::cerr<<"base constructor called!\n";
};
Base::Base(const char*msg)
{
    std::cerr<<"Base constructor called with param of : "<<msg<<"\n";
};

Base::~Base()
{
   std::cerr<<"base destructor called!\n";
};
