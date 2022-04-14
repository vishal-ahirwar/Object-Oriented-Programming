#include<iostream>
#include<list>

int main(void)
{
      std::list<int> vec;
    for(int i=0;i<1000000;++i)vec.push_back(i);
    std::list<int>::iterator itr;
    for(itr=vec.begin();itr!=vec.end();++itr)
    {
        std::cerr<<*itr<<"\n";
    };

};
