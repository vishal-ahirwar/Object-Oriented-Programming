#include<iostream>
#include<vector>

int main(void)
{
    std::vector<int> vec;
    for(int i=0;i<1000000;++i)vec.push_back(i);
    std::vector<int>::iterator itr;

    for(itr=vec.begin();itr!=vec.end();++itr)
    {
        std::cerr<<*itr<<"\n";
    };

    // while(true)
    // {
    //     std::string id;
    //    std::getline(std::cin,id);
    //     ID.push_back(id);
    //     if(id=="none")
    //     {
    //         break;
    //     };

    // };

    // printf("Names Entered by You : \n");
    // for(const auto&names : ID)
    // {
    //     printf("%s\n",names.c_str());
    // };

    return 0;
}