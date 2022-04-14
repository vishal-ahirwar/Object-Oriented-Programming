#include<iostream>
#include<set>

int main(void)
{
    std::set<int> vec;
    for(int i=0;i<100;++i)vec.insert(i);
     for(int i=0;i<100;++i)vec.insert(i);
    std::set<int>::iterator itr;

    for(itr=vec.begin();itr!=vec.end();++itr)
    {
        std::cerr<<*itr<<"\n";
    };
};