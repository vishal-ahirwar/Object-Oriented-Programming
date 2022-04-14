#include<iostream>
#include<map>

int main()
{
    std::map<int,std::string>m;
    m.insert(std::pair<int,std::string>(1,"Visha;"));
      m.insert(std::pair<int,std::string>(1,"Visha;"));
      m.insert(std::pair<int,std::string>(2,"Visha;"));
      m.insert(std::pair<int,std::string>(3,"Visha;"));
      m.insert(std::pair<int,std::string>(6,"Visha;"));
    
    for(const auto&val:m)
    {
        std::cerr<<val.first<<" "<<val.second;
    };

    printf("\n");
    std::map<int,std::string>::iterator itr;
    itr=m.find(6);
    std::cout<<"\n"<<itr->first<<" "<<itr->second<<"\n";
    


    return 0;
}